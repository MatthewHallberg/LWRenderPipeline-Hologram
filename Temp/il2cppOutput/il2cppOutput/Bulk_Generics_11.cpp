#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.IComparer`1<UnityEngine.Experimental.Rendering.ShadowData>
struct IComparer_1_t251850891;
// System.Collections.Generic.IComparer`1<UnityEngine.Experimental.Rendering.ShadowPayload>
struct IComparer_1_t1301973915;
// System.Collections.Generic.IComparer`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>
struct IComparer_1_t247253265;
// System.Collections.Generic.IComparer`1<UnityEngine.Rendering.RenderTargetIdentifier>
struct IComparer_1_t3333449979;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1234605051;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t3446625415;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t971442654;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t1100603065;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_t620998193;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t2077994506;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_t176726424;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t1742810365;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t1339525838;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride>
struct ReadOnlyCollection_1_t4273630488;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t1761491126;
// System.Func`2<System.Reflection.FieldInfo,System.Int32>
struct Func_2_t320181618;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IDisposable
struct IDisposable_t3640265483;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t712889340;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t842049751;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_t362444879;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t1819441192;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t4213140406;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1484257051;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1080972524;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Experimental.Rendering.ShadowData[]
struct ShadowDataU5BU5D_t3732338029;
// UnityEngine.Experimental.Rendering.ShadowPayload[]
struct ShadowPayloadU5BU5D_t2280176669;
// UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest[]
struct ShadowRequestU5BU5D_t1481899023;
// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowData>
struct Cleanup_t2282938620;
// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowPayload>
struct Cleanup_t3333061644;
// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>
struct Cleanup_t2278340994;
// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Rendering.RenderTargetIdentifier>
struct Cleanup_t1069570412;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rendering.PostProcessing.BoolParameter
struct BoolParameter_t2299103272;
// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct ParameterOverride_t3061054201;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct ParameterOverride_1_t2372640272;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct ParameterOverride_1_t931330764;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct ParameterOverride_1_t1060491175;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct ParameterOverride_1_t3672619081;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct ParameterOverride_1_t536071335;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>
struct ParameterOverride_1_t3341396129;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>
struct ParameterOverride_1_t1230029910;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>
struct ParameterOverride_1_t1295786901;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>
struct ParameterOverride_1_t1839186205;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>
struct ParameterOverride_1_t3916823721;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>
struct ParameterOverride_1_t381536667;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>
struct ParameterOverride_1_t1070587220;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>
struct ParameterOverride_1_t1025085192;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>
struct ParameterOverride_1_t3368882051;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct ParameterOverride_1_t136614534;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct ParameterOverride_1_t1702698475;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct ParameterOverride_1_t1299413948;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct PostProcessEffectRenderer_t1060237;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct PostProcessEffectRenderer_1_t1384686169;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_t1672565614;
// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>
struct U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t2742279485;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t234526808;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_t1121741130;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t1856710240;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ec__Iterator0_t3860393442;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ec__Iterator0_t30141770;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t4122643707;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t4251804118;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_t3772199246;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t934228263;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t3327927477;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t599044122;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_t195759595;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2779729376;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t3446625415_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1132744560;
extern String_t* _stringLiteral1214352242;
extern String_t* _stringLiteral3926843441;
extern String_t* _stringLiteral46997234;
extern const RuntimeMethod* IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var;
extern const RuntimeMethod* IndexedSet_1_Insert_m1432638049_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m2689976562_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m1216095304_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m3777057655_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m1024950313_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetAllSceneObjectsU3Ec__Iterator0_1_Reset_m4050304606_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var;
extern const RuntimeMethod* VectorArray_1_Swap_m2415719283_RuntimeMethod_var;
extern const RuntimeMethod* VectorArray_1_Swap_m2589726812_RuntimeMethod_var;
extern const RuntimeMethod* VectorArray_1_Swap_m2590245426_RuntimeMethod_var;
extern const RuntimeMethod* VectorArray_1_Swap_m429026578_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId;
extern const uint32_t IndexedSet_1_Insert_m1432638049_MetadataUsageId;
extern const uint32_t ObjectPool_1_Release_m3263354170_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_m1055628540_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_m2247690200_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ec__Iterator0_1_Dispose_m2478248750_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ec__Iterator0_1_MoveNext_m2119774919_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ec__Iterator0_1_Reset_m4050304606_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId;
extern const uint32_t VectorArray_1_Swap_m2415719283_MetadataUsageId;
extern const uint32_t VectorArray_1_Swap_m2589726812_MetadataUsageId;
extern const uint32_t VectorArray_1_Swap_m2590245426_MetadataUsageId;
extern const uint32_t VectorArray_1_Swap_m429026578_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ShadowDataU5BU5D_t3732338029;
struct ShadowPayloadU5BU5D_t2280176669;
struct ShadowRequestU5BU5D_t1481899023;
struct GameObjectU5BU5D_t3328599146;
struct RenderTargetIdentifierU5BU5D_t2742279485;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
#ifndef EQUALITYCOMPARER_1_T1462325044_H
#define EQUALITYCOMPARER_1_T1462325044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowData>
struct  EqualityComparer_1_t1462325044  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1462325044_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1462325044 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1462325044_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1462325044 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1462325044 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1462325044 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1462325044_H
#ifndef EQUALITYCOMPARER_1_T2512448068_H
#define EQUALITYCOMPARER_1_T2512448068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowPayload>
struct  EqualityComparer_1_t2512448068  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t2512448068_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t2512448068 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t2512448068_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t2512448068 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t2512448068 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t2512448068 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T2512448068_H
#ifndef EQUALITYCOMPARER_1_T1457727418_H
#define EQUALITYCOMPARER_1_T1457727418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>
struct  EqualityComparer_1_t1457727418  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1457727418_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1457727418 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1457727418_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1457727418 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1457727418 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1457727418 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1457727418_H
#ifndef EQUALITYCOMPARER_1_T248956836_H
#define EQUALITYCOMPARER_1_T248956836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Rendering.RenderTargetIdentifier>
struct  EqualityComparer_1_t248956836  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t248956836_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t248956836 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t248956836_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t248956836 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t248956836 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t248956836 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T248956836_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T4072576034_H
#define LIST_1_T4072576034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t4072576034  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t3850468773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____items_1)); }
	inline Color32U5BU5D_t3850468773* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t3850468773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t3850468773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4072576034_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Color32U5BU5D_t3850468773* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4072576034_StaticFields, ___EmptyArray_4)); }
	inline Color32U5BU5D_t3850468773* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Color32U5BU5D_t3850468773** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Color32U5BU5D_t3850468773* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4072576034_H
#ifndef LIST_1_T1234605051_H
#define LIST_1_T1234605051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t1234605051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1981460040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____items_1)); }
	inline UIVertexU5BU5D_t1981460040* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1981460040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1981460040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1234605051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1981460040* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1234605051_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1981460040* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1981460040* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1234605051_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t934056436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t934056436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t934056436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t934056436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef QUEUE_1_T3446625415_H
#define QUEUE_1_T3446625415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct  Queue_1_t3446625415  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t807237628* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____array_0)); }
	inline TransformU5BU5D_t807237628* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t807237628** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t807237628* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3446625415_H
#ifndef STACK_1_T3923495619_H
#define STACK_1_T3923495619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t3923495619  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3923495619_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PARAMETEROVERRIDE_T3061054201_H
#define PARAMETEROVERRIDE_T3061054201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct  ParameterOverride_t3061054201  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.ParameterOverride::overrideState
	bool ___overrideState_0;

public:
	inline static int32_t get_offset_of_overrideState_0() { return static_cast<int32_t>(offsetof(ParameterOverride_t3061054201, ___overrideState_0)); }
	inline bool get_overrideState_0() const { return ___overrideState_0; }
	inline bool* get_address_of_overrideState_0() { return &___overrideState_0; }
	inline void set_overrideState_0(bool value)
	{
		___overrideState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_T3061054201_H
#ifndef POSTPROCESSEFFECTRENDERER_T1060237_H
#define POSTPROCESSEFFECTRENDERER_T1060237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct  PostProcessEffectRenderer_t1060237  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::m_ResetHistory
	bool ___m_ResetHistory_0;

public:
	inline static int32_t get_offset_of_m_ResetHistory_0() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_t1060237, ___m_ResetHistory_0)); }
	inline bool get_m_ResetHistory_0() const { return ___m_ResetHistory_0; }
	inline bool* get_address_of_m_ResetHistory_0() { return &___m_ResetHistory_0; }
	inline void set_m_ResetHistory_0(bool value)
	{
		___m_ResetHistory_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_T1060237_H
#ifndef U3CGETALLSCENEOBJECTSU3EC__ITERATOR0_1_T537702530_H
#define U3CGETALLSCENEOBJECTSU3EC__ITERATOR0_1_T537702530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>
struct  U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<queue>__0
	Queue_1_t3446625415 * ___U3CqueueU3E__0_0;
	// UnityEngine.GameObject[] UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<roots>__0
	GameObjectU5BU5D_t3328599146* ___U3CrootsU3E__0_1;
	// UnityEngine.GameObject[] UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$locvar0
	GameObjectU5BU5D_t3328599146* ___U24locvar0_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$locvar1
	int32_t ___U24locvar1_3;
	// UnityEngine.GameObject UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<root>__1
	GameObject_t1113636619 * ___U3CrootU3E__1_4;
	// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<comp>__2
	RuntimeObject * ___U3CcompU3E__2_5;
	// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$locvar2
	RuntimeObject* ___U24locvar2_6;
	// UnityEngine.Transform UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<child>__3
	Transform_t3600365921 * ___U3CchildU3E__3_7;
	// System.IDisposable UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$locvar3
	RuntimeObject* ___U24locvar3_8;
	// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::<comp>__4
	RuntimeObject * ___U3CcompU3E__4_9;
	// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$disposing
	bool ___U24disposing_11;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_U3CqueueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CqueueU3E__0_0)); }
	inline Queue_1_t3446625415 * get_U3CqueueU3E__0_0() const { return ___U3CqueueU3E__0_0; }
	inline Queue_1_t3446625415 ** get_address_of_U3CqueueU3E__0_0() { return &___U3CqueueU3E__0_0; }
	inline void set_U3CqueueU3E__0_0(Queue_1_t3446625415 * value)
	{
		___U3CqueueU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueueU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CrootsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CrootsU3E__0_1)); }
	inline GameObjectU5BU5D_t3328599146* get_U3CrootsU3E__0_1() const { return ___U3CrootsU3E__0_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_U3CrootsU3E__0_1() { return &___U3CrootsU3E__0_1; }
	inline void set_U3CrootsU3E__0_1(GameObjectU5BU5D_t3328599146* value)
	{
		___U3CrootsU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrootsU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24locvar0_2)); }
	inline GameObjectU5BU5D_t3328599146* get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(GameObjectU5BU5D_t3328599146* value)
	{
		___U24locvar0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_2), value);
	}

	inline static int32_t get_offset_of_U24locvar1_3() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24locvar1_3)); }
	inline int32_t get_U24locvar1_3() const { return ___U24locvar1_3; }
	inline int32_t* get_address_of_U24locvar1_3() { return &___U24locvar1_3; }
	inline void set_U24locvar1_3(int32_t value)
	{
		___U24locvar1_3 = value;
	}

	inline static int32_t get_offset_of_U3CrootU3E__1_4() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CrootU3E__1_4)); }
	inline GameObject_t1113636619 * get_U3CrootU3E__1_4() const { return ___U3CrootU3E__1_4; }
	inline GameObject_t1113636619 ** get_address_of_U3CrootU3E__1_4() { return &___U3CrootU3E__1_4; }
	inline void set_U3CrootU3E__1_4(GameObject_t1113636619 * value)
	{
		___U3CrootU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrootU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U3CcompU3E__2_5() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CcompU3E__2_5)); }
	inline RuntimeObject * get_U3CcompU3E__2_5() const { return ___U3CcompU3E__2_5; }
	inline RuntimeObject ** get_address_of_U3CcompU3E__2_5() { return &___U3CcompU3E__2_5; }
	inline void set_U3CcompU3E__2_5(RuntimeObject * value)
	{
		___U3CcompU3E__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcompU3E__2_5), value);
	}

	inline static int32_t get_offset_of_U24locvar2_6() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24locvar2_6)); }
	inline RuntimeObject* get_U24locvar2_6() const { return ___U24locvar2_6; }
	inline RuntimeObject** get_address_of_U24locvar2_6() { return &___U24locvar2_6; }
	inline void set_U24locvar2_6(RuntimeObject* value)
	{
		___U24locvar2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_6), value);
	}

	inline static int32_t get_offset_of_U3CchildU3E__3_7() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CchildU3E__3_7)); }
	inline Transform_t3600365921 * get_U3CchildU3E__3_7() const { return ___U3CchildU3E__3_7; }
	inline Transform_t3600365921 ** get_address_of_U3CchildU3E__3_7() { return &___U3CchildU3E__3_7; }
	inline void set_U3CchildU3E__3_7(Transform_t3600365921 * value)
	{
		___U3CchildU3E__3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CchildU3E__3_7), value);
	}

	inline static int32_t get_offset_of_U24locvar3_8() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24locvar3_8)); }
	inline RuntimeObject* get_U24locvar3_8() const { return ___U24locvar3_8; }
	inline RuntimeObject** get_address_of_U24locvar3_8() { return &___U24locvar3_8; }
	inline void set_U24locvar3_8(RuntimeObject* value)
	{
		___U24locvar3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar3_8), value);
	}

	inline static int32_t get_offset_of_U3CcompU3E__4_9() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U3CcompU3E__4_9)); }
	inline RuntimeObject * get_U3CcompU3E__4_9() const { return ___U3CcompU3E__4_9; }
	inline RuntimeObject ** get_address_of_U3CcompU3E__4_9() { return &___U3CcompU3E__4_9; }
	inline void set_U3CcompU3E__4_9(RuntimeObject * value)
	{
		___U3CcompU3E__4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcompU3E__4_9), value);
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETALLSCENEOBJECTSU3EC__ITERATOR0_1_T537702530_H
#ifndef INDEXEDSET_1_T234526808_H
#define INDEXEDSET_1_T234526808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t234526808  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t257213610 * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t3384741 * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_List_0)); }
	inline List_1_t257213610 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t257213610 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t257213610 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_0), value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_Dictionary_1)); }
	inline Dictionary_2_t3384741 * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t3384741 ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t3384741 * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEDSET_1_T234526808_H
#ifndef TWEENRUNNER_1_T3055525458_H
#define TWEENRUNNER_1_T3055525458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t3055525458  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3055525458_H
#ifndef TWEENRUNNER_1_T3520241082_H
#define TWEENRUNNER_1_T3520241082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_t3520241082  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3520241082_H
#ifndef LISTPOOL_1_T3980534944_H
#define LISTPOOL_1_T3980534944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3980534944  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3980534944_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4122643707 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t712889340 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4122643707 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4122643707 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4122643707 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t712889340 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t712889340 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t712889340 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3980534944_H
#ifndef LISTPOOL_1_T4109695355_H
#define LISTPOOL_1_T4109695355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t4109695355  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t4109695355_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4251804118 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t842049751 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4251804118 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4251804118 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4251804118 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t842049751 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t842049751 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t842049751 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T4109695355_H
#ifndef LISTPOOL_1_T3630090483_H
#define LISTPOOL_1_T3630090483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_t3630090483  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3630090483_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3772199246 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t362444879 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3772199246 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3772199246 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3772199246 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t362444879 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t362444879 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t362444879 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3630090483_H
#ifndef LISTPOOL_1_T792119500_H
#define LISTPOOL_1_T792119500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_t792119500  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t792119500_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t934228263 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1819441192 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t934228263 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t934228263 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t934228263 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1819441192 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1819441192 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T792119500_H
#ifndef LISTPOOL_1_T3185818714_H
#define LISTPOOL_1_T3185818714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_t3185818714  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3185818714_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3327927477 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t4213140406 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3327927477 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3327927477 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3327927477 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t4213140406 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t4213140406 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3185818714_H
#ifndef LISTPOOL_1_T456935359_H
#define LISTPOOL_1_T456935359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t456935359  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t456935359_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t599044122 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1484257051 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t599044122 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t599044122 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t599044122 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1484257051 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1484257051 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T456935359_H
#ifndef LISTPOOL_1_T53650832_H
#define LISTPOOL_1_T53650832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_t53650832  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t53650832_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t195759595 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1080972524 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t195759595 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t195759595 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t195759595 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1080972524 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1080972524 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T53650832_H
#ifndef OBJECTPOOL_1_T4122643707_H
#define OBJECTPOOL_1_T4122643707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t4122643707  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t971442654 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t712889340 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t712889340 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_Stack_0)); }
	inline Stack_1_t971442654 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t971442654 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t971442654 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4122643707_H
#ifndef OBJECTPOOL_1_T4251804118_H
#define OBJECTPOOL_1_T4251804118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_t4251804118  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1100603065 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t842049751 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t842049751 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_Stack_0)); }
	inline Stack_1_t1100603065 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1100603065 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1100603065 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4251804118_H
#ifndef OBJECTPOOL_1_T3772199246_H
#define OBJECTPOOL_1_T3772199246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_t3772199246  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t620998193 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t362444879 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t362444879 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_Stack_0)); }
	inline Stack_1_t620998193 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t620998193 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t620998193 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3772199246_H
#ifndef OBJECTPOOL_1_T934228263_H
#define OBJECTPOOL_1_T934228263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t934228263  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t2077994506 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1819441192 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1819441192 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_Stack_0)); }
	inline Stack_1_t2077994506 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t2077994506 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t2077994506 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T934228263_H
#ifndef OBJECTPOOL_1_T3327927477_H
#define OBJECTPOOL_1_T3327927477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t3327927477  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t176726424 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t4213140406 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t4213140406 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_Stack_0)); }
	inline Stack_1_t176726424 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t176726424 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t176726424 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3327927477_H
#ifndef OBJECTPOOL_1_T599044122_H
#define OBJECTPOOL_1_T599044122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t599044122  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1742810365 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1484257051 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1484257051 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_Stack_0)); }
	inline Stack_1_t1742810365 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1742810365 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1742810365 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T599044122_H
#ifndef OBJECTPOOL_1_T195759595_H
#define OBJECTPOOL_1_T195759595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_t195759595  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1339525838 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1080972524 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1080972524 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_Stack_0)); }
	inline Stack_1_t1339525838 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1339525838 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1339525838 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T195759595_H
#ifndef OBJECTPOOL_1_T2779729376_H
#define OBJECTPOOL_1_T2779729376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t2779729376  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3923495619 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3664942305 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3664942305 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_Stack_0)); }
	inline Stack_1_t3923495619 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3923495619 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3923495619 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T2779729376_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SHADOWPAYLOAD_T47708436_H
#define SHADOWPAYLOAD_T47708436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowPayload
struct  ShadowPayload_t47708436 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowPayload::p0
	int32_t ___p0_0;
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowPayload::p1
	int32_t ___p1_1;
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowPayload::p2
	int32_t ___p2_2;
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowPayload::p3
	int32_t ___p3_3;

public:
	inline static int32_t get_offset_of_p0_0() { return static_cast<int32_t>(offsetof(ShadowPayload_t47708436, ___p0_0)); }
	inline int32_t get_p0_0() const { return ___p0_0; }
	inline int32_t* get_address_of_p0_0() { return &___p0_0; }
	inline void set_p0_0(int32_t value)
	{
		___p0_0 = value;
	}

	inline static int32_t get_offset_of_p1_1() { return static_cast<int32_t>(offsetof(ShadowPayload_t47708436, ___p1_1)); }
	inline int32_t get_p1_1() const { return ___p1_1; }
	inline int32_t* get_address_of_p1_1() { return &___p1_1; }
	inline void set_p1_1(int32_t value)
	{
		___p1_1 = value;
	}

	inline static int32_t get_offset_of_p2_2() { return static_cast<int32_t>(offsetof(ShadowPayload_t47708436, ___p2_2)); }
	inline int32_t get_p2_2() const { return ___p2_2; }
	inline int32_t* get_address_of_p2_2() { return &___p2_2; }
	inline void set_p2_2(int32_t value)
	{
		___p2_2 = value;
	}

	inline static int32_t get_offset_of_p3_3() { return static_cast<int32_t>(offsetof(ShadowPayload_t47708436, ___p3_3)); }
	inline int32_t get_p3_3() const { return ___p3_3; }
	inline int32_t* get_address_of_p3_3() { return &___p3_3; }
	inline void set_p3_3(int32_t value)
	{
		___p3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWPAYLOAD_T47708436_H
#ifndef SHADOWREQUEST_T3287955082_H
#define SHADOWREQUEST_T3287955082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest
struct  ShadowRequest_t3287955082 
{
public:
	// System.UInt32 UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest::m_MaskIndex
	uint32_t ___m_MaskIndex_5;
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest::m_ShadowTypeAndAlgorithm
	int32_t ___m_ShadowTypeAndAlgorithm_6;
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest::<instanceId>k__BackingField
	int32_t ___U3CinstanceIdU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_MaskIndex_5() { return static_cast<int32_t>(offsetof(ShadowRequest_t3287955082, ___m_MaskIndex_5)); }
	inline uint32_t get_m_MaskIndex_5() const { return ___m_MaskIndex_5; }
	inline uint32_t* get_address_of_m_MaskIndex_5() { return &___m_MaskIndex_5; }
	inline void set_m_MaskIndex_5(uint32_t value)
	{
		___m_MaskIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ShadowTypeAndAlgorithm_6() { return static_cast<int32_t>(offsetof(ShadowRequest_t3287955082, ___m_ShadowTypeAndAlgorithm_6)); }
	inline int32_t get_m_ShadowTypeAndAlgorithm_6() const { return ___m_ShadowTypeAndAlgorithm_6; }
	inline int32_t* get_address_of_m_ShadowTypeAndAlgorithm_6() { return &___m_ShadowTypeAndAlgorithm_6; }
	inline void set_m_ShadowTypeAndAlgorithm_6(int32_t value)
	{
		___m_ShadowTypeAndAlgorithm_6 = value;
	}

	inline static int32_t get_offset_of_U3CinstanceIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ShadowRequest_t3287955082, ___U3CinstanceIdU3Ek__BackingField_7)); }
	inline int32_t get_U3CinstanceIdU3Ek__BackingField_7() const { return ___U3CinstanceIdU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CinstanceIdU3Ek__BackingField_7() { return &___U3CinstanceIdU3Ek__BackingField_7; }
	inline void set_U3CinstanceIdU3Ek__BackingField_7(int32_t value)
	{
		___U3CinstanceIdU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWREQUEST_T3287955082_H
#ifndef VECTORARRAY_1_T3180793538_H
#define VECTORARRAY_1_T3180793538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>
struct  VectorArray_1_t3180793538 
{
public:
	// T[] UnityEngine.Experimental.VectorArray`1::m_array
	ShadowDataU5BU5D_t3732338029* ___m_array_1;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_offset
	uint32_t ___m_offset_2;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_count
	uint32_t ___m_count_3;
	// System.Boolean UnityEngine.Experimental.VectorArray`1::m_clearToDefault
	bool ___m_clearToDefault_4;

public:
	inline static int32_t get_offset_of_m_array_1() { return static_cast<int32_t>(offsetof(VectorArray_1_t3180793538, ___m_array_1)); }
	inline ShadowDataU5BU5D_t3732338029* get_m_array_1() const { return ___m_array_1; }
	inline ShadowDataU5BU5D_t3732338029** get_address_of_m_array_1() { return &___m_array_1; }
	inline void set_m_array_1(ShadowDataU5BU5D_t3732338029* value)
	{
		___m_array_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_1), value);
	}

	inline static int32_t get_offset_of_m_offset_2() { return static_cast<int32_t>(offsetof(VectorArray_1_t3180793538, ___m_offset_2)); }
	inline uint32_t get_m_offset_2() const { return ___m_offset_2; }
	inline uint32_t* get_address_of_m_offset_2() { return &___m_offset_2; }
	inline void set_m_offset_2(uint32_t value)
	{
		___m_offset_2 = value;
	}

	inline static int32_t get_offset_of_m_count_3() { return static_cast<int32_t>(offsetof(VectorArray_1_t3180793538, ___m_count_3)); }
	inline uint32_t get_m_count_3() const { return ___m_count_3; }
	inline uint32_t* get_address_of_m_count_3() { return &___m_count_3; }
	inline void set_m_count_3(uint32_t value)
	{
		___m_count_3 = value;
	}

	inline static int32_t get_offset_of_m_clearToDefault_4() { return static_cast<int32_t>(offsetof(VectorArray_1_t3180793538, ___m_clearToDefault_4)); }
	inline bool get_m_clearToDefault_4() const { return ___m_clearToDefault_4; }
	inline bool* get_address_of_m_clearToDefault_4() { return &___m_clearToDefault_4; }
	inline void set_m_clearToDefault_4(bool value)
	{
		___m_clearToDefault_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORARRAY_1_T3180793538_H
#ifndef VECTORARRAY_1_T4230916562_H
#define VECTORARRAY_1_T4230916562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>
struct  VectorArray_1_t4230916562 
{
public:
	// T[] UnityEngine.Experimental.VectorArray`1::m_array
	ShadowPayloadU5BU5D_t2280176669* ___m_array_1;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_offset
	uint32_t ___m_offset_2;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_count
	uint32_t ___m_count_3;
	// System.Boolean UnityEngine.Experimental.VectorArray`1::m_clearToDefault
	bool ___m_clearToDefault_4;

public:
	inline static int32_t get_offset_of_m_array_1() { return static_cast<int32_t>(offsetof(VectorArray_1_t4230916562, ___m_array_1)); }
	inline ShadowPayloadU5BU5D_t2280176669* get_m_array_1() const { return ___m_array_1; }
	inline ShadowPayloadU5BU5D_t2280176669** get_address_of_m_array_1() { return &___m_array_1; }
	inline void set_m_array_1(ShadowPayloadU5BU5D_t2280176669* value)
	{
		___m_array_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_1), value);
	}

	inline static int32_t get_offset_of_m_offset_2() { return static_cast<int32_t>(offsetof(VectorArray_1_t4230916562, ___m_offset_2)); }
	inline uint32_t get_m_offset_2() const { return ___m_offset_2; }
	inline uint32_t* get_address_of_m_offset_2() { return &___m_offset_2; }
	inline void set_m_offset_2(uint32_t value)
	{
		___m_offset_2 = value;
	}

	inline static int32_t get_offset_of_m_count_3() { return static_cast<int32_t>(offsetof(VectorArray_1_t4230916562, ___m_count_3)); }
	inline uint32_t get_m_count_3() const { return ___m_count_3; }
	inline uint32_t* get_address_of_m_count_3() { return &___m_count_3; }
	inline void set_m_count_3(uint32_t value)
	{
		___m_count_3 = value;
	}

	inline static int32_t get_offset_of_m_clearToDefault_4() { return static_cast<int32_t>(offsetof(VectorArray_1_t4230916562, ___m_clearToDefault_4)); }
	inline bool get_m_clearToDefault_4() const { return ___m_clearToDefault_4; }
	inline bool* get_address_of_m_clearToDefault_4() { return &___m_clearToDefault_4; }
	inline void set_m_clearToDefault_4(bool value)
	{
		___m_clearToDefault_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORARRAY_1_T4230916562_H
#ifndef VECTORARRAY_1_T3176195912_H
#define VECTORARRAY_1_T3176195912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>
struct  VectorArray_1_t3176195912 
{
public:
	// T[] UnityEngine.Experimental.VectorArray`1::m_array
	ShadowRequestU5BU5D_t1481899023* ___m_array_1;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_offset
	uint32_t ___m_offset_2;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_count
	uint32_t ___m_count_3;
	// System.Boolean UnityEngine.Experimental.VectorArray`1::m_clearToDefault
	bool ___m_clearToDefault_4;

public:
	inline static int32_t get_offset_of_m_array_1() { return static_cast<int32_t>(offsetof(VectorArray_1_t3176195912, ___m_array_1)); }
	inline ShadowRequestU5BU5D_t1481899023* get_m_array_1() const { return ___m_array_1; }
	inline ShadowRequestU5BU5D_t1481899023** get_address_of_m_array_1() { return &___m_array_1; }
	inline void set_m_array_1(ShadowRequestU5BU5D_t1481899023* value)
	{
		___m_array_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_1), value);
	}

	inline static int32_t get_offset_of_m_offset_2() { return static_cast<int32_t>(offsetof(VectorArray_1_t3176195912, ___m_offset_2)); }
	inline uint32_t get_m_offset_2() const { return ___m_offset_2; }
	inline uint32_t* get_address_of_m_offset_2() { return &___m_offset_2; }
	inline void set_m_offset_2(uint32_t value)
	{
		___m_offset_2 = value;
	}

	inline static int32_t get_offset_of_m_count_3() { return static_cast<int32_t>(offsetof(VectorArray_1_t3176195912, ___m_count_3)); }
	inline uint32_t get_m_count_3() const { return ___m_count_3; }
	inline uint32_t* get_address_of_m_count_3() { return &___m_count_3; }
	inline void set_m_count_3(uint32_t value)
	{
		___m_count_3 = value;
	}

	inline static int32_t get_offset_of_m_clearToDefault_4() { return static_cast<int32_t>(offsetof(VectorArray_1_t3176195912, ___m_clearToDefault_4)); }
	inline bool get_m_clearToDefault_4() const { return ___m_clearToDefault_4; }
	inline bool* get_address_of_m_clearToDefault_4() { return &___m_clearToDefault_4; }
	inline void set_m_clearToDefault_4(bool value)
	{
		___m_clearToDefault_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORARRAY_1_T3176195912_H
#ifndef VECTORARRAY_1_T1967425330_H
#define VECTORARRAY_1_T1967425330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>
struct  VectorArray_1_t1967425330 
{
public:
	// T[] UnityEngine.Experimental.VectorArray`1::m_array
	RenderTargetIdentifierU5BU5D_t2742279485* ___m_array_1;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_offset
	uint32_t ___m_offset_2;
	// System.UInt32 UnityEngine.Experimental.VectorArray`1::m_count
	uint32_t ___m_count_3;
	// System.Boolean UnityEngine.Experimental.VectorArray`1::m_clearToDefault
	bool ___m_clearToDefault_4;

public:
	inline static int32_t get_offset_of_m_array_1() { return static_cast<int32_t>(offsetof(VectorArray_1_t1967425330, ___m_array_1)); }
	inline RenderTargetIdentifierU5BU5D_t2742279485* get_m_array_1() const { return ___m_array_1; }
	inline RenderTargetIdentifierU5BU5D_t2742279485** get_address_of_m_array_1() { return &___m_array_1; }
	inline void set_m_array_1(RenderTargetIdentifierU5BU5D_t2742279485* value)
	{
		___m_array_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_1), value);
	}

	inline static int32_t get_offset_of_m_offset_2() { return static_cast<int32_t>(offsetof(VectorArray_1_t1967425330, ___m_offset_2)); }
	inline uint32_t get_m_offset_2() const { return ___m_offset_2; }
	inline uint32_t* get_address_of_m_offset_2() { return &___m_offset_2; }
	inline void set_m_offset_2(uint32_t value)
	{
		___m_offset_2 = value;
	}

	inline static int32_t get_offset_of_m_count_3() { return static_cast<int32_t>(offsetof(VectorArray_1_t1967425330, ___m_count_3)); }
	inline uint32_t get_m_count_3() const { return ___m_count_3; }
	inline uint32_t* get_address_of_m_count_3() { return &___m_count_3; }
	inline void set_m_count_3(uint32_t value)
	{
		___m_count_3 = value;
	}

	inline static int32_t get_offset_of_m_clearToDefault_4() { return static_cast<int32_t>(offsetof(VectorArray_1_t1967425330, ___m_clearToDefault_4)); }
	inline bool get_m_clearToDefault_4() const { return ___m_clearToDefault_4; }
	inline bool* get_address_of_m_clearToDefault_4() { return &___m_clearToDefault_4; }
	inline void set_m_clearToDefault_4(bool value)
	{
		___m_clearToDefault_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORARRAY_1_T1967425330_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef PARAMETEROVERRIDE_1_T2372640272_H
#define PARAMETEROVERRIDE_1_T2372640272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct  ParameterOverride_1_t2372640272  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t2372640272, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T2372640272_H
#ifndef PARAMETEROVERRIDE_1_T931330764_H
#define PARAMETEROVERRIDE_1_T931330764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct  ParameterOverride_1_t931330764  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t931330764, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T931330764_H
#ifndef PARAMETEROVERRIDE_1_T1060491175_H
#define PARAMETEROVERRIDE_1_T1060491175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct  ParameterOverride_1_t1060491175  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1060491175, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1060491175_H
#ifndef PARAMETEROVERRIDE_1_T3672619081_H
#define PARAMETEROVERRIDE_1_T3672619081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct  ParameterOverride_1_t3672619081  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t3672619081, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T3672619081_H
#ifndef POSTPROCESSEFFECTRENDERER_1_T1384686169_H
#define POSTPROCESSEFFECTRENDERER_1_T1384686169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct  PostProcessEffectRenderer_1_t1384686169  : public PostProcessEffectRenderer_t1060237
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	RuntimeObject * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_t1384686169, ___U3CsettingsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsettingsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_1_T1384686169_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef FLOATTWEEN_T1274330004_H
#define FLOATTWEEN_T1274330004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_t1274330004 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Target_0)); }
	inline FloatTweenCallback_t1856710240 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t1856710240 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t1856710240 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_pinvoke
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_com
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
#endif // FLOATTWEEN_T1274330004_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef SHADOWDATA_T3292552708_H
#define SHADOWDATA_T3292552708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowData
struct  ShadowData_t3292552708 
{
public:
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::proj
	Vector4_t3319028937  ___proj_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ShadowData::pos
	Vector3_t3722313464  ___pos_1;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ShadowData::rot0
	Vector3_t3722313464  ___rot0_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ShadowData::rot1
	Vector3_t3722313464  ___rot1_3;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ShadowData::rot2
	Vector3_t3722313464  ___rot2_4;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::scaleOffset
	Vector4_t3319028937  ___scaleOffset_5;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::textureSize
	Vector4_t3319028937  ___textureSize_6;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::texelSizeRcp
	Vector4_t3319028937  ___texelSizeRcp_7;
	// System.UInt32 UnityEngine.Experimental.Rendering.ShadowData::id
	uint32_t ___id_8;
	// System.UInt32 UnityEngine.Experimental.Rendering.ShadowData::shadowType
	uint32_t ___shadowType_9;
	// System.UInt32 UnityEngine.Experimental.Rendering.ShadowData::payloadOffset
	uint32_t ___payloadOffset_10;
	// System.Single UnityEngine.Experimental.Rendering.ShadowData::slice
	float ___slice_11;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::viewBias
	Vector4_t3319028937  ___viewBias_12;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowData::normalBias
	Vector4_t3319028937  ___normalBias_13;
	// System.Single UnityEngine.Experimental.Rendering.ShadowData::edgeTolerance
	float ___edgeTolerance_14;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ShadowData::_pad
	Vector3_t3722313464  ____pad_15;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.ShadowData::shadowToWorld
	Matrix4x4_t1817901843  ___shadowToWorld_16;

public:
	inline static int32_t get_offset_of_proj_0() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___proj_0)); }
	inline Vector4_t3319028937  get_proj_0() const { return ___proj_0; }
	inline Vector4_t3319028937 * get_address_of_proj_0() { return &___proj_0; }
	inline void set_proj_0(Vector4_t3319028937  value)
	{
		___proj_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___pos_1)); }
	inline Vector3_t3722313464  get_pos_1() const { return ___pos_1; }
	inline Vector3_t3722313464 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector3_t3722313464  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_rot0_2() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___rot0_2)); }
	inline Vector3_t3722313464  get_rot0_2() const { return ___rot0_2; }
	inline Vector3_t3722313464 * get_address_of_rot0_2() { return &___rot0_2; }
	inline void set_rot0_2(Vector3_t3722313464  value)
	{
		___rot0_2 = value;
	}

	inline static int32_t get_offset_of_rot1_3() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___rot1_3)); }
	inline Vector3_t3722313464  get_rot1_3() const { return ___rot1_3; }
	inline Vector3_t3722313464 * get_address_of_rot1_3() { return &___rot1_3; }
	inline void set_rot1_3(Vector3_t3722313464  value)
	{
		___rot1_3 = value;
	}

	inline static int32_t get_offset_of_rot2_4() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___rot2_4)); }
	inline Vector3_t3722313464  get_rot2_4() const { return ___rot2_4; }
	inline Vector3_t3722313464 * get_address_of_rot2_4() { return &___rot2_4; }
	inline void set_rot2_4(Vector3_t3722313464  value)
	{
		___rot2_4 = value;
	}

	inline static int32_t get_offset_of_scaleOffset_5() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___scaleOffset_5)); }
	inline Vector4_t3319028937  get_scaleOffset_5() const { return ___scaleOffset_5; }
	inline Vector4_t3319028937 * get_address_of_scaleOffset_5() { return &___scaleOffset_5; }
	inline void set_scaleOffset_5(Vector4_t3319028937  value)
	{
		___scaleOffset_5 = value;
	}

	inline static int32_t get_offset_of_textureSize_6() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___textureSize_6)); }
	inline Vector4_t3319028937  get_textureSize_6() const { return ___textureSize_6; }
	inline Vector4_t3319028937 * get_address_of_textureSize_6() { return &___textureSize_6; }
	inline void set_textureSize_6(Vector4_t3319028937  value)
	{
		___textureSize_6 = value;
	}

	inline static int32_t get_offset_of_texelSizeRcp_7() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___texelSizeRcp_7)); }
	inline Vector4_t3319028937  get_texelSizeRcp_7() const { return ___texelSizeRcp_7; }
	inline Vector4_t3319028937 * get_address_of_texelSizeRcp_7() { return &___texelSizeRcp_7; }
	inline void set_texelSizeRcp_7(Vector4_t3319028937  value)
	{
		___texelSizeRcp_7 = value;
	}

	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___id_8)); }
	inline uint32_t get_id_8() const { return ___id_8; }
	inline uint32_t* get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(uint32_t value)
	{
		___id_8 = value;
	}

	inline static int32_t get_offset_of_shadowType_9() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___shadowType_9)); }
	inline uint32_t get_shadowType_9() const { return ___shadowType_9; }
	inline uint32_t* get_address_of_shadowType_9() { return &___shadowType_9; }
	inline void set_shadowType_9(uint32_t value)
	{
		___shadowType_9 = value;
	}

	inline static int32_t get_offset_of_payloadOffset_10() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___payloadOffset_10)); }
	inline uint32_t get_payloadOffset_10() const { return ___payloadOffset_10; }
	inline uint32_t* get_address_of_payloadOffset_10() { return &___payloadOffset_10; }
	inline void set_payloadOffset_10(uint32_t value)
	{
		___payloadOffset_10 = value;
	}

	inline static int32_t get_offset_of_slice_11() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___slice_11)); }
	inline float get_slice_11() const { return ___slice_11; }
	inline float* get_address_of_slice_11() { return &___slice_11; }
	inline void set_slice_11(float value)
	{
		___slice_11 = value;
	}

	inline static int32_t get_offset_of_viewBias_12() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___viewBias_12)); }
	inline Vector4_t3319028937  get_viewBias_12() const { return ___viewBias_12; }
	inline Vector4_t3319028937 * get_address_of_viewBias_12() { return &___viewBias_12; }
	inline void set_viewBias_12(Vector4_t3319028937  value)
	{
		___viewBias_12 = value;
	}

	inline static int32_t get_offset_of_normalBias_13() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___normalBias_13)); }
	inline Vector4_t3319028937  get_normalBias_13() const { return ___normalBias_13; }
	inline Vector4_t3319028937 * get_address_of_normalBias_13() { return &___normalBias_13; }
	inline void set_normalBias_13(Vector4_t3319028937  value)
	{
		___normalBias_13 = value;
	}

	inline static int32_t get_offset_of_edgeTolerance_14() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___edgeTolerance_14)); }
	inline float get_edgeTolerance_14() const { return ___edgeTolerance_14; }
	inline float* get_address_of_edgeTolerance_14() { return &___edgeTolerance_14; }
	inline void set_edgeTolerance_14(float value)
	{
		___edgeTolerance_14 = value;
	}

	inline static int32_t get_offset_of__pad_15() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ____pad_15)); }
	inline Vector3_t3722313464  get__pad_15() const { return ____pad_15; }
	inline Vector3_t3722313464 * get_address_of__pad_15() { return &____pad_15; }
	inline void set__pad_15(Vector3_t3722313464  value)
	{
		____pad_15 = value;
	}

	inline static int32_t get_offset_of_shadowToWorld_16() { return static_cast<int32_t>(offsetof(ShadowData_t3292552708, ___shadowToWorld_16)); }
	inline Matrix4x4_t1817901843  get_shadowToWorld_16() const { return ___shadowToWorld_16; }
	inline Matrix4x4_t1817901843 * get_address_of_shadowToWorld_16() { return &___shadowToWorld_16; }
	inline void set_shadowToWorld_16(Matrix4x4_t1817901843  value)
	{
		___shadowToWorld_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWDATA_T3292552708_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef AMBIENTOCCLUSIONMODE_T1066043822_H
#define AMBIENTOCCLUSIONMODE_T1066043822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode
struct  AmbientOcclusionMode_t1066043822 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AmbientOcclusionMode_t1066043822, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONMODE_T1066043822_H
#ifndef AMBIENTOCCLUSIONQUALITY_T3249644899_H
#define AMBIENTOCCLUSIONQUALITY_T3249644899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality
struct  AmbientOcclusionQuality_t3249644899 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AmbientOcclusionQuality_t3249644899, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONQUALITY_T3249644899_H
#ifndef EYEADAPTATION_T3315401890_H
#define EYEADAPTATION_T3315401890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.EyeAdaptation
struct  EyeAdaptation_t3315401890 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.EyeAdaptation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyeAdaptation_t3315401890, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATION_T3315401890_H
#ifndef GRADINGMODE_T3858801194_H
#define GRADINGMODE_T3858801194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.GradingMode
struct  GradingMode_t3858801194 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.GradingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GradingMode_t3858801194, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRADINGMODE_T3858801194_H
#ifndef KERNELSIZE_T1641471414_H
#define KERNELSIZE_T1641471414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.KernelSize
struct  KernelSize_t1641471414 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.KernelSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KernelSize_t1641471414, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNELSIZE_T1641471414_H
#ifndef PARAMETEROVERRIDE_1_T536071335_H
#define PARAMETEROVERRIDE_1_T536071335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct  ParameterOverride_1_t536071335  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Color_t2555686324  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t536071335, ___value_1)); }
	inline Color_t2555686324  get_value_1() const { return ___value_1; }
	inline Color_t2555686324 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_t2555686324  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T536071335_H
#ifndef PARAMETEROVERRIDE_1_T136614534_H
#define PARAMETEROVERRIDE_1_T136614534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct  ParameterOverride_1_t136614534  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector2_t2156229523  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t136614534, ___value_1)); }
	inline Vector2_t2156229523  get_value_1() const { return ___value_1; }
	inline Vector2_t2156229523 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_t2156229523  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T136614534_H
#ifndef PARAMETEROVERRIDE_1_T1702698475_H
#define PARAMETEROVERRIDE_1_T1702698475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct  ParameterOverride_1_t1702698475  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector3_t3722313464  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1702698475, ___value_1)); }
	inline Vector3_t3722313464  get_value_1() const { return ___value_1; }
	inline Vector3_t3722313464 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector3_t3722313464  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1702698475_H
#ifndef PARAMETEROVERRIDE_1_T1299413948_H
#define PARAMETEROVERRIDE_1_T1299413948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct  ParameterOverride_1_t1299413948  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector4_t3319028937  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1299413948, ___value_1)); }
	inline Vector4_t3319028937  get_value_1() const { return ___value_1; }
	inline Vector4_t3319028937 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector4_t3319028937  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1299413948_H
#ifndef SCREENSPACEREFLECTIONPRESET_T2401151656_H
#define SCREENSPACEREFLECTIONPRESET_T2401151656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset
struct  ScreenSpaceReflectionPreset_t2401151656 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionPreset_t2401151656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONPRESET_T2401151656_H
#ifndef SCREENSPACEREFLECTIONRESOLUTION_T3090202209_H
#define SCREENSPACEREFLECTIONRESOLUTION_T3090202209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution
struct  ScreenSpaceReflectionResolution_t3090202209 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionResolution_t3090202209, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONRESOLUTION_T3090202209_H
#ifndef TONEMAPPER_T3044700181_H
#define TONEMAPPER_T3044700181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Tonemapper
struct  Tonemapper_t3044700181 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.Tonemapper::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Tonemapper_t3044700181, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPER_T3044700181_H
#ifndef VIGNETTEMODE_T1093529744_H
#define VIGNETTEMODE_T1093529744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.VignetteMode
struct  VignetteMode_t1093529744 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.VignetteMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VignetteMode_t1093529744, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEMODE_T1093529744_H
#ifndef COLORTWEENMODE_T1000778859_H
#define COLORTWEENMODE_T1000778859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct  ColorTweenMode_t1000778859 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorTweenMode_t1000778859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORTWEENMODE_T1000778859_H
#ifndef U3CSTARTU3EC__ITERATOR0_T30141770_H
#define U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ec__Iterator0_t30141770  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	FloatTween_t1274330004  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___tweenInfo_0)); }
	inline FloatTween_t1274330004  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline FloatTween_t1274330004 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(FloatTween_t1274330004  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef PARAMETEROVERRIDE_1_T3341396129_H
#define PARAMETEROVERRIDE_1_T3341396129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>
struct  ParameterOverride_1_t3341396129  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t3341396129, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T3341396129_H
#ifndef PARAMETEROVERRIDE_1_T1230029910_H
#define PARAMETEROVERRIDE_1_T1230029910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>
struct  ParameterOverride_1_t1230029910  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1230029910, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1230029910_H
#ifndef PARAMETEROVERRIDE_1_T1295786901_H
#define PARAMETEROVERRIDE_1_T1295786901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>
struct  ParameterOverride_1_t1295786901  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1295786901, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1295786901_H
#ifndef PARAMETEROVERRIDE_1_T1839186205_H
#define PARAMETEROVERRIDE_1_T1839186205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>
struct  ParameterOverride_1_t1839186205  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1839186205, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1839186205_H
#ifndef PARAMETEROVERRIDE_1_T3916823721_H
#define PARAMETEROVERRIDE_1_T3916823721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>
struct  ParameterOverride_1_t3916823721  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t3916823721, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T3916823721_H
#ifndef PARAMETEROVERRIDE_1_T381536667_H
#define PARAMETEROVERRIDE_1_T381536667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>
struct  ParameterOverride_1_t381536667  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t381536667, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T381536667_H
#ifndef PARAMETEROVERRIDE_1_T1070587220_H
#define PARAMETEROVERRIDE_1_T1070587220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>
struct  ParameterOverride_1_t1070587220  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1070587220, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1070587220_H
#ifndef PARAMETEROVERRIDE_1_T1025085192_H
#define PARAMETEROVERRIDE_1_T1025085192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>
struct  ParameterOverride_1_t1025085192  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1025085192, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1025085192_H
#ifndef PARAMETEROVERRIDE_1_T3368882051_H
#define PARAMETEROVERRIDE_1_T3368882051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>
struct  ParameterOverride_1_t3368882051  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t3368882051, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T3368882051_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef COLORTWEEN_T809614380_H
#define COLORTWEEN_T809614380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t809614380 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t2555686324  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t2555686324  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Target_0)); }
	inline ColorTweenCallback_t1121741130 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_t1121741130 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_t1121741130 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_StartColor_1)); }
	inline Color_t2555686324  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t2555686324 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t2555686324  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TargetColor_2)); }
	inline Color_t2555686324  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t2555686324 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t2555686324  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_pinvoke
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_com
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
#endif // COLORTWEEN_T809614380_H
#ifndef COMPARISON_1_T2855037343_H
#define COMPARISON_1_T2855037343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Object>
struct  Comparison_1_t2855037343  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2855037343_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYACTION_1_T712889340_H
#define UNITYACTION_1_T712889340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t712889340  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T712889340_H
#ifndef UNITYACTION_1_T842049751_H
#define UNITYACTION_1_T842049751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t842049751  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T842049751_H
#ifndef UNITYACTION_1_T362444879_H
#define UNITYACTION_1_T362444879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_t362444879  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T362444879_H
#ifndef UNITYACTION_1_T1819441192_H
#define UNITYACTION_1_T1819441192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t1819441192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1819441192_H
#ifndef UNITYACTION_1_T4213140406_H
#define UNITYACTION_1_T4213140406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t4213140406  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T4213140406_H
#ifndef UNITYACTION_1_T1484257051_H
#define UNITYACTION_1_T1484257051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1484257051  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1484257051_H
#ifndef UNITYACTION_1_T1080972524_H
#define UNITYACTION_1_T1080972524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1080972524  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1080972524_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
#ifndef CLEANUP_T2282938620_H
#define CLEANUP_T2282938620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowData>
struct  Cleanup_t2282938620  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEANUP_T2282938620_H
#ifndef CLEANUP_T3333061644_H
#define CLEANUP_T3333061644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowPayload>
struct  Cleanup_t3333061644  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEANUP_T3333061644_H
#ifndef CLEANUP_T2278340994_H
#define CLEANUP_T2278340994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>
struct  Cleanup_t2278340994  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEANUP_T2278340994_H
#ifndef CLEANUP_T1069570412_H
#define CLEANUP_T1069570412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VectorArray`1/Cleanup<UnityEngine.Rendering.RenderTargetIdentifier>
struct  Cleanup_t1069570412  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEANUP_T1069570412_H
#ifndef POSTPROCESSEFFECTSETTINGS_T1672565614_H
#define POSTPROCESSEFFECTSETTINGS_T1672565614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct  PostProcessEffectSettings_t1672565614  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::active
	bool ___active_4;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::enabled
	BoolParameter_t2299103272 * ___enabled_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::parameters
	ReadOnlyCollection_1_t4273630488 * ___parameters_6;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t1672565614, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t1672565614, ___enabled_5)); }
	inline BoolParameter_t2299103272 * get_enabled_5() const { return ___enabled_5; }
	inline BoolParameter_t2299103272 ** get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(BoolParameter_t2299103272 * value)
	{
		___enabled_5 = value;
		Il2CppCodeGenWriteBarrier((&___enabled_5), value);
	}

	inline static int32_t get_offset_of_parameters_6() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t1672565614, ___parameters_6)); }
	inline ReadOnlyCollection_1_t4273630488 * get_parameters_6() const { return ___parameters_6; }
	inline ReadOnlyCollection_1_t4273630488 ** get_address_of_parameters_6() { return &___parameters_6; }
	inline void set_parameters_6(ReadOnlyCollection_1_t4273630488 * value)
	{
		___parameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_6), value);
	}
};

struct PostProcessEffectSettings_t1672565614_StaticFields
{
public:
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::<>f__am$cache0
	Func_2_t1761491126 * ___U3CU3Ef__amU24cache0_7;
	// System.Func`2<System.Reflection.FieldInfo,System.Int32> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::<>f__am$cache1
	Func_2_t320181618 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t1672565614_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t1761491126 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t1761491126 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t1761491126 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t1672565614_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Func_2_t320181618 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Func_2_t320181618 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Func_2_t320181618 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTSETTINGS_T1672565614_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef U3CSTARTU3EC__ITERATOR0_T3860393442_H
#define U3CSTARTU3EC__ITERATOR0_T3860393442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ec__Iterator0_t3860393442  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	ColorTween_t809614380  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___tweenInfo_0)); }
	inline ColorTween_t809614380  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline ColorTween_t809614380 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(ColorTween_t809614380  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T3860393442_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
// UnityEngine.Experimental.Rendering.ShadowData[]
struct ShadowDataU5BU5D_t3732338029  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShadowData_t3292552708  m_Items[1];

public:
	inline ShadowData_t3292552708  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowData_t3292552708 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowData_t3292552708  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowData_t3292552708  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowData_t3292552708 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowData_t3292552708  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Rendering.ShadowPayload[]
struct ShadowPayloadU5BU5D_t2280176669  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShadowPayload_t47708436  m_Items[1];

public:
	inline ShadowPayload_t47708436  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowPayload_t47708436 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowPayload_t47708436  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowPayload_t47708436  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowPayload_t47708436 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowPayload_t47708436  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest[]
struct ShadowRequestU5BU5D_t1481899023  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShadowRequest_t3287955082  m_Items[1];

public:
	inline ShadowRequest_t3287955082  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowRequest_t3287955082 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowRequest_t3287955082  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowRequest_t3287955082  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowRequest_t3287955082 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowRequest_t3287955082  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t2742279485  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_t2079184500  m_Items[1];

public:
	inline RenderTargetIdentifier_t2079184500  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t2079184500 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_t2079184500  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_t2079184500  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t2079184500 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_t2079184500  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3888682209_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m737882689_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3464624458_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m369920716_gshared (VectorArray_1_t3180793538 * __this, uint32_t p0, ShadowData_t3292552708  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1022683040_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m745455219_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m25936702_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1753674295_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___size0, const RuntimeMethod* method);
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowData_t3292552708  VectorArray_1_get_Item_m2880193182_gshared (VectorArray_1_t3180793538 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2185182087_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___size0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4228707237_gshared (VectorArray_1_t3180793538 * __this, Cleanup_t2282938620 * ___cleanupDelegate0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1773783550_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m440241172_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1746721651_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m763971520_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m3551705192_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m3591706602_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2665150655_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3405287901_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1200770011_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m2694019118_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m551976501_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m56355076_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1745207193_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m240491754_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m4006413340_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1536452945_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1375082582_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___count0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m2207735308_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m1605061494_gshared (VectorArray_1_t3180793538 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2415719283_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method);
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowDataU5BU5D_t3732338029* VectorArray_1_AsArray_m3724052027_gshared (VectorArray_1_t3180793538 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m849202603_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m3806589459_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m3440120656_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m657619067_gshared (VectorArray_1_t3180793538 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m3459459908_gshared (VectorArray_1_t3180793538 * __this, uint32_t* ___idx0, ShadowData_t3292552708 * ___designator1, const RuntimeMethod* method);
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t3180793538  VectorArray_1_Subrange_m40172864_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m2109433901_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m4086448236_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m753747621_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m4064310769_gshared (VectorArray_1_t4230916562 * __this, uint32_t p0, ShadowPayload_t47708436  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1403602145_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4050438360_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m2924090387_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1562788781_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___size0, const RuntimeMethod* method);
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowPayload_t47708436  VectorArray_1_get_Item_m845590891_gshared (VectorArray_1_t4230916562 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m342595315_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___size0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m2143903856_gshared (VectorArray_1_t4230916562 * __this, Cleanup_t3333061644 * ___cleanupDelegate0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1454145846_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m747391496_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m865887845_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1958430069_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m373745630_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1825983913_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1159341500_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m452643518_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1922673595_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m460063230_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3519891531_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3533616093_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m4243990619_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m664358425_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m1738173237_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m762123161_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m4125102779_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___count0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1058877697_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m2877941854_gshared (VectorArray_1_t4230916562 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2589726812_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method);
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowPayloadU5BU5D_t2280176669* VectorArray_1_AsArray_m2012037387_gshared (VectorArray_1_t4230916562 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m2586821475_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m972472017_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m1990538546_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m1909068720_gshared (VectorArray_1_t4230916562 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m2499106082_gshared (VectorArray_1_t4230916562 * __this, uint32_t* ___idx0, ShadowPayload_t47708436 * ___designator1, const RuntimeMethod* method);
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t4230916562  VectorArray_1_Subrange_m2450834184_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1286009711_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1116332468_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m2871533253_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m560198370_gshared (VectorArray_1_t3176195912 * __this, uint32_t p0, ShadowRequest_t3287955082  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3940317685_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m2621756481_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m166997880_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2623477506_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___size0, const RuntimeMethod* method);
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowRequest_t3287955082  VectorArray_1_get_Item_m2476100526_gshared (VectorArray_1_t3176195912 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1263573943_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___size0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3951115443_gshared (VectorArray_1_t3176195912 * __this, Cleanup_t2278340994 * ___cleanupDelegate0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m819409922_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2240434443_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m647471981_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1139820620_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m3601652030_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m853319992_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2969077033_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m1241539512_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3822133748_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m914057377_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3673654996_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m165184778_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m189213882_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m895097166_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m163439344_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m4024545186_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m2696644222_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___count0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1559315826_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m3661532069_gshared (VectorArray_1_t3176195912 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2590245426_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method);
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowRequestU5BU5D_t1481899023* VectorArray_1_AsArray_m3720280714_gshared (VectorArray_1_t3176195912 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m3632711544_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m258079667_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m4286709035_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m552575779_gshared (VectorArray_1_t3176195912 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m1139300539_gshared (VectorArray_1_t3176195912 * __this, uint32_t* ___idx0, ShadowRequest_t3287955082 * ___designator1, const RuntimeMethod* method);
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t3176195912  VectorArray_1_Subrange_m3759422898_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1416138122_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m4225040827_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3030896141_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m2215184819_gshared (VectorArray_1_t1967425330 * __this, uint32_t p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3987466730_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4225330915_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m3062672329_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2489397472_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___size0, const RuntimeMethod* method);
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  VectorArray_1_get_Item_m1031447987_gshared (VectorArray_1_t1967425330 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2167314143_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___size0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m492371512_gshared (VectorArray_1_t1967425330 * __this, Cleanup_t1069570412 * ___cleanupDelegate0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3701397919_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m328441954_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1932830490_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m19852320_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m217638052_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m4021946675_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m949948858_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3247911990_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m584400139_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m2354708155_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* p0, uint32_t p1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1334133961_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m1146128688_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m184489492_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m707556550_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m3594072978_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1958120918_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1206734261_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___count0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1415779711_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m2948720391_gshared (VectorArray_1_t1967425330 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m429026578_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method);
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifierU5BU5D_t2742279485* VectorArray_1_AsArray_m83426542_gshared (VectorArray_1_t1967425330 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m1456474192_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m1161289686_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m802478912_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m3832083522_gshared (VectorArray_1_t1967425330 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m3819034623_gshared (VectorArray_1_t1967425330 * __this, uint32_t* ___idx0, RenderTargetIdentifier_t2079184500 * ___designator1, const RuntimeMethod* method);
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t1967425330  VectorArray_1_Subrange_m45411100_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3219050175_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m2346748943_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m3888682209 (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m3888682209_gshared)(__this, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m737882689 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, uint32_t, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m737882689_gshared)(__this, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
inline void VectorArray_1__ctor_m3464624458 (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, VectorArray_1_t3180793538 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1__ctor_m3464624458_gshared)(__this, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::set_Item(System.UInt32,T)
inline void VectorArray_1_set_Item_m369920716 (VectorArray_1_t3180793538 * __this, uint32_t p0, ShadowData_t3292552708  p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_set_Item_m369920716_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset()
inline void VectorArray_1_Reset_m1022683040 (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_Reset_m1022683040_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32)
inline void VectorArray_1_Reset_m745455219 (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reset_m745455219_gshared)(__this, ___capacity0, method);
}
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m514679699 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int64_t p1, RuntimeArray * p2, int64_t p3, int64_t p4, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reserve(System.UInt32)
inline void VectorArray_1_Reserve_m25936702 (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reserve_m25936702_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32)
inline void VectorArray_1_Resize_m1753674295 (VectorArray_1_t3180793538 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, const RuntimeMethod*))VectorArray_1_Resize_m1753674295_gshared)(__this, ___size0, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::get_Item(System.UInt32)
inline ShadowData_t3292552708  VectorArray_1_get_Item_m2880193182 (VectorArray_1_t3180793538 * __this, uint32_t p0, const RuntimeMethod* method)
{
	return ((  ShadowData_t3292552708  (*) (VectorArray_1_t3180793538 *, uint32_t, const RuntimeMethod*))VectorArray_1_get_Item_m2880193182_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Resize_m2185182087 (VectorArray_1_t3180793538 * __this, uint32_t ___size0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, Cleanup_t2282938620 *, const RuntimeMethod*))VectorArray_1_Resize_m2185182087_gshared)(__this, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m4228707237 (VectorArray_1_t3180793538 * __this, Cleanup_t2282938620 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, Cleanup_t2282938620 *, const RuntimeMethod*))VectorArray_1_Reset_m4228707237_gshared)(__this, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m1773783550 (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, Cleanup_t2282938620 *, const RuntimeMethod*))VectorArray_1_Reset_m1773783550_gshared)(__this, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T)
inline uint32_t VectorArray_1_Add_m440241172 (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_Add_m440241172_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnchecked_m1746721651 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnchecked_m1746721651_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T[],System.UInt32)
inline uint32_t VectorArray_1_Add_m763971520 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, uint32_t, const RuntimeMethod*))VectorArray_1_Add_m763971520_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Count()
inline uint32_t VectorArray_1_Count_m3551705192 (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_Count_m3551705192_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnchecked_m3591706602 (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_AddUnchecked_m3591706602_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_Add_m2665150655 (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_Add_m2665150655_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m3405287901 (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m3405287901_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T)
inline uint32_t VectorArray_1_AddUnique_m1200770011 (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_AddUnique_m1200770011_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m2694019118 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m2694019118_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnique_m551976501 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnique_m551976501_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m56355076 (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m56355076_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnique_m1745207193 (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_AddUnique_m1745207193_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T)
inline uint32_t VectorArray_1_AddUnchecked_m240491754 (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_AddUnchecked_m240491754_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Contains(T)
inline bool VectorArray_1_Contains_m4006413340 (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t3180793538 *, ShadowData_t3292552708 , const RuntimeMethod*))VectorArray_1_Contains_m4006413340_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32)
inline void VectorArray_1_Purge_m1536452945 (VectorArray_1_t3180793538 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, const RuntimeMethod*))VectorArray_1_Purge_m1536452945_gshared)(__this, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Purge_m1375082582 (VectorArray_1_t3180793538 * __this, uint32_t ___count0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, Cleanup_t2282938620 *, const RuntimeMethod*))VectorArray_1_Purge_m1375082582_gshared)(__this, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CopyTo(T[],System.Int32,System.UInt32&)
inline void VectorArray_1_CopyTo_m2207735308 (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, ShadowDataU5BU5D_t3732338029*, int32_t, uint32_t*, const RuntimeMethod*))VectorArray_1_CopyTo_m2207735308_gshared)(__this, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::SwapUnchecked(System.UInt32,System.UInt32)
inline void VectorArray_1_SwapUnchecked_m1605061494 (VectorArray_1_t3180793538 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_SwapUnchecked_m1605061494_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Swap(System.UInt32,System.UInt32)
inline void VectorArray_1_Swap_m2415719283 (VectorArray_1_t3180793538 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Swap_m2415719283_gshared)(__this, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AsArray(System.UInt32&,System.UInt32&)
inline ShadowDataU5BU5D_t3732338029* VectorArray_1_AsArray_m3724052027 (VectorArray_1_t3180793538 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	return ((  ShadowDataU5BU5D_t3732338029* (*) (VectorArray_1_t3180793538 *, uint32_t*, uint32_t*, const RuntimeMethod*))VectorArray_1_AsArray_m3724052027_gshared)(__this, ___offset0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityTotal()
inline uint32_t VectorArray_1_CapacityTotal_m849202603 (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_CapacityTotal_m849202603_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityAvailable()
inline uint32_t VectorArray_1_CapacityAvailable_m3806589459 (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_CapacityAvailable_m3806589459_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort()
inline void VectorArray_1_Sort_m3440120656 (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, const RuntimeMethod*))VectorArray_1_Sort_m3440120656_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void VectorArray_1_Sort_m657619067 (VectorArray_1_t3180793538 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3180793538 *, RuntimeObject*, const RuntimeMethod*))VectorArray_1_Sort_m657619067_gshared)(__this, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::FindFirst(System.UInt32&,T&)
inline bool VectorArray_1_FindFirst_m3459459908 (VectorArray_1_t3180793538 * __this, uint32_t* ___idx0, ShadowData_t3292552708 * ___designator1, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t3180793538 *, uint32_t*, ShadowData_t3292552708 *, const RuntimeMethod*))VectorArray_1_FindFirst_m3459459908_gshared)(__this, ___idx0, ___designator1, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Subrange(System.UInt32,System.UInt32)
inline VectorArray_1_t3180793538  VectorArray_1_Subrange_m40172864 (VectorArray_1_t3180793538 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  VectorArray_1_t3180793538  (*) (VectorArray_1_t3180793538 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Subrange_m40172864_gshared)(__this, ___offset0, ___count1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m2109433901 (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m2109433901_gshared)(__this, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m4086448236 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, uint32_t, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m4086448236_gshared)(__this, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
inline void VectorArray_1__ctor_m753747621 (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, VectorArray_1_t4230916562 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1__ctor_m753747621_gshared)(__this, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::set_Item(System.UInt32,T)
inline void VectorArray_1_set_Item_m4064310769 (VectorArray_1_t4230916562 * __this, uint32_t p0, ShadowPayload_t47708436  p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_set_Item_m4064310769_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset()
inline void VectorArray_1_Reset_m1403602145 (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_Reset_m1403602145_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32)
inline void VectorArray_1_Reset_m4050438360 (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reset_m4050438360_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reserve(System.UInt32)
inline void VectorArray_1_Reserve_m2924090387 (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reserve_m2924090387_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32)
inline void VectorArray_1_Resize_m1562788781 (VectorArray_1_t4230916562 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, const RuntimeMethod*))VectorArray_1_Resize_m1562788781_gshared)(__this, ___size0, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::get_Item(System.UInt32)
inline ShadowPayload_t47708436  VectorArray_1_get_Item_m845590891 (VectorArray_1_t4230916562 * __this, uint32_t p0, const RuntimeMethod* method)
{
	return ((  ShadowPayload_t47708436  (*) (VectorArray_1_t4230916562 *, uint32_t, const RuntimeMethod*))VectorArray_1_get_Item_m845590891_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Resize_m342595315 (VectorArray_1_t4230916562 * __this, uint32_t ___size0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, Cleanup_t3333061644 *, const RuntimeMethod*))VectorArray_1_Resize_m342595315_gshared)(__this, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m2143903856 (VectorArray_1_t4230916562 * __this, Cleanup_t3333061644 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, Cleanup_t3333061644 *, const RuntimeMethod*))VectorArray_1_Reset_m2143903856_gshared)(__this, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m1454145846 (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, Cleanup_t3333061644 *, const RuntimeMethod*))VectorArray_1_Reset_m1454145846_gshared)(__this, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T)
inline uint32_t VectorArray_1_Add_m747391496 (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_Add_m747391496_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnchecked_m865887845 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnchecked_m865887845_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T[],System.UInt32)
inline uint32_t VectorArray_1_Add_m1958430069 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, uint32_t, const RuntimeMethod*))VectorArray_1_Add_m1958430069_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Count()
inline uint32_t VectorArray_1_Count_m373745630 (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_Count_m373745630_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnchecked_m1825983913 (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_AddUnchecked_m1825983913_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_Add_m1159341500 (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_Add_m1159341500_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m452643518 (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m452643518_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T)
inline uint32_t VectorArray_1_AddUnique_m1922673595 (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_AddUnique_m1922673595_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m460063230 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m460063230_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnique_m3519891531 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnique_m3519891531_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m3533616093 (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m3533616093_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnique_m4243990619 (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_AddUnique_m4243990619_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T)
inline uint32_t VectorArray_1_AddUnchecked_m664358425 (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_AddUnchecked_m664358425_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Contains(T)
inline bool VectorArray_1_Contains_m1738173237 (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t4230916562 *, ShadowPayload_t47708436 , const RuntimeMethod*))VectorArray_1_Contains_m1738173237_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32)
inline void VectorArray_1_Purge_m762123161 (VectorArray_1_t4230916562 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, const RuntimeMethod*))VectorArray_1_Purge_m762123161_gshared)(__this, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Purge_m4125102779 (VectorArray_1_t4230916562 * __this, uint32_t ___count0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, Cleanup_t3333061644 *, const RuntimeMethod*))VectorArray_1_Purge_m4125102779_gshared)(__this, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CopyTo(T[],System.Int32,System.UInt32&)
inline void VectorArray_1_CopyTo_m1058877697 (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, ShadowPayloadU5BU5D_t2280176669*, int32_t, uint32_t*, const RuntimeMethod*))VectorArray_1_CopyTo_m1058877697_gshared)(__this, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::SwapUnchecked(System.UInt32,System.UInt32)
inline void VectorArray_1_SwapUnchecked_m2877941854 (VectorArray_1_t4230916562 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_SwapUnchecked_m2877941854_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Swap(System.UInt32,System.UInt32)
inline void VectorArray_1_Swap_m2589726812 (VectorArray_1_t4230916562 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Swap_m2589726812_gshared)(__this, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AsArray(System.UInt32&,System.UInt32&)
inline ShadowPayloadU5BU5D_t2280176669* VectorArray_1_AsArray_m2012037387 (VectorArray_1_t4230916562 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	return ((  ShadowPayloadU5BU5D_t2280176669* (*) (VectorArray_1_t4230916562 *, uint32_t*, uint32_t*, const RuntimeMethod*))VectorArray_1_AsArray_m2012037387_gshared)(__this, ___offset0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityTotal()
inline uint32_t VectorArray_1_CapacityTotal_m2586821475 (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_CapacityTotal_m2586821475_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityAvailable()
inline uint32_t VectorArray_1_CapacityAvailable_m972472017 (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_CapacityAvailable_m972472017_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort()
inline void VectorArray_1_Sort_m1990538546 (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, const RuntimeMethod*))VectorArray_1_Sort_m1990538546_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void VectorArray_1_Sort_m1909068720 (VectorArray_1_t4230916562 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t4230916562 *, RuntimeObject*, const RuntimeMethod*))VectorArray_1_Sort_m1909068720_gshared)(__this, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::FindFirst(System.UInt32&,T&)
inline bool VectorArray_1_FindFirst_m2499106082 (VectorArray_1_t4230916562 * __this, uint32_t* ___idx0, ShadowPayload_t47708436 * ___designator1, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t4230916562 *, uint32_t*, ShadowPayload_t47708436 *, const RuntimeMethod*))VectorArray_1_FindFirst_m2499106082_gshared)(__this, ___idx0, ___designator1, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Subrange(System.UInt32,System.UInt32)
inline VectorArray_1_t4230916562  VectorArray_1_Subrange_m2450834184 (VectorArray_1_t4230916562 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  VectorArray_1_t4230916562  (*) (VectorArray_1_t4230916562 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Subrange_m2450834184_gshared)(__this, ___offset0, ___count1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m1286009711 (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m1286009711_gshared)(__this, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m1116332468 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, uint32_t, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m1116332468_gshared)(__this, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
inline void VectorArray_1__ctor_m2871533253 (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, VectorArray_1_t3176195912 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1__ctor_m2871533253_gshared)(__this, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::set_Item(System.UInt32,T)
inline void VectorArray_1_set_Item_m560198370 (VectorArray_1_t3176195912 * __this, uint32_t p0, ShadowRequest_t3287955082  p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_set_Item_m560198370_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset()
inline void VectorArray_1_Reset_m3940317685 (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_Reset_m3940317685_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32)
inline void VectorArray_1_Reset_m2621756481 (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reset_m2621756481_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reserve(System.UInt32)
inline void VectorArray_1_Reserve_m166997880 (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reserve_m166997880_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32)
inline void VectorArray_1_Resize_m2623477506 (VectorArray_1_t3176195912 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, const RuntimeMethod*))VectorArray_1_Resize_m2623477506_gshared)(__this, ___size0, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::get_Item(System.UInt32)
inline ShadowRequest_t3287955082  VectorArray_1_get_Item_m2476100526 (VectorArray_1_t3176195912 * __this, uint32_t p0, const RuntimeMethod* method)
{
	return ((  ShadowRequest_t3287955082  (*) (VectorArray_1_t3176195912 *, uint32_t, const RuntimeMethod*))VectorArray_1_get_Item_m2476100526_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Resize_m1263573943 (VectorArray_1_t3176195912 * __this, uint32_t ___size0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, Cleanup_t2278340994 *, const RuntimeMethod*))VectorArray_1_Resize_m1263573943_gshared)(__this, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m3951115443 (VectorArray_1_t3176195912 * __this, Cleanup_t2278340994 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, Cleanup_t2278340994 *, const RuntimeMethod*))VectorArray_1_Reset_m3951115443_gshared)(__this, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m819409922 (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, Cleanup_t2278340994 *, const RuntimeMethod*))VectorArray_1_Reset_m819409922_gshared)(__this, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T)
inline uint32_t VectorArray_1_Add_m2240434443 (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_Add_m2240434443_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnchecked_m647471981 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnchecked_m647471981_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T[],System.UInt32)
inline uint32_t VectorArray_1_Add_m1139820620 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, uint32_t, const RuntimeMethod*))VectorArray_1_Add_m1139820620_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Count()
inline uint32_t VectorArray_1_Count_m3601652030 (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_Count_m3601652030_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnchecked_m853319992 (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_AddUnchecked_m853319992_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_Add_m2969077033 (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_Add_m2969077033_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m1241539512 (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m1241539512_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T)
inline uint32_t VectorArray_1_AddUnique_m3822133748 (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_AddUnique_m3822133748_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m914057377 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m914057377_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnique_m3673654996 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnique_m3673654996_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m165184778 (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m165184778_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnique_m189213882 (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_AddUnique_m189213882_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T)
inline uint32_t VectorArray_1_AddUnchecked_m895097166 (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_AddUnchecked_m895097166_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Contains(T)
inline bool VectorArray_1_Contains_m163439344 (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t3176195912 *, ShadowRequest_t3287955082 , const RuntimeMethod*))VectorArray_1_Contains_m163439344_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32)
inline void VectorArray_1_Purge_m4024545186 (VectorArray_1_t3176195912 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, const RuntimeMethod*))VectorArray_1_Purge_m4024545186_gshared)(__this, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Purge_m2696644222 (VectorArray_1_t3176195912 * __this, uint32_t ___count0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, Cleanup_t2278340994 *, const RuntimeMethod*))VectorArray_1_Purge_m2696644222_gshared)(__this, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CopyTo(T[],System.Int32,System.UInt32&)
inline void VectorArray_1_CopyTo_m1559315826 (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, ShadowRequestU5BU5D_t1481899023*, int32_t, uint32_t*, const RuntimeMethod*))VectorArray_1_CopyTo_m1559315826_gshared)(__this, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::SwapUnchecked(System.UInt32,System.UInt32)
inline void VectorArray_1_SwapUnchecked_m3661532069 (VectorArray_1_t3176195912 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_SwapUnchecked_m3661532069_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Swap(System.UInt32,System.UInt32)
inline void VectorArray_1_Swap_m2590245426 (VectorArray_1_t3176195912 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Swap_m2590245426_gshared)(__this, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AsArray(System.UInt32&,System.UInt32&)
inline ShadowRequestU5BU5D_t1481899023* VectorArray_1_AsArray_m3720280714 (VectorArray_1_t3176195912 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	return ((  ShadowRequestU5BU5D_t1481899023* (*) (VectorArray_1_t3176195912 *, uint32_t*, uint32_t*, const RuntimeMethod*))VectorArray_1_AsArray_m3720280714_gshared)(__this, ___offset0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityTotal()
inline uint32_t VectorArray_1_CapacityTotal_m3632711544 (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_CapacityTotal_m3632711544_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityAvailable()
inline uint32_t VectorArray_1_CapacityAvailable_m258079667 (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_CapacityAvailable_m258079667_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort()
inline void VectorArray_1_Sort_m4286709035 (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, const RuntimeMethod*))VectorArray_1_Sort_m4286709035_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void VectorArray_1_Sort_m552575779 (VectorArray_1_t3176195912 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t3176195912 *, RuntimeObject*, const RuntimeMethod*))VectorArray_1_Sort_m552575779_gshared)(__this, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::FindFirst(System.UInt32&,T&)
inline bool VectorArray_1_FindFirst_m1139300539 (VectorArray_1_t3176195912 * __this, uint32_t* ___idx0, ShadowRequest_t3287955082 * ___designator1, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t3176195912 *, uint32_t*, ShadowRequest_t3287955082 *, const RuntimeMethod*))VectorArray_1_FindFirst_m1139300539_gshared)(__this, ___idx0, ___designator1, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Subrange(System.UInt32,System.UInt32)
inline VectorArray_1_t3176195912  VectorArray_1_Subrange_m3759422898 (VectorArray_1_t3176195912 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  VectorArray_1_t3176195912  (*) (VectorArray_1_t3176195912 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Subrange_m3759422898_gshared)(__this, ___offset0, ___count1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m1416138122 (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m1416138122_gshared)(__this, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
inline void VectorArray_1__ctor_m4225040827 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, uint32_t, uint32_t, bool, const RuntimeMethod*))VectorArray_1__ctor_m4225040827_gshared)(__this, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
inline void VectorArray_1__ctor_m3030896141 (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, VectorArray_1_t1967425330 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1__ctor_m3030896141_gshared)(__this, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::set_Item(System.UInt32,T)
inline void VectorArray_1_set_Item_m2215184819 (VectorArray_1_t1967425330 * __this, uint32_t p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_set_Item_m2215184819_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset()
inline void VectorArray_1_Reset_m3987466730 (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_Reset_m3987466730_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32)
inline void VectorArray_1_Reset_m4225330915 (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reset_m4225330915_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reserve(System.UInt32)
inline void VectorArray_1_Reserve_m3062672329 (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, const RuntimeMethod*))VectorArray_1_Reserve_m3062672329_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32)
inline void VectorArray_1_Resize_m2489397472 (VectorArray_1_t1967425330 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, const RuntimeMethod*))VectorArray_1_Resize_m2489397472_gshared)(__this, ___size0, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::get_Item(System.UInt32)
inline RenderTargetIdentifier_t2079184500  VectorArray_1_get_Item_m1031447987 (VectorArray_1_t1967425330 * __this, uint32_t p0, const RuntimeMethod* method)
{
	return ((  RenderTargetIdentifier_t2079184500  (*) (VectorArray_1_t1967425330 *, uint32_t, const RuntimeMethod*))VectorArray_1_get_Item_m1031447987_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Resize_m2167314143 (VectorArray_1_t1967425330 * __this, uint32_t ___size0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, Cleanup_t1069570412 *, const RuntimeMethod*))VectorArray_1_Resize_m2167314143_gshared)(__this, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m492371512 (VectorArray_1_t1967425330 * __this, Cleanup_t1069570412 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, Cleanup_t1069570412 *, const RuntimeMethod*))VectorArray_1_Reset_m492371512_gshared)(__this, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Reset_m3701397919 (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, Cleanup_t1069570412 *, const RuntimeMethod*))VectorArray_1_Reset_m3701397919_gshared)(__this, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T)
inline uint32_t VectorArray_1_Add_m328441954 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_Add_m328441954_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnchecked_m1932830490 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnchecked_m1932830490_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T[],System.UInt32)
inline uint32_t VectorArray_1_Add_m19852320 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, uint32_t, const RuntimeMethod*))VectorArray_1_Add_m19852320_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Count()
inline uint32_t VectorArray_1_Count_m217638052 (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_Count_m217638052_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnchecked_m4021946675 (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_AddUnchecked_m4021946675_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_Add_m949948858 (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_Add_m949948858_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m3247911990 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m3247911990_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T)
inline uint32_t VectorArray_1_AddUnique_m584400139 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_AddUnique_m584400139_gshared)(__this, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m2354708155 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* p0, uint32_t p1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m2354708155_gshared)(__this, p0, p1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T[],System.UInt32)
inline uint32_t VectorArray_1_AddUnique_m1334133961 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, uint32_t, const RuntimeMethod*))VectorArray_1_AddUnique_m1334133961_gshared)(__this, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUniqueUnchecked_m1146128688 (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_AddUniqueUnchecked_m1146128688_gshared)(__this, p0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
inline uint32_t VectorArray_1_AddUnique_m184489492 (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_AddUnique_m184489492_gshared)(__this, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T)
inline uint32_t VectorArray_1_AddUnchecked_m707556550 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_AddUnchecked_m707556550_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Contains(T)
inline bool VectorArray_1_Contains_m3594072978 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))VectorArray_1_Contains_m3594072978_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32)
inline void VectorArray_1_Purge_m1958120918 (VectorArray_1_t1967425330 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, const RuntimeMethod*))VectorArray_1_Purge_m1958120918_gshared)(__this, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
inline void VectorArray_1_Purge_m1206734261 (VectorArray_1_t1967425330 * __this, uint32_t ___count0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, Cleanup_t1069570412 *, const RuntimeMethod*))VectorArray_1_Purge_m1206734261_gshared)(__this, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CopyTo(T[],System.Int32,System.UInt32&)
inline void VectorArray_1_CopyTo_m1415779711 (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, RenderTargetIdentifierU5BU5D_t2742279485*, int32_t, uint32_t*, const RuntimeMethod*))VectorArray_1_CopyTo_m1415779711_gshared)(__this, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::SwapUnchecked(System.UInt32,System.UInt32)
inline void VectorArray_1_SwapUnchecked_m2948720391 (VectorArray_1_t1967425330 * __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_SwapUnchecked_m2948720391_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Swap(System.UInt32,System.UInt32)
inline void VectorArray_1_Swap_m429026578 (VectorArray_1_t1967425330 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Swap_m429026578_gshared)(__this, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AsArray(System.UInt32&,System.UInt32&)
inline RenderTargetIdentifierU5BU5D_t2742279485* VectorArray_1_AsArray_m83426542 (VectorArray_1_t1967425330 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	return ((  RenderTargetIdentifierU5BU5D_t2742279485* (*) (VectorArray_1_t1967425330 *, uint32_t*, uint32_t*, const RuntimeMethod*))VectorArray_1_AsArray_m83426542_gshared)(__this, ___offset0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityTotal()
inline uint32_t VectorArray_1_CapacityTotal_m1456474192 (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_CapacityTotal_m1456474192_gshared)(__this, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityAvailable()
inline uint32_t VectorArray_1_CapacityAvailable_m1161289686 (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_CapacityAvailable_m1161289686_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort()
inline void VectorArray_1_Sort_m802478912 (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, const RuntimeMethod*))VectorArray_1_Sort_m802478912_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void VectorArray_1_Sort_m3832083522 (VectorArray_1_t1967425330 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (VectorArray_1_t1967425330 *, RuntimeObject*, const RuntimeMethod*))VectorArray_1_Sort_m3832083522_gshared)(__this, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::FindFirst(System.UInt32&,T&)
inline bool VectorArray_1_FindFirst_m3819034623 (VectorArray_1_t1967425330 * __this, uint32_t* ___idx0, RenderTargetIdentifier_t2079184500 * ___designator1, const RuntimeMethod* method)
{
	return ((  bool (*) (VectorArray_1_t1967425330 *, uint32_t*, RenderTargetIdentifier_t2079184500 *, const RuntimeMethod*))VectorArray_1_FindFirst_m3819034623_gshared)(__this, ___idx0, ___designator1, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Subrange(System.UInt32,System.UInt32)
inline VectorArray_1_t1967425330  VectorArray_1_Subrange_m45411100 (VectorArray_1_t1967425330 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	return ((  VectorArray_1_t1967425330  (*) (VectorArray_1_t1967425330 *, uint32_t, uint32_t, const RuntimeMethod*))VectorArray_1_Subrange_m45411100_gshared)(__this, ___offset0, ___count1, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride__ctor_m3334242465 (ParameterOverride_t3061054201 * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m3167312162 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m1876651407 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1558506138 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m1829208463 (Color_t2555686324 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m2879461828 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m536821243 (Vector4_t3319028937 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer__ctor_m257238621 (PostProcessEffectRenderer_t1060237 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_m3777057655 (Queue_1_t3446625415 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3446625415 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_t3328599146* Scene_GetRootGameObjects_m2700143150 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_m1216095304 (Queue_1_t3446625415 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3446625415 *, Transform_t3600365921 *, const RuntimeMethod*))Queue_1_Enqueue_m3219050175_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_t3600365921 * Queue_1_Dequeue_m2689976562 (Queue_1_t3446625415 * __this, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (Queue_1_t3446625415 *, const RuntimeMethod*))Queue_1_Dequeue_m2346748943_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m1024950313 (Queue_1_t3446625415 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3446625415 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m376919233 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m1133957174 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m4270080131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float ColorTween_get_duration_m3264097060 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m3895102629 (ColorTween_t809614380 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m885246038 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m322812475 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float FloatTween_get_duration_m1227071020 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m52237061 (FloatTween_t1274330004 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3888682209_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___capacity0;
		ShadowDataU5BU5D_t3732338029* L_1 = (ShadowDataU5BU5D_t3732338029*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_0)));
		__this->set_m_array_1(L_1);
		__this->set_m_offset_2(0);
		uint32_t L_2 = ___capacity0;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault1;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m3888682209_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1__ctor_m3888682209(_thisAdjusted, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m737882689_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = ___array0;
		__this->set_m_array_1(L_0);
		uint32_t L_1 = ___offset1;
		__this->set_m_offset_2(L_1);
		uint32_t L_2 = ___count2;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault3;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m737882689_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1__ctor_m737882689(_thisAdjusted, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3464624458_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3180793538 * L_0 = ___vec0;
		ShadowDataU5BU5D_t3732338029* L_1 = (ShadowDataU5BU5D_t3732338029*)L_0->get_m_array_1();
		__this->set_m_array_1(L_1);
		VectorArray_1_t3180793538 * L_2 = ___vec0;
		uint32_t L_3 = (uint32_t)L_2->get_m_offset_2();
		uint32_t L_4 = ___offset1;
		__this->set_m_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)));
		uint32_t L_5 = ___count2;
		__this->set_m_count_3(L_5);
		VectorArray_1_t3180793538 * L_6 = ___vec0;
		bool L_7 = (bool)L_6->get_m_clearToDefault_4();
		__this->set_m_clearToDefault_4(L_7);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m3464624458_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3180793538 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1__ctor_m3464624458(_thisAdjusted, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1022683040_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	ShadowData_t3292552708  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = (bool)__this->get_m_clearToDefault_4();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = (uint32_t)0;
		goto IL_0026;
	}

IL_0012:
	{
		uint32_t L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ShadowData_t3292552708 ));
		ShadowData_t3292552708  L_2 = V_1;
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0012;
		}
	}

IL_0032:
	{
		__this->set_m_count_3(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m1022683040_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Reset_m1022683040(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m745455219_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___capacity0;
		if ((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))))) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))))))))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_3 = ___capacity0;
		ShadowDataU5BU5D_t3732338029* L_4 = (ShadowDataU5BU5D_t3732338029*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_3)));
		__this->set_m_array_1(L_4);
		__this->set_m_offset_2(0);
		__this->set_m_count_3(0);
		goto IL_003d;
	}

IL_0037:
	{
		VectorArray_1_Reset_m1022683040((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	}

IL_003d:
	{
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m745455219_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Reset_m745455219(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m25936702_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	ShadowDataU5BU5D_t3732338029* V_0 = NULL;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		uint32_t L_2 = ___capacity0;
		ShadowDataU5BU5D_t3732338029* L_3 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		NullCheck(L_3);
		if ((((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2))))))))) > ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		uint32_t L_4 = (uint32_t)__this->get_m_count_3();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_5 = ___capacity0;
		ShadowDataU5BU5D_t3732338029* L_6 = (ShadowDataU5BU5D_t3732338029*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_5)));
		__this->set_m_array_1(L_6);
		goto IL_006e;
	}

IL_003c:
	{
		uint32_t L_7 = (uint32_t)__this->get_m_count_3();
		uint32_t L_8 = ___capacity0;
		ShadowDataU5BU5D_t3732338029* L_9 = (ShadowDataU5BU5D_t3732338029*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))));
		V_0 = (ShadowDataU5BU5D_t3732338029*)L_9;
		ShadowDataU5BU5D_t3732338029* L_10 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_11 = (uint32_t)__this->get_m_offset_2();
		ShadowDataU5BU5D_t3732338029* L_12 = V_0;
		uint32_t L_13 = (uint32_t)__this->get_m_count_3();
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, (int64_t)(((int64_t)((uint64_t)L_11))), (RuntimeArray *)(RuntimeArray *)L_12, (int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_13))), /*hidden argument*/NULL);
		ShadowDataU5BU5D_t3732338029* L_14 = V_0;
		__this->set_m_array_1(L_14);
	}

IL_006e:
	{
		__this->set_m_offset_2(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reserve_m25936702_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Reserve_m25936702(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1753674295_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ShadowData_t3292552708  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		uint32_t L_0 = ___size0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ___size0;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4 = V_0;
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0053;
	}

IL_0021:
	{
		bool L_5 = (bool)__this->get_m_clearToDefault_4();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_6 = ___size0;
		V_1 = (uint32_t)L_6;
		goto IL_0047;
	}

IL_0033:
	{
		uint32_t L_7 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(ShadowData_t3292552708 ));
		ShadowData_t3292552708  L_8 = V_2;
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_7, (ShadowData_t3292552708 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0047:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0033;
		}
	}

IL_0053:
	{
		uint32_t L_12 = ___size0;
		__this->set_m_count_3(L_12);
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m1753674295_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Resize_m1753674295(_thisAdjusted, ___size0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2185182087_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___size0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___size0;
		V_0 = (uint32_t)L_0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2282938620 * L_1 = ___cleanupDelegate1;
		uint32_t L_2 = V_0;
		ShadowData_t3292552708  L_3 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2282938620 *)L_1);
		((  void (*) (Cleanup_t2282938620 *, ShadowData_t3292552708 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2282938620 *)L_1, (ShadowData_t3292552708 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_4 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_7 = ___size0;
		VectorArray_1_Resize_m1753674295((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m2185182087_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Resize_m2185182087(_thisAdjusted, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4228707237_gshared (VectorArray_1_t3180793538 * __this, Cleanup_t2282938620 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2282938620 * L_0 = ___cleanupDelegate0;
		uint32_t L_1 = V_0;
		ShadowData_t3292552708  L_2 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2282938620 *)L_0);
		((  void (*) (Cleanup_t2282938620 *, ShadowData_t3292552708 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2282938620 *)L_0, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		VectorArray_1_Reset_m1022683040((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m4228707237_AdjustorThunk (RuntimeObject * __this, Cleanup_t2282938620 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Reset_m4228707237(_thisAdjusted, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1773783550_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___capacity0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2282938620 * L_0 = ___cleanupDelegate1;
		uint32_t L_1 = V_0;
		ShadowData_t3292552708  L_2 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2282938620 *)L_0);
		((  void (*) (Cleanup_t2282938620 *, ShadowData_t3292552708 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2282938620 *)L_0, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_6 = ___capacity0;
		VectorArray_1_Reset_m745455219((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m1773783550_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Reset_m1773783550(_thisAdjusted, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m440241172_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowData_t3292552708  L_2 = ___obj0;
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m440241172_AdjustorThunk (RuntimeObject * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Add_m440241172(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m763971520_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowDataU5BU5D_t3732338029* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m1746721651((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowDataU5BU5D_t3732338029*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m763971520_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Add_m763971520(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2665150655_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3180793538 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3551705192((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t3180793538 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m3591706602((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m2665150655_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Add_m2665150655(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1200770011_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	{
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowData_t3292552708  L_0 = ___obj0;
		uint32_t L_1 = VectorArray_1_AddUniqueUnchecked_m3405287901((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowData_t3292552708 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_1;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m1200770011_AdjustorThunk (RuntimeObject * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnique_m1200770011(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m551976501_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowDataU5BU5D_t3732338029* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m2694019118((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowDataU5BU5D_t3732338029*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m551976501_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnique_m551976501(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1745207193_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3180793538 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3551705192((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m25936702((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t3180793538 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m56355076((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m1745207193_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnique_m1745207193(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m240491754_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowData_t3292552708  L_2 = ___obj0;
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_1, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m240491754_AdjustorThunk (RuntimeObject * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m240491754(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1746721651_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		ShadowDataU5BU5D_t3732338029* L_1 = ___objs0;
		ShadowDataU5BU5D_t3732338029* L_2 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___count1;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (int64_t)(((int64_t)((int64_t)0))), (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))))), (int64_t)(((int64_t)((uint64_t)L_5))), /*hidden argument*/NULL);
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		uint32_t L_7 = ___count1;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m1746721651_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m1746721651(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m3591706602_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VectorArray_1_t3180793538 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3551705192((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		V_1 = (uint32_t)L_2;
		VectorArray_1_t3180793538 * L_3 = ___vec0;
		ShadowDataU5BU5D_t3732338029* L_4 = (ShadowDataU5BU5D_t3732338029*)L_3->get_m_array_1();
		VectorArray_1_t3180793538 * L_5 = ___vec0;
		uint32_t L_6 = (uint32_t)L_5->get_m_offset_2();
		ShadowDataU5BU5D_t3732338029* L_7 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_8 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_0;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((uint64_t)L_6))), (RuntimeArray *)(RuntimeArray *)L_7, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)))))))), (int64_t)(((int64_t)((uint64_t)L_10))), /*hidden argument*/NULL);
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		uint32_t L_12 = V_0;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)));
		uint32_t L_13 = V_1;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m3591706602_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m3591706602(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3405287901_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	{
		ShadowData_t3292552708  L_0 = ___obj0;
		bool L_1 = VectorArray_1_Contains_m4006413340((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowData_t3292552708 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ShadowData_t3292552708  L_2 = ___obj0;
		uint32_t L_3 = VectorArray_1_Add_m440241172((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowData_t3292552708 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m3405287901_AdjustorThunk (RuntimeObject * __this, ShadowData_t3292552708  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m3405287901(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m2694019118_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		goto IL_002b;
	}

IL_0009:
	{
		ShadowDataU5BU5D_t3732338029* L_0 = ___objs0;
		uint32_t L_1 = V_1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)L_1));
		ShadowData_t3292552708  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = VectorArray_1_AddUniqueUnchecked_m3405287901((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowData_t3292552708 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_2 = (uint32_t)L_4;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_7 = V_0;
		G_B4_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		uint32_t L_8 = V_2;
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ___count1;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m2694019118_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m2694019118(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m56355076_gshared (VectorArray_1_t3180793538 * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		VectorArray_1_t3180793538 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3551705192((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_2 = (uint32_t)L_1;
		goto IL_0031;
	}

IL_0010:
	{
		VectorArray_1_t3180793538 * L_2 = ___vec0;
		uint32_t L_3 = V_1;
		ShadowData_t3292552708  L_4 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)L_2, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		uint32_t L_5 = VectorArray_1_AddUniqueUnchecked_m3405287901((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (ShadowData_t3292552708 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_3 = (uint32_t)L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_3;
		if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_8 = V_0;
		G_B4_0 = L_8;
		goto IL_002c;
	}

IL_002b:
	{
		uint32_t L_9 = V_3;
		G_B4_0 = L_9;
	}

IL_002c:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_10 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_11) >= ((uint32_t)L_12))))
		{
			goto IL_0010;
		}
	}
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m56355076_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3180793538 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m56355076(_thisAdjusted, ___vec0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1536452945_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * G_B2_0 = NULL;
	VectorArray_1_t3180793538 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t3180793538 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t3180793538 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t3180793538 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t3180793538 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t3180793538 *)(G_B2_0));
	}

IL_001b:
	{
		VectorArray_1_Resize_m1753674295((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)G_B3_1, (uint32_t)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m1536452945_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Purge_m1536452945(_thisAdjusted, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1375082582_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___count0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * G_B2_0 = NULL;
	VectorArray_1_t3180793538 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t3180793538 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t3180793538 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t3180793538 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t3180793538 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t3180793538 *)(G_B2_0));
	}

IL_001b:
	{
		Cleanup_t2282938620 * L_4 = ___cleanupDelegate1;
		VectorArray_1_Resize_m2185182087((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)G_B3_1, (uint32_t)G_B3_0, (Cleanup_t2282938620 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m1375082582_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, Cleanup_t2282938620 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Purge_m1375082582(_thisAdjusted, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m2207735308_gshared (VectorArray_1_t3180793538 * __this, ShadowDataU5BU5D_t3732338029* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___count2;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		ShadowDataU5BU5D_t3732338029* L_2 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		ShadowDataU5BU5D_t3732338029* L_4 = ___destination0;
		int32_t L_5 = ___destinationStart1;
		uint32_t* L_6 = ___count2;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)L_3))), (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((int64_t)L_5))), (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_6)))))))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void VectorArray_1_CopyTo_m2207735308_AdjustorThunk (RuntimeObject * __this, ShadowDataU5BU5D_t3732338029* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_CopyTo_m2207735308(_thisAdjusted, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2415719283_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorArray_1_Swap_m2415719283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___first0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = ___second1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, (String_t*)_stringLiteral1214352242, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, VectorArray_1_Swap_m2415719283_RuntimeMethod_var);
	}

IL_0023:
	{
		uint32_t L_5 = ___first0;
		uint32_t L_6 = ___second1;
		VectorArray_1_SwapUnchecked_m1605061494((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_5, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}
}
extern "C"  void VectorArray_1_Swap_m2415719283_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Swap_m2415719283(_thisAdjusted, ___first0, ___second1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m1605061494_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	ShadowData_t3292552708  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		uint32_t L_0 = ___first0;
		ShadowData_t3292552708  L_1 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (ShadowData_t3292552708 )L_1;
		uint32_t L_2 = ___first0;
		uint32_t L_3 = ___second1;
		ShadowData_t3292552708  L_4 = VectorArray_1_get_Item_m2880193182((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_2, (ShadowData_t3292552708 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_5 = ___second1;
		ShadowData_t3292552708  L_6 = V_0;
		VectorArray_1_set_Item_m369920716((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t)L_5, (ShadowData_t3292552708 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
extern "C"  void VectorArray_1_SwapUnchecked_m1605061494_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_SwapUnchecked_m1605061494(_thisAdjusted, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowDataU5BU5D_t3732338029* VectorArray_1_AsArray_m3724052027_gshared (VectorArray_1_t3180793538 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___offset0;
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		uint32_t* L_2 = ___count1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		ShadowDataU5BU5D_t3732338029* L_4 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		return L_4;
	}
}
extern "C"  ShadowDataU5BU5D_t3732338029* VectorArray_1_AsArray_m3724052027_AdjustorThunk (RuntimeObject * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_AsArray_m3724052027(_thisAdjusted, ___offset0, ___count1, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowData_t3292552708  VectorArray_1_get_Item_m2880193182_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		NullCheck(L_0);
		uintptr_t L_3 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))));
		ShadowData_t3292552708  L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
extern "C"  ShadowData_t3292552708  VectorArray_1_get_Item_m2880193182_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_get_Item_m2880193182(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m369920716_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___index0, ShadowData_t3292552708  ___value1, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		ShadowData_t3292552708  L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>((((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))), (ShadowData_t3292552708 )L_3);
		return;
	}
}
extern "C"  void VectorArray_1_set_Item_m369920716_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, ShadowData_t3292552708  ___value1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_set_Item_m369920716(_thisAdjusted, ___index0, ___value1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m3551705192_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		return L_0;
	}
}
extern "C"  uint32_t VectorArray_1_Count_m3551705192_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Count_m3551705192(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m849202603_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityTotal_m849202603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_CapacityTotal_m849202603(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m3806589459_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1)), (int32_t)L_2));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityAvailable_m3806589459_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_CapacityAvailable_m3806589459(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m3440120656_gshared (VectorArray_1_t3180793538 * __this, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		((  void (*) (RuntimeObject * /* static, unused */, ShadowDataU5BU5D_t3732338029*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)(NULL /*static, unused*/, (ShadowDataU5BU5D_t3732338029*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m3440120656_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Sort_m3440120656(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m657619067_gshared (VectorArray_1_t3180793538 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		RuntimeObject* L_3 = ___comparer0;
		((  void (*) (RuntimeObject * /* static, unused */, ShadowDataU5BU5D_t3732338029*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(NULL /*static, unused*/, (ShadowDataU5BU5D_t3732338029*)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m657619067_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	VectorArray_1_Sort_m657619067(_thisAdjusted, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m3459459908_gshared (VectorArray_1_t3180793538 * __this, uint32_t* ___idx0, ShadowData_t3292552708 * ___designator1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___idx0;
		*((int32_t*)(L_0)) = (int32_t)0;
		goto IL_003a;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		EqualityComparer_1_t1462325044 * L_1 = ((  EqualityComparer_1_t1462325044 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ShadowDataU5BU5D_t3732338029* L_2 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t* L_4 = ___idx0;
		NullCheck(L_2);
		uintptr_t L_5 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(*((uint32_t*)L_4))))));
		ShadowData_t3292552708  L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ShadowData_t3292552708 * L_7 = ___designator1;
		NullCheck((EqualityComparer_1_t1462325044 *)L_1);
		bool L_8 = VirtFuncInvoker2< bool, ShadowData_t3292552708 , ShadowData_t3292552708  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowData>::Equals(!0,!0) */, (EqualityComparer_1_t1462325044 *)L_1, (ShadowData_t3292552708 )L_6, (ShadowData_t3292552708 )(*(ShadowData_t3292552708 *)L_7));
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		uint32_t* L_9 = ___idx0;
		uint32_t* L_10 = ___idx0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_10)), (int32_t)1));
	}

IL_003a:
	{
		uint32_t* L_11 = ___idx0;
		uint32_t L_12 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)(*((uint32_t*)L_11))) >= ((uint32_t)L_12))))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t* L_13 = ___idx0;
		*((int32_t*)(L_13)) = (int32_t)(-1);
		return (bool)0;
	}
}
extern "C"  bool VectorArray_1_FindFirst_m3459459908_AdjustorThunk (RuntimeObject * __this, uint32_t* ___idx0, ShadowData_t3292552708 * ___designator1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_FindFirst_m3459459908(_thisAdjusted, ___idx0, ___designator1, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m4006413340_gshared (VectorArray_1_t3180793538 * __this, ShadowData_t3292552708  ___designator0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = VectorArray_1_FindFirst_m3459459908((VectorArray_1_t3180793538 *)(VectorArray_1_t3180793538 *)__this, (uint32_t*)(uint32_t*)(&V_0), (ShadowData_t3292552708 *)(ShadowData_t3292552708 *)(&___designator0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_0;
	}
}
extern "C"  bool VectorArray_1_Contains_m4006413340_AdjustorThunk (RuntimeObject * __this, ShadowData_t3292552708  ___designator0, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Contains_m4006413340(_thisAdjusted, ___designator0, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowData>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t3180793538  VectorArray_1_Subrange_m40172864_gshared (VectorArray_1_t3180793538 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		ShadowDataU5BU5D_t3732338029* L_0 = (ShadowDataU5BU5D_t3732338029*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___offset0;
		uint32_t L_3 = ___count1;
		bool L_4 = (bool)__this->get_m_clearToDefault_4();
		VectorArray_1_t3180793538  L_5;
		memset(&L_5, 0, sizeof(L_5));
		VectorArray_1__ctor_m737882689((&L_5), (ShadowDataU5BU5D_t3732338029*)L_0, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (uint32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}
}
extern "C"  VectorArray_1_t3180793538  VectorArray_1_Subrange_m40172864_AdjustorThunk (RuntimeObject * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3180793538 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3180793538 *>(__this + 1);
	return VectorArray_1_Subrange_m40172864(_thisAdjusted, ___offset0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m2109433901_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___capacity0;
		ShadowPayloadU5BU5D_t2280176669* L_1 = (ShadowPayloadU5BU5D_t2280176669*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_0)));
		__this->set_m_array_1(L_1);
		__this->set_m_offset_2(0);
		uint32_t L_2 = ___capacity0;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault1;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m2109433901_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1__ctor_m2109433901(_thisAdjusted, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m4086448236_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = ___array0;
		__this->set_m_array_1(L_0);
		uint32_t L_1 = ___offset1;
		__this->set_m_offset_2(L_1);
		uint32_t L_2 = ___count2;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault3;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m4086448236_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1__ctor_m4086448236(_thisAdjusted, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m753747621_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	{
		VectorArray_1_t4230916562 * L_0 = ___vec0;
		ShadowPayloadU5BU5D_t2280176669* L_1 = (ShadowPayloadU5BU5D_t2280176669*)L_0->get_m_array_1();
		__this->set_m_array_1(L_1);
		VectorArray_1_t4230916562 * L_2 = ___vec0;
		uint32_t L_3 = (uint32_t)L_2->get_m_offset_2();
		uint32_t L_4 = ___offset1;
		__this->set_m_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)));
		uint32_t L_5 = ___count2;
		__this->set_m_count_3(L_5);
		VectorArray_1_t4230916562 * L_6 = ___vec0;
		bool L_7 = (bool)L_6->get_m_clearToDefault_4();
		__this->set_m_clearToDefault_4(L_7);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m753747621_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t4230916562 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1__ctor_m753747621(_thisAdjusted, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1403602145_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	ShadowPayload_t47708436  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = (bool)__this->get_m_clearToDefault_4();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = (uint32_t)0;
		goto IL_0026;
	}

IL_0012:
	{
		uint32_t L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ShadowPayload_t47708436 ));
		ShadowPayload_t47708436  L_2 = V_1;
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0012;
		}
	}

IL_0032:
	{
		__this->set_m_count_3(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m1403602145_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Reset_m1403602145(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4050438360_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___capacity0;
		if ((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))))) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))))))))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_3 = ___capacity0;
		ShadowPayloadU5BU5D_t2280176669* L_4 = (ShadowPayloadU5BU5D_t2280176669*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_3)));
		__this->set_m_array_1(L_4);
		__this->set_m_offset_2(0);
		__this->set_m_count_3(0);
		goto IL_003d;
	}

IL_0037:
	{
		VectorArray_1_Reset_m1403602145((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	}

IL_003d:
	{
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m4050438360_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Reset_m4050438360(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m2924090387_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	ShadowPayloadU5BU5D_t2280176669* V_0 = NULL;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		uint32_t L_2 = ___capacity0;
		ShadowPayloadU5BU5D_t2280176669* L_3 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		NullCheck(L_3);
		if ((((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2))))))))) > ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		uint32_t L_4 = (uint32_t)__this->get_m_count_3();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_5 = ___capacity0;
		ShadowPayloadU5BU5D_t2280176669* L_6 = (ShadowPayloadU5BU5D_t2280176669*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_5)));
		__this->set_m_array_1(L_6);
		goto IL_006e;
	}

IL_003c:
	{
		uint32_t L_7 = (uint32_t)__this->get_m_count_3();
		uint32_t L_8 = ___capacity0;
		ShadowPayloadU5BU5D_t2280176669* L_9 = (ShadowPayloadU5BU5D_t2280176669*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))));
		V_0 = (ShadowPayloadU5BU5D_t2280176669*)L_9;
		ShadowPayloadU5BU5D_t2280176669* L_10 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_11 = (uint32_t)__this->get_m_offset_2();
		ShadowPayloadU5BU5D_t2280176669* L_12 = V_0;
		uint32_t L_13 = (uint32_t)__this->get_m_count_3();
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, (int64_t)(((int64_t)((uint64_t)L_11))), (RuntimeArray *)(RuntimeArray *)L_12, (int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_13))), /*hidden argument*/NULL);
		ShadowPayloadU5BU5D_t2280176669* L_14 = V_0;
		__this->set_m_array_1(L_14);
	}

IL_006e:
	{
		__this->set_m_offset_2(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reserve_m2924090387_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Reserve_m2924090387(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1562788781_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ShadowPayload_t47708436  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		uint32_t L_0 = ___size0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ___size0;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4 = V_0;
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0053;
	}

IL_0021:
	{
		bool L_5 = (bool)__this->get_m_clearToDefault_4();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_6 = ___size0;
		V_1 = (uint32_t)L_6;
		goto IL_0047;
	}

IL_0033:
	{
		uint32_t L_7 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(ShadowPayload_t47708436 ));
		ShadowPayload_t47708436  L_8 = V_2;
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_7, (ShadowPayload_t47708436 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0047:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0033;
		}
	}

IL_0053:
	{
		uint32_t L_12 = ___size0;
		__this->set_m_count_3(L_12);
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m1562788781_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Resize_m1562788781(_thisAdjusted, ___size0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m342595315_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___size0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___size0;
		V_0 = (uint32_t)L_0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t3333061644 * L_1 = ___cleanupDelegate1;
		uint32_t L_2 = V_0;
		ShadowPayload_t47708436  L_3 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t3333061644 *)L_1);
		((  void (*) (Cleanup_t3333061644 *, ShadowPayload_t47708436 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t3333061644 *)L_1, (ShadowPayload_t47708436 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_4 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_7 = ___size0;
		VectorArray_1_Resize_m1562788781((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m342595315_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Resize_m342595315(_thisAdjusted, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m2143903856_gshared (VectorArray_1_t4230916562 * __this, Cleanup_t3333061644 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t3333061644 * L_0 = ___cleanupDelegate0;
		uint32_t L_1 = V_0;
		ShadowPayload_t47708436  L_2 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t3333061644 *)L_0);
		((  void (*) (Cleanup_t3333061644 *, ShadowPayload_t47708436 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t3333061644 *)L_0, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		VectorArray_1_Reset_m1403602145((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m2143903856_AdjustorThunk (RuntimeObject * __this, Cleanup_t3333061644 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Reset_m2143903856(_thisAdjusted, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m1454145846_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___capacity0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t3333061644 * L_0 = ___cleanupDelegate1;
		uint32_t L_1 = V_0;
		ShadowPayload_t47708436  L_2 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t3333061644 *)L_0);
		((  void (*) (Cleanup_t3333061644 *, ShadowPayload_t47708436 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t3333061644 *)L_0, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_6 = ___capacity0;
		VectorArray_1_Reset_m4050438360((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m1454145846_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Reset_m1454145846(_thisAdjusted, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m747391496_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowPayload_t47708436  L_2 = ___obj0;
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m747391496_AdjustorThunk (RuntimeObject * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Add_m747391496(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1958430069_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowPayloadU5BU5D_t2280176669* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m865887845((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayloadU5BU5D_t2280176669*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m1958430069_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Add_m1958430069(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1159341500_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t4230916562 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m373745630((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t4230916562 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m1825983913((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m1159341500_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Add_m1159341500(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1922673595_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	{
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowPayload_t47708436  L_0 = ___obj0;
		uint32_t L_1 = VectorArray_1_AddUniqueUnchecked_m452643518((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayload_t47708436 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_1;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m1922673595_AdjustorThunk (RuntimeObject * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnique_m1922673595(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3519891531_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowPayloadU5BU5D_t2280176669* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m460063230((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayloadU5BU5D_t2280176669*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m3519891531_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnique_m3519891531(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m4243990619_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t4230916562 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m373745630((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m2924090387((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t4230916562 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m3533616093((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m4243990619_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnique_m4243990619(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m664358425_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowPayload_t47708436  L_2 = ___obj0;
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_1, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m664358425_AdjustorThunk (RuntimeObject * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m664358425(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m865887845_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		ShadowPayloadU5BU5D_t2280176669* L_1 = ___objs0;
		ShadowPayloadU5BU5D_t2280176669* L_2 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___count1;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (int64_t)(((int64_t)((int64_t)0))), (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))))), (int64_t)(((int64_t)((uint64_t)L_5))), /*hidden argument*/NULL);
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		uint32_t L_7 = ___count1;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m865887845_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m865887845(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1825983913_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VectorArray_1_t4230916562 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m373745630((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		V_1 = (uint32_t)L_2;
		VectorArray_1_t4230916562 * L_3 = ___vec0;
		ShadowPayloadU5BU5D_t2280176669* L_4 = (ShadowPayloadU5BU5D_t2280176669*)L_3->get_m_array_1();
		VectorArray_1_t4230916562 * L_5 = ___vec0;
		uint32_t L_6 = (uint32_t)L_5->get_m_offset_2();
		ShadowPayloadU5BU5D_t2280176669* L_7 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_8 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_0;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((uint64_t)L_6))), (RuntimeArray *)(RuntimeArray *)L_7, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)))))))), (int64_t)(((int64_t)((uint64_t)L_10))), /*hidden argument*/NULL);
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		uint32_t L_12 = V_0;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)));
		uint32_t L_13 = V_1;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m1825983913_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m1825983913(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m452643518_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	{
		ShadowPayload_t47708436  L_0 = ___obj0;
		bool L_1 = VectorArray_1_Contains_m1738173237((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayload_t47708436 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ShadowPayload_t47708436  L_2 = ___obj0;
		uint32_t L_3 = VectorArray_1_Add_m747391496((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayload_t47708436 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m452643518_AdjustorThunk (RuntimeObject * __this, ShadowPayload_t47708436  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m452643518(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m460063230_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		goto IL_002b;
	}

IL_0009:
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = ___objs0;
		uint32_t L_1 = V_1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)L_1));
		ShadowPayload_t47708436  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = VectorArray_1_AddUniqueUnchecked_m452643518((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayload_t47708436 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_2 = (uint32_t)L_4;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_7 = V_0;
		G_B4_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		uint32_t L_8 = V_2;
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ___count1;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m460063230_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m460063230(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3533616093_gshared (VectorArray_1_t4230916562 * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		VectorArray_1_t4230916562 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m373745630((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_2 = (uint32_t)L_1;
		goto IL_0031;
	}

IL_0010:
	{
		VectorArray_1_t4230916562 * L_2 = ___vec0;
		uint32_t L_3 = V_1;
		ShadowPayload_t47708436  L_4 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)L_2, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		uint32_t L_5 = VectorArray_1_AddUniqueUnchecked_m452643518((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (ShadowPayload_t47708436 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_3 = (uint32_t)L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_3;
		if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_8 = V_0;
		G_B4_0 = L_8;
		goto IL_002c;
	}

IL_002b:
	{
		uint32_t L_9 = V_3;
		G_B4_0 = L_9;
	}

IL_002c:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_10 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_11) >= ((uint32_t)L_12))))
		{
			goto IL_0010;
		}
	}
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m3533616093_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t4230916562 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m3533616093(_thisAdjusted, ___vec0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m762123161_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * G_B2_0 = NULL;
	VectorArray_1_t4230916562 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t4230916562 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t4230916562 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t4230916562 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t4230916562 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t4230916562 *)(G_B2_0));
	}

IL_001b:
	{
		VectorArray_1_Resize_m1562788781((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)G_B3_1, (uint32_t)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m762123161_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Purge_m762123161(_thisAdjusted, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m4125102779_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___count0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * G_B2_0 = NULL;
	VectorArray_1_t4230916562 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t4230916562 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t4230916562 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t4230916562 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t4230916562 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t4230916562 *)(G_B2_0));
	}

IL_001b:
	{
		Cleanup_t3333061644 * L_4 = ___cleanupDelegate1;
		VectorArray_1_Resize_m342595315((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)G_B3_1, (uint32_t)G_B3_0, (Cleanup_t3333061644 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m4125102779_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, Cleanup_t3333061644 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Purge_m4125102779(_thisAdjusted, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1058877697_gshared (VectorArray_1_t4230916562 * __this, ShadowPayloadU5BU5D_t2280176669* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___count2;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		ShadowPayloadU5BU5D_t2280176669* L_2 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		ShadowPayloadU5BU5D_t2280176669* L_4 = ___destination0;
		int32_t L_5 = ___destinationStart1;
		uint32_t* L_6 = ___count2;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)L_3))), (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((int64_t)L_5))), (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_6)))))))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void VectorArray_1_CopyTo_m1058877697_AdjustorThunk (RuntimeObject * __this, ShadowPayloadU5BU5D_t2280176669* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_CopyTo_m1058877697(_thisAdjusted, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2589726812_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorArray_1_Swap_m2589726812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___first0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = ___second1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, (String_t*)_stringLiteral1214352242, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, VectorArray_1_Swap_m2589726812_RuntimeMethod_var);
	}

IL_0023:
	{
		uint32_t L_5 = ___first0;
		uint32_t L_6 = ___second1;
		VectorArray_1_SwapUnchecked_m2877941854((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_5, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}
}
extern "C"  void VectorArray_1_Swap_m2589726812_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Swap_m2589726812(_thisAdjusted, ___first0, ___second1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m2877941854_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	ShadowPayload_t47708436  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		uint32_t L_0 = ___first0;
		ShadowPayload_t47708436  L_1 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (ShadowPayload_t47708436 )L_1;
		uint32_t L_2 = ___first0;
		uint32_t L_3 = ___second1;
		ShadowPayload_t47708436  L_4 = VectorArray_1_get_Item_m845590891((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_2, (ShadowPayload_t47708436 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_5 = ___second1;
		ShadowPayload_t47708436  L_6 = V_0;
		VectorArray_1_set_Item_m4064310769((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t)L_5, (ShadowPayload_t47708436 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
extern "C"  void VectorArray_1_SwapUnchecked_m2877941854_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_SwapUnchecked_m2877941854(_thisAdjusted, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowPayloadU5BU5D_t2280176669* VectorArray_1_AsArray_m2012037387_gshared (VectorArray_1_t4230916562 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___offset0;
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		uint32_t* L_2 = ___count1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		ShadowPayloadU5BU5D_t2280176669* L_4 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		return L_4;
	}
}
extern "C"  ShadowPayloadU5BU5D_t2280176669* VectorArray_1_AsArray_m2012037387_AdjustorThunk (RuntimeObject * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_AsArray_m2012037387(_thisAdjusted, ___offset0, ___count1, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowPayload_t47708436  VectorArray_1_get_Item_m845590891_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		NullCheck(L_0);
		uintptr_t L_3 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))));
		ShadowPayload_t47708436  L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
extern "C"  ShadowPayload_t47708436  VectorArray_1_get_Item_m845590891_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_get_Item_m845590891(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m4064310769_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___index0, ShadowPayload_t47708436  ___value1, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		ShadowPayload_t47708436  L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>((((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))), (ShadowPayload_t47708436 )L_3);
		return;
	}
}
extern "C"  void VectorArray_1_set_Item_m4064310769_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, ShadowPayload_t47708436  ___value1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_set_Item_m4064310769(_thisAdjusted, ___index0, ___value1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m373745630_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		return L_0;
	}
}
extern "C"  uint32_t VectorArray_1_Count_m373745630_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Count_m373745630(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m2586821475_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityTotal_m2586821475_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_CapacityTotal_m2586821475(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m972472017_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1)), (int32_t)L_2));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityAvailable_m972472017_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_CapacityAvailable_m972472017(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m1990538546_gshared (VectorArray_1_t4230916562 * __this, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		((  void (*) (RuntimeObject * /* static, unused */, ShadowPayloadU5BU5D_t2280176669*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)(NULL /*static, unused*/, (ShadowPayloadU5BU5D_t2280176669*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m1990538546_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Sort_m1990538546(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m1909068720_gshared (VectorArray_1_t4230916562 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		RuntimeObject* L_3 = ___comparer0;
		((  void (*) (RuntimeObject * /* static, unused */, ShadowPayloadU5BU5D_t2280176669*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(NULL /*static, unused*/, (ShadowPayloadU5BU5D_t2280176669*)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m1909068720_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	VectorArray_1_Sort_m1909068720(_thisAdjusted, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m2499106082_gshared (VectorArray_1_t4230916562 * __this, uint32_t* ___idx0, ShadowPayload_t47708436 * ___designator1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___idx0;
		*((int32_t*)(L_0)) = (int32_t)0;
		goto IL_003a;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		EqualityComparer_1_t2512448068 * L_1 = ((  EqualityComparer_1_t2512448068 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ShadowPayloadU5BU5D_t2280176669* L_2 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t* L_4 = ___idx0;
		NullCheck(L_2);
		uintptr_t L_5 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(*((uint32_t*)L_4))))));
		ShadowPayload_t47708436  L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ShadowPayload_t47708436 * L_7 = ___designator1;
		NullCheck((EqualityComparer_1_t2512448068 *)L_1);
		bool L_8 = VirtFuncInvoker2< bool, ShadowPayload_t47708436 , ShadowPayload_t47708436  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Equals(!0,!0) */, (EqualityComparer_1_t2512448068 *)L_1, (ShadowPayload_t47708436 )L_6, (ShadowPayload_t47708436 )(*(ShadowPayload_t47708436 *)L_7));
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		uint32_t* L_9 = ___idx0;
		uint32_t* L_10 = ___idx0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_10)), (int32_t)1));
	}

IL_003a:
	{
		uint32_t* L_11 = ___idx0;
		uint32_t L_12 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)(*((uint32_t*)L_11))) >= ((uint32_t)L_12))))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t* L_13 = ___idx0;
		*((int32_t*)(L_13)) = (int32_t)(-1);
		return (bool)0;
	}
}
extern "C"  bool VectorArray_1_FindFirst_m2499106082_AdjustorThunk (RuntimeObject * __this, uint32_t* ___idx0, ShadowPayload_t47708436 * ___designator1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_FindFirst_m2499106082(_thisAdjusted, ___idx0, ___designator1, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m1738173237_gshared (VectorArray_1_t4230916562 * __this, ShadowPayload_t47708436  ___designator0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = VectorArray_1_FindFirst_m2499106082((VectorArray_1_t4230916562 *)(VectorArray_1_t4230916562 *)__this, (uint32_t*)(uint32_t*)(&V_0), (ShadowPayload_t47708436 *)(ShadowPayload_t47708436 *)(&___designator0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_0;
	}
}
extern "C"  bool VectorArray_1_Contains_m1738173237_AdjustorThunk (RuntimeObject * __this, ShadowPayload_t47708436  ___designator0, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Contains_m1738173237(_thisAdjusted, ___designator0, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowPayload>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t4230916562  VectorArray_1_Subrange_m2450834184_gshared (VectorArray_1_t4230916562 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		ShadowPayloadU5BU5D_t2280176669* L_0 = (ShadowPayloadU5BU5D_t2280176669*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___offset0;
		uint32_t L_3 = ___count1;
		bool L_4 = (bool)__this->get_m_clearToDefault_4();
		VectorArray_1_t4230916562  L_5;
		memset(&L_5, 0, sizeof(L_5));
		VectorArray_1__ctor_m4086448236((&L_5), (ShadowPayloadU5BU5D_t2280176669*)L_0, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (uint32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}
}
extern "C"  VectorArray_1_t4230916562  VectorArray_1_Subrange_m2450834184_AdjustorThunk (RuntimeObject * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t4230916562 * _thisAdjusted = reinterpret_cast<VectorArray_1_t4230916562 *>(__this + 1);
	return VectorArray_1_Subrange_m2450834184(_thisAdjusted, ___offset0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1286009711_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___capacity0;
		ShadowRequestU5BU5D_t1481899023* L_1 = (ShadowRequestU5BU5D_t1481899023*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_0)));
		__this->set_m_array_1(L_1);
		__this->set_m_offset_2(0);
		uint32_t L_2 = ___capacity0;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault1;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m1286009711_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1__ctor_m1286009711(_thisAdjusted, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1116332468_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = ___array0;
		__this->set_m_array_1(L_0);
		uint32_t L_1 = ___offset1;
		__this->set_m_offset_2(L_1);
		uint32_t L_2 = ___count2;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault3;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m1116332468_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1__ctor_m1116332468(_thisAdjusted, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m2871533253_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3176195912 * L_0 = ___vec0;
		ShadowRequestU5BU5D_t1481899023* L_1 = (ShadowRequestU5BU5D_t1481899023*)L_0->get_m_array_1();
		__this->set_m_array_1(L_1);
		VectorArray_1_t3176195912 * L_2 = ___vec0;
		uint32_t L_3 = (uint32_t)L_2->get_m_offset_2();
		uint32_t L_4 = ___offset1;
		__this->set_m_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)));
		uint32_t L_5 = ___count2;
		__this->set_m_count_3(L_5);
		VectorArray_1_t3176195912 * L_6 = ___vec0;
		bool L_7 = (bool)L_6->get_m_clearToDefault_4();
		__this->set_m_clearToDefault_4(L_7);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m2871533253_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3176195912 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1__ctor_m2871533253(_thisAdjusted, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3940317685_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	ShadowRequest_t3287955082  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = (bool)__this->get_m_clearToDefault_4();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = (uint32_t)0;
		goto IL_0026;
	}

IL_0012:
	{
		uint32_t L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ShadowRequest_t3287955082 ));
		ShadowRequest_t3287955082  L_2 = V_1;
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0012;
		}
	}

IL_0032:
	{
		__this->set_m_count_3(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m3940317685_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Reset_m3940317685(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m2621756481_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___capacity0;
		if ((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))))) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))))))))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_3 = ___capacity0;
		ShadowRequestU5BU5D_t1481899023* L_4 = (ShadowRequestU5BU5D_t1481899023*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_3)));
		__this->set_m_array_1(L_4);
		__this->set_m_offset_2(0);
		__this->set_m_count_3(0);
		goto IL_003d;
	}

IL_0037:
	{
		VectorArray_1_Reset_m3940317685((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	}

IL_003d:
	{
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m2621756481_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Reset_m2621756481(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m166997880_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	ShadowRequestU5BU5D_t1481899023* V_0 = NULL;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		uint32_t L_2 = ___capacity0;
		ShadowRequestU5BU5D_t1481899023* L_3 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		NullCheck(L_3);
		if ((((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2))))))))) > ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		uint32_t L_4 = (uint32_t)__this->get_m_count_3();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_5 = ___capacity0;
		ShadowRequestU5BU5D_t1481899023* L_6 = (ShadowRequestU5BU5D_t1481899023*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_5)));
		__this->set_m_array_1(L_6);
		goto IL_006e;
	}

IL_003c:
	{
		uint32_t L_7 = (uint32_t)__this->get_m_count_3();
		uint32_t L_8 = ___capacity0;
		ShadowRequestU5BU5D_t1481899023* L_9 = (ShadowRequestU5BU5D_t1481899023*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))));
		V_0 = (ShadowRequestU5BU5D_t1481899023*)L_9;
		ShadowRequestU5BU5D_t1481899023* L_10 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_11 = (uint32_t)__this->get_m_offset_2();
		ShadowRequestU5BU5D_t1481899023* L_12 = V_0;
		uint32_t L_13 = (uint32_t)__this->get_m_count_3();
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, (int64_t)(((int64_t)((uint64_t)L_11))), (RuntimeArray *)(RuntimeArray *)L_12, (int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_13))), /*hidden argument*/NULL);
		ShadowRequestU5BU5D_t1481899023* L_14 = V_0;
		__this->set_m_array_1(L_14);
	}

IL_006e:
	{
		__this->set_m_offset_2(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reserve_m166997880_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Reserve_m166997880(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2623477506_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ShadowRequest_t3287955082  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		uint32_t L_0 = ___size0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ___size0;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4 = V_0;
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0053;
	}

IL_0021:
	{
		bool L_5 = (bool)__this->get_m_clearToDefault_4();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_6 = ___size0;
		V_1 = (uint32_t)L_6;
		goto IL_0047;
	}

IL_0033:
	{
		uint32_t L_7 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(ShadowRequest_t3287955082 ));
		ShadowRequest_t3287955082  L_8 = V_2;
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_7, (ShadowRequest_t3287955082 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0047:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0033;
		}
	}

IL_0053:
	{
		uint32_t L_12 = ___size0;
		__this->set_m_count_3(L_12);
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m2623477506_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Resize_m2623477506(_thisAdjusted, ___size0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m1263573943_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___size0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___size0;
		V_0 = (uint32_t)L_0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2278340994 * L_1 = ___cleanupDelegate1;
		uint32_t L_2 = V_0;
		ShadowRequest_t3287955082  L_3 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2278340994 *)L_1);
		((  void (*) (Cleanup_t2278340994 *, ShadowRequest_t3287955082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2278340994 *)L_1, (ShadowRequest_t3287955082 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_4 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_7 = ___size0;
		VectorArray_1_Resize_m2623477506((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m1263573943_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Resize_m1263573943(_thisAdjusted, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3951115443_gshared (VectorArray_1_t3176195912 * __this, Cleanup_t2278340994 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2278340994 * L_0 = ___cleanupDelegate0;
		uint32_t L_1 = V_0;
		ShadowRequest_t3287955082  L_2 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2278340994 *)L_0);
		((  void (*) (Cleanup_t2278340994 *, ShadowRequest_t3287955082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2278340994 *)L_0, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		VectorArray_1_Reset_m3940317685((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m3951115443_AdjustorThunk (RuntimeObject * __this, Cleanup_t2278340994 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Reset_m3951115443(_thisAdjusted, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m819409922_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___capacity0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t2278340994 * L_0 = ___cleanupDelegate1;
		uint32_t L_1 = V_0;
		ShadowRequest_t3287955082  L_2 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t2278340994 *)L_0);
		((  void (*) (Cleanup_t2278340994 *, ShadowRequest_t3287955082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t2278340994 *)L_0, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_6 = ___capacity0;
		VectorArray_1_Reset_m2621756481((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m819409922_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Reset_m819409922(_thisAdjusted, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2240434443_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowRequest_t3287955082  L_2 = ___obj0;
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m2240434443_AdjustorThunk (RuntimeObject * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Add_m2240434443(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m1139820620_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowRequestU5BU5D_t1481899023* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m647471981((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequestU5BU5D_t1481899023*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m1139820620_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Add_m1139820620(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m2969077033_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3176195912 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3601652030((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t3176195912 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m853319992((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m2969077033_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Add_m2969077033(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3822133748_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	{
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowRequest_t3287955082  L_0 = ___obj0;
		uint32_t L_1 = VectorArray_1_AddUniqueUnchecked_m1241539512((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequest_t3287955082 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_1;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m3822133748_AdjustorThunk (RuntimeObject * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnique_m3822133748(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m3673654996_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ShadowRequestU5BU5D_t1481899023* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m914057377((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequestU5BU5D_t1481899023*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m3673654996_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnique_m3673654996(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m189213882_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t3176195912 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3601652030((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m166997880((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t3176195912 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m165184778((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m189213882_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnique_m189213882(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m895097166_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		ShadowRequest_t3287955082  L_2 = ___obj0;
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_1, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m895097166_AdjustorThunk (RuntimeObject * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m895097166(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m647471981_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		ShadowRequestU5BU5D_t1481899023* L_1 = ___objs0;
		ShadowRequestU5BU5D_t1481899023* L_2 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___count1;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (int64_t)(((int64_t)((int64_t)0))), (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))))), (int64_t)(((int64_t)((uint64_t)L_5))), /*hidden argument*/NULL);
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		uint32_t L_7 = ___count1;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m647471981_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m647471981(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m853319992_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VectorArray_1_t3176195912 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3601652030((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		V_1 = (uint32_t)L_2;
		VectorArray_1_t3176195912 * L_3 = ___vec0;
		ShadowRequestU5BU5D_t1481899023* L_4 = (ShadowRequestU5BU5D_t1481899023*)L_3->get_m_array_1();
		VectorArray_1_t3176195912 * L_5 = ___vec0;
		uint32_t L_6 = (uint32_t)L_5->get_m_offset_2();
		ShadowRequestU5BU5D_t1481899023* L_7 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_8 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_0;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((uint64_t)L_6))), (RuntimeArray *)(RuntimeArray *)L_7, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)))))))), (int64_t)(((int64_t)((uint64_t)L_10))), /*hidden argument*/NULL);
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		uint32_t L_12 = V_0;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)));
		uint32_t L_13 = V_1;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m853319992_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m853319992(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m1241539512_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	{
		ShadowRequest_t3287955082  L_0 = ___obj0;
		bool L_1 = VectorArray_1_Contains_m163439344((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequest_t3287955082 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ShadowRequest_t3287955082  L_2 = ___obj0;
		uint32_t L_3 = VectorArray_1_Add_m2240434443((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequest_t3287955082 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m1241539512_AdjustorThunk (RuntimeObject * __this, ShadowRequest_t3287955082  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m1241539512(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m914057377_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		goto IL_002b;
	}

IL_0009:
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = ___objs0;
		uint32_t L_1 = V_1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)L_1));
		ShadowRequest_t3287955082  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = VectorArray_1_AddUniqueUnchecked_m1241539512((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequest_t3287955082 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_2 = (uint32_t)L_4;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_7 = V_0;
		G_B4_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		uint32_t L_8 = V_2;
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ___count1;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m914057377_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m914057377(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m165184778_gshared (VectorArray_1_t3176195912 * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		VectorArray_1_t3176195912 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m3601652030((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_2 = (uint32_t)L_1;
		goto IL_0031;
	}

IL_0010:
	{
		VectorArray_1_t3176195912 * L_2 = ___vec0;
		uint32_t L_3 = V_1;
		ShadowRequest_t3287955082  L_4 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)L_2, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		uint32_t L_5 = VectorArray_1_AddUniqueUnchecked_m1241539512((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (ShadowRequest_t3287955082 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_3 = (uint32_t)L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_3;
		if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_8 = V_0;
		G_B4_0 = L_8;
		goto IL_002c;
	}

IL_002b:
	{
		uint32_t L_9 = V_3;
		G_B4_0 = L_9;
	}

IL_002c:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_10 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_11) >= ((uint32_t)L_12))))
		{
			goto IL_0010;
		}
	}
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m165184778_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t3176195912 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m165184778(_thisAdjusted, ___vec0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m4024545186_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * G_B2_0 = NULL;
	VectorArray_1_t3176195912 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t3176195912 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t3176195912 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t3176195912 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t3176195912 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t3176195912 *)(G_B2_0));
	}

IL_001b:
	{
		VectorArray_1_Resize_m2623477506((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)G_B3_1, (uint32_t)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m4024545186_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Purge_m4024545186(_thisAdjusted, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m2696644222_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___count0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * G_B2_0 = NULL;
	VectorArray_1_t3176195912 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t3176195912 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t3176195912 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t3176195912 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t3176195912 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t3176195912 *)(G_B2_0));
	}

IL_001b:
	{
		Cleanup_t2278340994 * L_4 = ___cleanupDelegate1;
		VectorArray_1_Resize_m1263573943((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)G_B3_1, (uint32_t)G_B3_0, (Cleanup_t2278340994 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m2696644222_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, Cleanup_t2278340994 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Purge_m2696644222(_thisAdjusted, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1559315826_gshared (VectorArray_1_t3176195912 * __this, ShadowRequestU5BU5D_t1481899023* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___count2;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		ShadowRequestU5BU5D_t1481899023* L_2 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		ShadowRequestU5BU5D_t1481899023* L_4 = ___destination0;
		int32_t L_5 = ___destinationStart1;
		uint32_t* L_6 = ___count2;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)L_3))), (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((int64_t)L_5))), (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_6)))))))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void VectorArray_1_CopyTo_m1559315826_AdjustorThunk (RuntimeObject * __this, ShadowRequestU5BU5D_t1481899023* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_CopyTo_m1559315826(_thisAdjusted, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m2590245426_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorArray_1_Swap_m2590245426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___first0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = ___second1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, (String_t*)_stringLiteral1214352242, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, VectorArray_1_Swap_m2590245426_RuntimeMethod_var);
	}

IL_0023:
	{
		uint32_t L_5 = ___first0;
		uint32_t L_6 = ___second1;
		VectorArray_1_SwapUnchecked_m3661532069((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_5, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}
}
extern "C"  void VectorArray_1_Swap_m2590245426_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Swap_m2590245426(_thisAdjusted, ___first0, ___second1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m3661532069_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	ShadowRequest_t3287955082  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		uint32_t L_0 = ___first0;
		ShadowRequest_t3287955082  L_1 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (ShadowRequest_t3287955082 )L_1;
		uint32_t L_2 = ___first0;
		uint32_t L_3 = ___second1;
		ShadowRequest_t3287955082  L_4 = VectorArray_1_get_Item_m2476100526((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_2, (ShadowRequest_t3287955082 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_5 = ___second1;
		ShadowRequest_t3287955082  L_6 = V_0;
		VectorArray_1_set_Item_m560198370((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t)L_5, (ShadowRequest_t3287955082 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
extern "C"  void VectorArray_1_SwapUnchecked_m3661532069_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_SwapUnchecked_m3661532069(_thisAdjusted, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR ShadowRequestU5BU5D_t1481899023* VectorArray_1_AsArray_m3720280714_gshared (VectorArray_1_t3176195912 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___offset0;
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		uint32_t* L_2 = ___count1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		ShadowRequestU5BU5D_t1481899023* L_4 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		return L_4;
	}
}
extern "C"  ShadowRequestU5BU5D_t1481899023* VectorArray_1_AsArray_m3720280714_AdjustorThunk (RuntimeObject * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_AsArray_m3720280714(_thisAdjusted, ___offset0, ___count1, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ShadowRequest_t3287955082  VectorArray_1_get_Item_m2476100526_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		NullCheck(L_0);
		uintptr_t L_3 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))));
		ShadowRequest_t3287955082  L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
extern "C"  ShadowRequest_t3287955082  VectorArray_1_get_Item_m2476100526_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_get_Item_m2476100526(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m560198370_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___index0, ShadowRequest_t3287955082  ___value1, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		ShadowRequest_t3287955082  L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>((((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))), (ShadowRequest_t3287955082 )L_3);
		return;
	}
}
extern "C"  void VectorArray_1_set_Item_m560198370_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, ShadowRequest_t3287955082  ___value1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_set_Item_m560198370(_thisAdjusted, ___index0, ___value1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m3601652030_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		return L_0;
	}
}
extern "C"  uint32_t VectorArray_1_Count_m3601652030_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Count_m3601652030(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m3632711544_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityTotal_m3632711544_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_CapacityTotal_m3632711544(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m258079667_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1)), (int32_t)L_2));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityAvailable_m258079667_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_CapacityAvailable_m258079667(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m4286709035_gshared (VectorArray_1_t3176195912 * __this, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		((  void (*) (RuntimeObject * /* static, unused */, ShadowRequestU5BU5D_t1481899023*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)(NULL /*static, unused*/, (ShadowRequestU5BU5D_t1481899023*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m4286709035_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Sort_m4286709035(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m552575779_gshared (VectorArray_1_t3176195912 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		RuntimeObject* L_3 = ___comparer0;
		((  void (*) (RuntimeObject * /* static, unused */, ShadowRequestU5BU5D_t1481899023*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(NULL /*static, unused*/, (ShadowRequestU5BU5D_t1481899023*)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m552575779_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	VectorArray_1_Sort_m552575779(_thisAdjusted, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m1139300539_gshared (VectorArray_1_t3176195912 * __this, uint32_t* ___idx0, ShadowRequest_t3287955082 * ___designator1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___idx0;
		*((int32_t*)(L_0)) = (int32_t)0;
		goto IL_003a;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		EqualityComparer_1_t1457727418 * L_1 = ((  EqualityComparer_1_t1457727418 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		ShadowRequestU5BU5D_t1481899023* L_2 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t* L_4 = ___idx0;
		NullCheck(L_2);
		uintptr_t L_5 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(*((uint32_t*)L_4))))));
		ShadowRequest_t3287955082  L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ShadowRequest_t3287955082 * L_7 = ___designator1;
		NullCheck((EqualityComparer_1_t1457727418 *)L_1);
		bool L_8 = VirtFuncInvoker2< bool, ShadowRequest_t3287955082 , ShadowRequest_t3287955082  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Equals(!0,!0) */, (EqualityComparer_1_t1457727418 *)L_1, (ShadowRequest_t3287955082 )L_6, (ShadowRequest_t3287955082 )(*(ShadowRequest_t3287955082 *)L_7));
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		uint32_t* L_9 = ___idx0;
		uint32_t* L_10 = ___idx0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_10)), (int32_t)1));
	}

IL_003a:
	{
		uint32_t* L_11 = ___idx0;
		uint32_t L_12 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)(*((uint32_t*)L_11))) >= ((uint32_t)L_12))))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t* L_13 = ___idx0;
		*((int32_t*)(L_13)) = (int32_t)(-1);
		return (bool)0;
	}
}
extern "C"  bool VectorArray_1_FindFirst_m1139300539_AdjustorThunk (RuntimeObject * __this, uint32_t* ___idx0, ShadowRequest_t3287955082 * ___designator1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_FindFirst_m1139300539(_thisAdjusted, ___idx0, ___designator1, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m163439344_gshared (VectorArray_1_t3176195912 * __this, ShadowRequest_t3287955082  ___designator0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = VectorArray_1_FindFirst_m1139300539((VectorArray_1_t3176195912 *)(VectorArray_1_t3176195912 *)__this, (uint32_t*)(uint32_t*)(&V_0), (ShadowRequest_t3287955082 *)(ShadowRequest_t3287955082 *)(&___designator0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_0;
	}
}
extern "C"  bool VectorArray_1_Contains_m163439344_AdjustorThunk (RuntimeObject * __this, ShadowRequest_t3287955082  ___designator0, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Contains_m163439344(_thisAdjusted, ___designator0, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Experimental.Rendering.ShadowmapBase/ShadowRequest>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t3176195912  VectorArray_1_Subrange_m3759422898_gshared (VectorArray_1_t3176195912 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		ShadowRequestU5BU5D_t1481899023* L_0 = (ShadowRequestU5BU5D_t1481899023*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___offset0;
		uint32_t L_3 = ___count1;
		bool L_4 = (bool)__this->get_m_clearToDefault_4();
		VectorArray_1_t3176195912  L_5;
		memset(&L_5, 0, sizeof(L_5));
		VectorArray_1__ctor_m1116332468((&L_5), (ShadowRequestU5BU5D_t1481899023*)L_0, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (uint32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}
}
extern "C"  VectorArray_1_t3176195912  VectorArray_1_Subrange_m3759422898_AdjustorThunk (RuntimeObject * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t3176195912 * _thisAdjusted = reinterpret_cast<VectorArray_1_t3176195912 *>(__this + 1);
	return VectorArray_1_Subrange_m3759422898(_thisAdjusted, ___offset0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m1416138122_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___capacity0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_0)));
		__this->set_m_array_1(L_1);
		__this->set_m_offset_2(0);
		uint32_t L_2 = ___capacity0;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault1;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m1416138122_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, bool ___clearToDefault1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1__ctor_m1416138122(_thisAdjusted, ___capacity0, ___clearToDefault1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(T[],System.UInt32,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m4225040827_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = ___array0;
		__this->set_m_array_1(L_0);
		uint32_t L_1 = ___offset1;
		__this->set_m_offset_2(L_1);
		uint32_t L_2 = ___count2;
		__this->set_m_count_3(L_2);
		bool L_3 = ___clearToDefault3;
		__this->set_m_clearToDefault_4(L_3);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m4225040827_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___array0, uint32_t ___offset1, uint32_t ___count2, bool ___clearToDefault3, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1__ctor_m4225040827(_thisAdjusted, ___array0, ___offset1, ___count2, ___clearToDefault3, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::.ctor(UnityEngine.Experimental.VectorArray`1<T>&,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1__ctor_m3030896141_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	{
		VectorArray_1_t1967425330 * L_0 = ___vec0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = (RenderTargetIdentifierU5BU5D_t2742279485*)L_0->get_m_array_1();
		__this->set_m_array_1(L_1);
		VectorArray_1_t1967425330 * L_2 = ___vec0;
		uint32_t L_3 = (uint32_t)L_2->get_m_offset_2();
		uint32_t L_4 = ___offset1;
		__this->set_m_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)));
		uint32_t L_5 = ___count2;
		__this->set_m_count_3(L_5);
		VectorArray_1_t1967425330 * L_6 = ___vec0;
		bool L_7 = (bool)L_6->get_m_clearToDefault_4();
		__this->set_m_clearToDefault_4(L_7);
		return;
	}
}
extern "C"  void VectorArray_1__ctor_m3030896141_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t1967425330 * ___vec0, uint32_t ___offset1, uint32_t ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1__ctor_m3030896141(_thisAdjusted, ___vec0, ___offset1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3987466730_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	RenderTargetIdentifier_t2079184500  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = (bool)__this->get_m_clearToDefault_4();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = (uint32_t)0;
		goto IL_0026;
	}

IL_0012:
	{
		uint32_t L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RenderTargetIdentifier_t2079184500 ));
		RenderTargetIdentifier_t2079184500  L_2 = V_1;
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0012;
		}
	}

IL_0032:
	{
		__this->set_m_count_3(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m3987466730_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Reset_m3987466730(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m4225330915_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___capacity0;
		if ((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))))) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)))))))))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_3 = ___capacity0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_4 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_3)));
		__this->set_m_array_1(L_4);
		__this->set_m_offset_2(0);
		__this->set_m_count_3(0);
		goto IL_003d;
	}

IL_0037:
	{
		VectorArray_1_Reset_m3987466730((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	}

IL_003d:
	{
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m4225330915_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Reset_m4225330915(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reserve(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reserve_m3062672329_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	RenderTargetIdentifierU5BU5D_t2742279485* V_0 = NULL;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		uint32_t L_2 = ___capacity0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_3 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		NullCheck(L_3);
		if ((((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2))))))))) > ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		uint32_t L_4 = (uint32_t)__this->get_m_count_3();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_5 = ___capacity0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_6 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)L_5)));
		__this->set_m_array_1(L_6);
		goto IL_006e;
	}

IL_003c:
	{
		uint32_t L_7 = (uint32_t)__this->get_m_count_3();
		uint32_t L_8 = ___capacity0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_9 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (uint32_t)(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))));
		V_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)L_9;
		RenderTargetIdentifierU5BU5D_t2742279485* L_10 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_11 = (uint32_t)__this->get_m_offset_2();
		RenderTargetIdentifierU5BU5D_t2742279485* L_12 = V_0;
		uint32_t L_13 = (uint32_t)__this->get_m_count_3();
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, (int64_t)(((int64_t)((uint64_t)L_11))), (RuntimeArray *)(RuntimeArray *)L_12, (int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_13))), /*hidden argument*/NULL);
		RenderTargetIdentifierU5BU5D_t2742279485* L_14 = V_0;
		__this->set_m_array_1(L_14);
	}

IL_006e:
	{
		__this->set_m_offset_2(0);
		return;
	}
}
extern "C"  void VectorArray_1_Reserve_m3062672329_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Reserve_m3062672329(_thisAdjusted, ___capacity0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2489397472_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	RenderTargetIdentifier_t2079184500  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		uint32_t L_0 = ___size0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ___size0;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4 = V_0;
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0053;
	}

IL_0021:
	{
		bool L_5 = (bool)__this->get_m_clearToDefault_4();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_6 = ___size0;
		V_1 = (uint32_t)L_6;
		goto IL_0047;
	}

IL_0033:
	{
		uint32_t L_7 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(RenderTargetIdentifier_t2079184500 ));
		RenderTargetIdentifier_t2079184500  L_8 = V_2;
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_7, (RenderTargetIdentifier_t2079184500 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0047:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0033;
		}
	}

IL_0053:
	{
		uint32_t L_12 = ___size0;
		__this->set_m_count_3(L_12);
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m2489397472_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Resize_m2489397472(_thisAdjusted, ___size0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Resize(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Resize_m2167314143_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___size0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___size0;
		V_0 = (uint32_t)L_0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t1069570412 * L_1 = ___cleanupDelegate1;
		uint32_t L_2 = V_0;
		RenderTargetIdentifier_t2079184500  L_3 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t1069570412 *)L_1);
		((  void (*) (Cleanup_t1069570412 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t1069570412 *)L_1, (RenderTargetIdentifier_t2079184500 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_4 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_5 = V_0;
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_7 = ___size0;
		VectorArray_1_Resize_m2489397472((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Resize_m2167314143_AdjustorThunk (RuntimeObject * __this, uint32_t ___size0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Resize_m2167314143(_thisAdjusted, ___size0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m492371512_gshared (VectorArray_1_t1967425330 * __this, Cleanup_t1069570412 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t1069570412 * L_0 = ___cleanupDelegate0;
		uint32_t L_1 = V_0;
		RenderTargetIdentifier_t2079184500  L_2 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t1069570412 *)L_0);
		((  void (*) (Cleanup_t1069570412 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t1069570412 *)L_0, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		VectorArray_1_Reset_m3987466730((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m492371512_AdjustorThunk (RuntimeObject * __this, Cleanup_t1069570412 * ___cleanupDelegate0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Reset_m492371512(_thisAdjusted, ___cleanupDelegate0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Reset(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Reset_m3701397919_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___capacity0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = (uint32_t)0;
		goto IL_0018;
	}

IL_0007:
	{
		Cleanup_t1069570412 * L_0 = ___cleanupDelegate1;
		uint32_t L_1 = V_0;
		RenderTargetIdentifier_t2079184500  L_2 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		NullCheck((Cleanup_t1069570412 *)L_0);
		((  void (*) (Cleanup_t1069570412 *, RenderTargetIdentifier_t2079184500 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((Cleanup_t1069570412 *)L_0, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint32_t L_3 = V_0;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_6 = ___capacity0;
		VectorArray_1_Reset_m4225330915((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}
}
extern "C"  void VectorArray_1_Reset_m3701397919_AdjustorThunk (RuntimeObject * __this, uint32_t ___capacity0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Reset_m3701397919(_thisAdjusted, ___capacity0, ___cleanupDelegate1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m328441954_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		RenderTargetIdentifier_t2079184500  L_2 = ___obj0;
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m328441954_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Add_m328441954(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m19852320_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m1932830490((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifierU5BU5D_t2742279485*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m19852320_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Add_m19852320(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Add(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Add_m949948858_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t1967425330 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m217638052((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t1967425330 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUnchecked_m4021946675((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_Add_m949948858_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Add_m949948858(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m584400139_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	{
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RenderTargetIdentifier_t2079184500  L_0 = ___obj0;
		uint32_t L_1 = VectorArray_1_AddUniqueUnchecked_m3247911990((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifier_t2079184500 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_1;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m584400139_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnique_m584400139(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m1334133961_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___count1;
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = ___objs0;
		uint32_t L_2 = ___count1;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m2354708155((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifierU5BU5D_t2742279485*)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m1334133961_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnique_m1334133961(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnique(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnique_m184489492_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	{
		VectorArray_1_t1967425330 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m217638052((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		VectorArray_1_Reserve_m3062672329((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		VectorArray_1_t1967425330 * L_2 = ___vec0;
		uint32_t L_3 = VectorArray_1_AddUniqueUnchecked_m1146128688((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnique_m184489492_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnique_m184489492(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m707556550_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		uint32_t L_1 = V_0;
		RenderTargetIdentifier_t2079184500  L_2 = ___obj0;
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_1, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m707556550_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m707556550(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m1932830490_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		V_0 = (uint32_t)L_0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = ___objs0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_2 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___count1;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, (int64_t)(((int64_t)((int64_t)0))), (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))))), (int64_t)(((int64_t)((uint64_t)L_5))), /*hidden argument*/NULL);
		uint32_t L_6 = (uint32_t)__this->get_m_count_3();
		uint32_t L_7 = ___count1;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m1932830490_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m1932830490(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUnchecked_m4021946675_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VectorArray_1_t1967425330 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m217638052((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		V_1 = (uint32_t)L_2;
		VectorArray_1_t1967425330 * L_3 = ___vec0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_4 = (RenderTargetIdentifierU5BU5D_t2742279485*)L_3->get_m_array_1();
		VectorArray_1_t1967425330 * L_5 = ___vec0;
		uint32_t L_6 = (uint32_t)L_5->get_m_offset_2();
		RenderTargetIdentifierU5BU5D_t2742279485* L_7 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_8 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_0;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((uint64_t)L_6))), (RuntimeArray *)(RuntimeArray *)L_7, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)))))))), (int64_t)(((int64_t)((uint64_t)L_10))), /*hidden argument*/NULL);
		uint32_t L_11 = (uint32_t)__this->get_m_count_3();
		uint32_t L_12 = V_0;
		__this->set_m_count_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)));
		uint32_t L_13 = V_1;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUnchecked_m4021946675_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUnchecked_m4021946675(_thisAdjusted, ___vec0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m3247911990_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifier_t2079184500  L_0 = ___obj0;
		bool L_1 = VectorArray_1_Contains_m3594072978((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifier_t2079184500 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		RenderTargetIdentifier_t2079184500  L_2 = ___obj0;
		uint32_t L_3 = VectorArray_1_Add_m328441954((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifier_t2079184500 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m3247911990_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifier_t2079184500  ___obj0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m3247911990(_thisAdjusted, ___obj0, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(T[],System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m2354708155_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		goto IL_002b;
	}

IL_0009:
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = ___objs0;
		uint32_t L_1 = V_1;
		NullCheck(L_0);
		uintptr_t L_2 = (((uintptr_t)L_1));
		RenderTargetIdentifier_t2079184500  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = VectorArray_1_AddUniqueUnchecked_m3247911990((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifier_t2079184500 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_2 = (uint32_t)L_4;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_7 = V_0;
		G_B4_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		uint32_t L_8 = V_2;
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_9 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ___count1;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_11))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_12 = V_0;
		return L_12;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m2354708155_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___objs0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m2354708155(_thisAdjusted, ___objs0, ___count1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AddUniqueUnchecked(UnityEngine.Experimental.VectorArray`1<T>&)
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_AddUniqueUnchecked_m1146128688_gshared (VectorArray_1_t1967425330 * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t G_B4_0 = 0;
	{
		V_0 = (uint32_t)(-1);
		V_1 = (uint32_t)0;
		VectorArray_1_t1967425330 * L_0 = ___vec0;
		uint32_t L_1 = VectorArray_1_Count_m217638052((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_2 = (uint32_t)L_1;
		goto IL_0031;
	}

IL_0010:
	{
		VectorArray_1_t1967425330 * L_2 = ___vec0;
		uint32_t L_3 = V_1;
		RenderTargetIdentifier_t2079184500  L_4 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)L_2, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		uint32_t L_5 = VectorArray_1_AddUniqueUnchecked_m3247911990((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (RenderTargetIdentifier_t2079184500 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_3 = (uint32_t)L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_3;
		if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_8 = V_0;
		G_B4_0 = L_8;
		goto IL_002c;
	}

IL_002b:
	{
		uint32_t L_9 = V_3;
		G_B4_0 = L_9;
	}

IL_002c:
	{
		V_0 = (uint32_t)G_B4_0;
		uint32_t L_10 = V_1;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_11) >= ((uint32_t)L_12))))
		{
			goto IL_0010;
		}
	}
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
extern "C"  uint32_t VectorArray_1_AddUniqueUnchecked_m1146128688_AdjustorThunk (RuntimeObject * __this, VectorArray_1_t1967425330 * ___vec0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AddUniqueUnchecked_m1146128688(_thisAdjusted, ___vec0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1958120918_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * G_B2_0 = NULL;
	VectorArray_1_t1967425330 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t1967425330 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t1967425330 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t1967425330 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t1967425330 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t1967425330 *)(G_B2_0));
	}

IL_001b:
	{
		VectorArray_1_Resize_m2489397472((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)G_B3_1, (uint32_t)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m1958120918_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Purge_m1958120918(_thisAdjusted, ___count0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Purge(System.UInt32,UnityEngine.Experimental.VectorArray`1/Cleanup<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Purge_m1206734261_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___count0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * G_B2_0 = NULL;
	VectorArray_1_t1967425330 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VectorArray_1_t1967425330 * G_B3_1 = NULL;
	{
		uint32_t L_0 = ___count0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		G_B1_0 = ((VectorArray_1_t1967425330 *)(__this));
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			G_B2_0 = ((VectorArray_1_t1967425330 *)(__this));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = ((VectorArray_1_t1967425330 *)(G_B1_0));
		goto IL_001b;
	}

IL_0013:
	{
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		uint32_t L_3 = ___count0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		G_B3_1 = ((VectorArray_1_t1967425330 *)(G_B2_0));
	}

IL_001b:
	{
		Cleanup_t1069570412 * L_4 = ___cleanupDelegate1;
		VectorArray_1_Resize_m2167314143((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)G_B3_1, (uint32_t)G_B3_0, (Cleanup_t1069570412 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
extern "C"  void VectorArray_1_Purge_m1206734261_AdjustorThunk (RuntimeObject * __this, uint32_t ___count0, Cleanup_t1069570412 * ___cleanupDelegate1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Purge_m1206734261(_thisAdjusted, ___count0, ___cleanupDelegate1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CopyTo(T[],System.Int32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_CopyTo_m1415779711_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___count2;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		RenderTargetIdentifierU5BU5D_t2742279485* L_2 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		RenderTargetIdentifierU5BU5D_t2742279485* L_4 = ___destination0;
		int32_t L_5 = ___destinationStart1;
		uint32_t* L_6 = ___count2;
		Array_Copy_m514679699(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int64_t)(((int64_t)((uint64_t)L_3))), (RuntimeArray *)(RuntimeArray *)L_4, (int64_t)(((int64_t)((int64_t)L_5))), (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(*((uint32_t*)L_6)))))))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void VectorArray_1_CopyTo_m1415779711_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifierU5BU5D_t2742279485* ___destination0, int32_t ___destinationStart1, uint32_t* ___count2, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_CopyTo_m1415779711(_thisAdjusted, ___destination0, ___destinationStart1, ___count2, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Swap(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Swap_m429026578_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorArray_1_Swap_m429026578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___first0;
		uint32_t L_1 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = ___second1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, (String_t*)_stringLiteral1214352242, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, VectorArray_1_Swap_m429026578_RuntimeMethod_var);
	}

IL_0023:
	{
		uint32_t L_5 = ___first0;
		uint32_t L_6 = ___second1;
		VectorArray_1_SwapUnchecked_m2948720391((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_5, (uint32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}
}
extern "C"  void VectorArray_1_Swap_m429026578_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Swap_m429026578(_thisAdjusted, ___first0, ___second1, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::SwapUnchecked(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_SwapUnchecked_m2948720391_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	RenderTargetIdentifier_t2079184500  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		uint32_t L_0 = ___first0;
		RenderTargetIdentifier_t2079184500  L_1 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (RenderTargetIdentifier_t2079184500 )L_1;
		uint32_t L_2 = ___first0;
		uint32_t L_3 = ___second1;
		RenderTargetIdentifier_t2079184500  L_4 = VectorArray_1_get_Item_m1031447987((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_2, (RenderTargetIdentifier_t2079184500 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint32_t L_5 = ___second1;
		RenderTargetIdentifier_t2079184500  L_6 = V_0;
		VectorArray_1_set_Item_m2215184819((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t)L_5, (RenderTargetIdentifier_t2079184500 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
extern "C"  void VectorArray_1_SwapUnchecked_m2948720391_AdjustorThunk (RuntimeObject * __this, uint32_t ___first0, uint32_t ___second1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_SwapUnchecked_m2948720391(_thisAdjusted, ___first0, ___second1, method);
}
// T[] UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::AsArray(System.UInt32&,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifierU5BU5D_t2742279485* VectorArray_1_AsArray_m83426542_gshared (VectorArray_1_t1967425330 * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___offset0;
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		uint32_t* L_2 = ___count1;
		uint32_t L_3 = (uint32_t)__this->get_m_count_3();
		*((int32_t*)(L_2)) = (int32_t)L_3;
		RenderTargetIdentifierU5BU5D_t2742279485* L_4 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		return L_4;
	}
}
extern "C"  RenderTargetIdentifierU5BU5D_t2742279485* VectorArray_1_AsArray_m83426542_AdjustorThunk (RuntimeObject * __this, uint32_t* ___offset0, uint32_t* ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_AsArray_m83426542(_thisAdjusted, ___offset0, ___count1, method);
}
// T UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::get_Item(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  VectorArray_1_get_Item_m1031447987_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		NullCheck(L_0);
		uintptr_t L_3 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))));
		RenderTargetIdentifier_t2079184500  L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
extern "C"  RenderTargetIdentifier_t2079184500  VectorArray_1_get_Item_m1031447987_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_get_Item_m1031447987(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::set_Item(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_set_Item_m2215184819_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___index0, RenderTargetIdentifier_t2079184500  ___value1, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___index0;
		RenderTargetIdentifier_t2079184500  L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>((((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))), (RenderTargetIdentifier_t2079184500 )L_3);
		return;
	}
}
extern "C"  void VectorArray_1_set_Item_m2215184819_AdjustorThunk (RuntimeObject * __this, uint32_t ___index0, RenderTargetIdentifier_t2079184500  ___value1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_set_Item_m2215184819(_thisAdjusted, ___index0, ___value1, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Count()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_Count_m217638052_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_m_count_3();
		return L_0;
	}
}
extern "C"  uint32_t VectorArray_1_Count_m217638052_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Count_m217638052(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityTotal()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityTotal_m1456474192_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityTotal_m1456474192_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_CapacityTotal_m1456474192(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::CapacityAvailable()
extern "C" IL2CPP_METHOD_ATTR uint32_t VectorArray_1_CapacityAvailable_m1161289686_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1)), (int32_t)L_2));
	}
}
extern "C"  uint32_t VectorArray_1_CapacityAvailable_m1161289686_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_CapacityAvailable_m1161289686(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort()
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m802478912_gshared (VectorArray_1_t1967425330 * __this, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		((  void (*) (RuntimeObject * /* static, unused */, RenderTargetIdentifierU5BU5D_t2742279485*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)(NULL /*static, unused*/, (RenderTargetIdentifierU5BU5D_t2742279485*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m802478912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Sort_m802478912(_thisAdjusted, method);
}
// System.Void UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" IL2CPP_METHOD_ATTR void VectorArray_1_Sort_m3832083522_gshared (VectorArray_1_t1967425330 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = (uint32_t)__this->get_m_count_3();
		RuntimeObject* L_3 = ___comparer0;
		((  void (*) (RuntimeObject * /* static, unused */, RenderTargetIdentifierU5BU5D_t2742279485*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(NULL /*static, unused*/, (RenderTargetIdentifierU5BU5D_t2742279485*)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return;
	}
}
extern "C"  void VectorArray_1_Sort_m3832083522_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	VectorArray_1_Sort_m3832083522(_thisAdjusted, ___comparer0, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::FindFirst(System.UInt32&,T&)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_FindFirst_m3819034623_gshared (VectorArray_1_t1967425330 * __this, uint32_t* ___idx0, RenderTargetIdentifier_t2079184500 * ___designator1, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___idx0;
		*((int32_t*)(L_0)) = (int32_t)0;
		goto IL_003a;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		EqualityComparer_1_t248956836 * L_1 = ((  EqualityComparer_1_t248956836 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		RenderTargetIdentifierU5BU5D_t2742279485* L_2 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_3 = (uint32_t)__this->get_m_offset_2();
		uint32_t* L_4 = ___idx0;
		NullCheck(L_2);
		uintptr_t L_5 = (((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(*((uint32_t*)L_4))))));
		RenderTargetIdentifier_t2079184500  L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RenderTargetIdentifier_t2079184500 * L_7 = ___designator1;
		NullCheck((EqualityComparer_1_t248956836 *)L_1);
		bool L_8 = VirtFuncInvoker2< bool, RenderTargetIdentifier_t2079184500 , RenderTargetIdentifier_t2079184500  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Rendering.RenderTargetIdentifier>::Equals(!0,!0) */, (EqualityComparer_1_t248956836 *)L_1, (RenderTargetIdentifier_t2079184500 )L_6, (RenderTargetIdentifier_t2079184500 )(*(RenderTargetIdentifier_t2079184500 *)L_7));
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		uint32_t* L_9 = ___idx0;
		uint32_t* L_10 = ___idx0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_10)), (int32_t)1));
	}

IL_003a:
	{
		uint32_t* L_11 = ___idx0;
		uint32_t L_12 = (uint32_t)__this->get_m_count_3();
		if ((!(((uint32_t)(*((uint32_t*)L_11))) >= ((uint32_t)L_12))))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t* L_13 = ___idx0;
		*((int32_t*)(L_13)) = (int32_t)(-1);
		return (bool)0;
	}
}
extern "C"  bool VectorArray_1_FindFirst_m3819034623_AdjustorThunk (RuntimeObject * __this, uint32_t* ___idx0, RenderTargetIdentifier_t2079184500 * ___designator1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_FindFirst_m3819034623(_thisAdjusted, ___idx0, ___designator1, method);
}
// System.Boolean UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool VectorArray_1_Contains_m3594072978_gshared (VectorArray_1_t1967425330 * __this, RenderTargetIdentifier_t2079184500  ___designator0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = VectorArray_1_FindFirst_m3819034623((VectorArray_1_t1967425330 *)(VectorArray_1_t1967425330 *)__this, (uint32_t*)(uint32_t*)(&V_0), (RenderTargetIdentifier_t2079184500 *)(RenderTargetIdentifier_t2079184500 *)(&___designator0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_0;
	}
}
extern "C"  bool VectorArray_1_Contains_m3594072978_AdjustorThunk (RuntimeObject * __this, RenderTargetIdentifier_t2079184500  ___designator0, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Contains_m3594072978(_thisAdjusted, ___designator0, method);
}
// UnityEngine.Experimental.VectorArray`1<T> UnityEngine.Experimental.VectorArray`1<UnityEngine.Rendering.RenderTargetIdentifier>::Subrange(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VectorArray_1_t1967425330  VectorArray_1_Subrange_m45411100_gshared (VectorArray_1_t1967425330 * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)__this->get_m_array_1();
		uint32_t L_1 = (uint32_t)__this->get_m_offset_2();
		uint32_t L_2 = ___offset0;
		uint32_t L_3 = ___count1;
		bool L_4 = (bool)__this->get_m_clearToDefault_4();
		VectorArray_1_t1967425330  L_5;
		memset(&L_5, 0, sizeof(L_5));
		VectorArray_1__ctor_m4225040827((&L_5), (RenderTargetIdentifierU5BU5D_t2742279485*)L_0, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (uint32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_5;
	}
}
extern "C"  VectorArray_1_t1967425330  VectorArray_1_Subrange_m45411100_AdjustorThunk (RuntimeObject * __this, uint32_t ___offset0, uint32_t ___count1, const RuntimeMethod* method)
{
	VectorArray_1_t1967425330 * _thisAdjusted = reinterpret_cast<VectorArray_1_t1967425330 *>(__this + 1);
	return VectorArray_1_Subrange_m45411100(_thisAdjusted, ___offset0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4265712819_gshared (ParameterOverride_1_t2372640272 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		NullCheck((ParameterOverride_1_t2372640272 *)__this);
		((  void (*) (ParameterOverride_1_t2372640272 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2372640272 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4179937065_gshared (ParameterOverride_1_t2372640272 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		NullCheck((ParameterOverride_1_t2372640272 *)__this);
		((  void (*) (ParameterOverride_1_t2372640272 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2372640272 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4173513604_gshared (ParameterOverride_1_t2372640272 * __this, bool ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1777611906_gshared (ParameterOverride_1_t2372640272 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		bool L_1 = ((  bool (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		bool L_3 = ((  bool (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t2372640272 *)__this);
		VirtActionInvoker3< bool, bool, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single) */, (ParameterOverride_1_t2372640272 *)__this, (bool)L_1, (bool)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3641300572_gshared (ParameterOverride_1_t2372640272 * __this, bool ___from0, bool ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t2372640272 * G_B2_0 = NULL;
	ParameterOverride_1_t2372640272 * G_B1_0 = NULL;
	bool G_B3_0 = false;
	ParameterOverride_1_t2372640272 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t2372640272 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t2372640272 *)(__this));
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t2372640272 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		bool L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t2372640272 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2632013329_gshared (ParameterOverride_1_t2372640272 * __this, bool ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		bool L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m1127789578_gshared (ParameterOverride_1_t2372640272 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		bool L_1 = ((  bool (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m1339965103_gshared (ParameterOverride_1_t2372640272 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		bool* L_4 = (bool*)__this->get_address_of_value_1();
		int32_t L_5 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ParameterOverride_1_op_Implicit_m3961651762_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t2372640272 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t2372640272 * L_0 = ___prop0;
		NullCheck(L_0);
		bool L_1 = (bool)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1402725468_gshared (ParameterOverride_1_t931330764 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t931330764 *)__this);
		((  void (*) (ParameterOverride_1_t931330764 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t931330764 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3328608079_gshared (ParameterOverride_1_t931330764 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t931330764 *)__this);
		((  void (*) (ParameterOverride_1_t931330764 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t931330764 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1543241145_gshared (ParameterOverride_1_t931330764 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m348276217_gshared (ParameterOverride_1_t931330764 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t931330764 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single) */, (ParameterOverride_1_t931330764 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2071905709_gshared (ParameterOverride_1_t931330764 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t931330764 * G_B2_0 = NULL;
	ParameterOverride_1_t931330764 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t931330764 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t931330764 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t931330764 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t931330764 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t931330764 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m203553453_gshared (ParameterOverride_1_t931330764 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m3907686484_gshared (ParameterOverride_1_t931330764 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m300857418_gshared (ParameterOverride_1_t931330764 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		int32_t L_5 = Int32_GetHashCode_m1876651407((int32_t*)(int32_t*)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m29083406_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t931330764 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t931330764 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1731371824_gshared (ParameterOverride_1_t1060491175 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		NullCheck((ParameterOverride_1_t1060491175 *)__this);
		((  void (*) (ParameterOverride_1_t1060491175 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1060491175 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1733927717_gshared (ParameterOverride_1_t1060491175 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1060491175 *)__this);
		((  void (*) (ParameterOverride_1_t1060491175 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1060491175 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2740926681_gshared (ParameterOverride_1_t1060491175 * __this, RuntimeObject * ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1820001161_gshared (ParameterOverride_1_t1060491175 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1060491175 *)__this);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1060491175 *)__this, (RuntimeObject *)L_1, (RuntimeObject *)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3320298847_gshared (ParameterOverride_1_t1060491175 * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1060491175 * G_B2_0 = NULL;
	ParameterOverride_1_t1060491175 * G_B1_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	ParameterOverride_1_t1060491175 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1060491175 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1060491175 *)(__this));
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1060491175 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1060491175 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m1567935003_gshared (ParameterOverride_1_t1060491175 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		RuntimeObject * L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m972530866_gshared (ParameterOverride_1_t1060491175 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m2763349906_gshared (ParameterOverride_1_t1060491175 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		RuntimeObject ** L_4 = (RuntimeObject **)__this->get_address_of_value_1();
		NullCheck((RuntimeObject *)(*L_4));
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*L_4));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ParameterOverride_1_op_Implicit_m3187551576_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1060491175 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1060491175 * L_0 = ___prop0;
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1161591119_gshared (ParameterOverride_1_t3672619081 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		NullCheck((ParameterOverride_1_t3672619081 *)__this);
		((  void (*) (ParameterOverride_1_t3672619081 *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3672619081 *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1158904018_gshared (ParameterOverride_1_t3672619081 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		NullCheck((ParameterOverride_1_t3672619081 *)__this);
		((  void (*) (ParameterOverride_1_t3672619081 *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3672619081 *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4249875516_gshared (ParameterOverride_1_t3672619081 * __this, float ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m341415989_gshared (ParameterOverride_1_t3672619081 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		float L_1 = ((  float (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		float L_3 = ((  float (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t3672619081 *)__this);
		VirtActionInvoker3< float, float, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single) */, (ParameterOverride_1_t3672619081 *)__this, (float)L_1, (float)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2476590609_gshared (ParameterOverride_1_t3672619081 * __this, float ___from0, float ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t3672619081 * G_B2_0 = NULL;
	ParameterOverride_1_t3672619081 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	ParameterOverride_1_t3672619081 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t3672619081 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t3672619081 *)(__this));
			goto IL_0012;
		}
	}
	{
		float L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t3672619081 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		float L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t3672619081 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m1570106881_gshared (ParameterOverride_1_t3672619081 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		float L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m1601882051_gshared (ParameterOverride_1_t3672619081 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		float L_1 = ((  float (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m3386055407_gshared (ParameterOverride_1_t3672619081 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = (float*)__this->get_address_of_value_1();
		int32_t L_5 = Single_GetHashCode_m1558506138((float*)(float*)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR float ParameterOverride_1_op_Implicit_m3604412769_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3672619081 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t3672619081 * L_0 = ___prop0;
		NullCheck(L_0);
		float L_1 = (float)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1280587884_gshared (ParameterOverride_1_t536071335 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_t2555686324 ));
		Color_t2555686324  L_0 = V_0;
		NullCheck((ParameterOverride_1_t536071335 *)__this);
		((  void (*) (ParameterOverride_1_t536071335 *, Color_t2555686324 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t536071335 *)__this, (Color_t2555686324 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1279080599_gshared (ParameterOverride_1_t536071335 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t536071335 *)__this);
		((  void (*) (ParameterOverride_1_t536071335 *, Color_t2555686324 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t536071335 *)__this, (Color_t2555686324 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2369654494_gshared (ParameterOverride_1_t536071335 * __this, Color_t2555686324  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		Color_t2555686324  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3717489897_gshared (ParameterOverride_1_t536071335 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Color_t2555686324  L_1 = ((  Color_t2555686324  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		Color_t2555686324  L_3 = ((  Color_t2555686324  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t536071335 *)__this);
		VirtActionInvoker3< Color_t2555686324 , Color_t2555686324 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single) */, (ParameterOverride_1_t536071335 *)__this, (Color_t2555686324 )L_1, (Color_t2555686324 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2017377642_gshared (ParameterOverride_1_t536071335 * __this, Color_t2555686324  ___from0, Color_t2555686324  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t536071335 * G_B2_0 = NULL;
	ParameterOverride_1_t536071335 * G_B1_0 = NULL;
	Color_t2555686324  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t536071335 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t536071335 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t536071335 *)(__this));
			goto IL_0012;
		}
	}
	{
		Color_t2555686324  L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t536071335 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		Color_t2555686324  L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t536071335 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2729497084_gshared (ParameterOverride_1_t536071335 * __this, Color_t2555686324  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		Color_t2555686324  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m538789834_gshared (ParameterOverride_1_t536071335 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Color_t2555686324  L_1 = ((  Color_t2555686324  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m4197389351_gshared (ParameterOverride_1_t536071335 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		Color_t2555686324 * L_4 = (Color_t2555686324 *)__this->get_address_of_value_1();
		int32_t L_5 = Color_GetHashCode_m1829208463((Color_t2555686324 *)(Color_t2555686324 *)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  ParameterOverride_1_op_Implicit_m4274281169_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t536071335 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t536071335 * L_0 = ___prop0;
		NullCheck(L_0);
		Color_t2555686324  L_1 = (Color_t2555686324 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4103936732_gshared (ParameterOverride_1_t3341396129 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t3341396129 *)__this);
		((  void (*) (ParameterOverride_1_t3341396129 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3341396129 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4106492551_gshared (ParameterOverride_1_t3341396129 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t3341396129 *)__this);
		((  void (*) (ParameterOverride_1_t3341396129 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3341396129 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2505311538_gshared (ParameterOverride_1_t3341396129 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2361096399_gshared (ParameterOverride_1_t3341396129 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t3341396129 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::Interp(T,T,System.Single) */, (ParameterOverride_1_t3341396129 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1648173741_gshared (ParameterOverride_1_t3341396129 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t3341396129 * G_B2_0 = NULL;
	ParameterOverride_1_t3341396129 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t3341396129 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t3341396129 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t3341396129 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t3341396129 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t3341396129 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m4223227275_gshared (ParameterOverride_1_t3341396129 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m4200376466_gshared (ParameterOverride_1_t3341396129 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m1704311661_gshared (ParameterOverride_1_t3341396129 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m3539293783_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3341396129 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t3341396129 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3473152902_gshared (ParameterOverride_1_t1230029910 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t1230029910 *)__this);
		((  void (*) (ParameterOverride_1_t1230029910 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1230029910 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1552281560_gshared (ParameterOverride_1_t1230029910 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1230029910 *)__this);
		((  void (*) (ParameterOverride_1_t1230029910 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1230029910 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m424569293_gshared (ParameterOverride_1_t1230029910 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2346439082_gshared (ParameterOverride_1_t1230029910 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1230029910 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1230029910 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1123408810_gshared (ParameterOverride_1_t1230029910 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1230029910 * G_B2_0 = NULL;
	ParameterOverride_1_t1230029910 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t1230029910 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1230029910 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1230029910 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1230029910 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1230029910 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m1245016217_gshared (ParameterOverride_1_t1230029910 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m450625996_gshared (ParameterOverride_1_t1230029910 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m1758762451_gshared (ParameterOverride_1_t1230029910 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m825674852_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1230029910 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1230029910 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m957064643_gshared (ParameterOverride_1_t1295786901 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t1295786901 *)__this);
		((  void (*) (ParameterOverride_1_t1295786901 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1295786901 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1933248636_gshared (ParameterOverride_1_t1295786901 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1295786901 *)__this);
		((  void (*) (ParameterOverride_1_t1295786901 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1295786901 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1223854918_gshared (ParameterOverride_1_t1295786901 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m703290692_gshared (ParameterOverride_1_t1295786901 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1295786901 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1295786901 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2700005515_gshared (ParameterOverride_1_t1295786901 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1295786901 * G_B2_0 = NULL;
	ParameterOverride_1_t1295786901 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t1295786901 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1295786901 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1295786901 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1295786901 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1295786901 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m4143154165_gshared (ParameterOverride_1_t1295786901 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m2719091586_gshared (ParameterOverride_1_t1295786901 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m302332133_gshared (ParameterOverride_1_t1295786901 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.EyeAdaptation>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m1054897430_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1295786901 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1295786901 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3873715819_gshared (ParameterOverride_1_t1839186205 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t1839186205 *)__this);
		((  void (*) (ParameterOverride_1_t1839186205 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1839186205 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m522221682_gshared (ParameterOverride_1_t1839186205 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1839186205 *)__this);
		((  void (*) (ParameterOverride_1_t1839186205 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1839186205 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1597546975_gshared (ParameterOverride_1_t1839186205 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1868111898_gshared (ParameterOverride_1_t1839186205 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1839186205 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1839186205 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2886988094_gshared (ParameterOverride_1_t1839186205 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1839186205 * G_B2_0 = NULL;
	ParameterOverride_1_t1839186205 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t1839186205 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1839186205 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1839186205 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1839186205 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1839186205 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m1797372713_gshared (ParameterOverride_1_t1839186205 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m2932431449_gshared (ParameterOverride_1_t1839186205 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m4188418275_gshared (ParameterOverride_1_t1839186205 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.GradingMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m1421893323_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1839186205 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1839186205 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3293484264_gshared (ParameterOverride_1_t3916823721 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t3916823721 *)__this);
		((  void (*) (ParameterOverride_1_t3916823721 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3916823721 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1839843959_gshared (ParameterOverride_1_t3916823721 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t3916823721 *)__this);
		((  void (*) (ParameterOverride_1_t3916823721 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3916823721 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4263300537_gshared (ParameterOverride_1_t3916823721 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1338131939_gshared (ParameterOverride_1_t3916823721 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t3916823721 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::Interp(T,T,System.Single) */, (ParameterOverride_1_t3916823721 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1660978737_gshared (ParameterOverride_1_t3916823721 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t3916823721 * G_B2_0 = NULL;
	ParameterOverride_1_t3916823721 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t3916823721 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t3916823721 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t3916823721 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t3916823721 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t3916823721 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2423002719_gshared (ParameterOverride_1_t3916823721 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m2965257520_gshared (ParameterOverride_1_t3916823721 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m2679103746_gshared (ParameterOverride_1_t3916823721 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.KernelSize>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m2811359310_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3916823721 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t3916823721 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m642904211_gshared (ParameterOverride_1_t381536667 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t381536667 *)__this);
		((  void (*) (ParameterOverride_1_t381536667 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t381536667 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3224759354_gshared (ParameterOverride_1_t381536667 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t381536667 *)__this);
		((  void (*) (ParameterOverride_1_t381536667 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t381536667 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2011142870_gshared (ParameterOverride_1_t381536667 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2626938663_gshared (ParameterOverride_1_t381536667 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t381536667 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::Interp(T,T,System.Single) */, (ParameterOverride_1_t381536667 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2469410471_gshared (ParameterOverride_1_t381536667 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t381536667 * G_B2_0 = NULL;
	ParameterOverride_1_t381536667 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t381536667 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t381536667 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t381536667 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t381536667 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t381536667 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m518834625_gshared (ParameterOverride_1_t381536667 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m500727836_gshared (ParameterOverride_1_t381536667 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m430319196_gshared (ParameterOverride_1_t381536667 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m1148274715_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t381536667 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t381536667 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1613981648_gshared (ParameterOverride_1_t1070587220 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t1070587220 *)__this);
		((  void (*) (ParameterOverride_1_t1070587220 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1070587220 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3155282510_gshared (ParameterOverride_1_t1070587220 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1070587220 *)__this);
		((  void (*) (ParameterOverride_1_t1070587220 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1070587220 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1246135841_gshared (ParameterOverride_1_t1070587220 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1641793733_gshared (ParameterOverride_1_t1070587220 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1070587220 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1070587220 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m4286528374_gshared (ParameterOverride_1_t1070587220 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1070587220 * G_B2_0 = NULL;
	ParameterOverride_1_t1070587220 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t1070587220 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1070587220 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1070587220 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1070587220 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1070587220 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m3313048830_gshared (ParameterOverride_1_t1070587220 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m2589970520_gshared (ParameterOverride_1_t1070587220 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m419566740_gshared (ParameterOverride_1_t1070587220 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m3131158118_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1070587220 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1070587220 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m735043315_gshared (ParameterOverride_1_t1025085192 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t1025085192 *)__this);
		((  void (*) (ParameterOverride_1_t1025085192 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1025085192 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4106084378_gshared (ParameterOverride_1_t1025085192 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1025085192 *)__this);
		((  void (*) (ParameterOverride_1_t1025085192 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1025085192 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2259283679_gshared (ParameterOverride_1_t1025085192 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m989764394_gshared (ParameterOverride_1_t1025085192 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1025085192 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1025085192 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m970639233_gshared (ParameterOverride_1_t1025085192 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1025085192 * G_B2_0 = NULL;
	ParameterOverride_1_t1025085192 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t1025085192 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1025085192 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1025085192 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1025085192 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1025085192 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2253079043_gshared (ParameterOverride_1_t1025085192 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m3575642015_gshared (ParameterOverride_1_t1025085192 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m1116769433_gshared (ParameterOverride_1_t1025085192 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m3171884294_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1025085192 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1025085192 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m200298470_gshared (ParameterOverride_1_t3368882051 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t3368882051 *)__this);
		((  void (*) (ParameterOverride_1_t3368882051 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3368882051 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m198660123_gshared (ParameterOverride_1_t3368882051 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t3368882051 *)__this);
		((  void (*) (ParameterOverride_1_t3368882051 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t3368882051 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2355499064_gshared (ParameterOverride_1_t3368882051 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2341264782_gshared (ParameterOverride_1_t3368882051 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t3368882051 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::Interp(T,T,System.Single) */, (ParameterOverride_1_t3368882051 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3894962008_gshared (ParameterOverride_1_t3368882051 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t3368882051 * G_B2_0 = NULL;
	ParameterOverride_1_t3368882051 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t3368882051 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t3368882051 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t3368882051 *)(__this));
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t3368882051 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t3368882051 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2174798343_gshared (ParameterOverride_1_t3368882051 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m435330726_gshared (ParameterOverride_1_t3368882051 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m6357376_gshared (ParameterOverride_1_t3368882051 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)__this->get_address_of_value_1();
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_4);
		NullCheck((RuntimeObject *)L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m2453929980_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3368882051 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t3368882051 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089496861_gshared (ParameterOverride_1_t136614534 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t2156229523 ));
		Vector2_t2156229523  L_0 = V_0;
		NullCheck((ParameterOverride_1_t136614534 *)__this);
		((  void (*) (ParameterOverride_1_t136614534 *, Vector2_t2156229523 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t136614534 *)__this, (Vector2_t2156229523 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3160800142_gshared (ParameterOverride_1_t136614534 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t136614534 *)__this);
		((  void (*) (ParameterOverride_1_t136614534 *, Vector2_t2156229523 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t136614534 *)__this, (Vector2_t2156229523 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4178614967_gshared (ParameterOverride_1_t136614534 * __this, Vector2_t2156229523  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2412235305_gshared (ParameterOverride_1_t136614534 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector2_t2156229523  L_1 = ((  Vector2_t2156229523  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		Vector2_t2156229523  L_3 = ((  Vector2_t2156229523  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t136614534 *)__this);
		VirtActionInvoker3< Vector2_t2156229523 , Vector2_t2156229523 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single) */, (ParameterOverride_1_t136614534 *)__this, (Vector2_t2156229523 )L_1, (Vector2_t2156229523 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1633807212_gshared (ParameterOverride_1_t136614534 * __this, Vector2_t2156229523  ___from0, Vector2_t2156229523  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t136614534 * G_B2_0 = NULL;
	ParameterOverride_1_t136614534 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t136614534 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t136614534 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t136614534 *)(__this));
			goto IL_0012;
		}
	}
	{
		Vector2_t2156229523  L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t136614534 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		Vector2_t2156229523  L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t136614534 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2084319144_gshared (ParameterOverride_1_t136614534 * __this, Vector2_t2156229523  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		Vector2_t2156229523  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m543933401_gshared (ParameterOverride_1_t136614534 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector2_t2156229523  L_1 = ((  Vector2_t2156229523  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m4172581954_gshared (ParameterOverride_1_t136614534 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		Vector2_t2156229523 * L_4 = (Vector2_t2156229523 *)__this->get_address_of_value_1();
		int32_t L_5 = Vector2_GetHashCode_m3916089713((Vector2_t2156229523 *)(Vector2_t2156229523 *)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  ParameterOverride_1_op_Implicit_m2065470996_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t136614534 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t136614534 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = (Vector2_t2156229523 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089495734_gshared (ParameterOverride_1_t1702698475 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		Vector3_t3722313464  L_0 = V_0;
		NullCheck((ParameterOverride_1_t1702698475 *)__this);
		((  void (*) (ParameterOverride_1_t1702698475 *, Vector3_t3722313464 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1702698475 *)__this, (Vector3_t3722313464 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3160799015_gshared (ParameterOverride_1_t1702698475 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1702698475 *)__this);
		((  void (*) (ParameterOverride_1_t1702698475 *, Vector3_t3722313464 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1702698475 *)__this, (Vector3_t3722313464 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3709605759_gshared (ParameterOverride_1_t1702698475 * __this, Vector3_t3722313464  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m2827193745_gshared (ParameterOverride_1_t1702698475 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector3_t3722313464  L_1 = ((  Vector3_t3722313464  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		Vector3_t3722313464  L_3 = ((  Vector3_t3722313464  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1702698475 *)__this);
		VirtActionInvoker3< Vector3_t3722313464 , Vector3_t3722313464 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1702698475 *)__this, (Vector3_t3722313464 )L_1, (Vector3_t3722313464 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3822447936_gshared (ParameterOverride_1_t1702698475 * __this, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1702698475 * G_B2_0 = NULL;
	ParameterOverride_1_t1702698475 * G_B1_0 = NULL;
	Vector3_t3722313464  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t1702698475 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1702698475 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1702698475 *)(__this));
			goto IL_0012;
		}
	}
	{
		Vector3_t3722313464  L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1702698475 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		Vector3_t3722313464  L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1702698475 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2084353875_gshared (ParameterOverride_1_t1702698475 * __this, Vector3_t3722313464  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		Vector3_t3722313464  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m2751099232_gshared (ParameterOverride_1_t1702698475 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector3_t3722313464  L_1 = ((  Vector3_t3722313464  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m1827245217_gshared (ParameterOverride_1_t1702698475 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		Vector3_t3722313464 * L_4 = (Vector3_t3722313464 *)__this->get_address_of_value_1();
		int32_t L_5 = Vector3_GetHashCode_m2879461828((Vector3_t3722313464 *)(Vector3_t3722313464 *)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ParameterOverride_1_op_Implicit_m1861231979_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1702698475 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1702698475 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = (Vector3_t3722313464 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089498935_gshared (ParameterOverride_1_t1299413948 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t3319028937 ));
		Vector4_t3319028937  L_0 = V_0;
		NullCheck((ParameterOverride_1_t1299413948 *)__this);
		((  void (*) (ParameterOverride_1_t1299413948 *, Vector4_t3319028937 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1299413948 *)__this, (Vector4_t3319028937 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3160802216_gshared (ParameterOverride_1_t1299413948 * __this, Vector4_t3319028937  ___value0, const RuntimeMethod* method)
{
	{
		Vector4_t3319028937  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t1299413948 *)__this);
		((  void (*) (ParameterOverride_1_t1299413948 *, Vector4_t3319028937 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t1299413948 *)__this, (Vector4_t3319028937 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2619613652_gshared (ParameterOverride_1_t1299413948 * __this, Vector4_t3319028937  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t3061054201 *)__this);
		ParameterOverride__ctor_m3334242465((ParameterOverride_t3061054201 *)__this, /*hidden argument*/NULL);
		Vector4_t3319028937  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m1192225021_gshared (ParameterOverride_1_t1299413948 * __this, ParameterOverride_t3061054201 * ___from0, ParameterOverride_t3061054201 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___from0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector4_t3319028937  L_1 = ((  Vector4_t3319028937  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t3061054201 * L_2 = ___to1;
		NullCheck((ParameterOverride_t3061054201 *)L_2);
		Vector4_t3319028937  L_3 = ((  Vector4_t3319028937  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t1299413948 *)__this);
		VirtActionInvoker3< Vector4_t3319028937 , Vector4_t3319028937 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (ParameterOverride_1_t1299413948 *)__this, (Vector4_t3319028937 )L_1, (Vector4_t3319028937 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3604019318_gshared (ParameterOverride_1_t1299413948 * __this, Vector4_t3319028937  ___from0, Vector4_t3319028937  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t1299413948 * G_B2_0 = NULL;
	ParameterOverride_1_t1299413948 * G_B1_0 = NULL;
	Vector4_t3319028937  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t1299413948 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t1299413948 *)(__this));
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			G_B2_0 = ((ParameterOverride_1_t1299413948 *)(__this));
			goto IL_0012;
		}
	}
	{
		Vector4_t3319028937  L_1 = ___to1;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t1299413948 *)(G_B1_0));
		goto IL_0013;
	}

IL_0012:
	{
		Vector4_t3319028937  L_2 = ___from0;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t1299413948 *)(G_B2_0));
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m2084248178_gshared (ParameterOverride_1_t1299413948 * __this, Vector4_t3319028937  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t3061054201 *)__this)->set_overrideState_0((bool)1);
		Vector4_t3319028937  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m344054867_gshared (ParameterOverride_1_t1299413948 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t3061054201 *)L_0);
		Vector4_t3319028937  L_1 = ((  Vector4_t3319028937  (*) (ParameterOverride_t3061054201 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t3061054201 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m4186606753_gshared (ParameterOverride_1_t1299413948 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)17);
		int32_t L_0 = V_0;
		bool* L_1 = (bool*)((ParameterOverride_t3061054201 *)__this)->get_address_of_overrideState_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		Vector4_t3319028937 * L_4 = (Vector4_t3319028937 *)__this->get_address_of_value_1();
		int32_t L_5 = Vector4_GetHashCode_m536821243((Vector4_t3319028937 *)(Vector4_t3319028937 *)L_4, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  ParameterOverride_1_op_Implicit_m2393789371_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t1299413948 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t1299413948 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = (Vector4_t3319028937 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1__ctor_m536420135_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PostProcessEffectRenderer_t1060237 *)__this);
		PostProcessEffectRenderer__ctor_m257238621((PostProcessEffectRenderer_t1060237 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::get_settings()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m416517916_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsettingsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::set_settings(T)
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_set_settings_m3446003095_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsettingsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::SetSettings(UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings)
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_SetSettings_m617104343_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, PostProcessEffectSettings_t1672565614 * ___settings0, const RuntimeMethod* method)
{
	{
		PostProcessEffectSettings_t1672565614 * L_0 = ___settings0;
		NullCheck((PostProcessEffectRenderer_1_t1384686169 *)__this);
		((  void (*) (PostProcessEffectRenderer_1_t1384686169 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PostProcessEffectRenderer_1_t1384686169 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ec__Iterator0_1__ctor_m1464028493_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetAllSceneObjectsU3Ec__Iterator0_1_MoveNext_m2119774919_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ec__Iterator0_1_MoveNext_m2119774919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Scene_t2348375561  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_12();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_12((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_010c;
			}
		}
	}
	{
		goto IL_01e3;
	}

IL_0027:
	{
		Queue_1_t3446625415 * L_2 = (Queue_1_t3446625415 *)il2cpp_codegen_object_new(Queue_1_t3446625415_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3777057655(L_2, /*hidden argument*/Queue_1__ctor_m3777057655_RuntimeMethod_var);
		__this->set_U3CqueueU3E__0_0(L_2);
		Scene_t2348375561  L_3 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = (Scene_t2348375561 )L_3;
		GameObjectU5BU5D_t3328599146* L_4 = Scene_GetRootGameObjects_m2700143150((Scene_t2348375561 *)(Scene_t2348375561 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CrootsU3E__0_1(L_4);
		GameObjectU5BU5D_t3328599146* L_5 = (GameObjectU5BU5D_t3328599146*)__this->get_U3CrootsU3E__0_1();
		__this->set_U24locvar0_2(L_5);
		__this->set_U24locvar1_3(0);
		goto IL_00db;
	}

IL_005d:
	{
		GameObjectU5BU5D_t3328599146* L_6 = (GameObjectU5BU5D_t3328599146*)__this->get_U24locvar0_2();
		int32_t L_7 = (int32_t)__this->get_U24locvar1_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t1113636619 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->set_U3CrootU3E__1_4(L_9);
		Queue_1_t3446625415 * L_10 = (Queue_1_t3446625415 *)__this->get_U3CqueueU3E__0_0();
		GameObject_t1113636619 * L_11 = (GameObject_t1113636619 *)__this->get_U3CrootU3E__1_4();
		NullCheck((GameObject_t1113636619 *)L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730((GameObject_t1113636619 *)L_11, /*hidden argument*/NULL);
		NullCheck((Queue_1_t3446625415 *)L_10);
		Queue_1_Enqueue_m1216095304((Queue_1_t3446625415 *)L_10, (Transform_t3600365921 *)L_12, /*hidden argument*/Queue_1_Enqueue_m1216095304_RuntimeMethod_var);
		GameObject_t1113636619 * L_13 = (GameObject_t1113636619 *)__this->get_U3CrootU3E__1_4();
		NullCheck((GameObject_t1113636619 *)L_13);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set_U3CcompU3E__2_5(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_U3CcompU3E__2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00cd;
		}
	}
	{
		RuntimeObject * L_17 = (RuntimeObject *)__this->get_U3CcompU3E__2_5();
		__this->set_U24current_10(L_17);
		bool L_18 = (bool)__this->get_U24disposing_11();
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		__this->set_U24PC_12(1);
	}

IL_00c8:
	{
		goto IL_01e5;
	}

IL_00cd:
	{
		int32_t L_19 = (int32_t)__this->get_U24locvar1_3();
		__this->set_U24locvar1_3(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_00db:
	{
		int32_t L_20 = (int32_t)__this->get_U24locvar1_3();
		GameObjectU5BU5D_t3328599146* L_21 = (GameObjectU5BU5D_t3328599146*)__this->get_U24locvar0_2();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_01cb;
	}

IL_00f3:
	{
		Queue_1_t3446625415 * L_22 = (Queue_1_t3446625415 *)__this->get_U3CqueueU3E__0_0();
		NullCheck((Queue_1_t3446625415 *)L_22);
		Transform_t3600365921 * L_23 = Queue_1_Dequeue_m2689976562((Queue_1_t3446625415 *)L_22, /*hidden argument*/Queue_1_Dequeue_m2689976562_RuntimeMethod_var);
		NullCheck((Transform_t3600365921 *)L_23);
		RuntimeObject* L_24 = Transform_GetEnumerator_m2717073726((Transform_t3600365921 *)L_23, /*hidden argument*/NULL);
		__this->set_U24locvar2_6(L_24);
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_010c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_25 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)2)))
			{
				case 0:
				{
					goto IL_018d;
				}
			}
		}

IL_0118:
		{
			goto IL_018d;
		}

IL_011d:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->get_U24locvar2_6();
			NullCheck((RuntimeObject*)L_26);
			RuntimeObject * L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
			__this->set_U3CchildU3E__3_7(((Transform_t3600365921 *)Castclass((RuntimeObject*)L_27, Transform_t3600365921_il2cpp_TypeInfo_var)));
			Queue_1_t3446625415 * L_28 = (Queue_1_t3446625415 *)__this->get_U3CqueueU3E__0_0();
			Transform_t3600365921 * L_29 = (Transform_t3600365921 *)__this->get_U3CchildU3E__3_7();
			NullCheck((Queue_1_t3446625415 *)L_28);
			Queue_1_Enqueue_m1216095304((Queue_1_t3446625415 *)L_28, (Transform_t3600365921 *)L_29, /*hidden argument*/Queue_1_Enqueue_m1216095304_RuntimeMethod_var);
			Transform_t3600365921 * L_30 = (Transform_t3600365921 *)__this->get_U3CchildU3E__3_7();
			NullCheck((Component_t1923634451 *)L_30);
			RuntimeObject * L_31 = ((  RuntimeObject * (*) (Component_t1923634451 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Component_t1923634451 *)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			__this->set_U3CcompU3E__4_9(L_31);
			RuntimeObject * L_32 = (RuntimeObject *)__this->get_U3CcompU3E__4_9();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_33 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_32, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_018d;
			}
		}

IL_016b:
		{
			RuntimeObject * L_34 = (RuntimeObject *)__this->get_U3CcompU3E__4_9();
			__this->set_U24current_10(L_34);
			bool L_35 = (bool)__this->get_U24disposing_11();
			if (L_35)
			{
				goto IL_0186;
			}
		}

IL_017f:
		{
			__this->set_U24PC_12(2);
		}

IL_0186:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x1E5, FINALLY_01a2);
		}

IL_018d:
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->get_U24locvar2_6();
			NullCheck((RuntimeObject*)L_36);
			bool L_37 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			if (L_37)
			{
				goto IL_011d;
			}
		}

IL_019d:
		{
			IL2CPP_LEAVE(0x1CB, FINALLY_01a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a2;
	}

FINALLY_01a2:
	{ // begin finally (depth: 1)
		{
			bool L_38 = V_1;
			if (!L_38)
			{
				goto IL_01a6;
			}
		}

IL_01a5:
		{
			IL2CPP_END_FINALLY(418)
		}

IL_01a6:
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->get_U24locvar2_6();
			RuntimeObject* L_40 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_39, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = (RuntimeObject*)L_40;
			__this->set_U24locvar3_8(L_40);
			RuntimeObject* L_41 = V_3;
			if (!L_41)
			{
				goto IL_01ca;
			}
		}

IL_01bf:
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->get_U24locvar3_8();
			NullCheck((RuntimeObject*)L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(418)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(418)
	{
		IL2CPP_JUMP_TBL(0x1E5, IL_01e5)
		IL2CPP_JUMP_TBL(0x1CB, IL_01cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01cb:
	{
		Queue_1_t3446625415 * L_43 = (Queue_1_t3446625415 *)__this->get_U3CqueueU3E__0_0();
		NullCheck((Queue_1_t3446625415 *)L_43);
		int32_t L_44 = Queue_1_get_Count_m1024950313((Queue_1_t3446625415 *)L_43, /*hidden argument*/Queue_1_get_Count_m1024950313_RuntimeMethod_var);
		if ((((int32_t)L_44) > ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		__this->set_U24PC_12((-1));
	}

IL_01e3:
	{
		return (bool)0;
	}

IL_01e5:
	{
		return (bool)1;
	}
}
// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m1424960293_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_10();
		return L_0;
	}
}
// System.Object UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m2488443942_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_10();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ec__Iterator0_1_Dispose_m2478248750_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ec__Iterator0_1_Dispose_m2478248750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_12();
		V_0 = (uint32_t)L_0;
		__this->set_U24disposing_11((bool)1);
		__this->set_U24PC_12((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x56, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_U24locvar2_6();
			RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_1 = (RuntimeObject*)L_3;
			__this->set_U24locvar3_8(L_3);
			RuntimeObject* L_4 = V_1;
			if (!L_4)
			{
				goto IL_0055;
			}
		}

IL_004a:
		{
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_U24locvar3_8();
			NullCheck((RuntimeObject*)L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ec__Iterator0_1_Reset_m4050304606_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ec__Iterator0_1_Reset_m4050304606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetAllSceneObjectsU3Ec__Iterator0_1_Reset_m4050304606_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ec__Iterator0_1_System_Collections_IEnumerable_GetEnumerator_m1579416297_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ec__Iterator0_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3455887880_gshared (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_12();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 * L_2 = (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (U3CGetAllSceneObjectsU3Ec__Iterator0_1_t537702530 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m2250384602_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_List_0(L_0);
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m459949375_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_2 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t257213610 * L_4 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_2);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m861843892_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0045;
	}

IL_0019:
	{
		List_1_t257213610 * L_3 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t257213610 *)L_3);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t257213610 * L_7 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (bool)1;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m4118314453_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  void (*) (IndexedSet_1_t234526808 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((IndexedSet_1_t234526808 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m3750514392_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IndexedSet_1_t234526808 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t234526808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IndexedSet_1_t234526808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m4036265083_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t3384741 *)L_1);
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((Dictionary_2_t3384741 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_m1525966688_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4232548259_gshared (IndexedSet_1_t234526808 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, ObjectU5BU5D_t2843939325*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t257213610 *)L_0, (ObjectU5BU5D_t2843939325*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_m2591381675_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m1939064765_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m241693686_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_2 = V_0;
		V_1 = (int32_t)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m1432638049_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m1432638049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_0, (String_t*)_stringLiteral3926843441, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m1432638049_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m3002732320_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		int32_t L_5 = ___index0;
		List_1_t257213610 * L_6 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t257213610 * L_8 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t257213610 *)L_8);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0082;
	}

IL_003f:
	{
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t257213610 * L_12 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t257213610 *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_2 = (RuntimeObject *)L_14;
		List_1_t257213610 * L_15 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t257213610 *)L_15);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_18 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_18);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t257213610 * L_21 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t257213610 *)L_21);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0082:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m3913508799_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m4214546195_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t257213610 * L_5 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t257213610 *)L_5);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_8 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_8);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_m3453409986_gshared (IndexedSet_1_t234526808 * __this, Predicate_1_t3905400288 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0008:
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t3905400288 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t3905400288 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((Predicate_1_t3905400288 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  bool (*) (IndexedSet_1_t234526808 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((IndexedSet_1_t234526808 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		goto IL_0033;
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m2612539420_gshared (IndexedSet_1_t234526808 * __this, Comparison_1_t2855037343 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		Comparison_1_t2855037343 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, Comparison_1_t2855037343 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t257213610 *)L_0, (Comparison_1_t2855037343 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0014:
	{
		List_1_t257213610 * L_2 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t257213610 *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3001242744_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m524356752_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		ColorTween_t809614380 * L_2 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = ColorTween_ValidTarget_m376919233((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_5 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = ColorTween_get_ignoreTimeScale_m1133957174((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_10 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_11 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		ColorTween_t809614380 * L_13 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_17 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_18 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t809614380 * L_19 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m261027331_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m3175110837_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m2366347741_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m4270440387_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		FloatTween_t1274330004 * L_2 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = FloatTween_ValidTarget_m885246038((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_5 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = FloatTween_get_ignoreTimeScale_m322812475((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_10 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_11 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		FloatTween_t1274330004 * L_13 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_17 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_18 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_t1274330004 * L_19 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m3800412744_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m656428886_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m340723704_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m817364799_gshared (RuntimeObject * __this /* static, unused */, ColorTween_t809614380  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t3860393442 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t3860393442 * L_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t3860393442 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)L_0;
		U3CStartU3Ec__Iterator0_t3860393442 * L_1 = V_0;
		ColorTween_t809614380  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t3860393442 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m3026112660_gshared (TweenRunner_1_t3055525458 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m2247690200_gshared (TweenRunner_1_t3055525458 * __this, ColorTween_t809614380  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m2247690200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3055525458 *)__this);
		((  void (*) (TweenRunner_1_t3055525458 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3055525458 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		ColorTween_t809614380  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, ColorTween_t809614380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (ColorTween_t809614380 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m1830357468_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m3053831591_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m3757154622_gshared (RuntimeObject * __this /* static, unused */, FloatTween_t1274330004  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t30141770 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t30141770 * L_0 = (U3CStartU3Ec__Iterator0_t30141770 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t30141770 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t30141770 *)L_0;
		U3CStartU3Ec__Iterator0_t30141770 * L_1 = V_0;
		FloatTween_t1274330004  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t30141770 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m1266084429_gshared (TweenRunner_1_t3520241082 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m1055628540_gshared (TweenRunner_1_t3520241082 * __this, FloatTween_t1274330004  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m1055628540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3520241082 *)__this);
		((  void (*) (TweenRunner_1_t3520241082 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3520241082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		FloatTween_t1274330004  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, FloatTween_t1274330004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (FloatTween_t1274330004 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m3457627707_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1094012931_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t128053199 * L_0 = ___l0;
		NullCheck((List_1_t128053199 *)L_0);
		((  void (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t128053199 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t128053199 * ListPool_1_Get_m2031605680_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t128053199 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		List_1_t128053199 * L_1 = ((  List_1_t128053199 * (*) (ObjectPool_1_t4122643707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t128053199 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t128053199 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m188599205_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t128053199 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		((  void (*) (ObjectPool_1_t4122643707 *, List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, (List_1_t128053199 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m647010813_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t712889340 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t712889340 * L_2 = (UnityAction_1_t712889340 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t712889340 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t712889340 * L_3 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4122643707 * L_4 = (ObjectPool_1_t4122643707 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4122643707 *, UnityAction_1_t712889340 *, UnityAction_1_t712889340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t712889340 *)G_B2_0, (UnityAction_1_t712889340 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2266431612_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = ___l0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * ListPool_1_Get_m1670010485_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t257213610 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		List_1_t257213610 * L_1 = ((  List_1_t257213610 * (*) (ObjectPool_1_t4251804118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t257213610 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t257213610 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m957266927_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t257213610 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		((  void (*) (ObjectPool_1_t4251804118 *, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, (List_1_t257213610 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1477269088_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t842049751 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t842049751 * L_2 = (UnityAction_1_t842049751 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t842049751 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t842049751 * L_3 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4251804118 * L_4 = (ObjectPool_1_t4251804118 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4251804118 *, UnityAction_1_t842049751 *, UnityAction_1_t842049751 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t842049751 *)G_B2_0, (UnityAction_1_t842049751 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2605375579_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4072576034 * L_0 = ___l0;
		NullCheck((List_1_t4072576034 *)L_0);
		((  void (*) (List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4072576034 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t4072576034 * ListPool_1_Get_m2875520964_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t4072576034 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		List_1_t4072576034 * L_1 = ((  List_1_t4072576034 * (*) (ObjectPool_1_t3772199246 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t4072576034 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t4072576034 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m2857821093_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4072576034 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		((  void (*) (ObjectPool_1_t3772199246 *, List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, (List_1_t4072576034 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1390066271_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t362444879 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t362444879 * L_2 = (UnityAction_1_t362444879 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t362444879 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t362444879 * L_3 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3772199246 * L_4 = (ObjectPool_1_t3772199246 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3772199246 *, UnityAction_1_t362444879 *, UnityAction_1_t362444879 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t362444879 *)G_B2_0, (UnityAction_1_t362444879 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3636388248_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t1234605051 * L_0 = ___l0;
		NullCheck((List_1_t1234605051 *)L_0);
		((  void (*) (List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t1234605051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t1234605051 * ListPool_1_Get_m738675669_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t1234605051 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		List_1_t1234605051 * L_1 = ((  List_1_t1234605051 * (*) (ObjectPool_1_t934228263 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t934228263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t1234605051 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1234605051 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1246825787_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t1234605051 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		((  void (*) (ObjectPool_1_t934228263 *, List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t934228263 *)L_0, (List_1_t1234605051 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m995356616_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1819441192 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1819441192 * L_2 = (UnityAction_1_t1819441192 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1819441192 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1819441192 * L_3 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t934228263 * L_4 = (ObjectPool_1_t934228263 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t934228263 *, UnityAction_1_t1819441192 *, UnityAction_1_t1819441192 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1819441192 *)G_B2_0, (UnityAction_1_t1819441192 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2531706949_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t3628304265 * L_0 = ___l0;
		NullCheck((List_1_t3628304265 *)L_0);
		((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t3628304265 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t3628304265 * ListPool_1_Get_m3176650548_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t3628304265 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		List_1_t3628304265 * L_1 = ((  List_1_t3628304265 * (*) (ObjectPool_1_t3327927477 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t3628304265 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t3628304265 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m591299672_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t3628304265 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		((  void (*) (ObjectPool_1_t3327927477 *, List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, (List_1_t3628304265 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m3480273184_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t4213140406 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t4213140406 * L_2 = (UnityAction_1_t4213140406 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t4213140406 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t4213140406 * L_3 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3327927477 * L_4 = (ObjectPool_1_t3327927477 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3327927477 *, UnityAction_1_t4213140406 *, UnityAction_1_t4213140406 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t4213140406 *)G_B2_0, (UnityAction_1_t4213140406 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2587502754_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t899420910 * L_0 = ___l0;
		NullCheck((List_1_t899420910 *)L_0);
		((  void (*) (List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t899420910 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t899420910 * ListPool_1_Get_m3176649063_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t899420910 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		List_1_t899420910 * L_1 = ((  List_1_t899420910 * (*) (ObjectPool_1_t599044122 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t599044122 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t899420910 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t899420910 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m4113115349_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t899420910 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		((  void (*) (ObjectPool_1_t599044122 *, List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t599044122 *)L_0, (List_1_t899420910 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m4085211983_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1484257051 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1484257051 * L_2 = (UnityAction_1_t1484257051 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1484257051 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1484257051 * L_3 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t599044122 * L_4 = (ObjectPool_1_t599044122 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t599044122 *, UnityAction_1_t1484257051 *, UnityAction_1_t1484257051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1484257051 *)G_B2_0, (UnityAction_1_t1484257051 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1838177011_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t496136383 * L_0 = ___l0;
		NullCheck((List_1_t496136383 *)L_0);
		((  void (*) (List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t496136383 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t496136383 * ListPool_1_Get_m3176656818_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t496136383 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		List_1_t496136383 * L_1 = ((  List_1_t496136383 * (*) (ObjectPool_1_t195759595 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t195759595 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t496136383 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t496136383 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1363449253_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t496136383 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		((  void (*) (ObjectPool_1_t195759595 *, List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t195759595 *)L_0, (List_1_t496136383 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m704263611_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1080972524 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1080972524 * L_2 = (UnityAction_1_t1080972524 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1080972524 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1080972524 * L_3 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t195759595 * L_4 = (ObjectPool_1_t195759595 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t195759595 *, UnityAction_1_t1080972524 *, UnityAction_1_t1080972524 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1080972524 *)G_B2_0, (UnityAction_1_t1080972524 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m2535233435_gshared (ObjectPool_1_t2779729376 * __this, UnityAction_1_t3664942305 * ___actionOnGet0, UnityAction_1_t3664942305 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t3664942305 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m819305395_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m3507126863_gshared (ObjectPool_1_t2779729376 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m807006650_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_m526975942_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3351668383_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		((  void (*) (ObjectPool_1_t2779729376 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t2779729376 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3923495619 * L_4 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t3923495619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_8 = V_0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0051:
	{
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3263354170_gshared (ObjectPool_1_t2779729376 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m3263354170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3923495619 * L_2 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t3923495619 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		bool L_5 = il2cpp_codegen_object_reference_equals((RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral46997234, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t3923495619 * L_9 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		RuntimeObject * L_10 = ___element0;
		NullCheck((Stack_1_t3923495619 *)L_9);
		((  void (*) (Stack_1_t3923495619 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t3923495619 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
