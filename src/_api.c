/* _api.c
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#include <include/_api.h>
#include <include/_load.h>

demo_Car _demo_CarCreate(corto_float32 speed) {
    demo_Car _this;
    _this = demo_Car(corto_declare(demo_Car_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car)_this)->speed = speed;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

demo_Car _demo_CarCreateChild(corto_object _parent, corto_string _id, corto_float32 speed) {
    demo_Car _this;
    _this = demo_Car(corto_declareChild(_parent, _id, demo_Car_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car)_this)->speed = speed;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _demo_CarUpdate(demo_Car _this, corto_float32 speed) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((demo_Car)((demo_Car)CORTO_OFFSET(_this, ((corto_type)demo_Car_o)->size)))->speed = speed;
        } else {
            ((demo_Car)_this)->speed = speed;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

demo_Car _demo_CarDeclare(void) {
    demo_Car _this;
    _this = demo_Car(corto_declare(demo_Car_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

demo_Car _demo_CarDeclareChild(corto_object _parent, corto_string _id) {
    demo_Car _this;
    _this = demo_Car(corto_declareChild(_parent, _id, demo_Car_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _demo_CarDefine(demo_Car _this, corto_float32 speed) {
    CORTO_UNUSED(_this);
    ((demo_Car)_this)->speed = speed;
    return corto_define(_this);
}

demo_Car _demo_CarAssign(demo_Car _this, corto_float32 speed) {
    CORTO_UNUSED(_this);
    ((demo_Car)_this)->speed = speed;
    return _this;
}

corto_string _demo_CarStr(demo_Car value) {
    corto_string result;
    corto_value v;
    v = corto_value_object(value, corto_type(demo_Car_o));
    result = corto_strv(&v, 0);
    return result;
}

demo_Car demo_CarFromStr(demo_Car value, corto_string str) {
    corto_fromStrp(&value, corto_type(demo_Car_o), str);
    return value;
}

corto_equalityKind _demo_CarCompare(demo_Car dst, demo_Car src) {
    return corto_compare(dst, src);
}

demo_Car_Engine _demo_Car_EngineCreate(corto_float32 rpm, corto_float32 temperature) {
    demo_Car_Engine _this;
    _this = demo_Car_Engine(corto_declare(demo_Car_Engine_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car_Engine)_this)->rpm = rpm;
        ((demo_Car_Engine)_this)->temperature = temperature;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

demo_Car_Engine _demo_Car_EngineCreateChild(corto_object _parent, corto_string _id, corto_float32 rpm, corto_float32 temperature) {
    demo_Car_Engine _this;
    _this = demo_Car_Engine(corto_declareChild(_parent, _id, demo_Car_Engine_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car_Engine)_this)->rpm = rpm;
        ((demo_Car_Engine)_this)->temperature = temperature;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _demo_Car_EngineUpdate(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((demo_Car_Engine)((demo_Car_Engine)CORTO_OFFSET(_this, ((corto_type)demo_Car_Engine_o)->size)))->rpm = rpm;
            ((demo_Car_Engine)((demo_Car_Engine)CORTO_OFFSET(_this, ((corto_type)demo_Car_Engine_o)->size)))->temperature = temperature;
        } else {
            ((demo_Car_Engine)_this)->rpm = rpm;
            ((demo_Car_Engine)_this)->temperature = temperature;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

demo_Car_Engine _demo_Car_EngineDeclare(void) {
    demo_Car_Engine _this;
    _this = demo_Car_Engine(corto_declare(demo_Car_Engine_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

demo_Car_Engine _demo_Car_EngineDeclareChild(corto_object _parent, corto_string _id) {
    demo_Car_Engine _this;
    _this = demo_Car_Engine(corto_declareChild(_parent, _id, demo_Car_Engine_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _demo_Car_EngineDefine(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature) {
    CORTO_UNUSED(_this);
    ((demo_Car_Engine)_this)->rpm = rpm;
    ((demo_Car_Engine)_this)->temperature = temperature;
    return corto_define(_this);
}

demo_Car_Engine _demo_Car_EngineAssign(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature) {
    CORTO_UNUSED(_this);
    ((demo_Car_Engine)_this)->rpm = rpm;
    ((demo_Car_Engine)_this)->temperature = temperature;
    return _this;
}

corto_string _demo_Car_EngineStr(demo_Car_Engine value) {
    corto_string result;
    corto_value v;
    v = corto_value_object(value, corto_type(demo_Car_Engine_o));
    result = corto_strv(&v, 0);
    return result;
}

demo_Car_Engine demo_Car_EngineFromStr(demo_Car_Engine value, corto_string str) {
    corto_fromStrp(&value, corto_type(demo_Car_Engine_o), str);
    return value;
}

corto_equalityKind _demo_Car_EngineCompare(demo_Car_Engine dst, demo_Car_Engine src) {
    return corto_compare(dst, src);
}

demo_Car_Wheel _demo_Car_WheelCreate(corto_float32 pressure) {
    demo_Car_Wheel _this;
    _this = demo_Car_Wheel(corto_declare(demo_Car_Wheel_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car_Wheel)_this)->pressure = pressure;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

demo_Car_Wheel _demo_Car_WheelCreateChild(corto_object _parent, corto_string _id, corto_float32 pressure) {
    demo_Car_Wheel _this;
    _this = demo_Car_Wheel(corto_declareChild(_parent, _id, demo_Car_Wheel_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((demo_Car_Wheel)_this)->pressure = pressure;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _demo_Car_WheelUpdate(demo_Car_Wheel _this, corto_float32 pressure) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((demo_Car_Wheel)((demo_Car_Wheel)CORTO_OFFSET(_this, ((corto_type)demo_Car_Wheel_o)->size)))->pressure = pressure;
        } else {
            ((demo_Car_Wheel)_this)->pressure = pressure;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

demo_Car_Wheel _demo_Car_WheelDeclare(void) {
    demo_Car_Wheel _this;
    _this = demo_Car_Wheel(corto_declare(demo_Car_Wheel_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

demo_Car_Wheel _demo_Car_WheelDeclareChild(corto_object _parent, corto_string _id) {
    demo_Car_Wheel _this;
    _this = demo_Car_Wheel(corto_declareChild(_parent, _id, demo_Car_Wheel_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _demo_Car_WheelDefine(demo_Car_Wheel _this, corto_float32 pressure) {
    CORTO_UNUSED(_this);
    ((demo_Car_Wheel)_this)->pressure = pressure;
    return corto_define(_this);
}

demo_Car_Wheel _demo_Car_WheelAssign(demo_Car_Wheel _this, corto_float32 pressure) {
    CORTO_UNUSED(_this);
    ((demo_Car_Wheel)_this)->pressure = pressure;
    return _this;
}

corto_string _demo_Car_WheelStr(demo_Car_Wheel value) {
    corto_string result;
    corto_value v;
    v = corto_value_object(value, corto_type(demo_Car_Wheel_o));
    result = corto_strv(&v, 0);
    return result;
}

demo_Car_Wheel demo_Car_WheelFromStr(demo_Car_Wheel value, corto_string str) {
    corto_fromStrp(&value, corto_type(demo_Car_Wheel_o), str);
    return value;
}

corto_equalityKind _demo_Car_WheelCompare(demo_Car_Wheel dst, demo_Car_Wheel src) {
    return corto_compare(dst, src);
}

demo_Car_Wheel_Tire _demo_Car_Wheel_TireCreate(corto_string brand) {
    demo_Car_Wheel_Tire _this;
    _this = demo_Car_Wheel_Tire(corto_declare(demo_Car_Wheel_Tire_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((demo_Car_Wheel_Tire)_this)->brand, brand);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

demo_Car_Wheel_Tire _demo_Car_Wheel_TireCreateChild(corto_object _parent, corto_string _id, corto_string brand) {
    demo_Car_Wheel_Tire _this;
    _this = demo_Car_Wheel_Tire(corto_declareChild(_parent, _id, demo_Car_Wheel_Tire_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((demo_Car_Wheel_Tire)_this)->brand, brand);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _demo_Car_Wheel_TireUpdate(demo_Car_Wheel_Tire _this, corto_string brand) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setstr(&((demo_Car_Wheel_Tire)((demo_Car_Wheel_Tire)CORTO_OFFSET(_this, ((corto_type)demo_Car_Wheel_Tire_o)->size)))->brand, brand);
        } else {
            corto_setstr(&((demo_Car_Wheel_Tire)_this)->brand, brand);
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

demo_Car_Wheel_Tire _demo_Car_Wheel_TireDeclare(void) {
    demo_Car_Wheel_Tire _this;
    _this = demo_Car_Wheel_Tire(corto_declare(demo_Car_Wheel_Tire_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

demo_Car_Wheel_Tire _demo_Car_Wheel_TireDeclareChild(corto_object _parent, corto_string _id) {
    demo_Car_Wheel_Tire _this;
    _this = demo_Car_Wheel_Tire(corto_declareChild(_parent, _id, demo_Car_Wheel_Tire_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _demo_Car_Wheel_TireDefine(demo_Car_Wheel_Tire _this, corto_string brand) {
    CORTO_UNUSED(_this);
    corto_setstr(&((demo_Car_Wheel_Tire)_this)->brand, brand);
    return corto_define(_this);
}

demo_Car_Wheel_Tire _demo_Car_Wheel_TireAssign(demo_Car_Wheel_Tire _this, corto_string brand) {
    CORTO_UNUSED(_this);
    corto_setstr(&((demo_Car_Wheel_Tire)_this)->brand, brand);
    return _this;
}

corto_string _demo_Car_Wheel_TireStr(demo_Car_Wheel_Tire value) {
    corto_string result;
    corto_value v;
    v = corto_value_object(value, corto_type(demo_Car_Wheel_Tire_o));
    result = corto_strv(&v, 0);
    return result;
}

demo_Car_Wheel_Tire demo_Car_Wheel_TireFromStr(demo_Car_Wheel_Tire value, corto_string str) {
    corto_fromStrp(&value, corto_type(demo_Car_Wheel_Tire_o), str);
    return value;
}

corto_equalityKind _demo_Car_Wheel_TireCompare(demo_Car_Wheel_Tire dst, demo_Car_Wheel_Tire src) {
    return corto_compare(dst, src);
}

demo_WheelLocation* _demo_WheelLocationCreate(demo_WheelLocation value) {
    demo_WheelLocation* _this;
    _this = demo_WheelLocation(corto_declare(demo_WheelLocation_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

demo_WheelLocation* _demo_WheelLocationCreateChild(corto_object _parent, corto_string _id, demo_WheelLocation value) {
    demo_WheelLocation* _this;
    _this = demo_WheelLocation(corto_declareChild(_parent, _id, demo_WheelLocation_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _demo_WheelLocationUpdate(demo_WheelLocation* _this, demo_WheelLocation value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            *((demo_WheelLocation*)CORTO_OFFSET(_this, ((corto_type)demo_WheelLocation_o)->size)) = value;
        } else {
            *_this = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

demo_WheelLocation* _demo_WheelLocationDeclare(void) {
    demo_WheelLocation* _this;
    _this = demo_WheelLocation(corto_declare(demo_WheelLocation_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

demo_WheelLocation* _demo_WheelLocationDeclareChild(corto_object _parent, corto_string _id) {
    demo_WheelLocation* _this;
    _this = demo_WheelLocation(corto_declareChild(_parent, _id, demo_WheelLocation_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _demo_WheelLocationDefine(demo_WheelLocation* _this, demo_WheelLocation value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return corto_define(_this);
}

demo_WheelLocation* _demo_WheelLocationAssign(demo_WheelLocation* _this, demo_WheelLocation value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return _this;
}

corto_string _demo_WheelLocationStr(demo_WheelLocation value) {
    corto_string result;
    corto_value v;
    v = corto_value_value(corto_type(demo_WheelLocation_o), &value);
    result = corto_strv(&v, 0);
    return result;
}

demo_WheelLocation* demo_WheelLocationFromStr(demo_WheelLocation* value, corto_string str) {
    corto_fromStrp(&value, corto_type(demo_WheelLocation_o), str);
    return value;
}

corto_equalityKind demo_WheelLocationCompare(demo_WheelLocation dst, demo_WheelLocation src) {
    return corto_comparep(&dst, demo_WheelLocation_o, &src);
}

corto_int16 _demo_WheelLocationInit(demo_WheelLocation* value) {
    corto_int16 result;
    memset(value, 0, corto_type(demo_WheelLocation_o)->size);
    corto_value v;
    v = corto_value_value(corto_type(demo_WheelLocation_o), value);
    result = corto_initv(&v);
    return result;
}

corto_int16 _demo_WheelLocationDeinit(demo_WheelLocation* value) {
    corto_int16 result;
    corto_value v;
    v = corto_value_value(corto_type(demo_WheelLocation_o), value);
    result = corto_deinitv(&v);
    return result;
}

