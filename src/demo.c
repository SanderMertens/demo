/* $CORTO_GENERATED
 *
 * demo.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <include/demo.h>

/* $header() */
#include "math.h"

#define CAR_COUNT (100)

float rnd(float max) {
    return ((float)rand() / (float)RAND_MAX) * max;
}
/* $end */

int demoMain(int argc, char *argv[]) {
/* $begin(main) */
    demo_Car instances[CAR_COUNT];
    demo_Car_Engine engine = NULL;
    demo_Car_Wheel fl, fr, bl, br;
    int i;

    /* Load car makes */
    corto_load("makes.cx", 0, NULL);

    /* Load make objects in array */
    corto_object makes = corto_lookupAssert(root_o, "Make", corto_tablescope_o);
    corto_objectseq makeSeq = corto_scopeClaim(makes);

    /* Start admin server */
    admin_serverCreateChild(root_o, "admin", 9090);

    /* Instantiate table with name 'Car' and type 'demo/Car' */
    corto_object topic = corto_tablescopeCreateChild(root_o, "Car", demo_Car_o);

    /* Create new car instances */
    for (i = 0; i < CAR_COUNT; i++) {
        instances[i] = demo_CarDeclareChild(topic, NULL);

        corto_setref(&instances[i]->make, makeSeq.buffer[(int)rnd(makeSeq.length)]);

        /* Lookup singleton Engine object */
        engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);
        engine->fuelLevel = rnd(100);
        engine->oilLevel = rnd(100);

        /* Populate 'Wheel' table */
        fl = corto_declareChild(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
        fr = corto_declareChild(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
        bl = corto_declareChild(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
        br = corto_declareChild(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

        /* Define car */
        corto_define(instances[i]);
    }

    corto_scopeRelease(makeSeq);

    float t = 0;
    while (1) {
        for (i = 0; i < CAR_COUNT; i++) {
            /* Lookup objects in tree of current Car instance */
            engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);
            fl = corto_lookupAssert(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
            fr = corto_lookupAssert(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
            bl = corto_lookupAssert(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
            br = corto_lookupAssert(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

            /* Update members of car */
            demo_Position p = {cos(i + t) + 52.3, sin(i + t) + 4.8};
            demo_CarUpdate(instances[i], 55 + rnd(5), &p, instances[i]->make);

            /* Update engine */
            demo_Car_EngineUpdate(
                engine, 
                3000 + rnd(1000), 
                250 + rnd(25), 
                engine->fuelLevel - rnd(0.1),
                engine->oilLevel - rnd(0.01),
                engine->warning);

            if (engine->oilLevel < 0) {
                engine->oilLevel = 100;
            }
            if (engine->oilLevel < 25) {
                engine->warning = TRUE;
            }
            
            /* Update wheels */
            demo_Car_WheelUpdate(fl, 50 + rnd(2));
            demo_Car_WheelUpdate(fr, 50 + rnd(2));
            demo_Car_WheelUpdate(bl, 50 + rnd(2));
            demo_Car_WheelUpdate(br, 50 + rnd(2));
        }

        corto_sleep(1, 0);
        t += 0.001;
    }

    return 0;
/* $end */
}
