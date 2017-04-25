/* _api.h
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#ifndef DEMO__API_H
#define DEMO__API_H

#include <corto/corto.h>
#include <include/_project.h>
#include <include/_type.h>
#ifdef __cplusplus
extern "C" {
#endif
/* /demo/Car */
DEMO_EXPORT demo_Car _demo_CarCreate(corto_float32 speed);
#define demo_CarCreate(speed) _demo_CarCreate(speed)
#define demo_CarCreate_auto(_id, speed) demo_Car _id = demo_CarCreate(speed); (void)_id
DEMO_EXPORT demo_Car _demo_CarCreateChild(corto_object _parent, corto_string _id, corto_float32 speed);
#define demo_CarCreateChild(_parent, _id, speed) _demo_CarCreateChild(_parent, _id, speed)
#define demo_CarCreateChild_auto(_parent, _id, speed) demo_Car _id = demo_CarCreateChild(_parent, #_id, speed); (void)_id
DEMO_EXPORT corto_int16 _demo_CarUpdate(demo_Car _this, corto_float32 speed);
#define demo_CarUpdate(_this, speed) _demo_CarUpdate(demo_Car(_this), speed)

DEMO_EXPORT demo_Car _demo_CarDeclare(void);
#define demo_CarDeclare() _demo_CarDeclare()
#define demo_CarDeclare_auto(_id) demo_Car _id = demo_CarDeclare(); (void)_id
DEMO_EXPORT demo_Car _demo_CarDeclareChild(corto_object _parent, corto_string _id);
#define demo_CarDeclareChild(_parent, _id) _demo_CarDeclareChild(_parent, _id)
#define demo_CarDeclareChild_auto(_parent, _id) demo_Car _id = demo_CarDeclareChild(_parent, #_id); (void)_id
DEMO_EXPORT corto_int16 _demo_CarDefine(demo_Car _this, corto_float32 speed);
#define demo_CarDefine(_this, speed) _demo_CarDefine(demo_Car(_this), speed)
DEMO_EXPORT demo_Car _demo_CarAssign(demo_Car _this, corto_float32 speed);
#define demo_Car__optional_NotSet NULL
#define demo_Car__optional_Set(speed) demo_CarAssign((demo_Car*)corto_calloc(sizeof(demo_Car)), speed)
#define demo_Car__optional_SetCond(cond, speed) cond ? demo_CarAssign((demo_Car*)corto_calloc(sizeof(demo_Car)), speed) : NULL
#define demo_CarUnset(_this) _this ? corto_deinitp(_this, demo_Car_o) : 0; corto_dealloc(_this); _this = NULL;
#define demo_CarAssign(_this, speed) _demo_CarAssign(_this, speed)
#define demo_CarSet(_this, speed) _this = _this ? _this : (demo_Car*)corto_calloc(sizeof(demo_Car)); _demo_CarAssign(_this, speed)
DEMO_EXPORT corto_string _demo_CarStr(demo_Car value);
#define demo_CarStr(value) _demo_CarStr(demo_Car(value))
DEMO_EXPORT demo_Car demo_CarFromStr(demo_Car value, corto_string str);
DEMO_EXPORT corto_equalityKind _demo_CarCompare(demo_Car dst, demo_Car src);
#define demo_CarCompare(dst, src) _demo_CarCompare(demo_Car(dst), demo_Car(src))

/* /demo/Car/Engine */
DEMO_EXPORT demo_Car_Engine _demo_Car_EngineCreate(corto_float32 rpm, corto_float32 temperature);
#define demo_Car_EngineCreate(rpm, temperature) _demo_Car_EngineCreate(rpm, temperature)
#define demo_Car_EngineCreate_auto(_id, rpm, temperature) demo_Car_Engine _id = demo_Car_EngineCreate(rpm, temperature); (void)_id
DEMO_EXPORT demo_Car_Engine _demo_Car_EngineCreateChild(corto_object _parent, corto_string _id, corto_float32 rpm, corto_float32 temperature);
#define demo_Car_EngineCreateChild(_parent, _id, rpm, temperature) _demo_Car_EngineCreateChild(_parent, _id, rpm, temperature)
#define demo_Car_EngineCreateChild_auto(_parent, _id, rpm, temperature) demo_Car_Engine _id = demo_Car_EngineCreateChild(_parent, #_id, rpm, temperature); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_EngineUpdate(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature);
#define demo_Car_EngineUpdate(_this, rpm, temperature) _demo_Car_EngineUpdate(demo_Car_Engine(_this), rpm, temperature)

DEMO_EXPORT demo_Car_Engine _demo_Car_EngineDeclare(void);
#define demo_Car_EngineDeclare() _demo_Car_EngineDeclare()
#define demo_Car_EngineDeclare_auto(_id) demo_Car_Engine _id = demo_Car_EngineDeclare(); (void)_id
DEMO_EXPORT demo_Car_Engine _demo_Car_EngineDeclareChild(corto_object _parent, corto_string _id);
#define demo_Car_EngineDeclareChild(_parent, _id) _demo_Car_EngineDeclareChild(_parent, _id)
#define demo_Car_EngineDeclareChild_auto(_parent, _id) demo_Car_Engine _id = demo_Car_EngineDeclareChild(_parent, #_id); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_EngineDefine(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature);
#define demo_Car_EngineDefine(_this, rpm, temperature) _demo_Car_EngineDefine(demo_Car_Engine(_this), rpm, temperature)
DEMO_EXPORT demo_Car_Engine _demo_Car_EngineAssign(demo_Car_Engine _this, corto_float32 rpm, corto_float32 temperature);
#define demo_Car_Engine__optional_NotSet NULL
#define demo_Car_Engine__optional_Set(rpm, temperature) demo_Car_EngineAssign((demo_Car_Engine*)corto_calloc(sizeof(demo_Car_Engine)), rpm, temperature)
#define demo_Car_Engine__optional_SetCond(cond, rpm, temperature) cond ? demo_Car_EngineAssign((demo_Car_Engine*)corto_calloc(sizeof(demo_Car_Engine)), rpm, temperature) : NULL
#define demo_Car_EngineUnset(_this) _this ? corto_deinitp(_this, demo_Car_Engine_o) : 0; corto_dealloc(_this); _this = NULL;
#define demo_Car_EngineAssign(_this, rpm, temperature) _demo_Car_EngineAssign(_this, rpm, temperature)
#define demo_Car_EngineSet(_this, rpm, temperature) _this = _this ? _this : (demo_Car_Engine*)corto_calloc(sizeof(demo_Car_Engine)); _demo_Car_EngineAssign(_this, rpm, temperature)
DEMO_EXPORT corto_string _demo_Car_EngineStr(demo_Car_Engine value);
#define demo_Car_EngineStr(value) _demo_Car_EngineStr(demo_Car_Engine(value))
DEMO_EXPORT demo_Car_Engine demo_Car_EngineFromStr(demo_Car_Engine value, corto_string str);
DEMO_EXPORT corto_equalityKind _demo_Car_EngineCompare(demo_Car_Engine dst, demo_Car_Engine src);
#define demo_Car_EngineCompare(dst, src) _demo_Car_EngineCompare(demo_Car_Engine(dst), demo_Car_Engine(src))

/* /demo/Car/Wheel */
DEMO_EXPORT demo_Car_Wheel _demo_Car_WheelCreate(corto_float32 pressure);
#define demo_Car_WheelCreate(pressure) _demo_Car_WheelCreate(pressure)
#define demo_Car_WheelCreate_auto(_id, pressure) demo_Car_Wheel _id = demo_Car_WheelCreate(pressure); (void)_id
DEMO_EXPORT demo_Car_Wheel _demo_Car_WheelCreateChild(corto_object _parent, corto_string _id, corto_float32 pressure);
#define demo_Car_WheelCreateChild(_parent, _id, pressure) _demo_Car_WheelCreateChild(_parent, _id, pressure)
#define demo_Car_WheelCreateChild_auto(_parent, _id, pressure) demo_Car_Wheel _id = demo_Car_WheelCreateChild(_parent, #_id, pressure); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_WheelUpdate(demo_Car_Wheel _this, corto_float32 pressure);
#define demo_Car_WheelUpdate(_this, pressure) _demo_Car_WheelUpdate(demo_Car_Wheel(_this), pressure)

DEMO_EXPORT demo_Car_Wheel _demo_Car_WheelDeclare(void);
#define demo_Car_WheelDeclare() _demo_Car_WheelDeclare()
#define demo_Car_WheelDeclare_auto(_id) demo_Car_Wheel _id = demo_Car_WheelDeclare(); (void)_id
DEMO_EXPORT demo_Car_Wheel _demo_Car_WheelDeclareChild(corto_object _parent, corto_string _id);
#define demo_Car_WheelDeclareChild(_parent, _id) _demo_Car_WheelDeclareChild(_parent, _id)
#define demo_Car_WheelDeclareChild_auto(_parent, _id) demo_Car_Wheel _id = demo_Car_WheelDeclareChild(_parent, #_id); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_WheelDefine(demo_Car_Wheel _this, corto_float32 pressure);
#define demo_Car_WheelDefine(_this, pressure) _demo_Car_WheelDefine(demo_Car_Wheel(_this), pressure)
DEMO_EXPORT demo_Car_Wheel _demo_Car_WheelAssign(demo_Car_Wheel _this, corto_float32 pressure);
#define demo_Car_Wheel__optional_NotSet NULL
#define demo_Car_Wheel__optional_Set(pressure) demo_Car_WheelAssign((demo_Car_Wheel*)corto_calloc(sizeof(demo_Car_Wheel)), pressure)
#define demo_Car_Wheel__optional_SetCond(cond, pressure) cond ? demo_Car_WheelAssign((demo_Car_Wheel*)corto_calloc(sizeof(demo_Car_Wheel)), pressure) : NULL
#define demo_Car_WheelUnset(_this) _this ? corto_deinitp(_this, demo_Car_Wheel_o) : 0; corto_dealloc(_this); _this = NULL;
#define demo_Car_WheelAssign(_this, pressure) _demo_Car_WheelAssign(_this, pressure)
#define demo_Car_WheelSet(_this, pressure) _this = _this ? _this : (demo_Car_Wheel*)corto_calloc(sizeof(demo_Car_Wheel)); _demo_Car_WheelAssign(_this, pressure)
DEMO_EXPORT corto_string _demo_Car_WheelStr(demo_Car_Wheel value);
#define demo_Car_WheelStr(value) _demo_Car_WheelStr(demo_Car_Wheel(value))
DEMO_EXPORT demo_Car_Wheel demo_Car_WheelFromStr(demo_Car_Wheel value, corto_string str);
DEMO_EXPORT corto_equalityKind _demo_Car_WheelCompare(demo_Car_Wheel dst, demo_Car_Wheel src);
#define demo_Car_WheelCompare(dst, src) _demo_Car_WheelCompare(demo_Car_Wheel(dst), demo_Car_Wheel(src))

/* /demo/Car/Wheel/Tire */
DEMO_EXPORT demo_Car_Wheel_Tire _demo_Car_Wheel_TireCreate(corto_string brand);
#define demo_Car_Wheel_TireCreate(brand) _demo_Car_Wheel_TireCreate(brand)
#define demo_Car_Wheel_TireCreate_auto(_id, brand) demo_Car_Wheel_Tire _id = demo_Car_Wheel_TireCreate(brand); (void)_id
DEMO_EXPORT demo_Car_Wheel_Tire _demo_Car_Wheel_TireCreateChild(corto_object _parent, corto_string _id, corto_string brand);
#define demo_Car_Wheel_TireCreateChild(_parent, _id, brand) _demo_Car_Wheel_TireCreateChild(_parent, _id, brand)
#define demo_Car_Wheel_TireCreateChild_auto(_parent, _id, brand) demo_Car_Wheel_Tire _id = demo_Car_Wheel_TireCreateChild(_parent, #_id, brand); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_Wheel_TireUpdate(demo_Car_Wheel_Tire _this, corto_string brand);
#define demo_Car_Wheel_TireUpdate(_this, brand) _demo_Car_Wheel_TireUpdate(demo_Car_Wheel_Tire(_this), brand)

DEMO_EXPORT demo_Car_Wheel_Tire _demo_Car_Wheel_TireDeclare(void);
#define demo_Car_Wheel_TireDeclare() _demo_Car_Wheel_TireDeclare()
#define demo_Car_Wheel_TireDeclare_auto(_id) demo_Car_Wheel_Tire _id = demo_Car_Wheel_TireDeclare(); (void)_id
DEMO_EXPORT demo_Car_Wheel_Tire _demo_Car_Wheel_TireDeclareChild(corto_object _parent, corto_string _id);
#define demo_Car_Wheel_TireDeclareChild(_parent, _id) _demo_Car_Wheel_TireDeclareChild(_parent, _id)
#define demo_Car_Wheel_TireDeclareChild_auto(_parent, _id) demo_Car_Wheel_Tire _id = demo_Car_Wheel_TireDeclareChild(_parent, #_id); (void)_id
DEMO_EXPORT corto_int16 _demo_Car_Wheel_TireDefine(demo_Car_Wheel_Tire _this, corto_string brand);
#define demo_Car_Wheel_TireDefine(_this, brand) _demo_Car_Wheel_TireDefine(demo_Car_Wheel_Tire(_this), brand)
DEMO_EXPORT demo_Car_Wheel_Tire _demo_Car_Wheel_TireAssign(demo_Car_Wheel_Tire _this, corto_string brand);
#define demo_Car_Wheel_Tire__optional_NotSet NULL
#define demo_Car_Wheel_Tire__optional_Set(brand) demo_Car_Wheel_TireAssign((demo_Car_Wheel_Tire*)corto_calloc(sizeof(demo_Car_Wheel_Tire)), brand)
#define demo_Car_Wheel_Tire__optional_SetCond(cond, brand) cond ? demo_Car_Wheel_TireAssign((demo_Car_Wheel_Tire*)corto_calloc(sizeof(demo_Car_Wheel_Tire)), brand) : NULL
#define demo_Car_Wheel_TireUnset(_this) _this ? corto_deinitp(_this, demo_Car_Wheel_Tire_o) : 0; corto_dealloc(_this); _this = NULL;
#define demo_Car_Wheel_TireAssign(_this, brand) _demo_Car_Wheel_TireAssign(_this, brand)
#define demo_Car_Wheel_TireSet(_this, brand) _this = _this ? _this : (demo_Car_Wheel_Tire*)corto_calloc(sizeof(demo_Car_Wheel_Tire)); _demo_Car_Wheel_TireAssign(_this, brand)
DEMO_EXPORT corto_string _demo_Car_Wheel_TireStr(demo_Car_Wheel_Tire value);
#define demo_Car_Wheel_TireStr(value) _demo_Car_Wheel_TireStr(demo_Car_Wheel_Tire(value))
DEMO_EXPORT demo_Car_Wheel_Tire demo_Car_Wheel_TireFromStr(demo_Car_Wheel_Tire value, corto_string str);
DEMO_EXPORT corto_equalityKind _demo_Car_Wheel_TireCompare(demo_Car_Wheel_Tire dst, demo_Car_Wheel_Tire src);
#define demo_Car_Wheel_TireCompare(dst, src) _demo_Car_Wheel_TireCompare(demo_Car_Wheel_Tire(dst), demo_Car_Wheel_Tire(src))

/* /demo/WheelLocation */
DEMO_EXPORT demo_WheelLocation* _demo_WheelLocationCreate(demo_WheelLocation value);
#define demo_WheelLocationCreate(value) _demo_WheelLocationCreate(value)
#define demo_WheelLocationCreate_auto(_id, value) demo_WheelLocation* _id = demo_WheelLocationCreate(value); (void)_id
DEMO_EXPORT demo_WheelLocation* _demo_WheelLocationCreateChild(corto_object _parent, corto_string _id, demo_WheelLocation value);
#define demo_WheelLocationCreateChild(_parent, _id, value) _demo_WheelLocationCreateChild(_parent, _id, value)
#define demo_WheelLocationCreateChild_auto(_parent, _id, value) demo_WheelLocation* _id = demo_WheelLocationCreateChild(_parent, #_id, value); (void)_id
DEMO_EXPORT corto_int16 _demo_WheelLocationUpdate(demo_WheelLocation* _this, demo_WheelLocation value);
#define demo_WheelLocationUpdate(_this, value) _demo_WheelLocationUpdate(demo_WheelLocation(_this), value)

DEMO_EXPORT demo_WheelLocation* _demo_WheelLocationDeclare(void);
#define demo_WheelLocationDeclare() _demo_WheelLocationDeclare()
#define demo_WheelLocationDeclare_auto(_id) demo_WheelLocation* _id = demo_WheelLocationDeclare(); (void)_id
DEMO_EXPORT demo_WheelLocation* _demo_WheelLocationDeclareChild(corto_object _parent, corto_string _id);
#define demo_WheelLocationDeclareChild(_parent, _id) _demo_WheelLocationDeclareChild(_parent, _id)
#define demo_WheelLocationDeclareChild_auto(_parent, _id) demo_WheelLocation* _id = demo_WheelLocationDeclareChild(_parent, #_id); (void)_id
DEMO_EXPORT corto_int16 _demo_WheelLocationDefine(demo_WheelLocation* _this, demo_WheelLocation value);
#define demo_WheelLocationDefine(_this, value) _demo_WheelLocationDefine(demo_WheelLocation(_this), value)
DEMO_EXPORT demo_WheelLocation* _demo_WheelLocationAssign(demo_WheelLocation* _this, demo_WheelLocation value);
#define demo_WheelLocation__optional_NotSet NULL
#define demo_WheelLocation__optional_Set(value) demo_WheelLocationAssign((demo_WheelLocation*)corto_calloc(sizeof(demo_WheelLocation)), value)
#define demo_WheelLocation__optional_SetCond(cond, value) cond ? demo_WheelLocationAssign((demo_WheelLocation*)corto_calloc(sizeof(demo_WheelLocation)), value) : NULL
#define demo_WheelLocationUnset(_this) _this ? corto_deinitp(_this, demo_WheelLocation_o) : 0; corto_dealloc(_this); _this = NULL;
#define demo_WheelLocationAssign(_this, value) _demo_WheelLocationAssign(_this, value)
#define demo_WheelLocationSet(_this, value) _this = _this ? _this : (demo_WheelLocation*)corto_calloc(sizeof(demo_WheelLocation)); _demo_WheelLocationAssign(_this, value)
DEMO_EXPORT corto_string _demo_WheelLocationStr(demo_WheelLocation value);
#define demo_WheelLocationStr(value) _demo_WheelLocationStr(value)
DEMO_EXPORT demo_WheelLocation* demo_WheelLocationFromStr(demo_WheelLocation* value, corto_string str);
DEMO_EXPORT corto_equalityKind demo_WheelLocationCompare(demo_WheelLocation dst, demo_WheelLocation src);

DEMO_EXPORT corto_int16 _demo_WheelLocationInit(demo_WheelLocation* value);
#define demo_WheelLocationInit(value) _demo_WheelLocationInit(value)
DEMO_EXPORT corto_int16 _demo_WheelLocationDeinit(demo_WheelLocation* value);
#define demo_WheelLocationDeinit(value) _demo_WheelLocationDeinit(value)


#ifdef __cplusplus
}
#endif
#endif

