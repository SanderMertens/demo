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

float rnd(int max) {
    return ((float)rand() / (float)RAND_MAX) * (float)max;
}
/* $end */

int demoMain(int argc, char *argv[]) {
/* $begin(main) */
    demo_Car instances[CAR_COUNT];
    demo_Car_Engine engine = NULL;
    demo_Car_Wheel fl, fr, bl, br;
    int i;

    /* Start admin server */
    admin_serverCreateChild(root_o, "admin", 9090);

    /* Instantiate table with name 'Car' and type 'tree/Car' (creates topic) */
    corto_object topic = corto_tablescopeCreateChild(root_o, "Car", demo_Car_o);

    /* If key is provided, create new car instance */
    for (i = 0; i < CAR_COUNT; i++) {
        instances[i] = demo_CarDeclareChild(topic, NULL);

        /* Lookup singleton Engine object */
        engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);

        /* Populate 'Wheel' table */
        fl = corto_declareChild(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
        fr = corto_declareChild(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
        bl = corto_declareChild(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
        br = corto_declareChild(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

        /* Define car */
        corto_define(instances[i]);
    }

    while (1) {
        for (i = 0; i < CAR_COUNT; i++) {
            engine = corto_lookupAssert(instances[i], "Engine", demo_Car_Engine_o);
            fl = corto_lookupAssert(instances[i], "Wheel/FrontLeft", demo_Car_Wheel_o);
            fr = corto_lookupAssert(instances[i], "Wheel/FrontRight", demo_Car_Wheel_o);
            bl = corto_lookupAssert(instances[i], "Wheel/BackLeft", demo_Car_Wheel_o);
            br = corto_lookupAssert(instances[i], "Wheel/BackRight", demo_Car_Wheel_o);

            demo_CarUpdate(instances[i], 65 + rnd(5));
            demo_Car_EngineUpdate(engine, 3000 + rnd(1000), 250 + rnd(25));
            demo_Car_WheelUpdate(fl, 50 + rnd(2));
            demo_Car_WheelUpdate(fr, 50 + rnd(2));
            demo_Car_WheelUpdate(bl, 50 + rnd(2));
            demo_Car_WheelUpdate(br, 50 + rnd(2));
        }

        corto_sleep(1, 0);
    }

    return 0;
/* $end */
}
