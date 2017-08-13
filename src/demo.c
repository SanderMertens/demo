/* This is a managed file. Do not delete this comment. */

#include <include/demo.h>



/* This demo creates objects of a 'Car' type which has been defined in demo.cx.
 * These objects are initialized with random values and updated in an infinite
 * loop.
 *
 * The application also starts the corto admin webserver, which uses the corto
 * websockets protocol to synchronize and visualize data in a webclient. After
 * starting the application, open the admin app by going to:
 * http://localhost:9090
 */

#include "math.h"

#define CAR_COUNT (100)

/* Convenience function to generate a random number between 0..max */
float rnd(float max) {
    return ((float)rand() / (float)RAND_MAX) * max;
}

int demoMain(int argc, char *argv[]) {
    demo_Car instances[CAR_COUNT];
    demo_Car_Engine engine = NULL;
    demo_Car_Wheel fl, fr, bl, br;
    int i;

    /* Load car make definitions into the corto store */
    corto_load("makes.cx", 0 /* argc */, NULL /* argv */);

    /* Load make definitions in an array, so we can randomly select a make */
    corto_object makes = corto_lookupAssert(root_o, "Make", corto_tableinstance_o);
    corto_objectseq makeSeq = corto_scopeClaim(makes);

    /* Start the admin webserver on port 9090 */
    admin_serverCreateChild(root_o, "admin", 9090);

    /* Instantiate table with name 'Car' and type 'tree/Car'. A table is a scope
     * in the store where all objects are of the same type. */
    corto_object table = corto_tableinstanceCreateChild(root_o, "Car", demo_Car_o);

    /* Create CAR_COUNT new cars */
    for (i = 0; i < CAR_COUNT; i++) {

        /* Forward declare a car. This does not send a message to the web admin
         * yet. First initialize the value  & instantiate the engine & wheels. */
        instances[i] = demo_CarDeclareChild(table, NULL);

        /* Assign a make to the car */
        corto_ptr_setref(&instances[i]->make, makeSeq.buffer[(int)rnd(makeSeq.length)]);

        /* Lookup Engine leaf (singleton) */
        engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);

        /* Randomize engine values */
        engine->fuelLevel = rnd(100);
        engine->oilLevel = rnd(100);

        /* Populate 'Wheel' table (Wheel was created when we created the Car) */
        fl = corto_declareChild(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
        fr = corto_declareChild(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
        bl = corto_declareChild(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
        br = corto_declareChild(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

        /* Define the car. This also defines the engine and wheels. By defining
         * an object the application indicates an object now has a valid value
         * and the first data-event is sent to corto observers. */
        if (corto_define(instances[i])) {
            /* Something went wrong */
            goto error;
        }
    }

    /* No longer need the makes */
    corto_scopeRelease(makeSeq);

    /* Loop cars, update values */
    float t = 0;
    while (1) {

        /* Update every car instance */
        for (i = 0; i < CAR_COUNT; i++) {

            /* Lookup child objects of car (Engine + wheels) */
            engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);
            fl = corto_lookupAssert(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
            fr = corto_lookupAssert(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
            bl = corto_lookupAssert(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
            br = corto_lookupAssert(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

            /* All cars are driving around in a big circle around Amsterdam */
            demo_Position p = {cos(i + t) + 52.3, sin(i + t) + 4.8};

            /* Send an update for the car instance */
            demo_CarUpdate(instances[i], 55 + rnd(5), &p, instances[i]->make);

            /* Randomize engine values */
            demo_Car_EngineUpdate(
                engine, 
                3000 + rnd(1000), /* rpm */
                250 + rnd(25), /* temperature */
                engine->fuelLevel - rnd(0.1), /* fuel */
                engine->oilLevel - rnd(0.01), /* oil */
                engine->warning); /* warning light */

            /* For next cycle, check if values haven't gone out of bounds. In a
             * 'proper' application the Engine class should take care of this. */
            if (engine->fuelLevel < 0) {
                engine->fuelLevel = 100;
            }
            if (engine->oilLevel < 0) {
                engine->oilLevel = 100;
            }
            if (engine->oilLevel < 25) {
                engine->warning = TRUE;
            } else {
                engine->warning = FALSE;
            }

            /* Add some variance to tire pressure for visual effect */
            demo_Car_WheelUpdate(fl, 50 + rnd(2));
            demo_Car_WheelUpdate(fr, 50 + rnd(2));
            demo_Car_WheelUpdate(bl, 50 + rnd(2));
            demo_Car_WheelUpdate(br, 50 + rnd(2));
        }

        /* Update every second */
        corto_sleep(1, 0);

        /* Progress time */
        t += 0.001;
    }

    return 0;
error:
    corto_error("%s", corto_lasterr());
    return -1;
}

