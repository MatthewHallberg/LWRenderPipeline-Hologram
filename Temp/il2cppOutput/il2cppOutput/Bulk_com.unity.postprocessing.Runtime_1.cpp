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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2501757036;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.RenderTextureFormat,System.Collections.DictionaryEntry>
struct Transform_1_t622688412;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t3280968592;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct Dictionary_2_t4146031392;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet>
struct Dictionary_2_t77305525;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_t3580962175;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride>
struct ReadOnlyCollection_1_t4273630488;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t1761491126;
// System.Func`2<System.Reflection.FieldInfo,System.Int32>
struct Func_2_t320181618;
// System.Func`3<System.Object,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_3_t749651721;
// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_3_t2888966892;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t303876359;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1033194329;
// UnityEngine.ComputeShader
struct ComputeShader_t317220254;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3213117958;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.RenderTextureFormat[]
struct RenderTextureFormatU5BU5D_t1018349568;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188;
// UnityEngine.RenderTexture[][]
struct RenderTextureU5BU5DU5BU5D_t847993469;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Rendering.PostProcessing.AmbientOcclusion
struct AmbientOcclusion_t1140100160;
// UnityEngine.Rendering.PostProcessing.AmbientOcclusionModeParameter
struct AmbientOcclusionModeParameter_t3592449485;
// UnityEngine.Rendering.PostProcessing.AmbientOcclusionQualityParameter
struct AmbientOcclusionQualityParameter_t3820917191;
// UnityEngine.Rendering.PostProcessing.AutoExposure
struct AutoExposure_t2470830169;
// UnityEngine.Rendering.PostProcessing.BoolParameter
struct BoolParameter_t2299103272;
// UnityEngine.Rendering.PostProcessing.ColorParameter
struct ColorParameter_t2998827320;
// UnityEngine.Rendering.PostProcessing.FloatParameter
struct FloatParameter_t1840207740;
// UnityEngine.Rendering.PostProcessing.IntParameter
struct IntParameter_t773781776;
// UnityEngine.Rendering.PostProcessing.LogHistogram
struct LogHistogram_t1187052756;
// UnityEngine.Rendering.PostProcessing.Monitor
struct Monitor_t1754509597;
// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct ParameterOverride_t3061054201;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct ParameterOverride_1_t2372640272;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct ParameterOverride_1_t1060491175;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>
struct ParameterOverride_1_t381536667;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>
struct ParameterOverride_1_t1070587220;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>
struct ParameterOverride_1_t1815622611;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>
struct ParameterOverride_1_t1025085192;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>
struct ParameterOverride_1_t3368882051;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>
struct ParameterOverride_1_t1642347714;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct ParameterOverride_1_t136614534;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct ParameterOverride_1_t1702698475;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct ParameterOverride_1_t1299413948;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
struct PostProcessDebugLayer_t3290441360;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct PostProcessEffectRenderer_1_t1384686169;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections>
struct PostProcessEffectRenderer_1_t1421876342;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>
struct PostProcessEffectRenderer_1_t388638640;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_t1672565614;
// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_t597611190;
// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_t1163236733;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct ComputeShaders_t4172110136;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
struct SMAALuts_t184516107;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct Shaders_t2807171077;
// UnityEngine.Rendering.PostProcessing.PropertySheet
struct PropertySheet_t3821403501;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t1490101248;
// UnityEngine.Rendering.PostProcessing.ScalableAO
struct ScalableAO_t1980962979;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPresetParameter
struct ScreenSpaceReflectionPresetParameter_t2494457668;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolutionParameter
struct ScreenSpaceReflectionResolutionParameter_t1804578420;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections
struct ScreenSpaceReflections_t3117296337;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer
struct ScreenSpaceReflectionsRenderer_t661283308;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset
struct QualityPreset_t734522687;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset[]
struct QualityPresetU5BU5D_t2343555814;
// UnityEngine.Rendering.PostProcessing.Spline
struct Spline_t3835237600;
// UnityEngine.Rendering.PostProcessing.SplineParameter
struct SplineParameter_t905443520;
// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct SubpixelMorphologicalAntialiasing_t3102233738;
// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t1535233241;
// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct TemporalAntialiasing_t1482226156;
// UnityEngine.Rendering.PostProcessing.TextureLerper
struct TextureLerper_t1948079985;
// UnityEngine.Rendering.PostProcessing.TextureParameter
struct TextureParameter_t4267400415;
// UnityEngine.Rendering.PostProcessing.TonemapperParameter
struct TonemapperParameter_t2646255172;
// UnityEngine.Rendering.PostProcessing.TrackballAttribute
struct TrackballAttribute_t1878300430;
// UnityEngine.Rendering.PostProcessing.Vector2Parameter
struct Vector2Parameter_t1794608574;
// UnityEngine.Rendering.PostProcessing.Vector3Parameter
struct Vector3Parameter_t753307070;
// UnityEngine.Rendering.PostProcessing.Vector4Parameter
struct Vector4Parameter_t1505856958;
// UnityEngine.Rendering.PostProcessing.VectorscopeMonitor
struct VectorscopeMonitor_t2083911122;
// UnityEngine.Rendering.PostProcessing.Vignette
struct Vignette_t2084058635;
// UnityEngine.Rendering.PostProcessing.VignetteModeParameter
struct VignetteModeParameter_t1229959487;
// UnityEngine.Rendering.PostProcessing.VignetteRenderer
struct VignetteRenderer_t4277974699;
// UnityEngine.Rendering.PostProcessing.WaveformMonitor
struct WaveformMonitor_t2029591948;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t2742279485;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596;
// UnityEngine.Texture3D
struct Texture3D_t1884131049;

extern RuntimeClass* AnimationCurve_t3046754366_il2cpp_TypeInfo_var;
extern RuntimeClass* BoolParameter_t2299103272_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorParameter_t2998827320_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeBuffer_t1033194329_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3280968592_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4146031392_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* FloatParameter_t1840207740_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntParameter_t773781776_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3580962175_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* ObsoleteAttributeU5BU5D_t3400296190_il2cpp_TypeInfo_var;
extern RuntimeClass* QualityPresetU5BU5D_t2343555814_il2cpp_TypeInfo_var;
extern RuntimeClass* QualityPreset_t734522687_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTargetIdentifierU5BU5D_t2742279485_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTextureFormat_t962350765_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTextureU5BU5DU5BU5D_t847993469_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTextureU5BU5D_t4111643188_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var;
extern RuntimeClass* ScreenSpaceReflectionPresetParameter_t2494457668_il2cpp_TypeInfo_var;
extern RuntimeClass* ScreenSpaceReflectionResolutionParameter_t1804578420_il2cpp_TypeInfo_var;
extern RuntimeClass* ShaderIDs_t2844105293_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture3D_t1884131049_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureFormat_t2701165832_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureLerper_t1948079985_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureParameter_t4267400415_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2Parameter_t1794608574_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* VignetteModeParameter_t1229959487_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0_FieldInfo_var;
extern String_t* _stringLiteral1010924843;
extern String_t* _stringLiteral1051284553;
extern String_t* _stringLiteral1064943856;
extern String_t* _stringLiteral108671656;
extern String_t* _stringLiteral1146530852;
extern String_t* _stringLiteral1146596388;
extern String_t* _stringLiteral121297036;
extern String_t* _stringLiteral1245105280;
extern String_t* _stringLiteral1253245767;
extern String_t* _stringLiteral1257172633;
extern String_t* _stringLiteral1260226397;
extern String_t* _stringLiteral1269419862;
extern String_t* _stringLiteral1297594091;
extern String_t* _stringLiteral1307103884;
extern String_t* _stringLiteral1411910041;
extern String_t* _stringLiteral1432282104;
extern String_t* _stringLiteral1478126650;
extern String_t* _stringLiteral1492108719;
extern String_t* _stringLiteral1512669492;
extern String_t* _stringLiteral1533427649;
extern String_t* _stringLiteral1569778134;
extern String_t* _stringLiteral1583701646;
extern String_t* _stringLiteral159994120;
extern String_t* _stringLiteral1671643584;
extern String_t* _stringLiteral1674904954;
extern String_t* _stringLiteral1689173040;
extern String_t* _stringLiteral1724946991;
extern String_t* _stringLiteral176315376;
extern String_t* _stringLiteral1789992613;
extern String_t* _stringLiteral1802272080;
extern String_t* _stringLiteral1803901912;
extern String_t* _stringLiteral1830665872;
extern String_t* _stringLiteral1836204922;
extern String_t* _stringLiteral1847659181;
extern String_t* _stringLiteral1944165919;
extern String_t* _stringLiteral2023788177;
extern String_t* _stringLiteral2114311090;
extern String_t* _stringLiteral2116052672;
extern String_t* _stringLiteral2121740015;
extern String_t* _stringLiteral2153845717;
extern String_t* _stringLiteral2177221748;
extern String_t* _stringLiteral2181186581;
extern String_t* _stringLiteral2191789461;
extern String_t* _stringLiteral2207186439;
extern String_t* _stringLiteral2215499874;
extern String_t* _stringLiteral2235547617;
extern String_t* _stringLiteral2284466856;
extern String_t* _stringLiteral2308970823;
extern String_t* _stringLiteral2345611850;
extern String_t* _stringLiteral2345619339;
extern String_t* _stringLiteral235474325;
extern String_t* _stringLiteral2355791104;
extern String_t* _stringLiteral2359387270;
extern String_t* _stringLiteral2390542409;
extern String_t* _stringLiteral2403779717;
extern String_t* _stringLiteral2441464067;
extern String_t* _stringLiteral2463475661;
extern String_t* _stringLiteral2471241864;
extern String_t* _stringLiteral249695751;
extern String_t* _stringLiteral2509374944;
extern String_t* _stringLiteral2555803806;
extern String_t* _stringLiteral2575753903;
extern String_t* _stringLiteral258292599;
extern String_t* _stringLiteral2641822323;
extern String_t* _stringLiteral2643395962;
extern String_t* _stringLiteral2682405442;
extern String_t* _stringLiteral2711297415;
extern String_t* _stringLiteral2729941611;
extern String_t* _stringLiteral2751900376;
extern String_t* _stringLiteral2762540215;
extern String_t* _stringLiteral2763423780;
extern String_t* _stringLiteral2791294457;
extern String_t* _stringLiteral2792736249;
extern String_t* _stringLiteral2793129465;
extern String_t* _stringLiteral2793522681;
extern String_t* _stringLiteral2804743930;
extern String_t* _stringLiteral2814226647;
extern String_t* _stringLiteral2823748904;
extern String_t* _stringLiteral2874542304;
extern String_t* _stringLiteral2880983304;
extern String_t* _stringLiteral2966701326;
extern String_t* _stringLiteral2977831838;
extern String_t* _stringLiteral3053790218;
extern String_t* _stringLiteral3062100205;
extern String_t* _stringLiteral3072607600;
extern String_t* _stringLiteral3081789513;
extern String_t* _stringLiteral3107066471;
extern String_t* _stringLiteral3145815565;
extern String_t* _stringLiteral3154506880;
extern String_t* _stringLiteral3181763460;
extern String_t* _stringLiteral3181956072;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral3200108423;
extern String_t* _stringLiteral3258063348;
extern String_t* _stringLiteral3268449352;
extern String_t* _stringLiteral3294203578;
extern String_t* _stringLiteral3294203580;
extern String_t* _stringLiteral3294203581;
extern String_t* _stringLiteral3294203583;
extern String_t* _stringLiteral3322828059;
extern String_t* _stringLiteral3323024667;
extern String_t* _stringLiteral3366981795;
extern String_t* _stringLiteral3367647173;
extern String_t* _stringLiteral3369985853;
extern String_t* _stringLiteral3394643094;
extern String_t* _stringLiteral3395715816;
extern String_t* _stringLiteral3403384095;
extern String_t* _stringLiteral3421566861;
extern String_t* _stringLiteral3462291509;
extern String_t* _stringLiteral3462422581;
extern String_t* _stringLiteral3462488117;
extern String_t* _stringLiteral3462619189;
extern String_t* _stringLiteral3463312432;
extern String_t* _stringLiteral3463312434;
extern String_t* _stringLiteral3504005554;
extern String_t* _stringLiteral3544690078;
extern String_t* _stringLiteral354657087;
extern String_t* _stringLiteral3566316586;
extern String_t* _stringLiteral356995084;
extern String_t* _stringLiteral3601388697;
extern String_t* _stringLiteral3629263775;
extern String_t* _stringLiteral3724884897;
extern String_t* _stringLiteral3736738307;
extern String_t* _stringLiteral3785107850;
extern String_t* _stringLiteral3852728067;
extern String_t* _stringLiteral3860033654;
extern String_t* _stringLiteral3869933050;
extern String_t* _stringLiteral3951757521;
extern String_t* _stringLiteral3986044598;
extern String_t* _stringLiteral3986044599;
extern String_t* _stringLiteral3986185328;
extern String_t* _stringLiteral4038785707;
extern String_t* _stringLiteral4058919964;
extern String_t* _stringLiteral4105667178;
extern String_t* _stringLiteral4105667179;
extern String_t* _stringLiteral4105667180;
extern String_t* _stringLiteral4137103658;
extern String_t* _stringLiteral4170186857;
extern String_t* _stringLiteral4174543017;
extern String_t* _stringLiteral4228677330;
extern String_t* _stringLiteral4231150815;
extern String_t* _stringLiteral4256383554;
extern String_t* _stringLiteral520385055;
extern String_t* _stringLiteral53162804;
extern String_t* _stringLiteral563699592;
extern String_t* _stringLiteral629754547;
extern String_t* _stringLiteral667428669;
extern String_t* _stringLiteral75136829;
extern String_t* _stringLiteral766582391;
extern String_t* _stringLiteral780830313;
extern String_t* _stringLiteral79654061;
extern String_t* _stringLiteral828472025;
extern String_t* _stringLiteral912009985;
extern const RuntimeMethod* Dictionary_2_Add_m2308266505_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m4044645047_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1147134866_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m676106703_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2037905538_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m432692139_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m292658209_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2394901845_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1569019338_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m3317342226_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1290642862_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1346869089_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m257972393_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m4210299999_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1154264654_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3123268278_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1566576383_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2851784777_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1_Interp_m1616255617_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1_Interp_m3314760251_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1_SetValue_m3595080103_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m1613981648_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m200298470_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m2089495734_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m2089496861_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m2089498935_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m3290804085_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m3872296206_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m642904211_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1__ctor_m735043315_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1_op_Implicit_m2453929980_RuntimeMethod_var;
extern const RuntimeMethod* ParameterOverride_1_op_Implicit_m3961651762_RuntimeMethod_var;
extern const RuntimeMethod* PostProcessEffectRenderer_1__ctor_m2131729682_RuntimeMethod_var;
extern const RuntimeMethod* PostProcessEffectRenderer_1__ctor_m3035501077_RuntimeMethod_var;
extern const RuntimeMethod* PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var;
extern const RuntimeMethod* PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var;
extern const RuntimeMethod* TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463_RuntimeMethod_var;
extern const RuntimeType* ObsoleteAttribute_t303876359_0_0_0_var;
extern const RuntimeType* RenderTextureFormat_t962350765_0_0_0_var;
extern const RuntimeType* TextureFormat_t2701165832_0_0_0_var;
extern const uint32_t ScalableAO_CompositeAmbientOnly_m721371156_MetadataUsageId;
extern const uint32_t ScalableAO_DoLazyInitialization_m3605561447_MetadataUsageId;
extern const uint32_t ScalableAO_Release_m1203498956_MetadataUsageId;
extern const uint32_t ScalableAO_RenderAfterOpaque_m12108879_MetadataUsageId;
extern const uint32_t ScalableAO_RenderAmbientOnly_m290882248_MetadataUsageId;
extern const uint32_t ScalableAO_Render_m342611428_MetadataUsageId;
extern const uint32_t ScalableAO__ctor_m3478719610_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionPresetParameter__ctor_m3463063192_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionResolutionParameter__ctor_m356292624_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionsRenderer_CheckRT_m170166065_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionsRenderer_Release_m3958716219_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionsRenderer_Render_m1147485825_MetadataUsageId;
extern const uint32_t ScreenSpaceReflectionsRenderer__ctor_m1343343901_MetadataUsageId;
extern const uint32_t ScreenSpaceReflections_IsEnabledAndSupported_m3384397126_MetadataUsageId;
extern const uint32_t ScreenSpaceReflections__ctor_m268654564_MetadataUsageId;
extern const uint32_t ShaderIDs__cctor_m2925472702_MetadataUsageId;
extern const uint32_t SplineParameter_Interp_m3163867138_MetadataUsageId;
extern const uint32_t SplineParameter_SetValue_m674779393_MetadataUsageId;
extern const uint32_t SplineParameter__ctor_m3864170264_MetadataUsageId;
extern const uint32_t Spline_Cache_m1110319752_MetadataUsageId;
extern const uint32_t Spline__ctor_m3923510359_MetadataUsageId;
extern const uint32_t SubpixelMorphologicalAntialiasing_IsSupported_m3529194477_MetadataUsageId;
extern const uint32_t SubpixelMorphologicalAntialiasing_Render_m522711021_MetadataUsageId;
extern const uint32_t TargetPool_Get_m1394169317_MetadataUsageId;
extern const uint32_t TargetPool__ctor_m1969230678_MetadataUsageId;
extern const uint32_t TemporalAntialiasing_CheckHistory_m418383224_MetadataUsageId;
extern const uint32_t TemporalAntialiasing_ConfigureStereoJitteredProjectionMatrices_m3464532113_MetadataUsageId;
extern const uint32_t TemporalAntialiasing_GenerateHistoryName_m269087843_MetadataUsageId;
extern const uint32_t TemporalAntialiasing_GetJitteredProjectionMatrix_m2147217554_MetadataUsageId;
extern const uint32_t TemporalAntialiasing_Render_m2536100356_MetadataUsageId;
extern const uint32_t TemporalAntialiasing__ctor_m1651721602_MetadataUsageId;
extern const uint32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463_MetadataUsageId;
extern const uint32_t TextureFormatUtilities_IsObsolete_m1854244735_MetadataUsageId;
extern const uint32_t TextureFormatUtilities_IsSupported_m249138407_MetadataUsageId;
extern const uint32_t TextureFormatUtilities_IsSupported_m4186123649_MetadataUsageId;
extern const uint32_t TextureFormatUtilities__cctor_m2388758696_MetadataUsageId;
extern const uint32_t TextureLerper_Clear_m427311549_MetadataUsageId;
extern const uint32_t TextureLerper_EndFrame_m3809744284_MetadataUsageId;
extern const uint32_t TextureLerper_Get_m1923166400_MetadataUsageId;
extern const uint32_t TextureLerper_Lerp_m107447087_MetadataUsageId;
extern const uint32_t TextureLerper__ctor_m2979572854_MetadataUsageId;
extern const uint32_t TextureLerper_get_instance_m4196735956_MetadataUsageId;
extern const uint32_t TextureParameter_Interp_m219523800_MetadataUsageId;
extern const uint32_t TextureParameter__ctor_m306418143_MetadataUsageId;
extern const uint32_t TonemapperParameter__ctor_m2226531985_MetadataUsageId;
extern const uint32_t Vector2Parameter__ctor_m1650761954_MetadataUsageId;
extern const uint32_t Vector2Parameter_op_Implicit_m2607702286_MetadataUsageId;
extern const uint32_t Vector2Parameter_op_Implicit_m3594044013_MetadataUsageId;
extern const uint32_t Vector3Parameter__ctor_m1944386951_MetadataUsageId;
extern const uint32_t Vector3Parameter_op_Implicit_m2102844031_MetadataUsageId;
extern const uint32_t Vector3Parameter_op_Implicit_m2842825481_MetadataUsageId;
extern const uint32_t Vector4Parameter__ctor_m1943216604_MetadataUsageId;
extern const uint32_t Vector4Parameter_op_Implicit_m173107943_MetadataUsageId;
extern const uint32_t Vector4Parameter_op_Implicit_m3407647676_MetadataUsageId;
extern const uint32_t VectorscopeMonitor_Render_m1839211803_MetadataUsageId;
extern const uint32_t VectorscopeMonitor_ShaderResourcesAvailable_m996270793_MetadataUsageId;
extern const uint32_t VignetteModeParameter__ctor_m3769796975_MetadataUsageId;
extern const uint32_t VignetteRenderer_Render_m833322936_MetadataUsageId;
extern const uint32_t VignetteRenderer__ctor_m2520288354_MetadataUsageId;
extern const uint32_t Vignette_IsEnabledAndSupported_m3952113681_MetadataUsageId;
extern const uint32_t Vignette__ctor_m2773660694_MetadataUsageId;
extern const uint32_t WaveformMonitor_Render_m3177004855_MetadataUsageId;
extern const uint32_t WaveformMonitor_ShaderResourcesAvailable_m709849121_MetadataUsageId;

struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct ObsoleteAttributeU5BU5D_t3400296190;
struct SingleU5BU5D_t1444911251;
struct KeyframeU5BU5D_t1068524471;
struct RenderTextureU5BU5D_t4111643188;
struct RenderTextureU5BU5DU5BU5D_t847993469;
struct QualityPresetU5BU5D_t2343555814;
struct RenderTargetIdentifierU5BU5D_t2742279485;
struct Texture2DU5BU5D_t149664596;


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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef DICTIONARY_2_T3280968592_H
#define DICTIONARY_2_T3280968592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct  Dictionary_2_t3280968592  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t2897418192* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___valueSlots_7)); }
	inline BooleanU5BU5D_t2897418192* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BooleanU5BU5D_t2897418192* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3280968592_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2501757036 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3280968592_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2501757036 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2501757036 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2501757036 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3280968592_H
#ifndef DICTIONARY_2_T4146031392_H
#define DICTIONARY_2_T4146031392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct  Dictionary_2_t4146031392  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	RenderTextureFormatU5BU5D_t1018349568* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___valueSlots_7)); }
	inline RenderTextureFormatU5BU5D_t1018349568* get_valueSlots_7() const { return ___valueSlots_7; }
	inline RenderTextureFormatU5BU5D_t1018349568** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(RenderTextureFormatU5BU5D_t1018349568* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4146031392_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t622688412 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4146031392_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t622688412 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t622688412 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t622688412 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4146031392_H
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
#ifndef LIST_1_T3580962175_H
#define LIST_1_T3580962175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct  List_1_t3580962175  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderTextureU5BU5D_t4111643188* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3580962175, ____items_1)); }
	inline RenderTextureU5BU5D_t4111643188* get__items_1() const { return ____items_1; }
	inline RenderTextureU5BU5D_t4111643188** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderTextureU5BU5D_t4111643188* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3580962175, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3580962175, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3580962175_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RenderTextureU5BU5D_t4111643188* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3580962175_StaticFields, ___EmptyArray_4)); }
	inline RenderTextureU5BU5D_t4111643188* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RenderTextureU5BU5D_t4111643188** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RenderTextureU5BU5D_t4111643188* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3580962175_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef MONITOR_T1754509597_H
#define MONITOR_T1754509597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Monitor
struct  Monitor_t1754509597  : public RuntimeObject
{
public:
	// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.Monitor::<output>k__BackingField
	RenderTexture_t2108887433 * ___U3CoutputU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Rendering.PostProcessing.Monitor::requested
	bool ___requested_1;

public:
	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Monitor_t1754509597, ___U3CoutputU3Ek__BackingField_0)); }
	inline RenderTexture_t2108887433 * get_U3CoutputU3Ek__BackingField_0() const { return ___U3CoutputU3Ek__BackingField_0; }
	inline RenderTexture_t2108887433 ** get_address_of_U3CoutputU3Ek__BackingField_0() { return &___U3CoutputU3Ek__BackingField_0; }
	inline void set_U3CoutputU3Ek__BackingField_0(RenderTexture_t2108887433 * value)
	{
		___U3CoutputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CoutputU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_requested_1() { return static_cast<int32_t>(offsetof(Monitor_t1754509597, ___requested_1)); }
	inline bool get_requested_1() const { return ___requested_1; }
	inline bool* get_address_of_requested_1() { return &___requested_1; }
	inline void set_requested_1(bool value)
	{
		___requested_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T1754509597_H
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
#ifndef COMPUTESHADERS_T4172110136_H
#define COMPUTESHADERS_T4172110136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct  ComputeShaders_t4172110136  : public RuntimeObject
{
public:
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::autoExposure
	ComputeShader_t317220254 * ___autoExposure_0;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::exposureHistogram
	ComputeShader_t317220254 * ___exposureHistogram_1;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::lut3DBaker
	ComputeShader_t317220254 * ___lut3DBaker_2;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::texture3dLerp
	ComputeShader_t317220254 * ___texture3dLerp_3;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gammaHistogram
	ComputeShader_t317220254 * ___gammaHistogram_4;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::waveform
	ComputeShader_t317220254 * ___waveform_5;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::vectorscope
	ComputeShader_t317220254 * ___vectorscope_6;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample1
	ComputeShader_t317220254 * ___multiScaleAODownsample1_7;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample2
	ComputeShader_t317220254 * ___multiScaleAODownsample2_8;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAORender
	ComputeShader_t317220254 * ___multiScaleAORender_9;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAOUpsample
	ComputeShader_t317220254 * ___multiScaleAOUpsample_10;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gaussianDownsample
	ComputeShader_t317220254 * ___gaussianDownsample_11;

public:
	inline static int32_t get_offset_of_autoExposure_0() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___autoExposure_0)); }
	inline ComputeShader_t317220254 * get_autoExposure_0() const { return ___autoExposure_0; }
	inline ComputeShader_t317220254 ** get_address_of_autoExposure_0() { return &___autoExposure_0; }
	inline void set_autoExposure_0(ComputeShader_t317220254 * value)
	{
		___autoExposure_0 = value;
		Il2CppCodeGenWriteBarrier((&___autoExposure_0), value);
	}

	inline static int32_t get_offset_of_exposureHistogram_1() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___exposureHistogram_1)); }
	inline ComputeShader_t317220254 * get_exposureHistogram_1() const { return ___exposureHistogram_1; }
	inline ComputeShader_t317220254 ** get_address_of_exposureHistogram_1() { return &___exposureHistogram_1; }
	inline void set_exposureHistogram_1(ComputeShader_t317220254 * value)
	{
		___exposureHistogram_1 = value;
		Il2CppCodeGenWriteBarrier((&___exposureHistogram_1), value);
	}

	inline static int32_t get_offset_of_lut3DBaker_2() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___lut3DBaker_2)); }
	inline ComputeShader_t317220254 * get_lut3DBaker_2() const { return ___lut3DBaker_2; }
	inline ComputeShader_t317220254 ** get_address_of_lut3DBaker_2() { return &___lut3DBaker_2; }
	inline void set_lut3DBaker_2(ComputeShader_t317220254 * value)
	{
		___lut3DBaker_2 = value;
		Il2CppCodeGenWriteBarrier((&___lut3DBaker_2), value);
	}

	inline static int32_t get_offset_of_texture3dLerp_3() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___texture3dLerp_3)); }
	inline ComputeShader_t317220254 * get_texture3dLerp_3() const { return ___texture3dLerp_3; }
	inline ComputeShader_t317220254 ** get_address_of_texture3dLerp_3() { return &___texture3dLerp_3; }
	inline void set_texture3dLerp_3(ComputeShader_t317220254 * value)
	{
		___texture3dLerp_3 = value;
		Il2CppCodeGenWriteBarrier((&___texture3dLerp_3), value);
	}

	inline static int32_t get_offset_of_gammaHistogram_4() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___gammaHistogram_4)); }
	inline ComputeShader_t317220254 * get_gammaHistogram_4() const { return ___gammaHistogram_4; }
	inline ComputeShader_t317220254 ** get_address_of_gammaHistogram_4() { return &___gammaHistogram_4; }
	inline void set_gammaHistogram_4(ComputeShader_t317220254 * value)
	{
		___gammaHistogram_4 = value;
		Il2CppCodeGenWriteBarrier((&___gammaHistogram_4), value);
	}

	inline static int32_t get_offset_of_waveform_5() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___waveform_5)); }
	inline ComputeShader_t317220254 * get_waveform_5() const { return ___waveform_5; }
	inline ComputeShader_t317220254 ** get_address_of_waveform_5() { return &___waveform_5; }
	inline void set_waveform_5(ComputeShader_t317220254 * value)
	{
		___waveform_5 = value;
		Il2CppCodeGenWriteBarrier((&___waveform_5), value);
	}

	inline static int32_t get_offset_of_vectorscope_6() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___vectorscope_6)); }
	inline ComputeShader_t317220254 * get_vectorscope_6() const { return ___vectorscope_6; }
	inline ComputeShader_t317220254 ** get_address_of_vectorscope_6() { return &___vectorscope_6; }
	inline void set_vectorscope_6(ComputeShader_t317220254 * value)
	{
		___vectorscope_6 = value;
		Il2CppCodeGenWriteBarrier((&___vectorscope_6), value);
	}

	inline static int32_t get_offset_of_multiScaleAODownsample1_7() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___multiScaleAODownsample1_7)); }
	inline ComputeShader_t317220254 * get_multiScaleAODownsample1_7() const { return ___multiScaleAODownsample1_7; }
	inline ComputeShader_t317220254 ** get_address_of_multiScaleAODownsample1_7() { return &___multiScaleAODownsample1_7; }
	inline void set_multiScaleAODownsample1_7(ComputeShader_t317220254 * value)
	{
		___multiScaleAODownsample1_7 = value;
		Il2CppCodeGenWriteBarrier((&___multiScaleAODownsample1_7), value);
	}

	inline static int32_t get_offset_of_multiScaleAODownsample2_8() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___multiScaleAODownsample2_8)); }
	inline ComputeShader_t317220254 * get_multiScaleAODownsample2_8() const { return ___multiScaleAODownsample2_8; }
	inline ComputeShader_t317220254 ** get_address_of_multiScaleAODownsample2_8() { return &___multiScaleAODownsample2_8; }
	inline void set_multiScaleAODownsample2_8(ComputeShader_t317220254 * value)
	{
		___multiScaleAODownsample2_8 = value;
		Il2CppCodeGenWriteBarrier((&___multiScaleAODownsample2_8), value);
	}

	inline static int32_t get_offset_of_multiScaleAORender_9() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___multiScaleAORender_9)); }
	inline ComputeShader_t317220254 * get_multiScaleAORender_9() const { return ___multiScaleAORender_9; }
	inline ComputeShader_t317220254 ** get_address_of_multiScaleAORender_9() { return &___multiScaleAORender_9; }
	inline void set_multiScaleAORender_9(ComputeShader_t317220254 * value)
	{
		___multiScaleAORender_9 = value;
		Il2CppCodeGenWriteBarrier((&___multiScaleAORender_9), value);
	}

	inline static int32_t get_offset_of_multiScaleAOUpsample_10() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___multiScaleAOUpsample_10)); }
	inline ComputeShader_t317220254 * get_multiScaleAOUpsample_10() const { return ___multiScaleAOUpsample_10; }
	inline ComputeShader_t317220254 ** get_address_of_multiScaleAOUpsample_10() { return &___multiScaleAOUpsample_10; }
	inline void set_multiScaleAOUpsample_10(ComputeShader_t317220254 * value)
	{
		___multiScaleAOUpsample_10 = value;
		Il2CppCodeGenWriteBarrier((&___multiScaleAOUpsample_10), value);
	}

	inline static int32_t get_offset_of_gaussianDownsample_11() { return static_cast<int32_t>(offsetof(ComputeShaders_t4172110136, ___gaussianDownsample_11)); }
	inline ComputeShader_t317220254 * get_gaussianDownsample_11() const { return ___gaussianDownsample_11; }
	inline ComputeShader_t317220254 ** get_address_of_gaussianDownsample_11() { return &___gaussianDownsample_11; }
	inline void set_gaussianDownsample_11(ComputeShader_t317220254 * value)
	{
		___gaussianDownsample_11 = value;
		Il2CppCodeGenWriteBarrier((&___gaussianDownsample_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTESHADERS_T4172110136_H
#ifndef SMAALUTS_T184516107_H
#define SMAALUTS_T184516107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
struct  SMAALuts_t184516107  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts::area
	Texture2D_t3840446185 * ___area_0;
	// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts::search
	Texture2D_t3840446185 * ___search_1;

public:
	inline static int32_t get_offset_of_area_0() { return static_cast<int32_t>(offsetof(SMAALuts_t184516107, ___area_0)); }
	inline Texture2D_t3840446185 * get_area_0() const { return ___area_0; }
	inline Texture2D_t3840446185 ** get_address_of_area_0() { return &___area_0; }
	inline void set_area_0(Texture2D_t3840446185 * value)
	{
		___area_0 = value;
		Il2CppCodeGenWriteBarrier((&___area_0), value);
	}

	inline static int32_t get_offset_of_search_1() { return static_cast<int32_t>(offsetof(SMAALuts_t184516107, ___search_1)); }
	inline Texture2D_t3840446185 * get_search_1() const { return ___search_1; }
	inline Texture2D_t3840446185 ** get_address_of_search_1() { return &___search_1; }
	inline void set_search_1(Texture2D_t3840446185 * value)
	{
		___search_1 = value;
		Il2CppCodeGenWriteBarrier((&___search_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMAALUTS_T184516107_H
#ifndef SHADERS_T2807171077_H
#define SHADERS_T2807171077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct  Shaders_t2807171077  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::bloom
	Shader_t4151988712 * ___bloom_0;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copy
	Shader_t4151988712 * ___copy_1;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStd
	Shader_t4151988712 * ___copyStd_2;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::discardAlpha
	Shader_t4151988712 * ___discardAlpha_3;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::depthOfField
	Shader_t4151988712 * ___depthOfField_4;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::finalPass
	Shader_t4151988712 * ___finalPass_5;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::grainBaker
	Shader_t4151988712 * ___grainBaker_6;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::motionBlur
	Shader_t4151988712 * ___motionBlur_7;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::temporalAntialiasing
	Shader_t4151988712 * ___temporalAntialiasing_8;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::subpixelMorphologicalAntialiasing
	Shader_t4151988712 * ___subpixelMorphologicalAntialiasing_9;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::texture2dLerp
	Shader_t4151988712 * ___texture2dLerp_10;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::uber
	Shader_t4151988712 * ___uber_11;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lut2DBaker
	Shader_t4151988712 * ___lut2DBaker_12;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lightMeter
	Shader_t4151988712 * ___lightMeter_13;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::gammaHistogram
	Shader_t4151988712 * ___gammaHistogram_14;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::waveform
	Shader_t4151988712 * ___waveform_15;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::vectorscope
	Shader_t4151988712 * ___vectorscope_16;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::debugOverlays
	Shader_t4151988712 * ___debugOverlays_17;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::deferredFog
	Shader_t4151988712 * ___deferredFog_18;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::scalableAO
	Shader_t4151988712 * ___scalableAO_19;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::multiScaleAO
	Shader_t4151988712 * ___multiScaleAO_20;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::screenSpaceReflections
	Shader_t4151988712 * ___screenSpaceReflections_21;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___bloom_0)); }
	inline Shader_t4151988712 * get_bloom_0() const { return ___bloom_0; }
	inline Shader_t4151988712 ** get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(Shader_t4151988712 * value)
	{
		___bloom_0 = value;
		Il2CppCodeGenWriteBarrier((&___bloom_0), value);
	}

	inline static int32_t get_offset_of_copy_1() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___copy_1)); }
	inline Shader_t4151988712 * get_copy_1() const { return ___copy_1; }
	inline Shader_t4151988712 ** get_address_of_copy_1() { return &___copy_1; }
	inline void set_copy_1(Shader_t4151988712 * value)
	{
		___copy_1 = value;
		Il2CppCodeGenWriteBarrier((&___copy_1), value);
	}

	inline static int32_t get_offset_of_copyStd_2() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___copyStd_2)); }
	inline Shader_t4151988712 * get_copyStd_2() const { return ___copyStd_2; }
	inline Shader_t4151988712 ** get_address_of_copyStd_2() { return &___copyStd_2; }
	inline void set_copyStd_2(Shader_t4151988712 * value)
	{
		___copyStd_2 = value;
		Il2CppCodeGenWriteBarrier((&___copyStd_2), value);
	}

	inline static int32_t get_offset_of_discardAlpha_3() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___discardAlpha_3)); }
	inline Shader_t4151988712 * get_discardAlpha_3() const { return ___discardAlpha_3; }
	inline Shader_t4151988712 ** get_address_of_discardAlpha_3() { return &___discardAlpha_3; }
	inline void set_discardAlpha_3(Shader_t4151988712 * value)
	{
		___discardAlpha_3 = value;
		Il2CppCodeGenWriteBarrier((&___discardAlpha_3), value);
	}

	inline static int32_t get_offset_of_depthOfField_4() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___depthOfField_4)); }
	inline Shader_t4151988712 * get_depthOfField_4() const { return ___depthOfField_4; }
	inline Shader_t4151988712 ** get_address_of_depthOfField_4() { return &___depthOfField_4; }
	inline void set_depthOfField_4(Shader_t4151988712 * value)
	{
		___depthOfField_4 = value;
		Il2CppCodeGenWriteBarrier((&___depthOfField_4), value);
	}

	inline static int32_t get_offset_of_finalPass_5() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___finalPass_5)); }
	inline Shader_t4151988712 * get_finalPass_5() const { return ___finalPass_5; }
	inline Shader_t4151988712 ** get_address_of_finalPass_5() { return &___finalPass_5; }
	inline void set_finalPass_5(Shader_t4151988712 * value)
	{
		___finalPass_5 = value;
		Il2CppCodeGenWriteBarrier((&___finalPass_5), value);
	}

	inline static int32_t get_offset_of_grainBaker_6() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___grainBaker_6)); }
	inline Shader_t4151988712 * get_grainBaker_6() const { return ___grainBaker_6; }
	inline Shader_t4151988712 ** get_address_of_grainBaker_6() { return &___grainBaker_6; }
	inline void set_grainBaker_6(Shader_t4151988712 * value)
	{
		___grainBaker_6 = value;
		Il2CppCodeGenWriteBarrier((&___grainBaker_6), value);
	}

	inline static int32_t get_offset_of_motionBlur_7() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___motionBlur_7)); }
	inline Shader_t4151988712 * get_motionBlur_7() const { return ___motionBlur_7; }
	inline Shader_t4151988712 ** get_address_of_motionBlur_7() { return &___motionBlur_7; }
	inline void set_motionBlur_7(Shader_t4151988712 * value)
	{
		___motionBlur_7 = value;
		Il2CppCodeGenWriteBarrier((&___motionBlur_7), value);
	}

	inline static int32_t get_offset_of_temporalAntialiasing_8() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___temporalAntialiasing_8)); }
	inline Shader_t4151988712 * get_temporalAntialiasing_8() const { return ___temporalAntialiasing_8; }
	inline Shader_t4151988712 ** get_address_of_temporalAntialiasing_8() { return &___temporalAntialiasing_8; }
	inline void set_temporalAntialiasing_8(Shader_t4151988712 * value)
	{
		___temporalAntialiasing_8 = value;
		Il2CppCodeGenWriteBarrier((&___temporalAntialiasing_8), value);
	}

	inline static int32_t get_offset_of_subpixelMorphologicalAntialiasing_9() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___subpixelMorphologicalAntialiasing_9)); }
	inline Shader_t4151988712 * get_subpixelMorphologicalAntialiasing_9() const { return ___subpixelMorphologicalAntialiasing_9; }
	inline Shader_t4151988712 ** get_address_of_subpixelMorphologicalAntialiasing_9() { return &___subpixelMorphologicalAntialiasing_9; }
	inline void set_subpixelMorphologicalAntialiasing_9(Shader_t4151988712 * value)
	{
		___subpixelMorphologicalAntialiasing_9 = value;
		Il2CppCodeGenWriteBarrier((&___subpixelMorphologicalAntialiasing_9), value);
	}

	inline static int32_t get_offset_of_texture2dLerp_10() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___texture2dLerp_10)); }
	inline Shader_t4151988712 * get_texture2dLerp_10() const { return ___texture2dLerp_10; }
	inline Shader_t4151988712 ** get_address_of_texture2dLerp_10() { return &___texture2dLerp_10; }
	inline void set_texture2dLerp_10(Shader_t4151988712 * value)
	{
		___texture2dLerp_10 = value;
		Il2CppCodeGenWriteBarrier((&___texture2dLerp_10), value);
	}

	inline static int32_t get_offset_of_uber_11() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___uber_11)); }
	inline Shader_t4151988712 * get_uber_11() const { return ___uber_11; }
	inline Shader_t4151988712 ** get_address_of_uber_11() { return &___uber_11; }
	inline void set_uber_11(Shader_t4151988712 * value)
	{
		___uber_11 = value;
		Il2CppCodeGenWriteBarrier((&___uber_11), value);
	}

	inline static int32_t get_offset_of_lut2DBaker_12() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___lut2DBaker_12)); }
	inline Shader_t4151988712 * get_lut2DBaker_12() const { return ___lut2DBaker_12; }
	inline Shader_t4151988712 ** get_address_of_lut2DBaker_12() { return &___lut2DBaker_12; }
	inline void set_lut2DBaker_12(Shader_t4151988712 * value)
	{
		___lut2DBaker_12 = value;
		Il2CppCodeGenWriteBarrier((&___lut2DBaker_12), value);
	}

	inline static int32_t get_offset_of_lightMeter_13() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___lightMeter_13)); }
	inline Shader_t4151988712 * get_lightMeter_13() const { return ___lightMeter_13; }
	inline Shader_t4151988712 ** get_address_of_lightMeter_13() { return &___lightMeter_13; }
	inline void set_lightMeter_13(Shader_t4151988712 * value)
	{
		___lightMeter_13 = value;
		Il2CppCodeGenWriteBarrier((&___lightMeter_13), value);
	}

	inline static int32_t get_offset_of_gammaHistogram_14() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___gammaHistogram_14)); }
	inline Shader_t4151988712 * get_gammaHistogram_14() const { return ___gammaHistogram_14; }
	inline Shader_t4151988712 ** get_address_of_gammaHistogram_14() { return &___gammaHistogram_14; }
	inline void set_gammaHistogram_14(Shader_t4151988712 * value)
	{
		___gammaHistogram_14 = value;
		Il2CppCodeGenWriteBarrier((&___gammaHistogram_14), value);
	}

	inline static int32_t get_offset_of_waveform_15() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___waveform_15)); }
	inline Shader_t4151988712 * get_waveform_15() const { return ___waveform_15; }
	inline Shader_t4151988712 ** get_address_of_waveform_15() { return &___waveform_15; }
	inline void set_waveform_15(Shader_t4151988712 * value)
	{
		___waveform_15 = value;
		Il2CppCodeGenWriteBarrier((&___waveform_15), value);
	}

	inline static int32_t get_offset_of_vectorscope_16() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___vectorscope_16)); }
	inline Shader_t4151988712 * get_vectorscope_16() const { return ___vectorscope_16; }
	inline Shader_t4151988712 ** get_address_of_vectorscope_16() { return &___vectorscope_16; }
	inline void set_vectorscope_16(Shader_t4151988712 * value)
	{
		___vectorscope_16 = value;
		Il2CppCodeGenWriteBarrier((&___vectorscope_16), value);
	}

	inline static int32_t get_offset_of_debugOverlays_17() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___debugOverlays_17)); }
	inline Shader_t4151988712 * get_debugOverlays_17() const { return ___debugOverlays_17; }
	inline Shader_t4151988712 ** get_address_of_debugOverlays_17() { return &___debugOverlays_17; }
	inline void set_debugOverlays_17(Shader_t4151988712 * value)
	{
		___debugOverlays_17 = value;
		Il2CppCodeGenWriteBarrier((&___debugOverlays_17), value);
	}

	inline static int32_t get_offset_of_deferredFog_18() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___deferredFog_18)); }
	inline Shader_t4151988712 * get_deferredFog_18() const { return ___deferredFog_18; }
	inline Shader_t4151988712 ** get_address_of_deferredFog_18() { return &___deferredFog_18; }
	inline void set_deferredFog_18(Shader_t4151988712 * value)
	{
		___deferredFog_18 = value;
		Il2CppCodeGenWriteBarrier((&___deferredFog_18), value);
	}

	inline static int32_t get_offset_of_scalableAO_19() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___scalableAO_19)); }
	inline Shader_t4151988712 * get_scalableAO_19() const { return ___scalableAO_19; }
	inline Shader_t4151988712 ** get_address_of_scalableAO_19() { return &___scalableAO_19; }
	inline void set_scalableAO_19(Shader_t4151988712 * value)
	{
		___scalableAO_19 = value;
		Il2CppCodeGenWriteBarrier((&___scalableAO_19), value);
	}

	inline static int32_t get_offset_of_multiScaleAO_20() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___multiScaleAO_20)); }
	inline Shader_t4151988712 * get_multiScaleAO_20() const { return ___multiScaleAO_20; }
	inline Shader_t4151988712 ** get_address_of_multiScaleAO_20() { return &___multiScaleAO_20; }
	inline void set_multiScaleAO_20(Shader_t4151988712 * value)
	{
		___multiScaleAO_20 = value;
		Il2CppCodeGenWriteBarrier((&___multiScaleAO_20), value);
	}

	inline static int32_t get_offset_of_screenSpaceReflections_21() { return static_cast<int32_t>(offsetof(Shaders_t2807171077, ___screenSpaceReflections_21)); }
	inline Shader_t4151988712 * get_screenSpaceReflections_21() const { return ___screenSpaceReflections_21; }
	inline Shader_t4151988712 ** get_address_of_screenSpaceReflections_21() { return &___screenSpaceReflections_21; }
	inline void set_screenSpaceReflections_21(Shader_t4151988712 * value)
	{
		___screenSpaceReflections_21 = value;
		Il2CppCodeGenWriteBarrier((&___screenSpaceReflections_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERS_T2807171077_H
#ifndef PROPERTYSHEET_T3821403501_H
#define PROPERTYSHEET_T3821403501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PropertySheet
struct  PropertySheet_t3821403501  : public RuntimeObject
{
public:
	// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::<properties>k__BackingField
	MaterialPropertyBlock_t3213117958 * ___U3CpropertiesU3Ek__BackingField_0;
	// UnityEngine.Material UnityEngine.Rendering.PostProcessing.PropertySheet::<material>k__BackingField
	Material_t340375123 * ___U3CmaterialU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CpropertiesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PropertySheet_t3821403501, ___U3CpropertiesU3Ek__BackingField_0)); }
	inline MaterialPropertyBlock_t3213117958 * get_U3CpropertiesU3Ek__BackingField_0() const { return ___U3CpropertiesU3Ek__BackingField_0; }
	inline MaterialPropertyBlock_t3213117958 ** get_address_of_U3CpropertiesU3Ek__BackingField_0() { return &___U3CpropertiesU3Ek__BackingField_0; }
	inline void set_U3CpropertiesU3Ek__BackingField_0(MaterialPropertyBlock_t3213117958 * value)
	{
		___U3CpropertiesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpropertiesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmaterialU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PropertySheet_t3821403501, ___U3CmaterialU3Ek__BackingField_1)); }
	inline Material_t340375123 * get_U3CmaterialU3Ek__BackingField_1() const { return ___U3CmaterialU3Ek__BackingField_1; }
	inline Material_t340375123 ** get_address_of_U3CmaterialU3Ek__BackingField_1() { return &___U3CmaterialU3Ek__BackingField_1; }
	inline void set_U3CmaterialU3Ek__BackingField_1(Material_t340375123 * value)
	{
		___U3CmaterialU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmaterialU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYSHEET_T3821403501_H
#ifndef PROPERTYSHEETFACTORY_T1490101248_H
#define PROPERTYSHEETFACTORY_T1490101248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct  PropertySheetFactory_t1490101248  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet> UnityEngine.Rendering.PostProcessing.PropertySheetFactory::m_Sheets
	Dictionary_2_t77305525 * ___m_Sheets_0;

public:
	inline static int32_t get_offset_of_m_Sheets_0() { return static_cast<int32_t>(offsetof(PropertySheetFactory_t1490101248, ___m_Sheets_0)); }
	inline Dictionary_2_t77305525 * get_m_Sheets_0() const { return ___m_Sheets_0; }
	inline Dictionary_2_t77305525 ** get_address_of_m_Sheets_0() { return &___m_Sheets_0; }
	inline void set_m_Sheets_0(Dictionary_2_t77305525 * value)
	{
		___m_Sheets_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sheets_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYSHEETFACTORY_T1490101248_H
#ifndef SCALABLEAO_T1980962979_H
#define SCALABLEAO_T1980962979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScalableAO
struct  ScalableAO_t1980962979  : public RuntimeObject
{
public:
	// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.ScalableAO::m_Result
	RenderTexture_t2108887433 * ___m_Result_0;
	// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.ScalableAO::m_PropertySheet
	PropertySheet_t3821403501 * ___m_PropertySheet_1;
	// UnityEngine.Rendering.PostProcessing.AmbientOcclusion UnityEngine.Rendering.PostProcessing.ScalableAO::m_Settings
	AmbientOcclusion_t1140100160 * ___m_Settings_2;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.PostProcessing.ScalableAO::m_MRT
	RenderTargetIdentifierU5BU5D_t2742279485* ___m_MRT_3;
	// System.Int32[] UnityEngine.Rendering.PostProcessing.ScalableAO::m_SampleCount
	Int32U5BU5D_t385246372* ___m_SampleCount_4;

public:
	inline static int32_t get_offset_of_m_Result_0() { return static_cast<int32_t>(offsetof(ScalableAO_t1980962979, ___m_Result_0)); }
	inline RenderTexture_t2108887433 * get_m_Result_0() const { return ___m_Result_0; }
	inline RenderTexture_t2108887433 ** get_address_of_m_Result_0() { return &___m_Result_0; }
	inline void set_m_Result_0(RenderTexture_t2108887433 * value)
	{
		___m_Result_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Result_0), value);
	}

	inline static int32_t get_offset_of_m_PropertySheet_1() { return static_cast<int32_t>(offsetof(ScalableAO_t1980962979, ___m_PropertySheet_1)); }
	inline PropertySheet_t3821403501 * get_m_PropertySheet_1() const { return ___m_PropertySheet_1; }
	inline PropertySheet_t3821403501 ** get_address_of_m_PropertySheet_1() { return &___m_PropertySheet_1; }
	inline void set_m_PropertySheet_1(PropertySheet_t3821403501 * value)
	{
		___m_PropertySheet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PropertySheet_1), value);
	}

	inline static int32_t get_offset_of_m_Settings_2() { return static_cast<int32_t>(offsetof(ScalableAO_t1980962979, ___m_Settings_2)); }
	inline AmbientOcclusion_t1140100160 * get_m_Settings_2() const { return ___m_Settings_2; }
	inline AmbientOcclusion_t1140100160 ** get_address_of_m_Settings_2() { return &___m_Settings_2; }
	inline void set_m_Settings_2(AmbientOcclusion_t1140100160 * value)
	{
		___m_Settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_2), value);
	}

	inline static int32_t get_offset_of_m_MRT_3() { return static_cast<int32_t>(offsetof(ScalableAO_t1980962979, ___m_MRT_3)); }
	inline RenderTargetIdentifierU5BU5D_t2742279485* get_m_MRT_3() const { return ___m_MRT_3; }
	inline RenderTargetIdentifierU5BU5D_t2742279485** get_address_of_m_MRT_3() { return &___m_MRT_3; }
	inline void set_m_MRT_3(RenderTargetIdentifierU5BU5D_t2742279485* value)
	{
		___m_MRT_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_3), value);
	}

	inline static int32_t get_offset_of_m_SampleCount_4() { return static_cast<int32_t>(offsetof(ScalableAO_t1980962979, ___m_SampleCount_4)); }
	inline Int32U5BU5D_t385246372* get_m_SampleCount_4() const { return ___m_SampleCount_4; }
	inline Int32U5BU5D_t385246372** get_address_of_m_SampleCount_4() { return &___m_SampleCount_4; }
	inline void set_m_SampleCount_4(Int32U5BU5D_t385246372* value)
	{
		___m_SampleCount_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SampleCount_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALABLEAO_T1980962979_H
#ifndef SHADERIDS_T2844105293_H
#define SHADERIDS_T2844105293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ShaderIDs
struct  ShaderIDs_t2844105293  : public RuntimeObject
{
public:

public:
};

struct ShaderIDs_t2844105293_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MainTex
	int32_t ___MainTex_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Jitter
	int32_t ___Jitter_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Sharpness
	int32_t ___Sharpness_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FinalBlendParameters
	int32_t ___FinalBlendParameters_3;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistoryTex
	int32_t ___HistoryTex_4;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flip
	int32_t ___SMAA_Flip_5;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flop
	int32_t ___SMAA_Flop_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOParams
	int32_t ___AOParams_7;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOColor
	int32_t ___AOColor_8;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture1
	int32_t ___OcclusionTexture1_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture2
	int32_t ___OcclusionTexture2_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SAOcclusionTexture
	int32_t ___SAOcclusionTexture_11;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MSVOcclusionTexture
	int32_t ___MSVOcclusionTexture_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthCopy
	int32_t ___DepthCopy_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LinearDepth
	int32_t ___LinearDepth_14;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth1
	int32_t ___LowDepth1_15;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth2
	int32_t ___LowDepth2_16;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth3
	int32_t ___LowDepth3_17;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth4
	int32_t ___LowDepth4_18;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth1
	int32_t ___TiledDepth1_19;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth2
	int32_t ___TiledDepth2_20;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth3
	int32_t ___TiledDepth3_21;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth4
	int32_t ___TiledDepth4_22;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion1
	int32_t ___Occlusion1_23;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion2
	int32_t ___Occlusion2_24;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion3
	int32_t ___Occlusion3_25;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion4
	int32_t ___Occlusion4_26;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined1
	int32_t ___Combined1_27;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined2
	int32_t ___Combined2_28;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined3
	int32_t ___Combined3_29;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SSRResolveTemp
	int32_t ___SSRResolveTemp_30;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Noise
	int32_t ___Noise_31;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Test
	int32_t ___Test_32;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Resolve
	int32_t ___Resolve_33;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::History
	int32_t ___History_34;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ViewMatrix
	int32_t ___ViewMatrix_35;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InverseViewMatrix
	int32_t ___InverseViewMatrix_36;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InverseProjectionMatrix
	int32_t ___InverseProjectionMatrix_37;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScreenSpaceProjectionMatrix
	int32_t ___ScreenSpaceProjectionMatrix_38;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params2
	int32_t ___Params2_39;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogColor
	int32_t ___FogColor_40;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogParams
	int32_t ___FogParams_41;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityScale
	int32_t ___VelocityScale_42;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxBlurRadius
	int32_t ___MaxBlurRadius_43;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxBlurRadius
	int32_t ___RcpMaxBlurRadius_44;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityTex
	int32_t ___VelocityTex_45;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile2RT
	int32_t ___Tile2RT_46;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile4RT
	int32_t ___Tile4RT_47;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile8RT
	int32_t ___Tile8RT_48;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxOffs
	int32_t ___TileMaxOffs_49;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxLoop
	int32_t ___TileMaxLoop_50;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileVRT
	int32_t ___TileVRT_51;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::NeighborMaxTex
	int32_t ___NeighborMaxTex_52;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LoopCount
	int32_t ___LoopCount_53;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTemp
	int32_t ___DepthOfFieldTemp_54;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTex
	int32_t ___DepthOfFieldTex_55;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distance
	int32_t ___Distance_56;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LensCoeff
	int32_t ___LensCoeff_57;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxCoC
	int32_t ___MaxCoC_58;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxCoC
	int32_t ___RcpMaxCoC_59;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpAspect
	int32_t ___RcpAspect_60;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CoCTex
	int32_t ___CoCTex_61;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TaaParams
	int32_t ___TaaParams_62;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AutoExposureTex
	int32_t ___AutoExposureTex_63;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistogramBuffer
	int32_t ___HistogramBuffer_64;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params
	int32_t ___Params_65;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScaleOffsetRes
	int32_t ___ScaleOffsetRes_66;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::BloomTex
	int32_t ___BloomTex_67;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SampleScale
	int32_t ___SampleScale_68;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Threshold
	int32_t ___Threshold_69;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorIntensity
	int32_t ___ColorIntensity_70;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTex
	int32_t ___Bloom_DirtTex_71;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Settings
	int32_t ___Bloom_Settings_72;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Color
	int32_t ___Bloom_Color_73;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTileOffset
	int32_t ___Bloom_DirtTileOffset_74;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_Amount
	int32_t ___ChromaticAberration_Amount_75;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_SpectralLut
	int32_t ___ChromaticAberration_SpectralLut_76;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_CenterScale
	int32_t ___Distortion_CenterScale_77;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_Amount
	int32_t ___Distortion_Amount_78;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D
	int32_t ___Lut2D_79;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D
	int32_t ___Lut3D_80;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D_Params
	int32_t ___Lut3D_Params_81;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D_Params
	int32_t ___Lut2D_Params_82;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UserLut2D_Params
	int32_t ___UserLut2D_Params_83;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::PostExposure
	int32_t ___PostExposure_84;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorBalance
	int32_t ___ColorBalance_85;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorFilter
	int32_t ___ColorFilter_86;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HueSatCon
	int32_t ___HueSatCon_87;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Brightness
	int32_t ___Brightness_88;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerRed
	int32_t ___ChannelMixerRed_89;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerGreen
	int32_t ___ChannelMixerGreen_90;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerBlue
	int32_t ___ChannelMixerBlue_91;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lift
	int32_t ___Lift_92;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InvGamma
	int32_t ___InvGamma_93;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Gain
	int32_t ___Gain_94;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Curves
	int32_t ___Curves_95;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CustomToneCurve
	int32_t ___CustomToneCurve_96;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentA
	int32_t ___ToeSegmentA_97;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentB
	int32_t ___ToeSegmentB_98;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentA
	int32_t ___MidSegmentA_99;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentB
	int32_t ___MidSegmentB_100;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentA
	int32_t ___ShoSegmentA_101;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentB
	int32_t ___ShoSegmentB_102;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Color
	int32_t ___Vignette_Color_103;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Center
	int32_t ___Vignette_Center_104;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Settings
	int32_t ___Vignette_Settings_105;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mask
	int32_t ___Vignette_Mask_106;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Opacity
	int32_t ___Vignette_Opacity_107;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mode
	int32_t ___Vignette_Mode_108;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params1
	int32_t ___Grain_Params1_109;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params2
	int32_t ___Grain_Params2_110;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::GrainTex
	int32_t ___GrainTex_111;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Phase
	int32_t ___Phase_112;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LumaInAlpha
	int32_t ___LumaInAlpha_113;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DitheringTex
	int32_t ___DitheringTex_114;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Dithering_Coords
	int32_t ___Dithering_Coords_115;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::From
	int32_t ___From_116;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::To
	int32_t ___To_117;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Interp
	int32_t ___Interp_118;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HalfResFinalCopy
	int32_t ___HalfResFinalCopy_119;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformSource
	int32_t ___WaveformSource_120;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformBuffer
	int32_t ___WaveformBuffer_121;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VectorscopeBuffer
	int32_t ___VectorscopeBuffer_122;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RenderViewportScaleFactor
	int32_t ___RenderViewportScaleFactor_123;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UVTransform
	int32_t ___UVTransform_124;

public:
	inline static int32_t get_offset_of_MainTex_0() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MainTex_0)); }
	inline int32_t get_MainTex_0() const { return ___MainTex_0; }
	inline int32_t* get_address_of_MainTex_0() { return &___MainTex_0; }
	inline void set_MainTex_0(int32_t value)
	{
		___MainTex_0 = value;
	}

	inline static int32_t get_offset_of_Jitter_1() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Jitter_1)); }
	inline int32_t get_Jitter_1() const { return ___Jitter_1; }
	inline int32_t* get_address_of_Jitter_1() { return &___Jitter_1; }
	inline void set_Jitter_1(int32_t value)
	{
		___Jitter_1 = value;
	}

	inline static int32_t get_offset_of_Sharpness_2() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Sharpness_2)); }
	inline int32_t get_Sharpness_2() const { return ___Sharpness_2; }
	inline int32_t* get_address_of_Sharpness_2() { return &___Sharpness_2; }
	inline void set_Sharpness_2(int32_t value)
	{
		___Sharpness_2 = value;
	}

	inline static int32_t get_offset_of_FinalBlendParameters_3() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___FinalBlendParameters_3)); }
	inline int32_t get_FinalBlendParameters_3() const { return ___FinalBlendParameters_3; }
	inline int32_t* get_address_of_FinalBlendParameters_3() { return &___FinalBlendParameters_3; }
	inline void set_FinalBlendParameters_3(int32_t value)
	{
		___FinalBlendParameters_3 = value;
	}

	inline static int32_t get_offset_of_HistoryTex_4() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___HistoryTex_4)); }
	inline int32_t get_HistoryTex_4() const { return ___HistoryTex_4; }
	inline int32_t* get_address_of_HistoryTex_4() { return &___HistoryTex_4; }
	inline void set_HistoryTex_4(int32_t value)
	{
		___HistoryTex_4 = value;
	}

	inline static int32_t get_offset_of_SMAA_Flip_5() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___SMAA_Flip_5)); }
	inline int32_t get_SMAA_Flip_5() const { return ___SMAA_Flip_5; }
	inline int32_t* get_address_of_SMAA_Flip_5() { return &___SMAA_Flip_5; }
	inline void set_SMAA_Flip_5(int32_t value)
	{
		___SMAA_Flip_5 = value;
	}

	inline static int32_t get_offset_of_SMAA_Flop_6() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___SMAA_Flop_6)); }
	inline int32_t get_SMAA_Flop_6() const { return ___SMAA_Flop_6; }
	inline int32_t* get_address_of_SMAA_Flop_6() { return &___SMAA_Flop_6; }
	inline void set_SMAA_Flop_6(int32_t value)
	{
		___SMAA_Flop_6 = value;
	}

	inline static int32_t get_offset_of_AOParams_7() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___AOParams_7)); }
	inline int32_t get_AOParams_7() const { return ___AOParams_7; }
	inline int32_t* get_address_of_AOParams_7() { return &___AOParams_7; }
	inline void set_AOParams_7(int32_t value)
	{
		___AOParams_7 = value;
	}

	inline static int32_t get_offset_of_AOColor_8() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___AOColor_8)); }
	inline int32_t get_AOColor_8() const { return ___AOColor_8; }
	inline int32_t* get_address_of_AOColor_8() { return &___AOColor_8; }
	inline void set_AOColor_8(int32_t value)
	{
		___AOColor_8 = value;
	}

	inline static int32_t get_offset_of_OcclusionTexture1_9() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___OcclusionTexture1_9)); }
	inline int32_t get_OcclusionTexture1_9() const { return ___OcclusionTexture1_9; }
	inline int32_t* get_address_of_OcclusionTexture1_9() { return &___OcclusionTexture1_9; }
	inline void set_OcclusionTexture1_9(int32_t value)
	{
		___OcclusionTexture1_9 = value;
	}

	inline static int32_t get_offset_of_OcclusionTexture2_10() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___OcclusionTexture2_10)); }
	inline int32_t get_OcclusionTexture2_10() const { return ___OcclusionTexture2_10; }
	inline int32_t* get_address_of_OcclusionTexture2_10() { return &___OcclusionTexture2_10; }
	inline void set_OcclusionTexture2_10(int32_t value)
	{
		___OcclusionTexture2_10 = value;
	}

	inline static int32_t get_offset_of_SAOcclusionTexture_11() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___SAOcclusionTexture_11)); }
	inline int32_t get_SAOcclusionTexture_11() const { return ___SAOcclusionTexture_11; }
	inline int32_t* get_address_of_SAOcclusionTexture_11() { return &___SAOcclusionTexture_11; }
	inline void set_SAOcclusionTexture_11(int32_t value)
	{
		___SAOcclusionTexture_11 = value;
	}

	inline static int32_t get_offset_of_MSVOcclusionTexture_12() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MSVOcclusionTexture_12)); }
	inline int32_t get_MSVOcclusionTexture_12() const { return ___MSVOcclusionTexture_12; }
	inline int32_t* get_address_of_MSVOcclusionTexture_12() { return &___MSVOcclusionTexture_12; }
	inline void set_MSVOcclusionTexture_12(int32_t value)
	{
		___MSVOcclusionTexture_12 = value;
	}

	inline static int32_t get_offset_of_DepthCopy_13() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___DepthCopy_13)); }
	inline int32_t get_DepthCopy_13() const { return ___DepthCopy_13; }
	inline int32_t* get_address_of_DepthCopy_13() { return &___DepthCopy_13; }
	inline void set_DepthCopy_13(int32_t value)
	{
		___DepthCopy_13 = value;
	}

	inline static int32_t get_offset_of_LinearDepth_14() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LinearDepth_14)); }
	inline int32_t get_LinearDepth_14() const { return ___LinearDepth_14; }
	inline int32_t* get_address_of_LinearDepth_14() { return &___LinearDepth_14; }
	inline void set_LinearDepth_14(int32_t value)
	{
		___LinearDepth_14 = value;
	}

	inline static int32_t get_offset_of_LowDepth1_15() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LowDepth1_15)); }
	inline int32_t get_LowDepth1_15() const { return ___LowDepth1_15; }
	inline int32_t* get_address_of_LowDepth1_15() { return &___LowDepth1_15; }
	inline void set_LowDepth1_15(int32_t value)
	{
		___LowDepth1_15 = value;
	}

	inline static int32_t get_offset_of_LowDepth2_16() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LowDepth2_16)); }
	inline int32_t get_LowDepth2_16() const { return ___LowDepth2_16; }
	inline int32_t* get_address_of_LowDepth2_16() { return &___LowDepth2_16; }
	inline void set_LowDepth2_16(int32_t value)
	{
		___LowDepth2_16 = value;
	}

	inline static int32_t get_offset_of_LowDepth3_17() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LowDepth3_17)); }
	inline int32_t get_LowDepth3_17() const { return ___LowDepth3_17; }
	inline int32_t* get_address_of_LowDepth3_17() { return &___LowDepth3_17; }
	inline void set_LowDepth3_17(int32_t value)
	{
		___LowDepth3_17 = value;
	}

	inline static int32_t get_offset_of_LowDepth4_18() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LowDepth4_18)); }
	inline int32_t get_LowDepth4_18() const { return ___LowDepth4_18; }
	inline int32_t* get_address_of_LowDepth4_18() { return &___LowDepth4_18; }
	inline void set_LowDepth4_18(int32_t value)
	{
		___LowDepth4_18 = value;
	}

	inline static int32_t get_offset_of_TiledDepth1_19() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TiledDepth1_19)); }
	inline int32_t get_TiledDepth1_19() const { return ___TiledDepth1_19; }
	inline int32_t* get_address_of_TiledDepth1_19() { return &___TiledDepth1_19; }
	inline void set_TiledDepth1_19(int32_t value)
	{
		___TiledDepth1_19 = value;
	}

	inline static int32_t get_offset_of_TiledDepth2_20() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TiledDepth2_20)); }
	inline int32_t get_TiledDepth2_20() const { return ___TiledDepth2_20; }
	inline int32_t* get_address_of_TiledDepth2_20() { return &___TiledDepth2_20; }
	inline void set_TiledDepth2_20(int32_t value)
	{
		___TiledDepth2_20 = value;
	}

	inline static int32_t get_offset_of_TiledDepth3_21() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TiledDepth3_21)); }
	inline int32_t get_TiledDepth3_21() const { return ___TiledDepth3_21; }
	inline int32_t* get_address_of_TiledDepth3_21() { return &___TiledDepth3_21; }
	inline void set_TiledDepth3_21(int32_t value)
	{
		___TiledDepth3_21 = value;
	}

	inline static int32_t get_offset_of_TiledDepth4_22() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TiledDepth4_22)); }
	inline int32_t get_TiledDepth4_22() const { return ___TiledDepth4_22; }
	inline int32_t* get_address_of_TiledDepth4_22() { return &___TiledDepth4_22; }
	inline void set_TiledDepth4_22(int32_t value)
	{
		___TiledDepth4_22 = value;
	}

	inline static int32_t get_offset_of_Occlusion1_23() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Occlusion1_23)); }
	inline int32_t get_Occlusion1_23() const { return ___Occlusion1_23; }
	inline int32_t* get_address_of_Occlusion1_23() { return &___Occlusion1_23; }
	inline void set_Occlusion1_23(int32_t value)
	{
		___Occlusion1_23 = value;
	}

	inline static int32_t get_offset_of_Occlusion2_24() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Occlusion2_24)); }
	inline int32_t get_Occlusion2_24() const { return ___Occlusion2_24; }
	inline int32_t* get_address_of_Occlusion2_24() { return &___Occlusion2_24; }
	inline void set_Occlusion2_24(int32_t value)
	{
		___Occlusion2_24 = value;
	}

	inline static int32_t get_offset_of_Occlusion3_25() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Occlusion3_25)); }
	inline int32_t get_Occlusion3_25() const { return ___Occlusion3_25; }
	inline int32_t* get_address_of_Occlusion3_25() { return &___Occlusion3_25; }
	inline void set_Occlusion3_25(int32_t value)
	{
		___Occlusion3_25 = value;
	}

	inline static int32_t get_offset_of_Occlusion4_26() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Occlusion4_26)); }
	inline int32_t get_Occlusion4_26() const { return ___Occlusion4_26; }
	inline int32_t* get_address_of_Occlusion4_26() { return &___Occlusion4_26; }
	inline void set_Occlusion4_26(int32_t value)
	{
		___Occlusion4_26 = value;
	}

	inline static int32_t get_offset_of_Combined1_27() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Combined1_27)); }
	inline int32_t get_Combined1_27() const { return ___Combined1_27; }
	inline int32_t* get_address_of_Combined1_27() { return &___Combined1_27; }
	inline void set_Combined1_27(int32_t value)
	{
		___Combined1_27 = value;
	}

	inline static int32_t get_offset_of_Combined2_28() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Combined2_28)); }
	inline int32_t get_Combined2_28() const { return ___Combined2_28; }
	inline int32_t* get_address_of_Combined2_28() { return &___Combined2_28; }
	inline void set_Combined2_28(int32_t value)
	{
		___Combined2_28 = value;
	}

	inline static int32_t get_offset_of_Combined3_29() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Combined3_29)); }
	inline int32_t get_Combined3_29() const { return ___Combined3_29; }
	inline int32_t* get_address_of_Combined3_29() { return &___Combined3_29; }
	inline void set_Combined3_29(int32_t value)
	{
		___Combined3_29 = value;
	}

	inline static int32_t get_offset_of_SSRResolveTemp_30() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___SSRResolveTemp_30)); }
	inline int32_t get_SSRResolveTemp_30() const { return ___SSRResolveTemp_30; }
	inline int32_t* get_address_of_SSRResolveTemp_30() { return &___SSRResolveTemp_30; }
	inline void set_SSRResolveTemp_30(int32_t value)
	{
		___SSRResolveTemp_30 = value;
	}

	inline static int32_t get_offset_of_Noise_31() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Noise_31)); }
	inline int32_t get_Noise_31() const { return ___Noise_31; }
	inline int32_t* get_address_of_Noise_31() { return &___Noise_31; }
	inline void set_Noise_31(int32_t value)
	{
		___Noise_31 = value;
	}

	inline static int32_t get_offset_of_Test_32() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Test_32)); }
	inline int32_t get_Test_32() const { return ___Test_32; }
	inline int32_t* get_address_of_Test_32() { return &___Test_32; }
	inline void set_Test_32(int32_t value)
	{
		___Test_32 = value;
	}

	inline static int32_t get_offset_of_Resolve_33() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Resolve_33)); }
	inline int32_t get_Resolve_33() const { return ___Resolve_33; }
	inline int32_t* get_address_of_Resolve_33() { return &___Resolve_33; }
	inline void set_Resolve_33(int32_t value)
	{
		___Resolve_33 = value;
	}

	inline static int32_t get_offset_of_History_34() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___History_34)); }
	inline int32_t get_History_34() const { return ___History_34; }
	inline int32_t* get_address_of_History_34() { return &___History_34; }
	inline void set_History_34(int32_t value)
	{
		___History_34 = value;
	}

	inline static int32_t get_offset_of_ViewMatrix_35() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ViewMatrix_35)); }
	inline int32_t get_ViewMatrix_35() const { return ___ViewMatrix_35; }
	inline int32_t* get_address_of_ViewMatrix_35() { return &___ViewMatrix_35; }
	inline void set_ViewMatrix_35(int32_t value)
	{
		___ViewMatrix_35 = value;
	}

	inline static int32_t get_offset_of_InverseViewMatrix_36() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___InverseViewMatrix_36)); }
	inline int32_t get_InverseViewMatrix_36() const { return ___InverseViewMatrix_36; }
	inline int32_t* get_address_of_InverseViewMatrix_36() { return &___InverseViewMatrix_36; }
	inline void set_InverseViewMatrix_36(int32_t value)
	{
		___InverseViewMatrix_36 = value;
	}

	inline static int32_t get_offset_of_InverseProjectionMatrix_37() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___InverseProjectionMatrix_37)); }
	inline int32_t get_InverseProjectionMatrix_37() const { return ___InverseProjectionMatrix_37; }
	inline int32_t* get_address_of_InverseProjectionMatrix_37() { return &___InverseProjectionMatrix_37; }
	inline void set_InverseProjectionMatrix_37(int32_t value)
	{
		___InverseProjectionMatrix_37 = value;
	}

	inline static int32_t get_offset_of_ScreenSpaceProjectionMatrix_38() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ScreenSpaceProjectionMatrix_38)); }
	inline int32_t get_ScreenSpaceProjectionMatrix_38() const { return ___ScreenSpaceProjectionMatrix_38; }
	inline int32_t* get_address_of_ScreenSpaceProjectionMatrix_38() { return &___ScreenSpaceProjectionMatrix_38; }
	inline void set_ScreenSpaceProjectionMatrix_38(int32_t value)
	{
		___ScreenSpaceProjectionMatrix_38 = value;
	}

	inline static int32_t get_offset_of_Params2_39() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Params2_39)); }
	inline int32_t get_Params2_39() const { return ___Params2_39; }
	inline int32_t* get_address_of_Params2_39() { return &___Params2_39; }
	inline void set_Params2_39(int32_t value)
	{
		___Params2_39 = value;
	}

	inline static int32_t get_offset_of_FogColor_40() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___FogColor_40)); }
	inline int32_t get_FogColor_40() const { return ___FogColor_40; }
	inline int32_t* get_address_of_FogColor_40() { return &___FogColor_40; }
	inline void set_FogColor_40(int32_t value)
	{
		___FogColor_40 = value;
	}

	inline static int32_t get_offset_of_FogParams_41() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___FogParams_41)); }
	inline int32_t get_FogParams_41() const { return ___FogParams_41; }
	inline int32_t* get_address_of_FogParams_41() { return &___FogParams_41; }
	inline void set_FogParams_41(int32_t value)
	{
		___FogParams_41 = value;
	}

	inline static int32_t get_offset_of_VelocityScale_42() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___VelocityScale_42)); }
	inline int32_t get_VelocityScale_42() const { return ___VelocityScale_42; }
	inline int32_t* get_address_of_VelocityScale_42() { return &___VelocityScale_42; }
	inline void set_VelocityScale_42(int32_t value)
	{
		___VelocityScale_42 = value;
	}

	inline static int32_t get_offset_of_MaxBlurRadius_43() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MaxBlurRadius_43)); }
	inline int32_t get_MaxBlurRadius_43() const { return ___MaxBlurRadius_43; }
	inline int32_t* get_address_of_MaxBlurRadius_43() { return &___MaxBlurRadius_43; }
	inline void set_MaxBlurRadius_43(int32_t value)
	{
		___MaxBlurRadius_43 = value;
	}

	inline static int32_t get_offset_of_RcpMaxBlurRadius_44() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___RcpMaxBlurRadius_44)); }
	inline int32_t get_RcpMaxBlurRadius_44() const { return ___RcpMaxBlurRadius_44; }
	inline int32_t* get_address_of_RcpMaxBlurRadius_44() { return &___RcpMaxBlurRadius_44; }
	inline void set_RcpMaxBlurRadius_44(int32_t value)
	{
		___RcpMaxBlurRadius_44 = value;
	}

	inline static int32_t get_offset_of_VelocityTex_45() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___VelocityTex_45)); }
	inline int32_t get_VelocityTex_45() const { return ___VelocityTex_45; }
	inline int32_t* get_address_of_VelocityTex_45() { return &___VelocityTex_45; }
	inline void set_VelocityTex_45(int32_t value)
	{
		___VelocityTex_45 = value;
	}

	inline static int32_t get_offset_of_Tile2RT_46() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Tile2RT_46)); }
	inline int32_t get_Tile2RT_46() const { return ___Tile2RT_46; }
	inline int32_t* get_address_of_Tile2RT_46() { return &___Tile2RT_46; }
	inline void set_Tile2RT_46(int32_t value)
	{
		___Tile2RT_46 = value;
	}

	inline static int32_t get_offset_of_Tile4RT_47() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Tile4RT_47)); }
	inline int32_t get_Tile4RT_47() const { return ___Tile4RT_47; }
	inline int32_t* get_address_of_Tile4RT_47() { return &___Tile4RT_47; }
	inline void set_Tile4RT_47(int32_t value)
	{
		___Tile4RT_47 = value;
	}

	inline static int32_t get_offset_of_Tile8RT_48() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Tile8RT_48)); }
	inline int32_t get_Tile8RT_48() const { return ___Tile8RT_48; }
	inline int32_t* get_address_of_Tile8RT_48() { return &___Tile8RT_48; }
	inline void set_Tile8RT_48(int32_t value)
	{
		___Tile8RT_48 = value;
	}

	inline static int32_t get_offset_of_TileMaxOffs_49() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TileMaxOffs_49)); }
	inline int32_t get_TileMaxOffs_49() const { return ___TileMaxOffs_49; }
	inline int32_t* get_address_of_TileMaxOffs_49() { return &___TileMaxOffs_49; }
	inline void set_TileMaxOffs_49(int32_t value)
	{
		___TileMaxOffs_49 = value;
	}

	inline static int32_t get_offset_of_TileMaxLoop_50() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TileMaxLoop_50)); }
	inline int32_t get_TileMaxLoop_50() const { return ___TileMaxLoop_50; }
	inline int32_t* get_address_of_TileMaxLoop_50() { return &___TileMaxLoop_50; }
	inline void set_TileMaxLoop_50(int32_t value)
	{
		___TileMaxLoop_50 = value;
	}

	inline static int32_t get_offset_of_TileVRT_51() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TileVRT_51)); }
	inline int32_t get_TileVRT_51() const { return ___TileVRT_51; }
	inline int32_t* get_address_of_TileVRT_51() { return &___TileVRT_51; }
	inline void set_TileVRT_51(int32_t value)
	{
		___TileVRT_51 = value;
	}

	inline static int32_t get_offset_of_NeighborMaxTex_52() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___NeighborMaxTex_52)); }
	inline int32_t get_NeighborMaxTex_52() const { return ___NeighborMaxTex_52; }
	inline int32_t* get_address_of_NeighborMaxTex_52() { return &___NeighborMaxTex_52; }
	inline void set_NeighborMaxTex_52(int32_t value)
	{
		___NeighborMaxTex_52 = value;
	}

	inline static int32_t get_offset_of_LoopCount_53() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LoopCount_53)); }
	inline int32_t get_LoopCount_53() const { return ___LoopCount_53; }
	inline int32_t* get_address_of_LoopCount_53() { return &___LoopCount_53; }
	inline void set_LoopCount_53(int32_t value)
	{
		___LoopCount_53 = value;
	}

	inline static int32_t get_offset_of_DepthOfFieldTemp_54() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___DepthOfFieldTemp_54)); }
	inline int32_t get_DepthOfFieldTemp_54() const { return ___DepthOfFieldTemp_54; }
	inline int32_t* get_address_of_DepthOfFieldTemp_54() { return &___DepthOfFieldTemp_54; }
	inline void set_DepthOfFieldTemp_54(int32_t value)
	{
		___DepthOfFieldTemp_54 = value;
	}

	inline static int32_t get_offset_of_DepthOfFieldTex_55() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___DepthOfFieldTex_55)); }
	inline int32_t get_DepthOfFieldTex_55() const { return ___DepthOfFieldTex_55; }
	inline int32_t* get_address_of_DepthOfFieldTex_55() { return &___DepthOfFieldTex_55; }
	inline void set_DepthOfFieldTex_55(int32_t value)
	{
		___DepthOfFieldTex_55 = value;
	}

	inline static int32_t get_offset_of_Distance_56() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Distance_56)); }
	inline int32_t get_Distance_56() const { return ___Distance_56; }
	inline int32_t* get_address_of_Distance_56() { return &___Distance_56; }
	inline void set_Distance_56(int32_t value)
	{
		___Distance_56 = value;
	}

	inline static int32_t get_offset_of_LensCoeff_57() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LensCoeff_57)); }
	inline int32_t get_LensCoeff_57() const { return ___LensCoeff_57; }
	inline int32_t* get_address_of_LensCoeff_57() { return &___LensCoeff_57; }
	inline void set_LensCoeff_57(int32_t value)
	{
		___LensCoeff_57 = value;
	}

	inline static int32_t get_offset_of_MaxCoC_58() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MaxCoC_58)); }
	inline int32_t get_MaxCoC_58() const { return ___MaxCoC_58; }
	inline int32_t* get_address_of_MaxCoC_58() { return &___MaxCoC_58; }
	inline void set_MaxCoC_58(int32_t value)
	{
		___MaxCoC_58 = value;
	}

	inline static int32_t get_offset_of_RcpMaxCoC_59() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___RcpMaxCoC_59)); }
	inline int32_t get_RcpMaxCoC_59() const { return ___RcpMaxCoC_59; }
	inline int32_t* get_address_of_RcpMaxCoC_59() { return &___RcpMaxCoC_59; }
	inline void set_RcpMaxCoC_59(int32_t value)
	{
		___RcpMaxCoC_59 = value;
	}

	inline static int32_t get_offset_of_RcpAspect_60() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___RcpAspect_60)); }
	inline int32_t get_RcpAspect_60() const { return ___RcpAspect_60; }
	inline int32_t* get_address_of_RcpAspect_60() { return &___RcpAspect_60; }
	inline void set_RcpAspect_60(int32_t value)
	{
		___RcpAspect_60 = value;
	}

	inline static int32_t get_offset_of_CoCTex_61() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___CoCTex_61)); }
	inline int32_t get_CoCTex_61() const { return ___CoCTex_61; }
	inline int32_t* get_address_of_CoCTex_61() { return &___CoCTex_61; }
	inline void set_CoCTex_61(int32_t value)
	{
		___CoCTex_61 = value;
	}

	inline static int32_t get_offset_of_TaaParams_62() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___TaaParams_62)); }
	inline int32_t get_TaaParams_62() const { return ___TaaParams_62; }
	inline int32_t* get_address_of_TaaParams_62() { return &___TaaParams_62; }
	inline void set_TaaParams_62(int32_t value)
	{
		___TaaParams_62 = value;
	}

	inline static int32_t get_offset_of_AutoExposureTex_63() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___AutoExposureTex_63)); }
	inline int32_t get_AutoExposureTex_63() const { return ___AutoExposureTex_63; }
	inline int32_t* get_address_of_AutoExposureTex_63() { return &___AutoExposureTex_63; }
	inline void set_AutoExposureTex_63(int32_t value)
	{
		___AutoExposureTex_63 = value;
	}

	inline static int32_t get_offset_of_HistogramBuffer_64() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___HistogramBuffer_64)); }
	inline int32_t get_HistogramBuffer_64() const { return ___HistogramBuffer_64; }
	inline int32_t* get_address_of_HistogramBuffer_64() { return &___HistogramBuffer_64; }
	inline void set_HistogramBuffer_64(int32_t value)
	{
		___HistogramBuffer_64 = value;
	}

	inline static int32_t get_offset_of_Params_65() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Params_65)); }
	inline int32_t get_Params_65() const { return ___Params_65; }
	inline int32_t* get_address_of_Params_65() { return &___Params_65; }
	inline void set_Params_65(int32_t value)
	{
		___Params_65 = value;
	}

	inline static int32_t get_offset_of_ScaleOffsetRes_66() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ScaleOffsetRes_66)); }
	inline int32_t get_ScaleOffsetRes_66() const { return ___ScaleOffsetRes_66; }
	inline int32_t* get_address_of_ScaleOffsetRes_66() { return &___ScaleOffsetRes_66; }
	inline void set_ScaleOffsetRes_66(int32_t value)
	{
		___ScaleOffsetRes_66 = value;
	}

	inline static int32_t get_offset_of_BloomTex_67() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___BloomTex_67)); }
	inline int32_t get_BloomTex_67() const { return ___BloomTex_67; }
	inline int32_t* get_address_of_BloomTex_67() { return &___BloomTex_67; }
	inline void set_BloomTex_67(int32_t value)
	{
		___BloomTex_67 = value;
	}

	inline static int32_t get_offset_of_SampleScale_68() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___SampleScale_68)); }
	inline int32_t get_SampleScale_68() const { return ___SampleScale_68; }
	inline int32_t* get_address_of_SampleScale_68() { return &___SampleScale_68; }
	inline void set_SampleScale_68(int32_t value)
	{
		___SampleScale_68 = value;
	}

	inline static int32_t get_offset_of_Threshold_69() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Threshold_69)); }
	inline int32_t get_Threshold_69() const { return ___Threshold_69; }
	inline int32_t* get_address_of_Threshold_69() { return &___Threshold_69; }
	inline void set_Threshold_69(int32_t value)
	{
		___Threshold_69 = value;
	}

	inline static int32_t get_offset_of_ColorIntensity_70() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ColorIntensity_70)); }
	inline int32_t get_ColorIntensity_70() const { return ___ColorIntensity_70; }
	inline int32_t* get_address_of_ColorIntensity_70() { return &___ColorIntensity_70; }
	inline void set_ColorIntensity_70(int32_t value)
	{
		___ColorIntensity_70 = value;
	}

	inline static int32_t get_offset_of_Bloom_DirtTex_71() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Bloom_DirtTex_71)); }
	inline int32_t get_Bloom_DirtTex_71() const { return ___Bloom_DirtTex_71; }
	inline int32_t* get_address_of_Bloom_DirtTex_71() { return &___Bloom_DirtTex_71; }
	inline void set_Bloom_DirtTex_71(int32_t value)
	{
		___Bloom_DirtTex_71 = value;
	}

	inline static int32_t get_offset_of_Bloom_Settings_72() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Bloom_Settings_72)); }
	inline int32_t get_Bloom_Settings_72() const { return ___Bloom_Settings_72; }
	inline int32_t* get_address_of_Bloom_Settings_72() { return &___Bloom_Settings_72; }
	inline void set_Bloom_Settings_72(int32_t value)
	{
		___Bloom_Settings_72 = value;
	}

	inline static int32_t get_offset_of_Bloom_Color_73() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Bloom_Color_73)); }
	inline int32_t get_Bloom_Color_73() const { return ___Bloom_Color_73; }
	inline int32_t* get_address_of_Bloom_Color_73() { return &___Bloom_Color_73; }
	inline void set_Bloom_Color_73(int32_t value)
	{
		___Bloom_Color_73 = value;
	}

	inline static int32_t get_offset_of_Bloom_DirtTileOffset_74() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Bloom_DirtTileOffset_74)); }
	inline int32_t get_Bloom_DirtTileOffset_74() const { return ___Bloom_DirtTileOffset_74; }
	inline int32_t* get_address_of_Bloom_DirtTileOffset_74() { return &___Bloom_DirtTileOffset_74; }
	inline void set_Bloom_DirtTileOffset_74(int32_t value)
	{
		___Bloom_DirtTileOffset_74 = value;
	}

	inline static int32_t get_offset_of_ChromaticAberration_Amount_75() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ChromaticAberration_Amount_75)); }
	inline int32_t get_ChromaticAberration_Amount_75() const { return ___ChromaticAberration_Amount_75; }
	inline int32_t* get_address_of_ChromaticAberration_Amount_75() { return &___ChromaticAberration_Amount_75; }
	inline void set_ChromaticAberration_Amount_75(int32_t value)
	{
		___ChromaticAberration_Amount_75 = value;
	}

	inline static int32_t get_offset_of_ChromaticAberration_SpectralLut_76() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ChromaticAberration_SpectralLut_76)); }
	inline int32_t get_ChromaticAberration_SpectralLut_76() const { return ___ChromaticAberration_SpectralLut_76; }
	inline int32_t* get_address_of_ChromaticAberration_SpectralLut_76() { return &___ChromaticAberration_SpectralLut_76; }
	inline void set_ChromaticAberration_SpectralLut_76(int32_t value)
	{
		___ChromaticAberration_SpectralLut_76 = value;
	}

	inline static int32_t get_offset_of_Distortion_CenterScale_77() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Distortion_CenterScale_77)); }
	inline int32_t get_Distortion_CenterScale_77() const { return ___Distortion_CenterScale_77; }
	inline int32_t* get_address_of_Distortion_CenterScale_77() { return &___Distortion_CenterScale_77; }
	inline void set_Distortion_CenterScale_77(int32_t value)
	{
		___Distortion_CenterScale_77 = value;
	}

	inline static int32_t get_offset_of_Distortion_Amount_78() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Distortion_Amount_78)); }
	inline int32_t get_Distortion_Amount_78() const { return ___Distortion_Amount_78; }
	inline int32_t* get_address_of_Distortion_Amount_78() { return &___Distortion_Amount_78; }
	inline void set_Distortion_Amount_78(int32_t value)
	{
		___Distortion_Amount_78 = value;
	}

	inline static int32_t get_offset_of_Lut2D_79() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Lut2D_79)); }
	inline int32_t get_Lut2D_79() const { return ___Lut2D_79; }
	inline int32_t* get_address_of_Lut2D_79() { return &___Lut2D_79; }
	inline void set_Lut2D_79(int32_t value)
	{
		___Lut2D_79 = value;
	}

	inline static int32_t get_offset_of_Lut3D_80() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Lut3D_80)); }
	inline int32_t get_Lut3D_80() const { return ___Lut3D_80; }
	inline int32_t* get_address_of_Lut3D_80() { return &___Lut3D_80; }
	inline void set_Lut3D_80(int32_t value)
	{
		___Lut3D_80 = value;
	}

	inline static int32_t get_offset_of_Lut3D_Params_81() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Lut3D_Params_81)); }
	inline int32_t get_Lut3D_Params_81() const { return ___Lut3D_Params_81; }
	inline int32_t* get_address_of_Lut3D_Params_81() { return &___Lut3D_Params_81; }
	inline void set_Lut3D_Params_81(int32_t value)
	{
		___Lut3D_Params_81 = value;
	}

	inline static int32_t get_offset_of_Lut2D_Params_82() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Lut2D_Params_82)); }
	inline int32_t get_Lut2D_Params_82() const { return ___Lut2D_Params_82; }
	inline int32_t* get_address_of_Lut2D_Params_82() { return &___Lut2D_Params_82; }
	inline void set_Lut2D_Params_82(int32_t value)
	{
		___Lut2D_Params_82 = value;
	}

	inline static int32_t get_offset_of_UserLut2D_Params_83() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___UserLut2D_Params_83)); }
	inline int32_t get_UserLut2D_Params_83() const { return ___UserLut2D_Params_83; }
	inline int32_t* get_address_of_UserLut2D_Params_83() { return &___UserLut2D_Params_83; }
	inline void set_UserLut2D_Params_83(int32_t value)
	{
		___UserLut2D_Params_83 = value;
	}

	inline static int32_t get_offset_of_PostExposure_84() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___PostExposure_84)); }
	inline int32_t get_PostExposure_84() const { return ___PostExposure_84; }
	inline int32_t* get_address_of_PostExposure_84() { return &___PostExposure_84; }
	inline void set_PostExposure_84(int32_t value)
	{
		___PostExposure_84 = value;
	}

	inline static int32_t get_offset_of_ColorBalance_85() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ColorBalance_85)); }
	inline int32_t get_ColorBalance_85() const { return ___ColorBalance_85; }
	inline int32_t* get_address_of_ColorBalance_85() { return &___ColorBalance_85; }
	inline void set_ColorBalance_85(int32_t value)
	{
		___ColorBalance_85 = value;
	}

	inline static int32_t get_offset_of_ColorFilter_86() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ColorFilter_86)); }
	inline int32_t get_ColorFilter_86() const { return ___ColorFilter_86; }
	inline int32_t* get_address_of_ColorFilter_86() { return &___ColorFilter_86; }
	inline void set_ColorFilter_86(int32_t value)
	{
		___ColorFilter_86 = value;
	}

	inline static int32_t get_offset_of_HueSatCon_87() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___HueSatCon_87)); }
	inline int32_t get_HueSatCon_87() const { return ___HueSatCon_87; }
	inline int32_t* get_address_of_HueSatCon_87() { return &___HueSatCon_87; }
	inline void set_HueSatCon_87(int32_t value)
	{
		___HueSatCon_87 = value;
	}

	inline static int32_t get_offset_of_Brightness_88() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Brightness_88)); }
	inline int32_t get_Brightness_88() const { return ___Brightness_88; }
	inline int32_t* get_address_of_Brightness_88() { return &___Brightness_88; }
	inline void set_Brightness_88(int32_t value)
	{
		___Brightness_88 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerRed_89() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ChannelMixerRed_89)); }
	inline int32_t get_ChannelMixerRed_89() const { return ___ChannelMixerRed_89; }
	inline int32_t* get_address_of_ChannelMixerRed_89() { return &___ChannelMixerRed_89; }
	inline void set_ChannelMixerRed_89(int32_t value)
	{
		___ChannelMixerRed_89 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerGreen_90() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ChannelMixerGreen_90)); }
	inline int32_t get_ChannelMixerGreen_90() const { return ___ChannelMixerGreen_90; }
	inline int32_t* get_address_of_ChannelMixerGreen_90() { return &___ChannelMixerGreen_90; }
	inline void set_ChannelMixerGreen_90(int32_t value)
	{
		___ChannelMixerGreen_90 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerBlue_91() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ChannelMixerBlue_91)); }
	inline int32_t get_ChannelMixerBlue_91() const { return ___ChannelMixerBlue_91; }
	inline int32_t* get_address_of_ChannelMixerBlue_91() { return &___ChannelMixerBlue_91; }
	inline void set_ChannelMixerBlue_91(int32_t value)
	{
		___ChannelMixerBlue_91 = value;
	}

	inline static int32_t get_offset_of_Lift_92() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Lift_92)); }
	inline int32_t get_Lift_92() const { return ___Lift_92; }
	inline int32_t* get_address_of_Lift_92() { return &___Lift_92; }
	inline void set_Lift_92(int32_t value)
	{
		___Lift_92 = value;
	}

	inline static int32_t get_offset_of_InvGamma_93() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___InvGamma_93)); }
	inline int32_t get_InvGamma_93() const { return ___InvGamma_93; }
	inline int32_t* get_address_of_InvGamma_93() { return &___InvGamma_93; }
	inline void set_InvGamma_93(int32_t value)
	{
		___InvGamma_93 = value;
	}

	inline static int32_t get_offset_of_Gain_94() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Gain_94)); }
	inline int32_t get_Gain_94() const { return ___Gain_94; }
	inline int32_t* get_address_of_Gain_94() { return &___Gain_94; }
	inline void set_Gain_94(int32_t value)
	{
		___Gain_94 = value;
	}

	inline static int32_t get_offset_of_Curves_95() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Curves_95)); }
	inline int32_t get_Curves_95() const { return ___Curves_95; }
	inline int32_t* get_address_of_Curves_95() { return &___Curves_95; }
	inline void set_Curves_95(int32_t value)
	{
		___Curves_95 = value;
	}

	inline static int32_t get_offset_of_CustomToneCurve_96() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___CustomToneCurve_96)); }
	inline int32_t get_CustomToneCurve_96() const { return ___CustomToneCurve_96; }
	inline int32_t* get_address_of_CustomToneCurve_96() { return &___CustomToneCurve_96; }
	inline void set_CustomToneCurve_96(int32_t value)
	{
		___CustomToneCurve_96 = value;
	}

	inline static int32_t get_offset_of_ToeSegmentA_97() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ToeSegmentA_97)); }
	inline int32_t get_ToeSegmentA_97() const { return ___ToeSegmentA_97; }
	inline int32_t* get_address_of_ToeSegmentA_97() { return &___ToeSegmentA_97; }
	inline void set_ToeSegmentA_97(int32_t value)
	{
		___ToeSegmentA_97 = value;
	}

	inline static int32_t get_offset_of_ToeSegmentB_98() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ToeSegmentB_98)); }
	inline int32_t get_ToeSegmentB_98() const { return ___ToeSegmentB_98; }
	inline int32_t* get_address_of_ToeSegmentB_98() { return &___ToeSegmentB_98; }
	inline void set_ToeSegmentB_98(int32_t value)
	{
		___ToeSegmentB_98 = value;
	}

	inline static int32_t get_offset_of_MidSegmentA_99() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MidSegmentA_99)); }
	inline int32_t get_MidSegmentA_99() const { return ___MidSegmentA_99; }
	inline int32_t* get_address_of_MidSegmentA_99() { return &___MidSegmentA_99; }
	inline void set_MidSegmentA_99(int32_t value)
	{
		___MidSegmentA_99 = value;
	}

	inline static int32_t get_offset_of_MidSegmentB_100() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___MidSegmentB_100)); }
	inline int32_t get_MidSegmentB_100() const { return ___MidSegmentB_100; }
	inline int32_t* get_address_of_MidSegmentB_100() { return &___MidSegmentB_100; }
	inline void set_MidSegmentB_100(int32_t value)
	{
		___MidSegmentB_100 = value;
	}

	inline static int32_t get_offset_of_ShoSegmentA_101() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ShoSegmentA_101)); }
	inline int32_t get_ShoSegmentA_101() const { return ___ShoSegmentA_101; }
	inline int32_t* get_address_of_ShoSegmentA_101() { return &___ShoSegmentA_101; }
	inline void set_ShoSegmentA_101(int32_t value)
	{
		___ShoSegmentA_101 = value;
	}

	inline static int32_t get_offset_of_ShoSegmentB_102() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___ShoSegmentB_102)); }
	inline int32_t get_ShoSegmentB_102() const { return ___ShoSegmentB_102; }
	inline int32_t* get_address_of_ShoSegmentB_102() { return &___ShoSegmentB_102; }
	inline void set_ShoSegmentB_102(int32_t value)
	{
		___ShoSegmentB_102 = value;
	}

	inline static int32_t get_offset_of_Vignette_Color_103() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Color_103)); }
	inline int32_t get_Vignette_Color_103() const { return ___Vignette_Color_103; }
	inline int32_t* get_address_of_Vignette_Color_103() { return &___Vignette_Color_103; }
	inline void set_Vignette_Color_103(int32_t value)
	{
		___Vignette_Color_103 = value;
	}

	inline static int32_t get_offset_of_Vignette_Center_104() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Center_104)); }
	inline int32_t get_Vignette_Center_104() const { return ___Vignette_Center_104; }
	inline int32_t* get_address_of_Vignette_Center_104() { return &___Vignette_Center_104; }
	inline void set_Vignette_Center_104(int32_t value)
	{
		___Vignette_Center_104 = value;
	}

	inline static int32_t get_offset_of_Vignette_Settings_105() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Settings_105)); }
	inline int32_t get_Vignette_Settings_105() const { return ___Vignette_Settings_105; }
	inline int32_t* get_address_of_Vignette_Settings_105() { return &___Vignette_Settings_105; }
	inline void set_Vignette_Settings_105(int32_t value)
	{
		___Vignette_Settings_105 = value;
	}

	inline static int32_t get_offset_of_Vignette_Mask_106() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Mask_106)); }
	inline int32_t get_Vignette_Mask_106() const { return ___Vignette_Mask_106; }
	inline int32_t* get_address_of_Vignette_Mask_106() { return &___Vignette_Mask_106; }
	inline void set_Vignette_Mask_106(int32_t value)
	{
		___Vignette_Mask_106 = value;
	}

	inline static int32_t get_offset_of_Vignette_Opacity_107() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Opacity_107)); }
	inline int32_t get_Vignette_Opacity_107() const { return ___Vignette_Opacity_107; }
	inline int32_t* get_address_of_Vignette_Opacity_107() { return &___Vignette_Opacity_107; }
	inline void set_Vignette_Opacity_107(int32_t value)
	{
		___Vignette_Opacity_107 = value;
	}

	inline static int32_t get_offset_of_Vignette_Mode_108() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Vignette_Mode_108)); }
	inline int32_t get_Vignette_Mode_108() const { return ___Vignette_Mode_108; }
	inline int32_t* get_address_of_Vignette_Mode_108() { return &___Vignette_Mode_108; }
	inline void set_Vignette_Mode_108(int32_t value)
	{
		___Vignette_Mode_108 = value;
	}

	inline static int32_t get_offset_of_Grain_Params1_109() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Grain_Params1_109)); }
	inline int32_t get_Grain_Params1_109() const { return ___Grain_Params1_109; }
	inline int32_t* get_address_of_Grain_Params1_109() { return &___Grain_Params1_109; }
	inline void set_Grain_Params1_109(int32_t value)
	{
		___Grain_Params1_109 = value;
	}

	inline static int32_t get_offset_of_Grain_Params2_110() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Grain_Params2_110)); }
	inline int32_t get_Grain_Params2_110() const { return ___Grain_Params2_110; }
	inline int32_t* get_address_of_Grain_Params2_110() { return &___Grain_Params2_110; }
	inline void set_Grain_Params2_110(int32_t value)
	{
		___Grain_Params2_110 = value;
	}

	inline static int32_t get_offset_of_GrainTex_111() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___GrainTex_111)); }
	inline int32_t get_GrainTex_111() const { return ___GrainTex_111; }
	inline int32_t* get_address_of_GrainTex_111() { return &___GrainTex_111; }
	inline void set_GrainTex_111(int32_t value)
	{
		___GrainTex_111 = value;
	}

	inline static int32_t get_offset_of_Phase_112() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Phase_112)); }
	inline int32_t get_Phase_112() const { return ___Phase_112; }
	inline int32_t* get_address_of_Phase_112() { return &___Phase_112; }
	inline void set_Phase_112(int32_t value)
	{
		___Phase_112 = value;
	}

	inline static int32_t get_offset_of_LumaInAlpha_113() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___LumaInAlpha_113)); }
	inline int32_t get_LumaInAlpha_113() const { return ___LumaInAlpha_113; }
	inline int32_t* get_address_of_LumaInAlpha_113() { return &___LumaInAlpha_113; }
	inline void set_LumaInAlpha_113(int32_t value)
	{
		___LumaInAlpha_113 = value;
	}

	inline static int32_t get_offset_of_DitheringTex_114() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___DitheringTex_114)); }
	inline int32_t get_DitheringTex_114() const { return ___DitheringTex_114; }
	inline int32_t* get_address_of_DitheringTex_114() { return &___DitheringTex_114; }
	inline void set_DitheringTex_114(int32_t value)
	{
		___DitheringTex_114 = value;
	}

	inline static int32_t get_offset_of_Dithering_Coords_115() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Dithering_Coords_115)); }
	inline int32_t get_Dithering_Coords_115() const { return ___Dithering_Coords_115; }
	inline int32_t* get_address_of_Dithering_Coords_115() { return &___Dithering_Coords_115; }
	inline void set_Dithering_Coords_115(int32_t value)
	{
		___Dithering_Coords_115 = value;
	}

	inline static int32_t get_offset_of_From_116() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___From_116)); }
	inline int32_t get_From_116() const { return ___From_116; }
	inline int32_t* get_address_of_From_116() { return &___From_116; }
	inline void set_From_116(int32_t value)
	{
		___From_116 = value;
	}

	inline static int32_t get_offset_of_To_117() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___To_117)); }
	inline int32_t get_To_117() const { return ___To_117; }
	inline int32_t* get_address_of_To_117() { return &___To_117; }
	inline void set_To_117(int32_t value)
	{
		___To_117 = value;
	}

	inline static int32_t get_offset_of_Interp_118() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___Interp_118)); }
	inline int32_t get_Interp_118() const { return ___Interp_118; }
	inline int32_t* get_address_of_Interp_118() { return &___Interp_118; }
	inline void set_Interp_118(int32_t value)
	{
		___Interp_118 = value;
	}

	inline static int32_t get_offset_of_HalfResFinalCopy_119() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___HalfResFinalCopy_119)); }
	inline int32_t get_HalfResFinalCopy_119() const { return ___HalfResFinalCopy_119; }
	inline int32_t* get_address_of_HalfResFinalCopy_119() { return &___HalfResFinalCopy_119; }
	inline void set_HalfResFinalCopy_119(int32_t value)
	{
		___HalfResFinalCopy_119 = value;
	}

	inline static int32_t get_offset_of_WaveformSource_120() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___WaveformSource_120)); }
	inline int32_t get_WaveformSource_120() const { return ___WaveformSource_120; }
	inline int32_t* get_address_of_WaveformSource_120() { return &___WaveformSource_120; }
	inline void set_WaveformSource_120(int32_t value)
	{
		___WaveformSource_120 = value;
	}

	inline static int32_t get_offset_of_WaveformBuffer_121() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___WaveformBuffer_121)); }
	inline int32_t get_WaveformBuffer_121() const { return ___WaveformBuffer_121; }
	inline int32_t* get_address_of_WaveformBuffer_121() { return &___WaveformBuffer_121; }
	inline void set_WaveformBuffer_121(int32_t value)
	{
		___WaveformBuffer_121 = value;
	}

	inline static int32_t get_offset_of_VectorscopeBuffer_122() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___VectorscopeBuffer_122)); }
	inline int32_t get_VectorscopeBuffer_122() const { return ___VectorscopeBuffer_122; }
	inline int32_t* get_address_of_VectorscopeBuffer_122() { return &___VectorscopeBuffer_122; }
	inline void set_VectorscopeBuffer_122(int32_t value)
	{
		___VectorscopeBuffer_122 = value;
	}

	inline static int32_t get_offset_of_RenderViewportScaleFactor_123() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___RenderViewportScaleFactor_123)); }
	inline int32_t get_RenderViewportScaleFactor_123() const { return ___RenderViewportScaleFactor_123; }
	inline int32_t* get_address_of_RenderViewportScaleFactor_123() { return &___RenderViewportScaleFactor_123; }
	inline void set_RenderViewportScaleFactor_123(int32_t value)
	{
		___RenderViewportScaleFactor_123 = value;
	}

	inline static int32_t get_offset_of_UVTransform_124() { return static_cast<int32_t>(offsetof(ShaderIDs_t2844105293_StaticFields, ___UVTransform_124)); }
	inline int32_t get_UVTransform_124() const { return ___UVTransform_124; }
	inline int32_t* get_address_of_UVTransform_124() { return &___UVTransform_124; }
	inline void set_UVTransform_124(int32_t value)
	{
		___UVTransform_124 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERIDS_T2844105293_H
#ifndef SPLINE_T3835237600_H
#define SPLINE_T3835237600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Spline
struct  Spline_t3835237600  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::curve
	AnimationCurve_t3046754366 * ___curve_2;
	// System.Boolean UnityEngine.Rendering.PostProcessing.Spline::m_Loop
	bool ___m_Loop_3;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_ZeroValue
	float ___m_ZeroValue_4;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_Range
	float ___m_Range_5;
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::m_InternalLoopingCurve
	AnimationCurve_t3046754366 * ___m_InternalLoopingCurve_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::frameCount
	int32_t ___frameCount_7;
	// System.Single[] UnityEngine.Rendering.PostProcessing.Spline::cachedData
	SingleU5BU5D_t1444911251* ___cachedData_8;

public:
	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___curve_2)); }
	inline AnimationCurve_t3046754366 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t3046754366 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t3046754366 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((&___curve_2), value);
	}

	inline static int32_t get_offset_of_m_Loop_3() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___m_Loop_3)); }
	inline bool get_m_Loop_3() const { return ___m_Loop_3; }
	inline bool* get_address_of_m_Loop_3() { return &___m_Loop_3; }
	inline void set_m_Loop_3(bool value)
	{
		___m_Loop_3 = value;
	}

	inline static int32_t get_offset_of_m_ZeroValue_4() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___m_ZeroValue_4)); }
	inline float get_m_ZeroValue_4() const { return ___m_ZeroValue_4; }
	inline float* get_address_of_m_ZeroValue_4() { return &___m_ZeroValue_4; }
	inline void set_m_ZeroValue_4(float value)
	{
		___m_ZeroValue_4 = value;
	}

	inline static int32_t get_offset_of_m_Range_5() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___m_Range_5)); }
	inline float get_m_Range_5() const { return ___m_Range_5; }
	inline float* get_address_of_m_Range_5() { return &___m_Range_5; }
	inline void set_m_Range_5(float value)
	{
		___m_Range_5 = value;
	}

	inline static int32_t get_offset_of_m_InternalLoopingCurve_6() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___m_InternalLoopingCurve_6)); }
	inline AnimationCurve_t3046754366 * get_m_InternalLoopingCurve_6() const { return ___m_InternalLoopingCurve_6; }
	inline AnimationCurve_t3046754366 ** get_address_of_m_InternalLoopingCurve_6() { return &___m_InternalLoopingCurve_6; }
	inline void set_m_InternalLoopingCurve_6(AnimationCurve_t3046754366 * value)
	{
		___m_InternalLoopingCurve_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_InternalLoopingCurve_6), value);
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}

	inline static int32_t get_offset_of_cachedData_8() { return static_cast<int32_t>(offsetof(Spline_t3835237600, ___cachedData_8)); }
	inline SingleU5BU5D_t1444911251* get_cachedData_8() const { return ___cachedData_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_cachedData_8() { return &___cachedData_8; }
	inline void set_cachedData_8(SingleU5BU5D_t1444911251* value)
	{
		___cachedData_8 = value;
		Il2CppCodeGenWriteBarrier((&___cachedData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPLINE_T3835237600_H
#ifndef TARGETPOOL_T1535233241_H
#define TARGETPOOL_T1535233241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TargetPool
struct  TargetPool_t1535233241  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Rendering.PostProcessing.TargetPool::m_Pool
	List_1_t128053199 * ___m_Pool_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::m_Current
	int32_t ___m_Current_1;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(TargetPool_t1535233241, ___m_Pool_0)); }
	inline List_1_t128053199 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline List_1_t128053199 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(List_1_t128053199 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pool_0), value);
	}

	inline static int32_t get_offset_of_m_Current_1() { return static_cast<int32_t>(offsetof(TargetPool_t1535233241, ___m_Current_1)); }
	inline int32_t get_m_Current_1() const { return ___m_Current_1; }
	inline int32_t* get_address_of_m_Current_1() { return &___m_Current_1; }
	inline void set_m_Current_1(int32_t value)
	{
		___m_Current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPOOL_T1535233241_H
#ifndef TEXTUREFORMATUTILITIES_T2217912845_H
#define TEXTUREFORMATUTILITIES_T2217912845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TextureFormatUtilities
struct  TextureFormatUtilities_t2217912845  : public RuntimeObject
{
public:

public:
};

struct TextureFormatUtilities_t2217912845_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_FormatAliasMap
	Dictionary_2_t4146031392 * ___s_FormatAliasMap_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedRenderTextureFormats
	Dictionary_2_t3280968592 * ___s_SupportedRenderTextureFormats_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedTextureFormats
	Dictionary_2_t3280968592 * ___s_SupportedTextureFormats_2;

public:
	inline static int32_t get_offset_of_s_FormatAliasMap_0() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t2217912845_StaticFields, ___s_FormatAliasMap_0)); }
	inline Dictionary_2_t4146031392 * get_s_FormatAliasMap_0() const { return ___s_FormatAliasMap_0; }
	inline Dictionary_2_t4146031392 ** get_address_of_s_FormatAliasMap_0() { return &___s_FormatAliasMap_0; }
	inline void set_s_FormatAliasMap_0(Dictionary_2_t4146031392 * value)
	{
		___s_FormatAliasMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_FormatAliasMap_0), value);
	}

	inline static int32_t get_offset_of_s_SupportedRenderTextureFormats_1() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t2217912845_StaticFields, ___s_SupportedRenderTextureFormats_1)); }
	inline Dictionary_2_t3280968592 * get_s_SupportedRenderTextureFormats_1() const { return ___s_SupportedRenderTextureFormats_1; }
	inline Dictionary_2_t3280968592 ** get_address_of_s_SupportedRenderTextureFormats_1() { return &___s_SupportedRenderTextureFormats_1; }
	inline void set_s_SupportedRenderTextureFormats_1(Dictionary_2_t3280968592 * value)
	{
		___s_SupportedRenderTextureFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SupportedRenderTextureFormats_1), value);
	}

	inline static int32_t get_offset_of_s_SupportedTextureFormats_2() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t2217912845_StaticFields, ___s_SupportedTextureFormats_2)); }
	inline Dictionary_2_t3280968592 * get_s_SupportedTextureFormats_2() const { return ___s_SupportedTextureFormats_2; }
	inline Dictionary_2_t3280968592 ** get_address_of_s_SupportedTextureFormats_2() { return &___s_SupportedTextureFormats_2; }
	inline void set_s_SupportedTextureFormats_2(Dictionary_2_t3280968592 * value)
	{
		___s_SupportedTextureFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_SupportedTextureFormats_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMATUTILITIES_T2217912845_H
#ifndef TEXTURELERPER_T1948079985_H
#define TEXTURELERPER_T1948079985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TextureLerper
struct  TextureLerper_t1948079985  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.TextureLerper::m_Command
	CommandBuffer_t2206337031 * ___m_Command_1;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.TextureLerper::m_PropertySheets
	PropertySheetFactory_t1490101248 * ___m_PropertySheets_2;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.TextureLerper::m_Resources
	PostProcessResources_t1163236733 * ___m_Resources_3;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Recycled
	List_1_t3580962175 * ___m_Recycled_4;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Actives
	List_1_t3580962175 * ___m_Actives_5;

public:
	inline static int32_t get_offset_of_m_Command_1() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985, ___m_Command_1)); }
	inline CommandBuffer_t2206337031 * get_m_Command_1() const { return ___m_Command_1; }
	inline CommandBuffer_t2206337031 ** get_address_of_m_Command_1() { return &___m_Command_1; }
	inline void set_m_Command_1(CommandBuffer_t2206337031 * value)
	{
		___m_Command_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Command_1), value);
	}

	inline static int32_t get_offset_of_m_PropertySheets_2() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985, ___m_PropertySheets_2)); }
	inline PropertySheetFactory_t1490101248 * get_m_PropertySheets_2() const { return ___m_PropertySheets_2; }
	inline PropertySheetFactory_t1490101248 ** get_address_of_m_PropertySheets_2() { return &___m_PropertySheets_2; }
	inline void set_m_PropertySheets_2(PropertySheetFactory_t1490101248 * value)
	{
		___m_PropertySheets_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PropertySheets_2), value);
	}

	inline static int32_t get_offset_of_m_Resources_3() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985, ___m_Resources_3)); }
	inline PostProcessResources_t1163236733 * get_m_Resources_3() const { return ___m_Resources_3; }
	inline PostProcessResources_t1163236733 ** get_address_of_m_Resources_3() { return &___m_Resources_3; }
	inline void set_m_Resources_3(PostProcessResources_t1163236733 * value)
	{
		___m_Resources_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Resources_3), value);
	}

	inline static int32_t get_offset_of_m_Recycled_4() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985, ___m_Recycled_4)); }
	inline List_1_t3580962175 * get_m_Recycled_4() const { return ___m_Recycled_4; }
	inline List_1_t3580962175 ** get_address_of_m_Recycled_4() { return &___m_Recycled_4; }
	inline void set_m_Recycled_4(List_1_t3580962175 * value)
	{
		___m_Recycled_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Recycled_4), value);
	}

	inline static int32_t get_offset_of_m_Actives_5() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985, ___m_Actives_5)); }
	inline List_1_t3580962175 * get_m_Actives_5() const { return ___m_Actives_5; }
	inline List_1_t3580962175 ** get_address_of_m_Actives_5() { return &___m_Actives_5; }
	inline void set_m_Actives_5(List_1_t3580962175 * value)
	{
		___m_Actives_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Actives_5), value);
	}
};

struct TextureLerper_t1948079985_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::m_Instance
	TextureLerper_t1948079985 * ___m_Instance_0;

public:
	inline static int32_t get_offset_of_m_Instance_0() { return static_cast<int32_t>(offsetof(TextureLerper_t1948079985_StaticFields, ___m_Instance_0)); }
	inline TextureLerper_t1948079985 * get_m_Instance_0() const { return ___m_Instance_0; }
	inline TextureLerper_t1948079985 ** get_address_of_m_Instance_0() { return &___m_Instance_0; }
	inline void set_m_Instance_0(TextureLerper_t1948079985 * value)
	{
		___m_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURELERPER_T1948079985_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef U24ARRAYTYPEU3D20_T1702832645_H
#define U24ARRAYTYPEU3D20_T1702832645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1702832645 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1702832645__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1702832645_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T1175238756_H
#define ENUMERATOR_T1175238756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>
struct  Enumerator_t1175238756 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3580962175 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RenderTexture_t2108887433 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1175238756, ___l_0)); }
	inline List_1_t3580962175 * get_l_0() const { return ___l_0; }
	inline List_1_t3580962175 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3580962175 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1175238756, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1175238756, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1175238756, ___current_3)); }
	inline RenderTexture_t2108887433 * get_current_3() const { return ___current_3; }
	inline RenderTexture_t2108887433 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RenderTexture_t2108887433 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1175238756_H
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
#ifndef OBSOLETEATTRIBUTE_T303876359_H
#define OBSOLETEATTRIBUTE_T303876359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t303876359  : public Attribute_t861562559
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t303876359, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t303876359, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T303876359_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
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
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
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
#ifndef PARAMETEROVERRIDE_1_T1815622611_H
#define PARAMETEROVERRIDE_1_T1815622611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>
struct  ParameterOverride_1_t1815622611  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Spline_t3835237600 * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1815622611, ___value_1)); }
	inline Spline_t3835237600 * get_value_1() const { return ___value_1; }
	inline Spline_t3835237600 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Spline_t3835237600 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1815622611_H
#ifndef PARAMETEROVERRIDE_1_T1642347714_H
#define PARAMETEROVERRIDE_1_T1642347714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>
struct  ParameterOverride_1_t1642347714  : public ParameterOverride_t3061054201
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Texture_t3661962703 * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t1642347714, ___value_1)); }
	inline Texture_t3661962703 * get_value_1() const { return ___value_1; }
	inline Texture_t3661962703 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Texture_t3661962703 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T1642347714_H
#ifndef POSTPROCESSEFFECTRENDERER_1_T1421876342_H
#define POSTPROCESSEFFECTRENDERER_1_T1421876342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections>
struct  PostProcessEffectRenderer_1_t1421876342  : public PostProcessEffectRenderer_t1060237
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	ScreenSpaceReflections_t3117296337 * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_t1421876342, ___U3CsettingsU3Ek__BackingField_1)); }
	inline ScreenSpaceReflections_t3117296337 * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline ScreenSpaceReflections_t3117296337 ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(ScreenSpaceReflections_t3117296337 * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsettingsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_1_T1421876342_H
#ifndef POSTPROCESSEFFECTRENDERER_1_T388638640_H
#define POSTPROCESSEFFECTRENDERER_1_T388638640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>
struct  PostProcessEffectRenderer_1_t388638640  : public PostProcessEffectRenderer_t1060237
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	Vignette_t2084058635 * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_t388638640, ___U3CsettingsU3Ek__BackingField_1)); }
	inline Vignette_t2084058635 * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline Vignette_t2084058635 ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(Vignette_t2084058635 * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsettingsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_1_T388638640_H
#ifndef VECTORSCOPEMONITOR_T2083911122_H
#define VECTORSCOPEMONITOR_T2083911122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.VectorscopeMonitor
struct  VectorscopeMonitor_t2083911122  : public Monitor_t1754509597
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::size
	int32_t ___size_2;
	// System.Single UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::exposure
	float ___exposure_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::m_Data
	ComputeBuffer_t1033194329 * ___m_Data_4;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t2083911122, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_exposure_3() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t2083911122, ___exposure_3)); }
	inline float get_exposure_3() const { return ___exposure_3; }
	inline float* get_address_of_exposure_3() { return &___exposure_3; }
	inline void set_exposure_3(float value)
	{
		___exposure_3 = value;
	}

	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t2083911122, ___m_Data_4)); }
	inline ComputeBuffer_t1033194329 * get_m_Data_4() const { return ___m_Data_4; }
	inline ComputeBuffer_t1033194329 ** get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(ComputeBuffer_t1033194329 * value)
	{
		___m_Data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORSCOPEMONITOR_T2083911122_H
#ifndef WAVEFORMMONITOR_T2029591948_H
#define WAVEFORMMONITOR_T2029591948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.WaveformMonitor
struct  WaveformMonitor_t2029591948  : public Monitor_t1754509597
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.WaveformMonitor::exposure
	float ___exposure_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.WaveformMonitor::height
	int32_t ___height_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.PostProcessing.WaveformMonitor::m_Data
	ComputeBuffer_t1033194329 * ___m_Data_4;

public:
	inline static int32_t get_offset_of_exposure_2() { return static_cast<int32_t>(offsetof(WaveformMonitor_t2029591948, ___exposure_2)); }
	inline float get_exposure_2() const { return ___exposure_2; }
	inline float* get_address_of_exposure_2() { return &___exposure_2; }
	inline void set_exposure_2(float value)
	{
		___exposure_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(WaveformMonitor_t2029591948, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(WaveformMonitor_t2029591948, ___m_Data_4)); }
	inline ComputeBuffer_t1033194329 * get_m_Data_4() const { return ___m_Data_4; }
	inline ComputeBuffer_t1033194329 ** get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(ComputeBuffer_t1033194329 * value)
	{
		___m_Data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAVEFORMMONITOR_T2029591948_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-0ED907628EE272F93737B500A23D77C9B1C88368
	U24ArrayTypeU3D20_t1702832645  ___U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-727432515AE33ED62A216F2EBFF476490B631B0F
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0)); }
	inline U24ArrayTypeU3D20_t1702832645  get_U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0() const { return ___U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0; }
	inline U24ArrayTypeU3D20_t1702832645 * get_address_of_U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0() { return &___U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0; }
	inline void set_U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0(U24ArrayTypeU3D20_t1702832645  value)
	{
		___U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1() const { return ___U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1() { return &___U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1; }
	inline void set_U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D727432515AE33ED62A216F2EBFF476490B631B0F_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef STEREOSCOPICEYE_T2238664036_H
#define STEREOSCOPICEYE_T2238664036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t2238664036 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoscopicEye_t2238664036, ___value___1)); }
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
#endif // STEREOSCOPICEYE_T2238664036_H
#ifndef COMPUTEBUFFER_T1033194329_H
#define COMPUTEBUFFER_T1033194329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ComputeBuffer
struct  ComputeBuffer_t1033194329  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t1033194329, ___m_Ptr_0)); }
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
#endif // COMPUTEBUFFER_T1033194329_H
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
#ifndef DEPTHTEXTUREMODE_T4161834719_H
#define DEPTHTEXTUREMODE_T4161834719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4161834719 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4161834719, ___value___1)); }
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
#endif // DEPTHTEXTUREMODE_T4161834719_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
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
#endif // FILTERMODE_T3761284007_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
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
#endif // HIDEFLAGS_T4250555765_H
#ifndef MATERIALPROPERTYBLOCK_T3213117958_H
#define MATERIALPROPERTYBLOCK_T3213117958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t3213117958  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t3213117958, ___m_Ptr_0)); }
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
#endif // MATERIALPROPERTYBLOCK_T3213117958_H
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
#ifndef RENDERTEXTURECREATIONFLAGS_T557679221_H
#define RENDERTEXTURECREATIONFLAGS_T557679221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t557679221 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t557679221, ___value___1)); }
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
#endif // RENDERTEXTURECREATIONFLAGS_T557679221_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
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
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef RENDERTEXTUREMEMORYLESS_T852891252_H
#define RENDERTEXTUREMEMORYLESS_T852891252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t852891252 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t852891252, ___value___1)); }
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
#endif // RENDERTEXTUREMEMORYLESS_T852891252_H
#ifndef RENDERTEXTUREREADWRITE_T1793271918_H
#define RENDERTEXTUREREADWRITE_T1793271918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureReadWrite
struct  RenderTextureReadWrite_t1793271918 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t1793271918, ___value___1)); }
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
#endif // RENDERTEXTUREREADWRITE_T1793271918_H
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
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
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
#endif // COMMANDBUFFER_T2206337031_H
#ifndef COPYTEXTURESUPPORT_T2750066657_H
#define COPYTEXTURESUPPORT_T2750066657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CopyTextureSupport
struct  CopyTextureSupport_t2750066657 
{
public:
	// System.Int32 UnityEngine.Rendering.CopyTextureSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CopyTextureSupport_t2750066657, ___value___1)); }
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
#endif // COPYTEXTURESUPPORT_T2750066657_H
#ifndef GRAPHICSDEVICETYPE_T1797077436_H
#define GRAPHICSDEVICETYPE_T1797077436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_t1797077436 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_t1797077436, ___value___1)); }
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
#endif // GRAPHICSDEVICETYPE_T1797077436_H
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
#ifndef BOOLPARAMETER_T2299103272_H
#define BOOLPARAMETER_T2299103272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.BoolParameter
struct  BoolParameter_t2299103272  : public ParameterOverride_1_t2372640272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLPARAMETER_T2299103272_H
#ifndef DEBUGOVERLAY_T1040601139_H
#define DEBUGOVERLAY_T1040601139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.DebugOverlay
struct  DebugOverlay_t1040601139 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.DebugOverlay::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugOverlay_t1040601139, ___value___1)); }
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
#endif // DEBUGOVERLAY_T1040601139_H
#ifndef FLOATPARAMETER_T1840207740_H
#define FLOATPARAMETER_T1840207740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.FloatParameter
struct  FloatParameter_t1840207740  : public ParameterOverride_1_t3672619081
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATPARAMETER_T1840207740_H
#ifndef INTPARAMETER_T773781776_H
#define INTPARAMETER_T773781776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.IntParameter
struct  IntParameter_t773781776  : public ParameterOverride_1_t931330764
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPARAMETER_T773781776_H
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
#ifndef ANTIALIASING_T455662751_H
#define ANTIALIASING_T455662751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing
struct  Antialiasing_t455662751 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Antialiasing_t455662751, ___value___1)); }
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
#endif // ANTIALIASING_T455662751_H
#ifndef PASS_T2508327233_H
#define PASS_T2508327233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScalableAO/Pass
struct  Pass_t2508327233 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScalableAO/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t2508327233, ___value___1)); }
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
#endif // PASS_T2508327233_H
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
#ifndef SCREENSPACEREFLECTIONSRENDERER_T661283308_H
#define SCREENSPACEREFLECTIONSRENDERER_T661283308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer
struct  ScreenSpaceReflectionsRenderer_t661283308  : public PostProcessEffectRenderer_1_t1421876342
{
public:
	// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::m_Resolve
	RenderTexture_t2108887433 * ___m_Resolve_2;
	// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::m_History
	RenderTexture_t2108887433 * ___m_History_3;
	// System.Int32[] UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::m_MipIDs
	Int32U5BU5D_t385246372* ___m_MipIDs_4;
	// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset[] UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::m_Presets
	QualityPresetU5BU5D_t2343555814* ___m_Presets_5;

public:
	inline static int32_t get_offset_of_m_Resolve_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionsRenderer_t661283308, ___m_Resolve_2)); }
	inline RenderTexture_t2108887433 * get_m_Resolve_2() const { return ___m_Resolve_2; }
	inline RenderTexture_t2108887433 ** get_address_of_m_Resolve_2() { return &___m_Resolve_2; }
	inline void set_m_Resolve_2(RenderTexture_t2108887433 * value)
	{
		___m_Resolve_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Resolve_2), value);
	}

	inline static int32_t get_offset_of_m_History_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionsRenderer_t661283308, ___m_History_3)); }
	inline RenderTexture_t2108887433 * get_m_History_3() const { return ___m_History_3; }
	inline RenderTexture_t2108887433 ** get_address_of_m_History_3() { return &___m_History_3; }
	inline void set_m_History_3(RenderTexture_t2108887433 * value)
	{
		___m_History_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_History_3), value);
	}

	inline static int32_t get_offset_of_m_MipIDs_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionsRenderer_t661283308, ___m_MipIDs_4)); }
	inline Int32U5BU5D_t385246372* get_m_MipIDs_4() const { return ___m_MipIDs_4; }
	inline Int32U5BU5D_t385246372** get_address_of_m_MipIDs_4() { return &___m_MipIDs_4; }
	inline void set_m_MipIDs_4(Int32U5BU5D_t385246372* value)
	{
		___m_MipIDs_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MipIDs_4), value);
	}

	inline static int32_t get_offset_of_m_Presets_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionsRenderer_t661283308, ___m_Presets_5)); }
	inline QualityPresetU5BU5D_t2343555814* get_m_Presets_5() const { return ___m_Presets_5; }
	inline QualityPresetU5BU5D_t2343555814** get_address_of_m_Presets_5() { return &___m_Presets_5; }
	inline void set_m_Presets_5(QualityPresetU5BU5D_t2343555814* value)
	{
		___m_Presets_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Presets_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONSRENDERER_T661283308_H
#ifndef PASS_T3797868094_H
#define PASS_T3797868094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/Pass
struct  Pass_t3797868094 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t3797868094, ___value___1)); }
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
#endif // PASS_T3797868094_H
#ifndef SPLINEPARAMETER_T905443520_H
#define SPLINEPARAMETER_T905443520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.SplineParameter
struct  SplineParameter_t905443520  : public ParameterOverride_1_t1815622611
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPLINEPARAMETER_T905443520_H
#ifndef PASS_T3075013731_H
#define PASS_T3075013731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Pass
struct  Pass_t3075013731 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t3075013731, ___value___1)); }
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
#endif // PASS_T3075013731_H
#ifndef QUALITY_T1883249404_H
#define QUALITY_T1883249404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality
struct  Quality_t1883249404 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Quality_t1883249404, ___value___1)); }
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
#endif // QUALITY_T1883249404_H
#ifndef TEMPORALANTIALIASING_T1482226156_H
#define TEMPORALANTIALIASING_T1482226156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct  TemporalAntialiasing_t1482226156  : public RuntimeObject
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::sharpness
	float ___sharpness_1;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::motionBlending
	float ___motionBlending_3;
	// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4> UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::jitteredMatrixFunc
	Func_3_t2888966892 * ___jitteredMatrixFunc_4;
	// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::<jitter>k__BackingField
	Vector2_t2156229523  ___U3CjitterU3Ek__BackingField_5;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_Mrt
	RenderTargetIdentifierU5BU5D_t2742279485* ___m_Mrt_6;
	// System.Boolean UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_ResetHistory
	bool ___m_ResetHistory_7;
	// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::<sampleIndex>k__BackingField
	int32_t ___U3CsampleIndexU3Ek__BackingField_9;
	// UnityEngine.RenderTexture[][] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_HistoryTextures
	RenderTextureU5BU5DU5BU5D_t847993469* ___m_HistoryTextures_12;
	// System.Int32[] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_HistoryPingPong
	Int32U5BU5D_t385246372* ___m_HistoryPingPong_13;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpness_1() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___sharpness_1)); }
	inline float get_sharpness_1() const { return ___sharpness_1; }
	inline float* get_address_of_sharpness_1() { return &___sharpness_1; }
	inline void set_sharpness_1(float value)
	{
		___sharpness_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}

	inline static int32_t get_offset_of_jitteredMatrixFunc_4() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___jitteredMatrixFunc_4)); }
	inline Func_3_t2888966892 * get_jitteredMatrixFunc_4() const { return ___jitteredMatrixFunc_4; }
	inline Func_3_t2888966892 ** get_address_of_jitteredMatrixFunc_4() { return &___jitteredMatrixFunc_4; }
	inline void set_jitteredMatrixFunc_4(Func_3_t2888966892 * value)
	{
		___jitteredMatrixFunc_4 = value;
		Il2CppCodeGenWriteBarrier((&___jitteredMatrixFunc_4), value);
	}

	inline static int32_t get_offset_of_U3CjitterU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___U3CjitterU3Ek__BackingField_5)); }
	inline Vector2_t2156229523  get_U3CjitterU3Ek__BackingField_5() const { return ___U3CjitterU3Ek__BackingField_5; }
	inline Vector2_t2156229523 * get_address_of_U3CjitterU3Ek__BackingField_5() { return &___U3CjitterU3Ek__BackingField_5; }
	inline void set_U3CjitterU3Ek__BackingField_5(Vector2_t2156229523  value)
	{
		___U3CjitterU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Mrt_6() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___m_Mrt_6)); }
	inline RenderTargetIdentifierU5BU5D_t2742279485* get_m_Mrt_6() const { return ___m_Mrt_6; }
	inline RenderTargetIdentifierU5BU5D_t2742279485** get_address_of_m_Mrt_6() { return &___m_Mrt_6; }
	inline void set_m_Mrt_6(RenderTargetIdentifierU5BU5D_t2742279485* value)
	{
		___m_Mrt_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mrt_6), value);
	}

	inline static int32_t get_offset_of_m_ResetHistory_7() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___m_ResetHistory_7)); }
	inline bool get_m_ResetHistory_7() const { return ___m_ResetHistory_7; }
	inline bool* get_address_of_m_ResetHistory_7() { return &___m_ResetHistory_7; }
	inline void set_m_ResetHistory_7(bool value)
	{
		___m_ResetHistory_7 = value;
	}

	inline static int32_t get_offset_of_U3CsampleIndexU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___U3CsampleIndexU3Ek__BackingField_9)); }
	inline int32_t get_U3CsampleIndexU3Ek__BackingField_9() const { return ___U3CsampleIndexU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CsampleIndexU3Ek__BackingField_9() { return &___U3CsampleIndexU3Ek__BackingField_9; }
	inline void set_U3CsampleIndexU3Ek__BackingField_9(int32_t value)
	{
		___U3CsampleIndexU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTextures_12() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___m_HistoryTextures_12)); }
	inline RenderTextureU5BU5DU5BU5D_t847993469* get_m_HistoryTextures_12() const { return ___m_HistoryTextures_12; }
	inline RenderTextureU5BU5DU5BU5D_t847993469** get_address_of_m_HistoryTextures_12() { return &___m_HistoryTextures_12; }
	inline void set_m_HistoryTextures_12(RenderTextureU5BU5DU5BU5D_t847993469* value)
	{
		___m_HistoryTextures_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistoryTextures_12), value);
	}

	inline static int32_t get_offset_of_m_HistoryPingPong_13() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_t1482226156, ___m_HistoryPingPong_13)); }
	inline Int32U5BU5D_t385246372* get_m_HistoryPingPong_13() const { return ___m_HistoryPingPong_13; }
	inline Int32U5BU5D_t385246372** get_address_of_m_HistoryPingPong_13() { return &___m_HistoryPingPong_13; }
	inline void set_m_HistoryPingPong_13(Int32U5BU5D_t385246372* value)
	{
		___m_HistoryPingPong_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistoryPingPong_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEMPORALANTIALIASING_T1482226156_H
#ifndef PASS_T1255750211_H
#define PASS_T1255750211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing/Pass
struct  Pass_t1255750211 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t1255750211, ___value___1)); }
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
#endif // PASS_T1255750211_H
#ifndef TEXTUREPARAMETERDEFAULT_T2577489536_H
#define TEXTUREPARAMETERDEFAULT_T2577489536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TextureParameterDefault
struct  TextureParameterDefault_t2577489536 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TextureParameterDefault::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureParameterDefault_t2577489536, ___value___1)); }
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
#endif // TEXTUREPARAMETERDEFAULT_T2577489536_H
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
#ifndef MODE_T2795405020_H
#define MODE_T2795405020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode
struct  Mode_t2795405020 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t2795405020, ___value___1)); }
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
#endif // MODE_T2795405020_H
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
#ifndef VIGNETTERENDERER_T4277974699_H
#define VIGNETTERENDERER_T4277974699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.VignetteRenderer
struct  VignetteRenderer_t4277974699  : public PostProcessEffectRenderer_1_t388638640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTERENDERER_T4277974699_H
#ifndef SHADOWSAMPLINGMODE_T838715745_H
#define SHADOWSAMPLINGMODE_T838715745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t838715745 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t838715745, ___value___1)); }
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
#endif // SHADOWSAMPLINGMODE_T838715745_H
#ifndef TEXTUREDIMENSION_T3933106086_H
#define TEXTUREDIMENSION_T3933106086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t3933106086 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureDimension_t3933106086, ___value___1)); }
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
#endif // TEXTUREDIMENSION_T3933106086_H
#ifndef RENDERINGPATH_T883966888_H
#define RENDERINGPATH_T883966888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderingPath
struct  RenderingPath_t883966888 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderingPath_t883966888, ___value___1)); }
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
#endif // RENDERINGPATH_T883966888_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef VRTEXTUREUSAGE_T3142149582_H
#define VRTEXTUREUSAGE_T3142149582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3142149582 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3142149582, ___value___1)); }
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
#endif // VRTEXTUREUSAGE_T3142149582_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef COMPUTESHADER_T317220254_H
#define COMPUTESHADER_T317220254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ComputeShader
struct  ComputeShader_t317220254  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTESHADER_T317220254_H
#ifndef RENDERTEXTUREDESCRIPTOR_T1974534975_H
#define RENDERTEXTUREDESCRIPTOR_T1974534975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t1974534975 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::<colorFormat>k__BackingField
	int32_t ___U3CcolorFormatU3Ek__BackingField_4;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_5;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_7;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_8;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_9;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_10;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcolorFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CcolorFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CcolorFormatU3Ek__BackingField_4() const { return ___U3CcolorFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcolorFormatU3Ek__BackingField_4() { return &___U3CcolorFormatU3Ek__BackingField_4; }
	inline void set_U3CcolorFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CcolorFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ____depthBufferBits_5)); }
	inline int32_t get__depthBufferBits_5() const { return ____depthBufferBits_5; }
	inline int32_t* get_address_of__depthBufferBits_5() { return &____depthBufferBits_5; }
	inline void set__depthBufferBits_5(int32_t value)
	{
		____depthBufferBits_5 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CdimensionU3Ek__BackingField_7)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_7() const { return ___U3CdimensionU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_7() { return &___U3CdimensionU3Ek__BackingField_7; }
	inline void set_U3CdimensionU3Ek__BackingField_7(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CshadowSamplingModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_8() const { return ___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return &___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CvrUsageU3Ek__BackingField_9)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_9() const { return ___U3CvrUsageU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_9() { return &___U3CvrUsageU3Ek__BackingField_9; }
	inline void set_U3CvrUsageU3Ek__BackingField_9(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__flags_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ____flags_10)); }
	inline int32_t get__flags_10() const { return ____flags_10; }
	inline int32_t* get_address_of__flags_10() { return &____flags_10; }
	inline void set__flags_10(int32_t value)
	{
		____flags_10 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975, ___U3CmemorylessU3Ek__BackingField_11)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_11() const { return ___U3CmemorylessU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_11() { return &___U3CmemorylessU3Ek__BackingField_11; }
	inline void set_U3CmemorylessU3Ek__BackingField_11(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_11 = value;
	}
};

struct RenderTextureDescriptor_t1974534975_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t385246372* ___depthFormatBits_6;

public:
	inline static int32_t get_offset_of_depthFormatBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t1974534975_StaticFields, ___depthFormatBits_6)); }
	inline Int32U5BU5D_t385246372* get_depthFormatBits_6() const { return ___depthFormatBits_6; }
	inline Int32U5BU5D_t385246372** get_address_of_depthFormatBits_6() { return &___depthFormatBits_6; }
	inline void set_depthFormatBits_6(Int32U5BU5D_t385246372* value)
	{
		___depthFormatBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___depthFormatBits_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREDESCRIPTOR_T1974534975_H
#ifndef COLORPARAMETER_T2998827320_H
#define COLORPARAMETER_T2998827320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ColorParameter
struct  ColorParameter_t2998827320  : public ParameterOverride_1_t536071335
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORPARAMETER_T2998827320_H
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
#ifndef QUALITYPRESET_T734522687_H
#define QUALITYPRESET_T734522687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset
struct  QualityPreset_t734522687  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::maximumIterationCount
	int32_t ___maximumIterationCount_0;
	// System.Single UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::thickness
	float ___thickness_1;
	// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::downsampling
	int32_t ___downsampling_2;

public:
	inline static int32_t get_offset_of_maximumIterationCount_0() { return static_cast<int32_t>(offsetof(QualityPreset_t734522687, ___maximumIterationCount_0)); }
	inline int32_t get_maximumIterationCount_0() const { return ___maximumIterationCount_0; }
	inline int32_t* get_address_of_maximumIterationCount_0() { return &___maximumIterationCount_0; }
	inline void set_maximumIterationCount_0(int32_t value)
	{
		___maximumIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_thickness_1() { return static_cast<int32_t>(offsetof(QualityPreset_t734522687, ___thickness_1)); }
	inline float get_thickness_1() const { return ___thickness_1; }
	inline float* get_address_of_thickness_1() { return &___thickness_1; }
	inline void set_thickness_1(float value)
	{
		___thickness_1 = value;
	}

	inline static int32_t get_offset_of_downsampling_2() { return static_cast<int32_t>(offsetof(QualityPreset_t734522687, ___downsampling_2)); }
	inline int32_t get_downsampling_2() const { return ___downsampling_2; }
	inline int32_t* get_address_of_downsampling_2() { return &___downsampling_2; }
	inline void set_downsampling_2(int32_t value)
	{
		___downsampling_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYPRESET_T734522687_H
#ifndef SUBPIXELMORPHOLOGICALANTIALIASING_T3102233738_H
#define SUBPIXELMORPHOLOGICALANTIALIASING_T3102233738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct  SubpixelMorphologicalAntialiasing_t3102233738  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::quality
	int32_t ___quality_0;

public:
	inline static int32_t get_offset_of_quality_0() { return static_cast<int32_t>(offsetof(SubpixelMorphologicalAntialiasing_t3102233738, ___quality_0)); }
	inline int32_t get_quality_0() const { return ___quality_0; }
	inline int32_t* get_address_of_quality_0() { return &___quality_0; }
	inline void set_quality_0(int32_t value)
	{
		___quality_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBPIXELMORPHOLOGICALANTIALIASING_T3102233738_H
#ifndef TEXTUREPARAMETER_T4267400415_H
#define TEXTUREPARAMETER_T4267400415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TextureParameter
struct  TextureParameter_t4267400415  : public ParameterOverride_1_t1642347714
{
public:
	// UnityEngine.Rendering.PostProcessing.TextureParameterDefault UnityEngine.Rendering.PostProcessing.TextureParameter::defaultState
	int32_t ___defaultState_2;

public:
	inline static int32_t get_offset_of_defaultState_2() { return static_cast<int32_t>(offsetof(TextureParameter_t4267400415, ___defaultState_2)); }
	inline int32_t get_defaultState_2() const { return ___defaultState_2; }
	inline int32_t* get_address_of_defaultState_2() { return &___defaultState_2; }
	inline void set_defaultState_2(int32_t value)
	{
		___defaultState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREPARAMETER_T4267400415_H
#ifndef TRACKBALLATTRIBUTE_T1878300430_H
#define TRACKBALLATTRIBUTE_T1878300430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TrackballAttribute
struct  TrackballAttribute_t1878300430  : public Attribute_t861562559
{
public:
	// UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode UnityEngine.Rendering.PostProcessing.TrackballAttribute::mode
	int32_t ___mode_0;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(TrackballAttribute_t1878300430, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLATTRIBUTE_T1878300430_H
#ifndef VECTOR2PARAMETER_T1794608574_H
#define VECTOR2PARAMETER_T1794608574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Vector2Parameter
struct  Vector2Parameter_t1794608574  : public ParameterOverride_1_t136614534
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2PARAMETER_T1794608574_H
#ifndef VECTOR3PARAMETER_T753307070_H
#define VECTOR3PARAMETER_T753307070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Vector3Parameter
struct  Vector3Parameter_t753307070  : public ParameterOverride_1_t1702698475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3PARAMETER_T753307070_H
#ifndef VECTOR4PARAMETER_T1505856958_H
#define VECTOR4PARAMETER_T1505856958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Vector4Parameter
struct  Vector4Parameter_t1505856958  : public ParameterOverride_1_t1299413948
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4PARAMETER_T1505856958_H
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
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef FUNC_3_T2888966892_H
#define FUNC_3_T2888966892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct  Func_3_t2888966892  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2888966892_H
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
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef AMBIENTOCCLUSIONQUALITYPARAMETER_T3820917191_H
#define AMBIENTOCCLUSIONQUALITYPARAMETER_T3820917191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.AmbientOcclusionQualityParameter
struct  AmbientOcclusionQualityParameter_t3820917191  : public ParameterOverride_1_t1230029910
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONQUALITYPARAMETER_T3820917191_H
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
#ifndef POSTPROCESSRENDERCONTEXT_T597611190_H
#define POSTPROCESSRENDERCONTEXT_T597611190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct  PostProcessRenderContext_t597611190  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_Camera
	Camera_t4157153871 * ___m_Camera_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<command>k__BackingField
	CommandBuffer_t2206337031 * ___U3CcommandU3Ek__BackingField_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<source>k__BackingField
	RenderTargetIdentifier_t2079184500  ___U3CsourceU3Ek__BackingField_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<destination>k__BackingField
	RenderTargetIdentifier_t2079184500  ___U3CdestinationU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<sourceFormat>k__BackingField
	int32_t ___U3CsourceFormatU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<flip>k__BackingField
	bool ___U3CflipU3Ek__BackingField_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<resources>k__BackingField
	PostProcessResources_t1163236733 * ___U3CresourcesU3Ek__BackingField_6;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<propertySheets>k__BackingField
	PropertySheetFactory_t1490101248 * ___U3CpropertySheetsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<userData>k__BackingField
	Dictionary_2_t2865362463 * ___U3CuserDataU3Ek__BackingField_8;
	// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<debugLayer>k__BackingField
	PostProcessDebugLayer_t3290441360 * ___U3CdebugLayerU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<stereoActive>k__BackingField
	bool ___U3CstereoActiveU3Ek__BackingField_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<xrActiveEye>k__BackingField
	int32_t ___U3CxrActiveEyeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenWidth>k__BackingField
	int32_t ___U3CscreenWidthU3Ek__BackingField_14;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenHeight>k__BackingField
	int32_t ___U3CscreenHeightU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<isSceneView>k__BackingField
	bool ___U3CisSceneViewU3Ek__BackingField_16;
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<antialiasing>k__BackingField
	int32_t ___U3CantialiasingU3Ek__BackingField_17;
	// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<temporalAntialiasing>k__BackingField
	TemporalAntialiasing_t1482226156 * ___U3CtemporalAntialiasingU3Ek__BackingField_18;
	// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::uberSheet
	PropertySheet_t3821403501 * ___uberSheet_19;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposureTexture
	Texture_t3661962703 * ___autoExposureTexture_20;
	// UnityEngine.Rendering.PostProcessing.LogHistogram UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logHistogram
	LogHistogram_t1187052756 * ___logHistogram_21;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logLut
	Texture_t3661962703 * ___logLut_22;
	// UnityEngine.Rendering.PostProcessing.AutoExposure UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposure
	AutoExposure_t2470830169 * ___autoExposure_23;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::bloomBufferNameID
	int32_t ___bloomBufferNameID_24;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_sourceDescriptor
	RenderTextureDescriptor_t1974534975  ___m_sourceDescriptor_25;

public:
	inline static int32_t get_offset_of_m_Camera_0() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___m_Camera_0)); }
	inline Camera_t4157153871 * get_m_Camera_0() const { return ___m_Camera_0; }
	inline Camera_t4157153871 ** get_address_of_m_Camera_0() { return &___m_Camera_0; }
	inline void set_m_Camera_0(Camera_t4157153871 * value)
	{
		___m_Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_0), value);
	}

	inline static int32_t get_offset_of_U3CcommandU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CcommandU3Ek__BackingField_1)); }
	inline CommandBuffer_t2206337031 * get_U3CcommandU3Ek__BackingField_1() const { return ___U3CcommandU3Ek__BackingField_1; }
	inline CommandBuffer_t2206337031 ** get_address_of_U3CcommandU3Ek__BackingField_1() { return &___U3CcommandU3Ek__BackingField_1; }
	inline void set_U3CcommandU3Ek__BackingField_1(CommandBuffer_t2206337031 * value)
	{
		___U3CcommandU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcommandU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CsourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CsourceU3Ek__BackingField_2)); }
	inline RenderTargetIdentifier_t2079184500  get_U3CsourceU3Ek__BackingField_2() const { return ___U3CsourceU3Ek__BackingField_2; }
	inline RenderTargetIdentifier_t2079184500 * get_address_of_U3CsourceU3Ek__BackingField_2() { return &___U3CsourceU3Ek__BackingField_2; }
	inline void set_U3CsourceU3Ek__BackingField_2(RenderTargetIdentifier_t2079184500  value)
	{
		___U3CsourceU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdestinationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CdestinationU3Ek__BackingField_3)); }
	inline RenderTargetIdentifier_t2079184500  get_U3CdestinationU3Ek__BackingField_3() const { return ___U3CdestinationU3Ek__BackingField_3; }
	inline RenderTargetIdentifier_t2079184500 * get_address_of_U3CdestinationU3Ek__BackingField_3() { return &___U3CdestinationU3Ek__BackingField_3; }
	inline void set_U3CdestinationU3Ek__BackingField_3(RenderTargetIdentifier_t2079184500  value)
	{
		___U3CdestinationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CsourceFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CsourceFormatU3Ek__BackingField_4() const { return ___U3CsourceFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsourceFormatU3Ek__BackingField_4() { return &___U3CsourceFormatU3Ek__BackingField_4; }
	inline void set_U3CsourceFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CsourceFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CflipU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CflipU3Ek__BackingField_5)); }
	inline bool get_U3CflipU3Ek__BackingField_5() const { return ___U3CflipU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CflipU3Ek__BackingField_5() { return &___U3CflipU3Ek__BackingField_5; }
	inline void set_U3CflipU3Ek__BackingField_5(bool value)
	{
		___U3CflipU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CresourcesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CresourcesU3Ek__BackingField_6)); }
	inline PostProcessResources_t1163236733 * get_U3CresourcesU3Ek__BackingField_6() const { return ___U3CresourcesU3Ek__BackingField_6; }
	inline PostProcessResources_t1163236733 ** get_address_of_U3CresourcesU3Ek__BackingField_6() { return &___U3CresourcesU3Ek__BackingField_6; }
	inline void set_U3CresourcesU3Ek__BackingField_6(PostProcessResources_t1163236733 * value)
	{
		___U3CresourcesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresourcesU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpropertySheetsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CpropertySheetsU3Ek__BackingField_7)); }
	inline PropertySheetFactory_t1490101248 * get_U3CpropertySheetsU3Ek__BackingField_7() const { return ___U3CpropertySheetsU3Ek__BackingField_7; }
	inline PropertySheetFactory_t1490101248 ** get_address_of_U3CpropertySheetsU3Ek__BackingField_7() { return &___U3CpropertySheetsU3Ek__BackingField_7; }
	inline void set_U3CpropertySheetsU3Ek__BackingField_7(PropertySheetFactory_t1490101248 * value)
	{
		___U3CpropertySheetsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpropertySheetsU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CuserDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CuserDataU3Ek__BackingField_8)); }
	inline Dictionary_2_t2865362463 * get_U3CuserDataU3Ek__BackingField_8() const { return ___U3CuserDataU3Ek__BackingField_8; }
	inline Dictionary_2_t2865362463 ** get_address_of_U3CuserDataU3Ek__BackingField_8() { return &___U3CuserDataU3Ek__BackingField_8; }
	inline void set_U3CuserDataU3Ek__BackingField_8(Dictionary_2_t2865362463 * value)
	{
		___U3CuserDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserDataU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CdebugLayerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CdebugLayerU3Ek__BackingField_9)); }
	inline PostProcessDebugLayer_t3290441360 * get_U3CdebugLayerU3Ek__BackingField_9() const { return ___U3CdebugLayerU3Ek__BackingField_9; }
	inline PostProcessDebugLayer_t3290441360 ** get_address_of_U3CdebugLayerU3Ek__BackingField_9() { return &___U3CdebugLayerU3Ek__BackingField_9; }
	inline void set_U3CdebugLayerU3Ek__BackingField_9(PostProcessDebugLayer_t3290441360 * value)
	{
		___U3CdebugLayerU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdebugLayerU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CwidthU3Ek__BackingField_10)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_10() const { return ___U3CwidthU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_10() { return &___U3CwidthU3Ek__BackingField_10; }
	inline void set_U3CwidthU3Ek__BackingField_10(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CheightU3Ek__BackingField_11)); }
	inline int32_t get_U3CheightU3Ek__BackingField_11() const { return ___U3CheightU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_11() { return &___U3CheightU3Ek__BackingField_11; }
	inline void set_U3CheightU3Ek__BackingField_11(int32_t value)
	{
		___U3CheightU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CstereoActiveU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CstereoActiveU3Ek__BackingField_12)); }
	inline bool get_U3CstereoActiveU3Ek__BackingField_12() const { return ___U3CstereoActiveU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CstereoActiveU3Ek__BackingField_12() { return &___U3CstereoActiveU3Ek__BackingField_12; }
	inline void set_U3CstereoActiveU3Ek__BackingField_12(bool value)
	{
		___U3CstereoActiveU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CxrActiveEyeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CxrActiveEyeU3Ek__BackingField_13)); }
	inline int32_t get_U3CxrActiveEyeU3Ek__BackingField_13() const { return ___U3CxrActiveEyeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CxrActiveEyeU3Ek__BackingField_13() { return &___U3CxrActiveEyeU3Ek__BackingField_13; }
	inline void set_U3CxrActiveEyeU3Ek__BackingField_13(int32_t value)
	{
		___U3CxrActiveEyeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CscreenWidthU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CscreenWidthU3Ek__BackingField_14)); }
	inline int32_t get_U3CscreenWidthU3Ek__BackingField_14() const { return ___U3CscreenWidthU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CscreenWidthU3Ek__BackingField_14() { return &___U3CscreenWidthU3Ek__BackingField_14; }
	inline void set_U3CscreenWidthU3Ek__BackingField_14(int32_t value)
	{
		___U3CscreenWidthU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CscreenHeightU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CscreenHeightU3Ek__BackingField_15)); }
	inline int32_t get_U3CscreenHeightU3Ek__BackingField_15() const { return ___U3CscreenHeightU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CscreenHeightU3Ek__BackingField_15() { return &___U3CscreenHeightU3Ek__BackingField_15; }
	inline void set_U3CscreenHeightU3Ek__BackingField_15(int32_t value)
	{
		___U3CscreenHeightU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisSceneViewU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CisSceneViewU3Ek__BackingField_16)); }
	inline bool get_U3CisSceneViewU3Ek__BackingField_16() const { return ___U3CisSceneViewU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisSceneViewU3Ek__BackingField_16() { return &___U3CisSceneViewU3Ek__BackingField_16; }
	inline void set_U3CisSceneViewU3Ek__BackingField_16(bool value)
	{
		___U3CisSceneViewU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CantialiasingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CantialiasingU3Ek__BackingField_17)); }
	inline int32_t get_U3CantialiasingU3Ek__BackingField_17() const { return ___U3CantialiasingU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CantialiasingU3Ek__BackingField_17() { return &___U3CantialiasingU3Ek__BackingField_17; }
	inline void set_U3CantialiasingU3Ek__BackingField_17(int32_t value)
	{
		___U3CantialiasingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CtemporalAntialiasingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___U3CtemporalAntialiasingU3Ek__BackingField_18)); }
	inline TemporalAntialiasing_t1482226156 * get_U3CtemporalAntialiasingU3Ek__BackingField_18() const { return ___U3CtemporalAntialiasingU3Ek__BackingField_18; }
	inline TemporalAntialiasing_t1482226156 ** get_address_of_U3CtemporalAntialiasingU3Ek__BackingField_18() { return &___U3CtemporalAntialiasingU3Ek__BackingField_18; }
	inline void set_U3CtemporalAntialiasingU3Ek__BackingField_18(TemporalAntialiasing_t1482226156 * value)
	{
		___U3CtemporalAntialiasingU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtemporalAntialiasingU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_uberSheet_19() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___uberSheet_19)); }
	inline PropertySheet_t3821403501 * get_uberSheet_19() const { return ___uberSheet_19; }
	inline PropertySheet_t3821403501 ** get_address_of_uberSheet_19() { return &___uberSheet_19; }
	inline void set_uberSheet_19(PropertySheet_t3821403501 * value)
	{
		___uberSheet_19 = value;
		Il2CppCodeGenWriteBarrier((&___uberSheet_19), value);
	}

	inline static int32_t get_offset_of_autoExposureTexture_20() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___autoExposureTexture_20)); }
	inline Texture_t3661962703 * get_autoExposureTexture_20() const { return ___autoExposureTexture_20; }
	inline Texture_t3661962703 ** get_address_of_autoExposureTexture_20() { return &___autoExposureTexture_20; }
	inline void set_autoExposureTexture_20(Texture_t3661962703 * value)
	{
		___autoExposureTexture_20 = value;
		Il2CppCodeGenWriteBarrier((&___autoExposureTexture_20), value);
	}

	inline static int32_t get_offset_of_logHistogram_21() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___logHistogram_21)); }
	inline LogHistogram_t1187052756 * get_logHistogram_21() const { return ___logHistogram_21; }
	inline LogHistogram_t1187052756 ** get_address_of_logHistogram_21() { return &___logHistogram_21; }
	inline void set_logHistogram_21(LogHistogram_t1187052756 * value)
	{
		___logHistogram_21 = value;
		Il2CppCodeGenWriteBarrier((&___logHistogram_21), value);
	}

	inline static int32_t get_offset_of_logLut_22() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___logLut_22)); }
	inline Texture_t3661962703 * get_logLut_22() const { return ___logLut_22; }
	inline Texture_t3661962703 ** get_address_of_logLut_22() { return &___logLut_22; }
	inline void set_logLut_22(Texture_t3661962703 * value)
	{
		___logLut_22 = value;
		Il2CppCodeGenWriteBarrier((&___logLut_22), value);
	}

	inline static int32_t get_offset_of_autoExposure_23() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___autoExposure_23)); }
	inline AutoExposure_t2470830169 * get_autoExposure_23() const { return ___autoExposure_23; }
	inline AutoExposure_t2470830169 ** get_address_of_autoExposure_23() { return &___autoExposure_23; }
	inline void set_autoExposure_23(AutoExposure_t2470830169 * value)
	{
		___autoExposure_23 = value;
		Il2CppCodeGenWriteBarrier((&___autoExposure_23), value);
	}

	inline static int32_t get_offset_of_bloomBufferNameID_24() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___bloomBufferNameID_24)); }
	inline int32_t get_bloomBufferNameID_24() const { return ___bloomBufferNameID_24; }
	inline int32_t* get_address_of_bloomBufferNameID_24() { return &___bloomBufferNameID_24; }
	inline void set_bloomBufferNameID_24(int32_t value)
	{
		___bloomBufferNameID_24 = value;
	}

	inline static int32_t get_offset_of_m_sourceDescriptor_25() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t597611190, ___m_sourceDescriptor_25)); }
	inline RenderTextureDescriptor_t1974534975  get_m_sourceDescriptor_25() const { return ___m_sourceDescriptor_25; }
	inline RenderTextureDescriptor_t1974534975 * get_address_of_m_sourceDescriptor_25() { return &___m_sourceDescriptor_25; }
	inline void set_m_sourceDescriptor_25(RenderTextureDescriptor_t1974534975  value)
	{
		___m_sourceDescriptor_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSRENDERCONTEXT_T597611190_H
#ifndef POSTPROCESSRESOURCES_T1163236733_H
#define POSTPROCESSRESOURCES_T1163236733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct  PostProcessResources_t1163236733  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise64
	Texture2DU5BU5D_t149664596* ___blueNoise64_4;
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise256
	Texture2DU5BU5D_t149664596* ___blueNoise256_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts UnityEngine.Rendering.PostProcessing.PostProcessResources::smaaLuts
	SMAALuts_t184516107 * ___smaaLuts_6;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders UnityEngine.Rendering.PostProcessing.PostProcessResources::shaders
	Shaders_t2807171077 * ___shaders_7;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders UnityEngine.Rendering.PostProcessing.PostProcessResources::computeShaders
	ComputeShaders_t4172110136 * ___computeShaders_8;

public:
	inline static int32_t get_offset_of_blueNoise64_4() { return static_cast<int32_t>(offsetof(PostProcessResources_t1163236733, ___blueNoise64_4)); }
	inline Texture2DU5BU5D_t149664596* get_blueNoise64_4() const { return ___blueNoise64_4; }
	inline Texture2DU5BU5D_t149664596** get_address_of_blueNoise64_4() { return &___blueNoise64_4; }
	inline void set_blueNoise64_4(Texture2DU5BU5D_t149664596* value)
	{
		___blueNoise64_4 = value;
		Il2CppCodeGenWriteBarrier((&___blueNoise64_4), value);
	}

	inline static int32_t get_offset_of_blueNoise256_5() { return static_cast<int32_t>(offsetof(PostProcessResources_t1163236733, ___blueNoise256_5)); }
	inline Texture2DU5BU5D_t149664596* get_blueNoise256_5() const { return ___blueNoise256_5; }
	inline Texture2DU5BU5D_t149664596** get_address_of_blueNoise256_5() { return &___blueNoise256_5; }
	inline void set_blueNoise256_5(Texture2DU5BU5D_t149664596* value)
	{
		___blueNoise256_5 = value;
		Il2CppCodeGenWriteBarrier((&___blueNoise256_5), value);
	}

	inline static int32_t get_offset_of_smaaLuts_6() { return static_cast<int32_t>(offsetof(PostProcessResources_t1163236733, ___smaaLuts_6)); }
	inline SMAALuts_t184516107 * get_smaaLuts_6() const { return ___smaaLuts_6; }
	inline SMAALuts_t184516107 ** get_address_of_smaaLuts_6() { return &___smaaLuts_6; }
	inline void set_smaaLuts_6(SMAALuts_t184516107 * value)
	{
		___smaaLuts_6 = value;
		Il2CppCodeGenWriteBarrier((&___smaaLuts_6), value);
	}

	inline static int32_t get_offset_of_shaders_7() { return static_cast<int32_t>(offsetof(PostProcessResources_t1163236733, ___shaders_7)); }
	inline Shaders_t2807171077 * get_shaders_7() const { return ___shaders_7; }
	inline Shaders_t2807171077 ** get_address_of_shaders_7() { return &___shaders_7; }
	inline void set_shaders_7(Shaders_t2807171077 * value)
	{
		___shaders_7 = value;
		Il2CppCodeGenWriteBarrier((&___shaders_7), value);
	}

	inline static int32_t get_offset_of_computeShaders_8() { return static_cast<int32_t>(offsetof(PostProcessResources_t1163236733, ___computeShaders_8)); }
	inline ComputeShaders_t4172110136 * get_computeShaders_8() const { return ___computeShaders_8; }
	inline ComputeShaders_t4172110136 ** get_address_of_computeShaders_8() { return &___computeShaders_8; }
	inline void set_computeShaders_8(ComputeShaders_t4172110136 * value)
	{
		___computeShaders_8 = value;
		Il2CppCodeGenWriteBarrier((&___computeShaders_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSRESOURCES_T1163236733_H
#ifndef SCREENSPACEREFLECTIONPRESETPARAMETER_T2494457668_H
#define SCREENSPACEREFLECTIONPRESETPARAMETER_T2494457668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPresetParameter
struct  ScreenSpaceReflectionPresetParameter_t2494457668  : public ParameterOverride_1_t381536667
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONPRESETPARAMETER_T2494457668_H
#ifndef SCREENSPACEREFLECTIONRESOLUTIONPARAMETER_T1804578420_H
#define SCREENSPACEREFLECTIONRESOLUTIONPARAMETER_T1804578420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolutionParameter
struct  ScreenSpaceReflectionResolutionParameter_t1804578420  : public ParameterOverride_1_t1070587220
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONRESOLUTIONPARAMETER_T1804578420_H
#ifndef TONEMAPPERPARAMETER_T2646255172_H
#define TONEMAPPERPARAMETER_T2646255172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.TonemapperParameter
struct  TonemapperParameter_t2646255172  : public ParameterOverride_1_t1025085192
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPERPARAMETER_T2646255172_H
#ifndef VIGNETTEMODEPARAMETER_T1229959487_H
#define VIGNETTEMODEPARAMETER_T1229959487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.VignetteModeParameter
struct  VignetteModeParameter_t1229959487  : public ParameterOverride_1_t3368882051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEMODEPARAMETER_T1229959487_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TEXTURE3D_T1884131049_H
#define TEXTURE3D_T1884131049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture3D
struct  Texture3D_t1884131049  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE3D_T1884131049_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef AMBIENTOCCLUSION_T1140100160_H
#define AMBIENTOCCLUSION_T1140100160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.AmbientOcclusion
struct  AmbientOcclusion_t1140100160  : public PostProcessEffectSettings_t1672565614
{
public:
	// UnityEngine.Rendering.PostProcessing.AmbientOcclusionModeParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::mode
	AmbientOcclusionModeParameter_t3592449485 * ___mode_9;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::intensity
	FloatParameter_t1840207740 * ___intensity_10;
	// UnityEngine.Rendering.PostProcessing.ColorParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::color
	ColorParameter_t2998827320 * ___color_11;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::ambientOnly
	BoolParameter_t2299103272 * ___ambientOnly_12;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::noiseFilterTolerance
	FloatParameter_t1840207740 * ___noiseFilterTolerance_13;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::blurTolerance
	FloatParameter_t1840207740 * ___blurTolerance_14;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::upsampleTolerance
	FloatParameter_t1840207740 * ___upsampleTolerance_15;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::thicknessModifier
	FloatParameter_t1840207740 * ___thicknessModifier_16;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::directLightingStrength
	FloatParameter_t1840207740 * ___directLightingStrength_17;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::radius
	FloatParameter_t1840207740 * ___radius_18;
	// UnityEngine.Rendering.PostProcessing.AmbientOcclusionQualityParameter UnityEngine.Rendering.PostProcessing.AmbientOcclusion::quality
	AmbientOcclusionQualityParameter_t3820917191 * ___quality_19;

public:
	inline static int32_t get_offset_of_mode_9() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___mode_9)); }
	inline AmbientOcclusionModeParameter_t3592449485 * get_mode_9() const { return ___mode_9; }
	inline AmbientOcclusionModeParameter_t3592449485 ** get_address_of_mode_9() { return &___mode_9; }
	inline void set_mode_9(AmbientOcclusionModeParameter_t3592449485 * value)
	{
		___mode_9 = value;
		Il2CppCodeGenWriteBarrier((&___mode_9), value);
	}

	inline static int32_t get_offset_of_intensity_10() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___intensity_10)); }
	inline FloatParameter_t1840207740 * get_intensity_10() const { return ___intensity_10; }
	inline FloatParameter_t1840207740 ** get_address_of_intensity_10() { return &___intensity_10; }
	inline void set_intensity_10(FloatParameter_t1840207740 * value)
	{
		___intensity_10 = value;
		Il2CppCodeGenWriteBarrier((&___intensity_10), value);
	}

	inline static int32_t get_offset_of_color_11() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___color_11)); }
	inline ColorParameter_t2998827320 * get_color_11() const { return ___color_11; }
	inline ColorParameter_t2998827320 ** get_address_of_color_11() { return &___color_11; }
	inline void set_color_11(ColorParameter_t2998827320 * value)
	{
		___color_11 = value;
		Il2CppCodeGenWriteBarrier((&___color_11), value);
	}

	inline static int32_t get_offset_of_ambientOnly_12() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___ambientOnly_12)); }
	inline BoolParameter_t2299103272 * get_ambientOnly_12() const { return ___ambientOnly_12; }
	inline BoolParameter_t2299103272 ** get_address_of_ambientOnly_12() { return &___ambientOnly_12; }
	inline void set_ambientOnly_12(BoolParameter_t2299103272 * value)
	{
		___ambientOnly_12 = value;
		Il2CppCodeGenWriteBarrier((&___ambientOnly_12), value);
	}

	inline static int32_t get_offset_of_noiseFilterTolerance_13() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___noiseFilterTolerance_13)); }
	inline FloatParameter_t1840207740 * get_noiseFilterTolerance_13() const { return ___noiseFilterTolerance_13; }
	inline FloatParameter_t1840207740 ** get_address_of_noiseFilterTolerance_13() { return &___noiseFilterTolerance_13; }
	inline void set_noiseFilterTolerance_13(FloatParameter_t1840207740 * value)
	{
		___noiseFilterTolerance_13 = value;
		Il2CppCodeGenWriteBarrier((&___noiseFilterTolerance_13), value);
	}

	inline static int32_t get_offset_of_blurTolerance_14() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___blurTolerance_14)); }
	inline FloatParameter_t1840207740 * get_blurTolerance_14() const { return ___blurTolerance_14; }
	inline FloatParameter_t1840207740 ** get_address_of_blurTolerance_14() { return &___blurTolerance_14; }
	inline void set_blurTolerance_14(FloatParameter_t1840207740 * value)
	{
		___blurTolerance_14 = value;
		Il2CppCodeGenWriteBarrier((&___blurTolerance_14), value);
	}

	inline static int32_t get_offset_of_upsampleTolerance_15() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___upsampleTolerance_15)); }
	inline FloatParameter_t1840207740 * get_upsampleTolerance_15() const { return ___upsampleTolerance_15; }
	inline FloatParameter_t1840207740 ** get_address_of_upsampleTolerance_15() { return &___upsampleTolerance_15; }
	inline void set_upsampleTolerance_15(FloatParameter_t1840207740 * value)
	{
		___upsampleTolerance_15 = value;
		Il2CppCodeGenWriteBarrier((&___upsampleTolerance_15), value);
	}

	inline static int32_t get_offset_of_thicknessModifier_16() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___thicknessModifier_16)); }
	inline FloatParameter_t1840207740 * get_thicknessModifier_16() const { return ___thicknessModifier_16; }
	inline FloatParameter_t1840207740 ** get_address_of_thicknessModifier_16() { return &___thicknessModifier_16; }
	inline void set_thicknessModifier_16(FloatParameter_t1840207740 * value)
	{
		___thicknessModifier_16 = value;
		Il2CppCodeGenWriteBarrier((&___thicknessModifier_16), value);
	}

	inline static int32_t get_offset_of_directLightingStrength_17() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___directLightingStrength_17)); }
	inline FloatParameter_t1840207740 * get_directLightingStrength_17() const { return ___directLightingStrength_17; }
	inline FloatParameter_t1840207740 ** get_address_of_directLightingStrength_17() { return &___directLightingStrength_17; }
	inline void set_directLightingStrength_17(FloatParameter_t1840207740 * value)
	{
		___directLightingStrength_17 = value;
		Il2CppCodeGenWriteBarrier((&___directLightingStrength_17), value);
	}

	inline static int32_t get_offset_of_radius_18() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___radius_18)); }
	inline FloatParameter_t1840207740 * get_radius_18() const { return ___radius_18; }
	inline FloatParameter_t1840207740 ** get_address_of_radius_18() { return &___radius_18; }
	inline void set_radius_18(FloatParameter_t1840207740 * value)
	{
		___radius_18 = value;
		Il2CppCodeGenWriteBarrier((&___radius_18), value);
	}

	inline static int32_t get_offset_of_quality_19() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t1140100160, ___quality_19)); }
	inline AmbientOcclusionQualityParameter_t3820917191 * get_quality_19() const { return ___quality_19; }
	inline AmbientOcclusionQualityParameter_t3820917191 ** get_address_of_quality_19() { return &___quality_19; }
	inline void set_quality_19(AmbientOcclusionQualityParameter_t3820917191 * value)
	{
		___quality_19 = value;
		Il2CppCodeGenWriteBarrier((&___quality_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSION_T1140100160_H
#ifndef SCREENSPACEREFLECTIONS_T3117296337_H
#define SCREENSPACEREFLECTIONS_T3117296337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections
struct  ScreenSpaceReflections_t3117296337  : public PostProcessEffectSettings_t1672565614
{
public:
	// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPresetParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::preset
	ScreenSpaceReflectionPresetParameter_t2494457668 * ___preset_9;
	// UnityEngine.Rendering.PostProcessing.IntParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::maximumIterationCount
	IntParameter_t773781776 * ___maximumIterationCount_10;
	// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolutionParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::resolution
	ScreenSpaceReflectionResolutionParameter_t1804578420 * ___resolution_11;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::thickness
	FloatParameter_t1840207740 * ___thickness_12;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::maximumMarchDistance
	FloatParameter_t1840207740 * ___maximumMarchDistance_13;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::distanceFade
	FloatParameter_t1840207740 * ___distanceFade_14;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::vignette
	FloatParameter_t1840207740 * ___vignette_15;

public:
	inline static int32_t get_offset_of_preset_9() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___preset_9)); }
	inline ScreenSpaceReflectionPresetParameter_t2494457668 * get_preset_9() const { return ___preset_9; }
	inline ScreenSpaceReflectionPresetParameter_t2494457668 ** get_address_of_preset_9() { return &___preset_9; }
	inline void set_preset_9(ScreenSpaceReflectionPresetParameter_t2494457668 * value)
	{
		___preset_9 = value;
		Il2CppCodeGenWriteBarrier((&___preset_9), value);
	}

	inline static int32_t get_offset_of_maximumIterationCount_10() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___maximumIterationCount_10)); }
	inline IntParameter_t773781776 * get_maximumIterationCount_10() const { return ___maximumIterationCount_10; }
	inline IntParameter_t773781776 ** get_address_of_maximumIterationCount_10() { return &___maximumIterationCount_10; }
	inline void set_maximumIterationCount_10(IntParameter_t773781776 * value)
	{
		___maximumIterationCount_10 = value;
		Il2CppCodeGenWriteBarrier((&___maximumIterationCount_10), value);
	}

	inline static int32_t get_offset_of_resolution_11() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___resolution_11)); }
	inline ScreenSpaceReflectionResolutionParameter_t1804578420 * get_resolution_11() const { return ___resolution_11; }
	inline ScreenSpaceReflectionResolutionParameter_t1804578420 ** get_address_of_resolution_11() { return &___resolution_11; }
	inline void set_resolution_11(ScreenSpaceReflectionResolutionParameter_t1804578420 * value)
	{
		___resolution_11 = value;
		Il2CppCodeGenWriteBarrier((&___resolution_11), value);
	}

	inline static int32_t get_offset_of_thickness_12() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___thickness_12)); }
	inline FloatParameter_t1840207740 * get_thickness_12() const { return ___thickness_12; }
	inline FloatParameter_t1840207740 ** get_address_of_thickness_12() { return &___thickness_12; }
	inline void set_thickness_12(FloatParameter_t1840207740 * value)
	{
		___thickness_12 = value;
		Il2CppCodeGenWriteBarrier((&___thickness_12), value);
	}

	inline static int32_t get_offset_of_maximumMarchDistance_13() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___maximumMarchDistance_13)); }
	inline FloatParameter_t1840207740 * get_maximumMarchDistance_13() const { return ___maximumMarchDistance_13; }
	inline FloatParameter_t1840207740 ** get_address_of_maximumMarchDistance_13() { return &___maximumMarchDistance_13; }
	inline void set_maximumMarchDistance_13(FloatParameter_t1840207740 * value)
	{
		___maximumMarchDistance_13 = value;
		Il2CppCodeGenWriteBarrier((&___maximumMarchDistance_13), value);
	}

	inline static int32_t get_offset_of_distanceFade_14() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___distanceFade_14)); }
	inline FloatParameter_t1840207740 * get_distanceFade_14() const { return ___distanceFade_14; }
	inline FloatParameter_t1840207740 ** get_address_of_distanceFade_14() { return &___distanceFade_14; }
	inline void set_distanceFade_14(FloatParameter_t1840207740 * value)
	{
		___distanceFade_14 = value;
		Il2CppCodeGenWriteBarrier((&___distanceFade_14), value);
	}

	inline static int32_t get_offset_of_vignette_15() { return static_cast<int32_t>(offsetof(ScreenSpaceReflections_t3117296337, ___vignette_15)); }
	inline FloatParameter_t1840207740 * get_vignette_15() const { return ___vignette_15; }
	inline FloatParameter_t1840207740 ** get_address_of_vignette_15() { return &___vignette_15; }
	inline void set_vignette_15(FloatParameter_t1840207740 * value)
	{
		___vignette_15 = value;
		Il2CppCodeGenWriteBarrier((&___vignette_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONS_T3117296337_H
#ifndef VIGNETTE_T2084058635_H
#define VIGNETTE_T2084058635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.Vignette
struct  Vignette_t2084058635  : public PostProcessEffectSettings_t1672565614
{
public:
	// UnityEngine.Rendering.PostProcessing.VignetteModeParameter UnityEngine.Rendering.PostProcessing.Vignette::mode
	VignetteModeParameter_t1229959487 * ___mode_9;
	// UnityEngine.Rendering.PostProcessing.ColorParameter UnityEngine.Rendering.PostProcessing.Vignette::color
	ColorParameter_t2998827320 * ___color_10;
	// UnityEngine.Rendering.PostProcessing.Vector2Parameter UnityEngine.Rendering.PostProcessing.Vignette::center
	Vector2Parameter_t1794608574 * ___center_11;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::intensity
	FloatParameter_t1840207740 * ___intensity_12;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::smoothness
	FloatParameter_t1840207740 * ___smoothness_13;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::roundness
	FloatParameter_t1840207740 * ___roundness_14;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.Vignette::rounded
	BoolParameter_t2299103272 * ___rounded_15;
	// UnityEngine.Rendering.PostProcessing.TextureParameter UnityEngine.Rendering.PostProcessing.Vignette::mask
	TextureParameter_t4267400415 * ___mask_16;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::opacity
	FloatParameter_t1840207740 * ___opacity_17;

public:
	inline static int32_t get_offset_of_mode_9() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___mode_9)); }
	inline VignetteModeParameter_t1229959487 * get_mode_9() const { return ___mode_9; }
	inline VignetteModeParameter_t1229959487 ** get_address_of_mode_9() { return &___mode_9; }
	inline void set_mode_9(VignetteModeParameter_t1229959487 * value)
	{
		___mode_9 = value;
		Il2CppCodeGenWriteBarrier((&___mode_9), value);
	}

	inline static int32_t get_offset_of_color_10() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___color_10)); }
	inline ColorParameter_t2998827320 * get_color_10() const { return ___color_10; }
	inline ColorParameter_t2998827320 ** get_address_of_color_10() { return &___color_10; }
	inline void set_color_10(ColorParameter_t2998827320 * value)
	{
		___color_10 = value;
		Il2CppCodeGenWriteBarrier((&___color_10), value);
	}

	inline static int32_t get_offset_of_center_11() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___center_11)); }
	inline Vector2Parameter_t1794608574 * get_center_11() const { return ___center_11; }
	inline Vector2Parameter_t1794608574 ** get_address_of_center_11() { return &___center_11; }
	inline void set_center_11(Vector2Parameter_t1794608574 * value)
	{
		___center_11 = value;
		Il2CppCodeGenWriteBarrier((&___center_11), value);
	}

	inline static int32_t get_offset_of_intensity_12() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___intensity_12)); }
	inline FloatParameter_t1840207740 * get_intensity_12() const { return ___intensity_12; }
	inline FloatParameter_t1840207740 ** get_address_of_intensity_12() { return &___intensity_12; }
	inline void set_intensity_12(FloatParameter_t1840207740 * value)
	{
		___intensity_12 = value;
		Il2CppCodeGenWriteBarrier((&___intensity_12), value);
	}

	inline static int32_t get_offset_of_smoothness_13() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___smoothness_13)); }
	inline FloatParameter_t1840207740 * get_smoothness_13() const { return ___smoothness_13; }
	inline FloatParameter_t1840207740 ** get_address_of_smoothness_13() { return &___smoothness_13; }
	inline void set_smoothness_13(FloatParameter_t1840207740 * value)
	{
		___smoothness_13 = value;
		Il2CppCodeGenWriteBarrier((&___smoothness_13), value);
	}

	inline static int32_t get_offset_of_roundness_14() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___roundness_14)); }
	inline FloatParameter_t1840207740 * get_roundness_14() const { return ___roundness_14; }
	inline FloatParameter_t1840207740 ** get_address_of_roundness_14() { return &___roundness_14; }
	inline void set_roundness_14(FloatParameter_t1840207740 * value)
	{
		___roundness_14 = value;
		Il2CppCodeGenWriteBarrier((&___roundness_14), value);
	}

	inline static int32_t get_offset_of_rounded_15() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___rounded_15)); }
	inline BoolParameter_t2299103272 * get_rounded_15() const { return ___rounded_15; }
	inline BoolParameter_t2299103272 ** get_address_of_rounded_15() { return &___rounded_15; }
	inline void set_rounded_15(BoolParameter_t2299103272 * value)
	{
		___rounded_15 = value;
		Il2CppCodeGenWriteBarrier((&___rounded_15), value);
	}

	inline static int32_t get_offset_of_mask_16() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___mask_16)); }
	inline TextureParameter_t4267400415 * get_mask_16() const { return ___mask_16; }
	inline TextureParameter_t4267400415 ** get_address_of_mask_16() { return &___mask_16; }
	inline void set_mask_16(TextureParameter_t4267400415 * value)
	{
		___mask_16 = value;
		Il2CppCodeGenWriteBarrier((&___mask_16), value);
	}

	inline static int32_t get_offset_of_opacity_17() { return static_cast<int32_t>(offsetof(Vignette_t2084058635, ___opacity_17)); }
	inline FloatParameter_t1840207740 * get_opacity_17() const { return ___opacity_17; }
	inline FloatParameter_t1840207740 ** get_address_of_opacity_17() { return &___opacity_17; }
	inline void set_opacity_17(FloatParameter_t1840207740 * value)
	{
		___opacity_17 = value;
		Il2CppCodeGenWriteBarrier((&___opacity_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTE_T2084058635_H
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
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset[]
struct QualityPresetU5BU5D_t2343555814  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) QualityPreset_t734522687 * m_Items[1];

public:
	inline QualityPreset_t734522687 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QualityPreset_t734522687 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QualityPreset_t734522687 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline QualityPreset_t734522687 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QualityPreset_t734522687 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QualityPreset_t734522687 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t3840446185 * m_Items[1];

public:
	inline Texture2D_t3840446185 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture2D_t3840446185 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTexture_t2108887433 * m_Items[1];

public:
	inline RenderTexture_t2108887433 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_t2108887433 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_t2108887433 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RenderTexture_t2108887433 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_t2108887433 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_t2108887433 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RenderTexture[][]
struct RenderTextureU5BU5DU5BU5D_t847993469  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTextureU5BU5D_t4111643188* m_Items[1];

public:
	inline RenderTextureU5BU5D_t4111643188* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTextureU5BU5D_t4111643188** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTextureU5BU5D_t4111643188* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RenderTextureU5BU5D_t4111643188* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTextureU5BU5D_t4111643188** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTextureU5BU5D_t4111643188* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.ObsoleteAttribute[]
struct ObsoleteAttributeU5BU5D_t3400296190  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObsoleteAttribute_t303876359 * m_Items[1];

public:
	inline ObsoleteAttribute_t303876359 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObsoleteAttribute_t303876359 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObsoleteAttribute_t303876359 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ObsoleteAttribute_t303876359 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObsoleteAttribute_t303876359 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObsoleteAttribute_t303876359 * value)
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


// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m642904211_gshared (ParameterOverride_1_t381536667 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1613981648_gshared (ParameterOverride_1_t1070587220 * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ParameterOverride_1_op_Implicit_m3961651762_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t2372640272 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1__ctor_m536420135_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::get_settings()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m416517916_gshared (PostProcessEffectRenderer_1_t1384686169 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m1731371824_gshared (ParameterOverride_1_t1060491175 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m972530866_gshared (ParameterOverride_1_t1060491175 * __this, ParameterOverride_t3061054201 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3320298847_gshared (ParameterOverride_1_t1060491175 * __this, RuntimeObject * p0, RuntimeObject * p1, float p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1566576383_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Func_3_Invoke_m2580229027_gshared (Func_3_t749651721 * __this, RuntimeObject * p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2037905538_gshared (Dictionary_2_t4146031392 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4044645047_gshared (Dictionary_2_t4146031392 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m432692139_gshared (Dictionary_2_t3280968592 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2308266505_gshared (Dictionary_2_t3280968592 * __this, int32_t p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1147134866_gshared (Dictionary_2_t4146031392 * __this, int32_t p0, int32_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m676106703_gshared (Dictionary_2_t3280968592 * __this, int32_t p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m735043315_gshared (ParameterOverride_1_t1025085192 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089496861_gshared (ParameterOverride_1_t136614534 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089495734_gshared (ParameterOverride_1_t1702698475 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2089498935_gshared (ParameterOverride_1_t1299413948 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m200298470_gshared (ParameterOverride_1_t3368882051 * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m2453929980_gshared (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3368882051 * p0, const RuntimeMethod* method);

// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m2644497587 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_propertySheets()
extern "C" IL2CPP_METHOD_ATTR PropertySheetFactory_t1490101248 * PostProcessRenderContext_get_propertySheets_m1819469502 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_resources()
extern "C" IL2CPP_METHOD_ATTR PostProcessResources_t1163236733 * PostProcessRenderContext_get_resources_m2276304934 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PropertySheetFactory::Get(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR PropertySheet_t3821403501 * PropertySheetFactory_Get_m2969175896 (PropertySheetFactory_t1490101248 * __this, Shader_t4151988712 * ___shader0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::IsCreated()
extern "C" IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_m1088809752 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::GetScreenSpaceTemporaryRT(System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1657812484 (PostProcessRenderContext_t597611190 * __this, int32_t ___depthBufferBits0, int32_t ___colorFormat1, int32_t ___readWrite2, int32_t ___widthOverride3, int32_t ___heightOverride4, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_width_m2958072728 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_height_m3501755701 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::Release()
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_Release_m1749927881 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C" IL2CPP_METHOD_ATTR bool RenderTexture_Create_m2861863713 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::DoLazyInitialization(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_DoLazyInitialization_m3605561447 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PropertySheet::ClearKeywords()
extern "C" IL2CPP_METHOD_ATTR void PropertySheet_ClearKeywords_m3154883023 (PropertySheet_t3821403501 * __this, const RuntimeMethod* method);
// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::get_properties()
extern "C" IL2CPP_METHOD_ATTR MaterialPropertyBlock_t3213117958 * PropertySheet_get_properties_m3229239987 (PropertySheet_t3821403501 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_m2604168798 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_op_Subtraction_m181229690 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Color_op_Implicit_m986621988 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_camera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * PostProcessRenderContext_get_camera_m696707977 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_actualRenderingPath_m423069678 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderSettings::get_fog()
extern "C" IL2CPP_METHOD_ATTR bool RenderSettings_get_fog_m382149821 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PropertySheet::EnableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertySheet_EnableKeyword_m2766312292 (PropertySheet_t3821403501 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogDensity()
extern "C" IL2CPP_METHOD_ATTR float RenderSettings_get_fogDensity_m616878862 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogStartDistance()
extern "C" IL2CPP_METHOD_ATTR float RenderSettings_get_fogStartDistance_m3205984467 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogEndDistance()
extern "C" IL2CPP_METHOD_ATTR float RenderSettings_get_fogEndDistance_m3431247078 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::GetScreenSpaceTemporaryRT(UnityEngine.Rendering.CommandBuffer,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,UnityEngine.FilterMode,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1995889976 (PostProcessRenderContext_t597611190 * __this, CommandBuffer_t2206337031 * ___cmd0, int32_t ___nameID1, int32_t ___depthBufferBits2, int32_t ___colorFormat3, int32_t ___readWrite4, int32_t ___filter5, int32_t ___widthOverride6, int32_t ___heightOverride7, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m1310414951 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_m2329992359 (RuntimeObject * __this /* static, unused */, CommandBuffer_t2206337031 * ___cmd0, RenderTargetIdentifier_t2079184500  ___source1, RenderTargetIdentifier_t2079184500  ___destination2, PropertySheet_t3821403501 * ___propertySheet3, int32_t ___pass4, bool ___clear5, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m2627662573 (CommandBuffer_t2206337031 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m3327331520 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::IsDebugOverlayEnabled(UnityEngine.Rendering.PostProcessing.DebugOverlay)
extern "C" IL2CPP_METHOD_ATTR bool PostProcessRenderContext_IsDebugOverlayEnabled_m123439851 (PostProcessRenderContext_t597611190 * __this, int32_t ___overlay0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::PushDebugOverlay(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PostProcessRenderContext_PushDebugOverlay_m2202989067 (PostProcessRenderContext_t597611190 * __this, CommandBuffer_t2206337031 * ___cmd0, RenderTargetIdentifier_t2079184500  ___source1, PropertySheet_t3821403501 * ___sheet2, int32_t ___pass3, const RuntimeMethod* method);
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_command()
extern "C" IL2CPP_METHOD_ATTR CommandBuffer_t2206337031 * PostProcessRenderContext_get_command_m1157578430 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_BeginSample_m204508461 (CommandBuffer_t2206337031 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext,UnityEngine.Rendering.CommandBuffer,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_Render_m342611428 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, CommandBuffer_t2206337031 * ___cmd1, int32_t ___occlusionSource2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_m67524349 (CommandBuffer_t2206337031 * __this, int32_t p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_EndSample_m536251891 (CommandBuffer_t2206337031 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_m1976593394 (RuntimeObject * __this /* static, unused */, CommandBuffer_t2206337031 * ___cmd0, RenderTargetIdentifier_t2079184500  ___source1, RenderTargetIdentifierU5BU5D_t2742279485* ___destinations2, RenderTargetIdentifier_t2079184500  ___depth3, PropertySheet_t3821403501 * ___propertySheet4, int32_t ___pass5, bool ___clear6, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void RuntimeUtilities_Destroy_m3870140013 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset>::.ctor()
inline void ParameterOverride_1__ctor_m642904211 (ParameterOverride_1_t381536667 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t381536667 *, const RuntimeMethod*))ParameterOverride_1__ctor_m642904211_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution>::.ctor()
inline void ParameterOverride_1__ctor_m1613981648 (ParameterOverride_1_t1070587220 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1070587220 *, const RuntimeMethod*))ParameterOverride_1__ctor_m1613981648_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPresetParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionPresetParameter__ctor_m3463063192 (ScreenSpaceReflectionPresetParameter_t2494457668 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.IntParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntParameter__ctor_m2131159290 (IntParameter_t773781776 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolutionParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionResolutionParameter__ctor_m356292624 (ScreenSpaceReflectionResolutionParameter_t1804578420 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.FloatParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FloatParameter__ctor_m4169378919 (FloatParameter_t1840207740 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectSettings__ctor_m2519160958 (PostProcessEffectSettings_t1672565614 * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
inline bool ParameterOverride_1_op_Implicit_m3961651762 (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t2372640272 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, ParameterOverride_1_t2372640272 *, const RuntimeMethod*))ParameterOverride_1_op_Implicit_m3961651762_gshared)(__this /* static, unused */, p0, method);
}
// System.Boolean UnityEngine.SystemInfo::get_supportsMotionVectors()
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsMotionVectors_m46965105 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m257823564 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::get_copyTextureSupport()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m3633100286 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m755080316 (Shader_t4151988712 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QualityPreset__ctor_m1020650113 (QualityPreset_t734522687 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections>::.ctor()
inline void PostProcessEffectRenderer_1__ctor_m3035501077 (PostProcessEffectRenderer_1_t1421876342 * __this, const RuntimeMethod* method)
{
	((  void (*) (PostProcessEffectRenderer_1_t1421876342 *, const RuntimeMethod*))PostProcessEffectRenderer_1__ctor_m536420135_gshared)(__this, method);
}
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture__ctor_m2187158709 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_m793379106 (RenderTexture_t2108887433 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_m4005201898 (RenderTexture_t2108887433 * __this, bool p0, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections>::get_settings()
inline ScreenSpaceReflections_t3117296337 * PostProcessEffectRenderer_1_get_settings_m16580396 (PostProcessEffectRenderer_1_t1421876342 * __this, const RuntimeMethod* method)
{
	return ((  ScreenSpaceReflections_t3117296337 * (*) (PostProcessEffectRenderer_1_t1421876342 *, const RuntimeMethod*))PostProcessEffectRenderer_1_get_settings_m416517916_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::ClosestPowerOfTwo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_ClosestPowerOfTwo_m1106515315 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Log_m2177375338 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_sourceFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_sourceFormat_m478427658 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::CheckRT(UnityEngine.RenderTexture&,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.FilterMode,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionsRenderer_CheckRT_m170166065 (ScreenSpaceReflectionsRenderer_t661283308 * __this, RenderTexture_t2108887433 ** ___rt0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___filterMode4, bool ___useMipMap5, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m3027584768 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Matrix4x4_SetRow_m2327530647 (Matrix4x4_t1817901843 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Camera_get_projectionMatrix_m667780853 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  GL_GetGPUProjectionMatrix_m628855021 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, bool p1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_op_Multiply_m1876492807 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Camera_get_worldToCameraMatrix_m22661425 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_m3427850489 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_get_inverse_m1870592360 (Matrix4x4_t1817901843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m2252457381 (CommandBuffer_t2206337031 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_source()
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  PostProcessRenderContext_get_source_m2965911429 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_isSceneView()
extern "C" IL2CPP_METHOD_ATTR bool PostProcessRenderContext_get_isSceneView_m3210462044 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_m1965208853 (RuntimeObject * __this /* static, unused */, CommandBuffer_t2206337031 * ___cmd0, RenderTargetIdentifier_t2079184500  ___source1, RenderTargetIdentifier_t2079184500  ___destination2, bool ___clear3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_CopyTexture_m3572336067 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, int32_t p1, int32_t p2, RenderTargetIdentifier_t2079184500  p3, int32_t p4, int32_t p5, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ComputeShader_FindKernel_m3460470216 (ComputeShader_t317220254 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m2966131472 (RenderTargetIdentifier_t2079184500 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m3263294880 (CommandBuffer_t2206337031 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, bool p8, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.String,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeTextureParam_m3740663926 (CommandBuffer_t2206337031 * __this, ComputeShader_t317220254 * p0, int32_t p1, String_t* p2, RenderTargetIdentifier_t2079184500  p3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeVectorParam(UnityEngine.ComputeShader,System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeVectorParam_m2729447044 (CommandBuffer_t2206337031 * __this, ComputeShader_t317220254 * p0, String_t* p1, Vector4_t3319028937  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_DispatchCompute_m1540502915 (CommandBuffer_t2206337031 * __this, ComputeShader_t317220254 * p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_destination()
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  PostProcessRenderContext_get_destination_m1404869586 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m1548433259 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m3000526466 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Keyframe_t4206410242  AnimationCurve_get_Item_m4209227769 (AnimationCurve_t3046754366 * __this, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_time_m803196188 (Keyframe_t4206410242 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_time_m4083895404 (Keyframe_t4206410242 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" IL2CPP_METHOD_ATTR KeyframeU5BU5D_t1068524471* AnimationCurve_get_keys_m1672862131 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m3970853534 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m431470589 (AnimationCurve_t3046754366 * __this, Keyframe_t4206410242  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Spline_Evaluate_m4042023820 (Spline_t3835237600 * __this, float ___t0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_renderedFrameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_renderedFrameCount_m3445787045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::.ctor()
inline void ParameterOverride_1__ctor_m3872296206 (ParameterOverride_1_t1815622611 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1815622611 *, const RuntimeMethod*))ParameterOverride_1__ctor_m1731371824_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.Spline::Cache(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Spline_Cache_m1110319752 (Spline_t3835237600 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
inline void ParameterOverride_1_SetValue_m3595080103 (ParameterOverride_1_t1815622611 * __this, ParameterOverride_t3061054201 * p0, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1815622611 *, ParameterOverride_t3061054201 *, const RuntimeMethod*))ParameterOverride_1_SetValue_m972530866_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::Interp(T,T,System.Single)
inline void ParameterOverride_1_Interp_m3314760251 (ParameterOverride_1_t1815622611 * __this, Spline_t3835237600 * p0, Spline_t3835237600 * p1, float p2, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1815622611 *, Spline_t3835237600 *, Spline_t3835237600 *, float, const RuntimeMethod*))ParameterOverride_1_Interp_m3320298847_gshared)(__this, p0, p1, p2, method);
}
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_isSinglePassStereoEnabled()
extern "C" IL2CPP_METHOD_ATTR bool RuntimeUtilities_get_isSinglePassStereoEnabled_m4185657310 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m3017316857 (MaterialPropertyBlock_t3213117958 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m2948653747 (CommandBuffer_t2206337031 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.String,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_m4003901513 (CommandBuffer_t2206337031 * __this, String_t* p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1628857705 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method);
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
extern "C" IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m123143857 (TargetPool_t1535233241 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m1394169317 (TargetPool_t1535233241 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m361000296 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m1566576383 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1566576383_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m697420525 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_m259160359 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2360462293 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_sampleIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_get_sampleIndex_m2985447574 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.HaltonSeq::Get(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float HaltonSeq_Get_m176842504 (RuntimeObject * __this /* static, unused */, int32_t ___index0, int32_t ___radix1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_sampleIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_sampleIndex_m2208767343 (TemporalAntialiasing_t1482226156 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateRandomOffset()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  TemporalAntialiasing_GenerateRandomOffset_m3867100342 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_jitter(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_jitter_m2951904401 (TemporalAntialiasing_t1482226156 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_jitter()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  TemporalAntialiasing_get_jitter_m2288191876 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0,!1)
inline Matrix4x4_t1817901843  Func_3_Invoke_m3317342226 (Func_3_t2888966892 * __this, Camera_t4157153871 * p0, Vector2_t2156229523  p1, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t1817901843  (*) (Func_3_t2888966892 *, Camera_t4157153871 *, Vector2_t2156229523 , const RuntimeMethod*))Func_3_Invoke_m2580229027_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C" IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m2831464531 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetJitteredOrthographicProjectionMatrix(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  RuntimeUtilities_GetJitteredOrthographicProjectionMatrix_m2141652827 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector2_t2156229523  ___offset1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetJitteredPerspectiveProjectionMatrix(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  RuntimeUtilities_GetJitteredPerspectiveProjectionMatrix_m595328452 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector2_t2156229523  ___offset1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m1110053668 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m722276884 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_nonJitteredProjectionMatrix_m3492270478 (Camera_t4157153871 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetJitteredProjectionMatrix(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  TemporalAntialiasing_GetJitteredProjectionMatrix_m2147217554 (TemporalAntialiasing_t1482226156 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3293177686 (Camera_t4157153871 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_useJitteredProjectionMatrixForTransparentRendering_m1059913304 (Camera_t4157153871 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye)
extern "C" IL2CPP_METHOD_ATTR void Camera_CopyStereoDeviceProjectionMatrixToNonJittered_m3543542262 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::GetStereoNonJitteredProjectionMatrix(UnityEngine.Camera/StereoscopicEye)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Camera_GetStereoNonJitteredProjectionMatrix_m830397540 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GenerateJitteredProjectionMatrixFromOriginal(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext,UnityEngine.Matrix4x4,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  RuntimeUtilities_GenerateJitteredProjectionMatrixFromOriginal_m3527468181 (RuntimeObject * __this /* static, unused */, PostProcessRenderContext_t597611190 * ___context0, Matrix4x4_t1817901843  ___origProj1, Vector2_t2156229523  ___jitter2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Camera_SetStereoProjectionMatrix_m3606386899 (Camera_t4157153871 * __this, int32_t p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_screenWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenWidth_m1639863605 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_screenHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenHeight_m1800830117 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_stereoActive()
extern "C" IL2CPP_METHOD_ATTR bool PostProcessRenderContext_get_stereoActive_m3332228708 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_xrActiveEye()
extern "C" IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_xrActiveEye_m71849947 (PostProcessRenderContext_t597611190 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateHistoryName(UnityEngine.RenderTexture,System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_GenerateHistoryName_m269087843 (TemporalAntialiasing_t1482226156 * __this, RenderTexture_t2108887433 * ___rt0, int32_t ___id1, PostProcessRenderContext_t597611190 * ___context2, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::CheckHistory(System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * TemporalAntialiasing_CheckHistory_m418383224 (TemporalAntialiasing_t1482226156 * __this, int32_t ___id0, PostProcessRenderContext_t597611190 * ___context1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m237151757 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m3255723079 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ResetHistory()
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_ResetHistory_m1085668116 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::.ctor()
inline void Dictionary_2__ctor_m2037905538 (Dictionary_2_t4146031392 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4146031392 *, const RuntimeMethod*))Dictionary_2__ctor_m2037905538_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::Add(!0,!1)
inline void Dictionary_2_Add_m4044645047 (Dictionary_2_t4146031392 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4146031392 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m4044645047_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m432692139 (Dictionary_2_t3280968592 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3280968592 *, const RuntimeMethod*))Dictionary_2__ctor_m432692139_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m4192343468 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m4277730612 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m1854244735 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m1663449629 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Add(!0,!1)
inline void Dictionary_2_Add_m2308266505 (Dictionary_2_t3280968592 * __this, int32_t p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3280968592 *, int32_t, bool, const RuntimeMethod*))Dictionary_2_Add_m2308266505_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_m2150300861 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1147134866 (Dictionary_2_t4146031392 * __this, int32_t p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4146031392 *, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m1147134866_gshared)(__this, p0, p1, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m676106703 (Dictionary_2_t3280968592 * __this, int32_t p0, bool* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3280968592 *, int32_t, bool*, const RuntimeMethod*))Dictionary_2_TryGetValue_m676106703_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::.ctor()
inline void List_1__ctor_m1154264654 (List_1_t3580962175 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3580962175 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextureLerper__ctor_m2979572854 (TextureLerper_t1948079985 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Count()
inline int32_t List_1_get_Count_m3123268278 (List_1_t3580962175 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3580962175 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.RenderTexture>::GetEnumerator()
inline Enumerator_t1175238756  List_1_GetEnumerator_m257972393 (List_1_t3580962175 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1175238756  (*) (List_1_t3580962175 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::get_Current()
inline RenderTexture_t2108887433 * Enumerator_get_Current_m1569019338 (Enumerator_t1175238756 * __this, const RuntimeMethod* method)
{
	return ((  RenderTexture_t2108887433 * (*) (Enumerator_t1175238756 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::MoveNext()
inline bool Enumerator_MoveNext_m2394901845 (Enumerator_t1175238756 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1175238756 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::Dispose()
inline void Enumerator_Dispose_m292658209 (Enumerator_t1175238756 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1175238756 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Clear()
inline void List_1_Clear_m1346869089 (List_1_t3580962175 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3580962175 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Add(!0)
inline void List_1_Add_m1290642862 (List_1_t3580962175 * __this, RenderTexture_t2108887433 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3580962175 *, RenderTexture_t2108887433 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Item(System.Int32)
inline RenderTexture_t2108887433 * List_1_get_Item_m2851784777 (List_1_t3580962175 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RenderTexture_t2108887433 * (*) (List_1_t3580962175 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_volumeDepth_m4071882760 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::get_enableRandomWrite()
extern "C" IL2CPP_METHOD_ATTR bool RenderTexture_get_enableRandomWrite_m2579136497 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m4149907611 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_m3586428292 (RenderTexture_t2108887433 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m2404509411 (RenderTexture_t2108887433 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4210299999 (List_1_t3580962175 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3580962175 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * TextureLerper_Get_m1923166400 (TextureLerper_t1948079985 * __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_isAndroidOpenGL()
extern "C" IL2CPP_METHOD_ATTR bool RuntimeUtilities_get_isAndroidOpenGL_m4225342255 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * ___texture0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>::.ctor()
inline void ParameterOverride_1__ctor_m3290804085 (ParameterOverride_1_t1642347714 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1642347714 *, const RuntimeMethod*))ParameterOverride_1__ctor_m1731371824_gshared)(__this, method);
}
// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::get_instance()
extern "C" IL2CPP_METHOD_ATTR TextureLerper_t1948079985 * TextureLerper_get_instance_m4196735956 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * TextureLerper_Lerp_m107447087 (TextureLerper_t1948079985 * __this, Texture_t3661962703 * ___from0, Texture_t3661962703 * ___to1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Texture3D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_blackTexture3D()
extern "C" IL2CPP_METHOD_ATTR Texture3D_t1884131049 * RuntimeUtilities_get_blackTexture3D_m2687258546 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_blackTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * RuntimeUtilities_get_blackTexture_m530142159 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture3D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_whiteTexture3D()
extern "C" IL2CPP_METHOD_ATTR Texture3D_t1884131049 * RuntimeUtilities_get_whiteTexture3D_m2474358765 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_whiteTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * RuntimeUtilities_get_whiteTexture_m1062041121 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture3D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_transparentTexture3D()
extern "C" IL2CPP_METHOD_ATTR Texture3D_t1884131049 * RuntimeUtilities_get_transparentTexture3D_m1537991332 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_transparentTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * RuntimeUtilities_get_transparentTexture_m1937899612 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetLutStrip(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * RuntimeUtilities_GetLutStrip_m2974621249 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>::Interp(T,T,System.Single)
inline void ParameterOverride_1_Interp_m1616255617 (ParameterOverride_1_t1642347714 * __this, Texture_t3661962703 * p0, Texture_t3661962703 * p1, float p2, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1642347714 *, Texture_t3661962703 *, Texture_t3661962703 *, float, const RuntimeMethod*))ParameterOverride_1_Interp_m3320298847_gshared)(__this, p0, p1, p2, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor()
inline void ParameterOverride_1__ctor_m735043315 (ParameterOverride_1_t1025085192 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1025085192 *, const RuntimeMethod*))ParameterOverride_1__ctor_m735043315_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
inline void ParameterOverride_1__ctor_m2089496861 (ParameterOverride_1_t136614534 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t136614534 *, const RuntimeMethod*))ParameterOverride_1__ctor_m2089496861_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
inline void ParameterOverride_1__ctor_m2089495734 (ParameterOverride_1_t1702698475 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1702698475 *, const RuntimeMethod*))ParameterOverride_1__ctor_m2089495734_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
inline void ParameterOverride_1__ctor_m2089498935 (ParameterOverride_1_t1299413948 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t1299413948 *, const RuntimeMethod*))ParameterOverride_1__ctor_m2089498935_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector4_op_Implicit_m3335148350 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector4_op_Implicit_m1158564884 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Monitor__ctor_m2606995334 (Monitor_t1754509597 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Monitor_OnDisable_m2833492000 (Monitor_t1754509597 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C" IL2CPP_METHOD_ATTR void ComputeBuffer_Release_m899244412 (ComputeBuffer_t1033194329 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::CheckOutput(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Monitor_CheckOutput_m878144460 (Monitor_t1754509597 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_m2741670761 (ComputeBuffer_t1033194329 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeBuffer::get_count()
extern "C" IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m2259804836 (ComputeBuffer_t1033194329 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_isLinearColorSpace()
extern "C" IL2CPP_METHOD_ATTR bool RuntimeUtilities_get_isLinearColorSpace_m3438273647 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeBufferParam(UnityEngine.ComputeShader,System.Int32,System.String,UnityEngine.ComputeBuffer)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeBufferParam_m1245524233 (CommandBuffer_t2206337031 * __this, ComputeShader_t317220254 * p0, int32_t p1, String_t* p2, ComputeBuffer_t1033194329 * p3, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetBuffer_m476945857 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, ComputeBuffer_t1033194329 * p1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.Monitor::get_output()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * Monitor_get_output_m2227513525 (Monitor_t1754509597 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.VignetteModeParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VignetteModeParameter__ctor_m3769796975 (VignetteModeParameter_t1229959487 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ColorParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ColorParameter__ctor_m4202280825 (ColorParameter_t2998827320 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector2Parameter__ctor_m1650761954 (Vector2Parameter_t1794608574 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.BoolParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoolParameter__ctor_m3463290174 (BoolParameter_t2299103272 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextureParameter__ctor_m306418143 (TextureParameter_t4267400415 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor()
inline void ParameterOverride_1__ctor_m200298470 (ParameterOverride_1_t3368882051 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t3368882051 *, const RuntimeMethod*))ParameterOverride_1__ctor_m200298470_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>::.ctor()
inline void PostProcessEffectRenderer_1__ctor_m2131729682 (PostProcessEffectRenderer_1_t388638640 * __this, const RuntimeMethod* method)
{
	((  void (*) (PostProcessEffectRenderer_1_t388638640 *, const RuntimeMethod*))PostProcessEffectRenderer_1__ctor_m536420135_gshared)(__this, method);
}
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>::get_settings()
inline Vignette_t2084058635 * PostProcessEffectRenderer_1_get_settings_m1974241928 (PostProcessEffectRenderer_1_t388638640 * __this, const RuntimeMethod* method)
{
	return ((  Vignette_t2084058635 * (*) (PostProcessEffectRenderer_1_t388638640 *, const RuntimeMethod*))PostProcessEffectRenderer_1_get_settings_m416517916_gshared)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m763383436 (MaterialPropertyBlock_t3213117958 * __this, int32_t p0, Color_t2555686324  p1, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
inline int32_t ParameterOverride_1_op_Implicit_m2453929980 (RuntimeObject * __this /* static, unused */, ParameterOverride_1_t3368882051 * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject * /* static, unused */, ParameterOverride_1_t3368882051 *, const RuntimeMethod*))ParameterOverride_1_op_Implicit_m2453929980_gshared)(__this /* static, unused */, p0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::.ctor(UnityEngine.Rendering.PostProcessing.AmbientOcclusion)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO__ctor_m3478719610 (ScalableAO_t1980962979 * __this, AmbientOcclusion_t1140100160 * ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO__ctor_m3478719610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(RenderTargetIdentifierU5BU5D_t2742279485_il2cpp_TypeInfo_var, (uint32_t)2);
		RenderTargetIdentifierU5BU5D_t2742279485* L_1 = L_0;
		NullCheck(L_1);
		RenderTargetIdentifier_t2079184500  L_2 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, ((int32_t)10), /*hidden argument*/NULL);
		*(RenderTargetIdentifier_t2079184500 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_2;
		RenderTargetIdentifierU5BU5D_t2742279485* L_3 = L_1;
		NullCheck(L_3);
		RenderTargetIdentifier_t2079184500  L_4 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		*(RenderTargetIdentifier_t2079184500 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_4;
		__this->set_m_MRT_3(L_3);
		Int32U5BU5D_t385246372* L_5 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t385246372* L_6 = L_5;
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D0ED907628EE272F93737B500A23D77C9B1C88368_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_SampleCount_4(L_6);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		AmbientOcclusion_t1140100160 * L_8 = ___settings0;
		__this->set_m_Settings_2(L_8);
		return;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.ScalableAO::GetCameraFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t ScalableAO_GetCameraFlags_m3354610360 (ScalableAO_t1980962979 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::DoLazyInitialization(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_DoLazyInitialization_m3605561447 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_DoLazyInitialization_m3605561447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheetFactory_t1490101248 * L_1 = PostProcessRenderContext_get_propertySheets_m1819469502(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		PostProcessResources_t1163236733 * L_3 = PostProcessRenderContext_get_resources_m2276304934(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shaders_t2807171077 * L_4 = L_3->get_shaders_7();
		NullCheck(L_4);
		Shader_t4151988712 * L_5 = L_4->get_scalableAO_19();
		NullCheck(L_1);
		PropertySheet_t3821403501 * L_6 = PropertySheetFactory_Get_m2969175896(L_1, L_5, /*hidden argument*/NULL);
		__this->set_m_PropertySheet_1(L_6);
		V_0 = (bool)0;
		RenderTexture_t2108887433 * L_7 = __this->get_m_Result_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		RenderTexture_t2108887433 * L_9 = __this->get_m_Result_0();
		NullCheck(L_9);
		bool L_10 = RenderTexture_IsCreated_m1088809752(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0075;
		}
	}

IL_0044:
	{
		PostProcessRenderContext_t597611190 * L_11 = ___context0;
		NullCheck(L_11);
		RenderTexture_t2108887433 * L_12 = PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1657812484(L_11, 0, 0, 1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Result_0(L_12);
		RenderTexture_t2108887433 * L_13 = __this->get_m_Result_0();
		NullCheck(L_13);
		Object_set_hideFlags_m1648752846(L_13, ((int32_t)52), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_14 = __this->get_m_Result_0();
		NullCheck(L_14);
		Texture_set_filterMode_m3078068058(L_14, 1, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_00d0;
	}

IL_0075:
	{
		RenderTexture_t2108887433 * L_15 = __this->get_m_Result_0();
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		PostProcessRenderContext_t597611190 * L_17 = ___context0;
		NullCheck(L_17);
		int32_t L_18 = PostProcessRenderContext_get_width_m2958072728(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_00a1;
		}
	}
	{
		RenderTexture_t2108887433 * L_19 = __this->get_m_Result_0();
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		PostProcessRenderContext_t597611190 * L_21 = ___context0;
		NullCheck(L_21);
		int32_t L_22 = PostProcessRenderContext_get_height_m3501755701(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_00d0;
		}
	}

IL_00a1:
	{
		RenderTexture_t2108887433 * L_23 = __this->get_m_Result_0();
		NullCheck(L_23);
		RenderTexture_Release_m1749927881(L_23, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_24 = __this->get_m_Result_0();
		PostProcessRenderContext_t597611190 * L_25 = ___context0;
		NullCheck(L_25);
		int32_t L_26 = PostProcessRenderContext_get_width_m2958072728(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, L_24, L_26);
		RenderTexture_t2108887433 * L_27 = __this->get_m_Result_0();
		PostProcessRenderContext_t597611190 * L_28 = ___context0;
		NullCheck(L_28);
		int32_t L_29 = PostProcessRenderContext_get_height_m3501755701(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, L_27, L_29);
		V_0 = (bool)1;
	}

IL_00d0:
	{
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_00e2;
		}
	}
	{
		RenderTexture_t2108887433 * L_31 = __this->get_m_Result_0();
		NullCheck(L_31);
		RenderTexture_Create_m2861863713(L_31, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext,UnityEngine.Rendering.CommandBuffer,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_Render_m342611428 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, CommandBuffer_t2206337031 * ___cmd1, int32_t ___occlusionSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_Render_m342611428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	PropertySheet_t3821403501 * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	float G_B3_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		ScalableAO_DoLazyInitialization_m3605561447(__this, L_0, /*hidden argument*/NULL);
		AmbientOcclusion_t1140100160 * L_1 = __this->get_m_Settings_2();
		NullCheck(L_1);
		FloatParameter_t1840207740 * L_2 = L_1->get_radius_18();
		AmbientOcclusion_t1140100160 * L_3 = __this->get_m_Settings_2();
		NullCheck(L_3);
		FloatParameter_t1840207740 * L_4 = L_3->get_radius_18();
		NullCheck(L_4);
		float L_5 = ((ParameterOverride_1_t3672619081 *)L_4)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_5, (0.0001f), /*hidden argument*/NULL);
		NullCheck(L_2);
		((ParameterOverride_1_t3672619081 *)L_2)->set_value_1(L_6);
		AmbientOcclusion_t1140100160 * L_7 = __this->get_m_Settings_2();
		NullCheck(L_7);
		AmbientOcclusionQualityParameter_t3820917191 * L_8 = L_7->get_quality_19();
		NullCheck(L_8);
		int32_t L_9 = ((ParameterOverride_1_t1230029910 *)L_8)->get_value_1();
		V_0 = (bool)((((int32_t)L_9) < ((int32_t)3))? 1 : 0);
		AmbientOcclusion_t1140100160 * L_10 = __this->get_m_Settings_2();
		NullCheck(L_10);
		FloatParameter_t1840207740 * L_11 = L_10->get_intensity_10();
		NullCheck(L_11);
		float L_12 = ((ParameterOverride_1_t3672619081 *)L_11)->get_value_1();
		V_1 = L_12;
		AmbientOcclusion_t1140100160 * L_13 = __this->get_m_Settings_2();
		NullCheck(L_13);
		FloatParameter_t1840207740 * L_14 = L_13->get_radius_18();
		NullCheck(L_14);
		float L_15 = ((ParameterOverride_1_t3672619081 *)L_14)->get_value_1();
		V_2 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		G_B3_0 = (0.5f);
		goto IL_007c;
	}

IL_0077:
	{
		G_B3_0 = (1.0f);
	}

IL_007c:
	{
		V_3 = G_B3_0;
		Int32U5BU5D_t385246372* L_17 = __this->get_m_SampleCount_4();
		AmbientOcclusion_t1140100160 * L_18 = __this->get_m_Settings_2();
		NullCheck(L_18);
		AmbientOcclusionQualityParameter_t3820917191 * L_19 = L_18->get_quality_19();
		NullCheck(L_19);
		int32_t L_20 = ((ParameterOverride_1_t1230029910 *)L_19)->get_value_1();
		NullCheck(L_17);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = (((float)((float)L_22)));
		PropertySheet_t3821403501 * L_23 = __this->get_m_PropertySheet_1();
		V_5 = L_23;
		PropertySheet_t3821403501 * L_24 = V_5;
		NullCheck(L_24);
		PropertySheet_ClearKeywords_m3154883023(L_24, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_25 = V_5;
		NullCheck(L_25);
		MaterialPropertyBlock_t3213117958 * L_26 = PropertySheet_get_properties_m3229239987(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_27 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_AOParams_7();
		float L_28 = V_1;
		float L_29 = V_2;
		float L_30 = V_3;
		float L_31 = V_4;
		Vector4_t3319028937  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector4__ctor_m2498754347((&L_32), L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		MaterialPropertyBlock_SetVector_m2604168798(L_26, L_27, L_32, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_33 = V_5;
		NullCheck(L_33);
		MaterialPropertyBlock_t3213117958 * L_34 = PropertySheet_get_properties_m3229239987(L_33, /*hidden argument*/NULL);
		int32_t L_35 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_AOColor_8();
		Color_t2555686324  L_36 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		AmbientOcclusion_t1140100160 * L_37 = __this->get_m_Settings_2();
		NullCheck(L_37);
		ColorParameter_t2998827320 * L_38 = L_37->get_color_11();
		NullCheck(L_38);
		Color_t2555686324  L_39 = ((ParameterOverride_1_t536071335 *)L_38)->get_value_1();
		Color_t2555686324  L_40 = Color_op_Subtraction_m181229690(NULL /*static, unused*/, L_36, L_39, /*hidden argument*/NULL);
		Vector4_t3319028937  L_41 = Color_op_Implicit_m986621988(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		MaterialPropertyBlock_SetVector_m2604168798(L_34, L_35, L_41, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_42 = ___context0;
		NullCheck(L_42);
		Camera_t4157153871 * L_43 = PostProcessRenderContext_get_camera_m696707977(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = Camera_get_actualRenderingPath_m423069678(L_43, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_0142;
		}
	}
	{
		bool L_45 = RenderSettings_get_fog_m382149821(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0142;
		}
	}
	{
		PropertySheet_t3821403501 * L_46 = V_5;
		NullCheck(L_46);
		PropertySheet_EnableKeyword_m2766312292(L_46, _stringLiteral354657087, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_47 = V_5;
		NullCheck(L_47);
		MaterialPropertyBlock_t3213117958 * L_48 = PropertySheet_get_properties_m3229239987(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_49 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_FogParams_41();
		float L_50 = RenderSettings_get_fogDensity_m616878862(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_51 = RenderSettings_get_fogStartDistance_m3205984467(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_52 = RenderSettings_get_fogEndDistance_m3431247078(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53;
		memset(&L_53, 0, sizeof(L_53));
		Vector3__ctor_m3353183577((&L_53), L_50, L_51, L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_54 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_48);
		MaterialPropertyBlock_SetVector_m2604168798(L_48, L_49, L_54, /*hidden argument*/NULL);
	}

IL_0142:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_014e;
		}
	}
	{
		G_B9_0 = 2;
		goto IL_014f;
	}

IL_014e:
	{
		G_B9_0 = 1;
	}

IL_014f:
	{
		V_6 = G_B9_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_56 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_OcclusionTexture1_9();
		V_7 = L_56;
		PostProcessRenderContext_t597611190 * L_57 = ___context0;
		NullCheck(L_57);
		int32_t L_58 = PostProcessRenderContext_get_width_m2958072728(L_57, /*hidden argument*/NULL);
		int32_t L_59 = V_6;
		V_8 = ((int32_t)((int32_t)L_58/(int32_t)L_59));
		PostProcessRenderContext_t597611190 * L_60 = ___context0;
		NullCheck(L_60);
		int32_t L_61 = PostProcessRenderContext_get_height_m3501755701(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_6;
		V_9 = ((int32_t)((int32_t)L_61/(int32_t)L_62));
		PostProcessRenderContext_t597611190 * L_63 = ___context0;
		CommandBuffer_t2206337031 * L_64 = ___cmd1;
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		int32_t L_67 = V_9;
		NullCheck(L_63);
		PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1995889976(L_63, L_64, L_65, 0, 0, 1, 1, L_66, L_67, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_68 = ___cmd1;
		RenderTargetIdentifier_t2079184500  L_69 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		int32_t L_70 = V_7;
		RenderTargetIdentifier_t2079184500  L_71 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_72 = V_5;
		int32_t L_73 = ___occlusionSource2;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_68, L_69, L_71, L_72, L_73, (bool)0, /*hidden argument*/NULL);
		int32_t L_74 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_OcclusionTexture2_10();
		V_10 = L_74;
		PostProcessRenderContext_t597611190 * L_75 = ___context0;
		CommandBuffer_t2206337031 * L_76 = ___cmd1;
		int32_t L_77 = V_10;
		NullCheck(L_75);
		PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1995889976(L_75, L_76, L_77, 0, 0, 1, 1, 0, 0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_78 = ___cmd1;
		int32_t L_79 = V_7;
		RenderTargetIdentifier_t2079184500  L_80 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		int32_t L_81 = V_10;
		RenderTargetIdentifier_t2079184500  L_82 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_83 = V_5;
		int32_t L_84 = ___occlusionSource2;
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_78, L_80, L_82, L_83, ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_84)), (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_85 = ___cmd1;
		int32_t L_86 = V_7;
		NullCheck(L_85);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_85, L_86, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_87 = ___cmd1;
		int32_t L_88 = V_10;
		RenderTargetIdentifier_t2079184500  L_89 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_90 = __this->get_m_Result_0();
		RenderTargetIdentifier_t2079184500  L_91 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_92 = V_5;
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_87, L_89, L_91, L_92, 4, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_93 = ___cmd1;
		int32_t L_94 = V_10;
		NullCheck(L_93);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_93, L_94, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_95 = ___context0;
		NullCheck(L_95);
		bool L_96 = PostProcessRenderContext_IsDebugOverlayEnabled_m123439851(L_95, 7, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_0213;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_97 = ___context0;
		CommandBuffer_t2206337031 * L_98 = ___cmd1;
		RenderTexture_t2108887433 * L_99 = __this->get_m_Result_0();
		RenderTargetIdentifier_t2079184500  L_100 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_99, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_101 = V_5;
		NullCheck(L_97);
		PostProcessRenderContext_PushDebugOverlay_m2202989067(L_97, L_98, L_100, L_101, 7, /*hidden argument*/NULL);
	}

IL_0213:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::RenderAfterOpaque(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_RenderAfterOpaque_m12108879 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_RenderAfterOpaque_m12108879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandBuffer_t2206337031 * V_0 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t2206337031 * L_1 = PostProcessRenderContext_get_command_m1157578430(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CommandBuffer_t2206337031 * L_2 = V_0;
		NullCheck(L_2);
		CommandBuffer_BeginSample_m204508461(L_2, _stringLiteral780830313, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_3 = ___context0;
		CommandBuffer_t2206337031 * L_4 = V_0;
		ScalableAO_Render_m342611428(__this, L_3, L_4, 0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SAOcclusionTexture_11();
		RenderTexture_t2108887433 * L_7 = __this->get_m_Result_0();
		RenderTargetIdentifier_t2079184500  L_8 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		CommandBuffer_SetGlobalTexture_m67524349(L_5, L_6, L_8, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_9 = V_0;
		RenderTargetIdentifier_t2079184500  L_10 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		RenderTargetIdentifier_t2079184500  L_11 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_12 = __this->get_m_PropertySheet_1();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_9, L_10, L_11, L_12, 5, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_13 = V_0;
		NullCheck(L_13);
		CommandBuffer_EndSample_m536251891(L_13, _stringLiteral780830313, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::RenderAmbientOnly(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_RenderAmbientOnly_m290882248 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_RenderAmbientOnly_m290882248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandBuffer_t2206337031 * V_0 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t2206337031 * L_1 = PostProcessRenderContext_get_command_m1157578430(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CommandBuffer_t2206337031 * L_2 = V_0;
		NullCheck(L_2);
		CommandBuffer_BeginSample_m204508461(L_2, _stringLiteral3154506880, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_3 = ___context0;
		CommandBuffer_t2206337031 * L_4 = V_0;
		ScalableAO_Render_m342611428(__this, L_3, L_4, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_5 = V_0;
		NullCheck(L_5);
		CommandBuffer_EndSample_m536251891(L_5, _stringLiteral3154506880, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::CompositeAmbientOnly(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_CompositeAmbientOnly_m721371156 (ScalableAO_t1980962979 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_CompositeAmbientOnly_m721371156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandBuffer_t2206337031 * V_0 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t2206337031 * L_1 = PostProcessRenderContext_get_command_m1157578430(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CommandBuffer_t2206337031 * L_2 = V_0;
		NullCheck(L_2);
		CommandBuffer_BeginSample_m204508461(L_2, _stringLiteral4038785707, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SAOcclusionTexture_11();
		RenderTexture_t2108887433 * L_5 = __this->get_m_Result_0();
		RenderTargetIdentifier_t2079184500  L_6 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		CommandBuffer_SetGlobalTexture_m67524349(L_3, L_4, L_6, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_7 = V_0;
		RenderTargetIdentifier_t2079184500  L_8 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		RenderTargetIdentifierU5BU5D_t2742279485* L_9 = __this->get_m_MRT_3();
		RenderTargetIdentifier_t2079184500  L_10 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_11 = __this->get_m_PropertySheet_1();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1976593394(NULL /*static, unused*/, L_7, L_8, L_9, L_10, L_11, 6, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_12 = V_0;
		NullCheck(L_12);
		CommandBuffer_EndSample_m536251891(L_12, _stringLiteral4038785707, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScalableAO::Release()
extern "C" IL2CPP_METHOD_ATTR void ScalableAO_Release_m1203498956 (ScalableAO_t1980962979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScalableAO_Release_m1203498956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = __this->get_m_Result_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Result_0((RenderTexture_t2108887433 *)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPresetParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionPresetParameter__ctor_m3463063192 (ScreenSpaceReflectionPresetParameter_t2494457668 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionPresetParameter__ctor_m3463063192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m642904211(__this, /*hidden argument*/ParameterOverride_1__ctor_m642904211_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolutionParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionResolutionParameter__ctor_m356292624 (ScreenSpaceReflectionResolutionParameter_t1804578420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionResolutionParameter__ctor_m356292624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m1613981648(__this, /*hidden argument*/ParameterOverride_1__ctor_m1613981648_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflections__ctor_m268654564 (ScreenSpaceReflections_t3117296337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflections__ctor_m268654564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScreenSpaceReflectionPresetParameter_t2494457668 * V_0 = NULL;
	IntParameter_t773781776 * V_1 = NULL;
	ScreenSpaceReflectionResolutionParameter_t1804578420 * V_2 = NULL;
	FloatParameter_t1840207740 * V_3 = NULL;
	{
		ScreenSpaceReflectionPresetParameter_t2494457668 * L_0 = (ScreenSpaceReflectionPresetParameter_t2494457668 *)il2cpp_codegen_object_new(ScreenSpaceReflectionPresetParameter_t2494457668_il2cpp_TypeInfo_var);
		ScreenSpaceReflectionPresetParameter__ctor_m3463063192(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ScreenSpaceReflectionPresetParameter_t2494457668 * L_1 = V_0;
		NullCheck(L_1);
		((ParameterOverride_1_t381536667 *)L_1)->set_value_1(2);
		ScreenSpaceReflectionPresetParameter_t2494457668 * L_2 = V_0;
		__this->set_preset_9(L_2);
		IntParameter_t773781776 * L_3 = (IntParameter_t773781776 *)il2cpp_codegen_object_new(IntParameter_t773781776_il2cpp_TypeInfo_var);
		IntParameter__ctor_m2131159290(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		IntParameter_t773781776 * L_4 = V_1;
		NullCheck(L_4);
		((ParameterOverride_1_t931330764 *)L_4)->set_value_1(((int32_t)16));
		IntParameter_t773781776 * L_5 = V_1;
		__this->set_maximumIterationCount_10(L_5);
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_6 = (ScreenSpaceReflectionResolutionParameter_t1804578420 *)il2cpp_codegen_object_new(ScreenSpaceReflectionResolutionParameter_t1804578420_il2cpp_TypeInfo_var);
		ScreenSpaceReflectionResolutionParameter__ctor_m356292624(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_7 = V_2;
		NullCheck(L_7);
		((ParameterOverride_1_t1070587220 *)L_7)->set_value_1(0);
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_8 = V_2;
		__this->set_resolution_11(L_8);
		FloatParameter_t1840207740 * L_9 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_9, /*hidden argument*/NULL);
		V_3 = L_9;
		FloatParameter_t1840207740 * L_10 = V_3;
		NullCheck(L_10);
		((ParameterOverride_1_t3672619081 *)L_10)->set_value_1((8.0f));
		FloatParameter_t1840207740 * L_11 = V_3;
		__this->set_thickness_12(L_11);
		FloatParameter_t1840207740 * L_12 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		FloatParameter_t1840207740 * L_13 = V_3;
		NullCheck(L_13);
		((ParameterOverride_1_t3672619081 *)L_13)->set_value_1((100.0f));
		FloatParameter_t1840207740 * L_14 = V_3;
		__this->set_maximumMarchDistance_13(L_14);
		FloatParameter_t1840207740 * L_15 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_15, /*hidden argument*/NULL);
		V_3 = L_15;
		FloatParameter_t1840207740 * L_16 = V_3;
		NullCheck(L_16);
		((ParameterOverride_1_t3672619081 *)L_16)->set_value_1((0.5f));
		FloatParameter_t1840207740 * L_17 = V_3;
		__this->set_distanceFade_14(L_17);
		FloatParameter_t1840207740 * L_18 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_18, /*hidden argument*/NULL);
		V_3 = L_18;
		FloatParameter_t1840207740 * L_19 = V_3;
		NullCheck(L_19);
		((ParameterOverride_1_t3672619081 *)L_19)->set_value_1((0.5f));
		FloatParameter_t1840207740 * L_20 = V_3;
		__this->set_vignette_15(L_20);
		PostProcessEffectSettings__ctor_m2519160958(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections::IsEnabledAndSupported(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR bool ScreenSpaceReflections_IsEnabledAndSupported_m3384397126 (ScreenSpaceReflections_t3117296337 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflections_IsEnabledAndSupported_m3384397126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	{
		BoolParameter_t2299103272 * L_0 = ((PostProcessEffectSettings_t1672565614 *)__this)->get_enabled_5();
		bool L_1 = ParameterOverride_1_op_Implicit_m3961651762(NULL /*static, unused*/, L_0, /*hidden argument*/ParameterOverride_1_op_Implicit_m3961651762_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		Camera_t4157153871 * L_3 = PostProcessRenderContext_get_camera_m696707977(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Camera_get_actualRenderingPath_m423069678(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_008b;
		}
	}
	{
		bool L_5 = SystemInfo_get_supportsMotionVectors_m46965105(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		bool L_6 = SystemInfo_get_supportsComputeShaders_m257823564(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_7 = SystemInfo_get_copyTextureSupport_m3633100286(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_8 = ___context0;
		NullCheck(L_8);
		PostProcessResources_t1163236733 * L_9 = PostProcessRenderContext_get_resources_m2276304934(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Shaders_t2807171077 * L_10 = L_9->get_shaders_7();
		NullCheck(L_10);
		Shader_t4151988712 * L_11 = L_10->get_screenSpaceReflections_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_13 = ___context0;
		NullCheck(L_13);
		PostProcessResources_t1163236733 * L_14 = PostProcessRenderContext_get_resources_m2276304934(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Shaders_t2807171077 * L_15 = L_14->get_shaders_7();
		NullCheck(L_15);
		Shader_t4151988712 * L_16 = L_15->get_screenSpaceReflections_21();
		NullCheck(L_16);
		bool L_17 = Shader_get_isSupported_m755080316(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_18 = ___context0;
		NullCheck(L_18);
		PostProcessResources_t1163236733 * L_19 = PostProcessRenderContext_get_resources_m2276304934(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		ComputeShaders_t4172110136 * L_20 = L_19->get_computeShaders_8();
		NullCheck(L_20);
		ComputeShader_t317220254 * L_21 = L_20->get_gaussianDownsample_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_22));
		goto IL_008c;
	}

IL_008b:
	{
		G_B9_0 = 0;
	}

IL_008c:
	{
		return (bool)G_B9_0;
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
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionsRenderer__ctor_m1343343901 (ScreenSpaceReflectionsRenderer_t661283308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionsRenderer__ctor_m1343343901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	QualityPreset_t734522687 * V_0 = NULL;
	{
		QualityPresetU5BU5D_t2343555814* L_0 = (QualityPresetU5BU5D_t2343555814*)SZArrayNew(QualityPresetU5BU5D_t2343555814_il2cpp_TypeInfo_var, (uint32_t)7);
		QualityPresetU5BU5D_t2343555814* L_1 = L_0;
		QualityPreset_t734522687 * L_2 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		QualityPreset_t734522687 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_maximumIterationCount_0(((int32_t)10));
		QualityPreset_t734522687 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_thickness_1((32.0f));
		QualityPreset_t734522687 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_downsampling_2(0);
		QualityPreset_t734522687 * L_6 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (QualityPreset_t734522687 *)L_6);
		QualityPresetU5BU5D_t2343555814* L_7 = L_1;
		QualityPreset_t734522687 * L_8 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		QualityPreset_t734522687 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_maximumIterationCount_0(((int32_t)16));
		QualityPreset_t734522687 * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_thickness_1((32.0f));
		QualityPreset_t734522687 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_downsampling_2(0);
		QualityPreset_t734522687 * L_12 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (QualityPreset_t734522687 *)L_12);
		QualityPresetU5BU5D_t2343555814* L_13 = L_7;
		QualityPreset_t734522687 * L_14 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_14, /*hidden argument*/NULL);
		V_0 = L_14;
		QualityPreset_t734522687 * L_15 = V_0;
		NullCheck(L_15);
		L_15->set_maximumIterationCount_0(((int32_t)32));
		QualityPreset_t734522687 * L_16 = V_0;
		NullCheck(L_16);
		L_16->set_thickness_1((16.0f));
		QualityPreset_t734522687 * L_17 = V_0;
		NullCheck(L_17);
		L_17->set_downsampling_2(0);
		QualityPreset_t734522687 * L_18 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (QualityPreset_t734522687 *)L_18);
		QualityPresetU5BU5D_t2343555814* L_19 = L_13;
		QualityPreset_t734522687 * L_20 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_20, /*hidden argument*/NULL);
		V_0 = L_20;
		QualityPreset_t734522687 * L_21 = V_0;
		NullCheck(L_21);
		L_21->set_maximumIterationCount_0(((int32_t)48));
		QualityPreset_t734522687 * L_22 = V_0;
		NullCheck(L_22);
		L_22->set_thickness_1((8.0f));
		QualityPreset_t734522687 * L_23 = V_0;
		NullCheck(L_23);
		L_23->set_downsampling_2(0);
		QualityPreset_t734522687 * L_24 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (QualityPreset_t734522687 *)L_24);
		QualityPresetU5BU5D_t2343555814* L_25 = L_19;
		QualityPreset_t734522687 * L_26 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_26, /*hidden argument*/NULL);
		V_0 = L_26;
		QualityPreset_t734522687 * L_27 = V_0;
		NullCheck(L_27);
		L_27->set_maximumIterationCount_0(((int32_t)16));
		QualityPreset_t734522687 * L_28 = V_0;
		NullCheck(L_28);
		L_28->set_thickness_1((32.0f));
		QualityPreset_t734522687 * L_29 = V_0;
		NullCheck(L_29);
		L_29->set_downsampling_2(1);
		QualityPreset_t734522687 * L_30 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (QualityPreset_t734522687 *)L_30);
		QualityPresetU5BU5D_t2343555814* L_31 = L_25;
		QualityPreset_t734522687 * L_32 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_32, /*hidden argument*/NULL);
		V_0 = L_32;
		QualityPreset_t734522687 * L_33 = V_0;
		NullCheck(L_33);
		L_33->set_maximumIterationCount_0(((int32_t)48));
		QualityPreset_t734522687 * L_34 = V_0;
		NullCheck(L_34);
		L_34->set_thickness_1((16.0f));
		QualityPreset_t734522687 * L_35 = V_0;
		NullCheck(L_35);
		L_35->set_downsampling_2(1);
		QualityPreset_t734522687 * L_36 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_36);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (QualityPreset_t734522687 *)L_36);
		QualityPresetU5BU5D_t2343555814* L_37 = L_31;
		QualityPreset_t734522687 * L_38 = (QualityPreset_t734522687 *)il2cpp_codegen_object_new(QualityPreset_t734522687_il2cpp_TypeInfo_var);
		QualityPreset__ctor_m1020650113(L_38, /*hidden argument*/NULL);
		V_0 = L_38;
		QualityPreset_t734522687 * L_39 = V_0;
		NullCheck(L_39);
		L_39->set_maximumIterationCount_0(((int32_t)128));
		QualityPreset_t734522687 * L_40 = V_0;
		NullCheck(L_40);
		L_40->set_thickness_1((12.0f));
		QualityPreset_t734522687 * L_41 = V_0;
		NullCheck(L_41);
		L_41->set_downsampling_2(2);
		QualityPreset_t734522687 * L_42 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_42);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (QualityPreset_t734522687 *)L_42);
		__this->set_m_Presets_5(L_37);
		PostProcessEffectRenderer_1__ctor_m3035501077(__this, /*hidden argument*/PostProcessEffectRenderer_1__ctor_m3035501077_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::GetCameraFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t ScreenSpaceReflectionsRenderer_GetCameraFlags_m579805746 (ScreenSpaceReflectionsRenderer_t661283308 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(5);
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::CheckRT(UnityEngine.RenderTexture&,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.FilterMode,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionsRenderer_CheckRT_m170166065 (ScreenSpaceReflectionsRenderer_t661283308 * __this, RenderTexture_t2108887433 ** ___rt0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___filterMode4, bool ___useMipMap5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionsRenderer_CheckRT_m170166065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		RenderTexture_t2108887433 ** L_0 = ___rt0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (*((RenderTexture_t2108887433 **)L_0)), (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		RenderTexture_t2108887433 ** L_2 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_2)));
		bool L_3 = RenderTexture_IsCreated_m1088809752((*((RenderTexture_t2108887433 **)L_2)), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		RenderTexture_t2108887433 ** L_4 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_4)));
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, (*((RenderTexture_t2108887433 **)L_4)));
		int32_t L_6 = ___width1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0041;
		}
	}
	{
		RenderTexture_t2108887433 ** L_7 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_7)));
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, (*((RenderTexture_t2108887433 **)L_7)));
		int32_t L_9 = ___height2;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0041;
		}
	}
	{
		RenderTexture_t2108887433 ** L_10 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_10)));
		int32_t L_11 = RenderTexture_get_format_m3846871418((*((RenderTexture_t2108887433 **)L_10)), /*hidden argument*/NULL);
		int32_t L_12 = ___format3;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_008a;
		}
	}

IL_0041:
	{
		RenderTexture_t2108887433 ** L_13 = ___rt0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (*((RenderTexture_t2108887433 **)L_13)), (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		RenderTexture_t2108887433 ** L_15 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_15)));
		RenderTexture_Release_m1749927881((*((RenderTexture_t2108887433 **)L_15)), /*hidden argument*/NULL);
	}

IL_0055:
	{
		RenderTexture_t2108887433 ** L_16 = ___rt0;
		int32_t L_17 = ___width1;
		int32_t L_18 = ___height2;
		int32_t L_19 = ___format3;
		RenderTexture_t2108887433 * L_20 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_20, L_17, L_18, 0, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		RenderTexture_t2108887433 * L_21 = V_0;
		int32_t L_22 = ___filterMode4;
		NullCheck(L_21);
		Texture_set_filterMode_m3078068058(L_21, L_22, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_23 = V_0;
		bool L_24 = ___useMipMap5;
		NullCheck(L_23);
		RenderTexture_set_useMipMap_m793379106(L_23, L_24, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_25 = V_0;
		NullCheck(L_25);
		RenderTexture_set_autoGenerateMips_m4005201898(L_25, (bool)0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_26 = V_0;
		NullCheck(L_26);
		Object_set_hideFlags_m1648752846(L_26, ((int32_t)61), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_27 = V_0;
		*((RuntimeObject **)(L_16)) = (RuntimeObject *)L_27;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_16), (RuntimeObject *)L_27);
		RenderTexture_t2108887433 ** L_28 = ___rt0;
		NullCheck((*((RenderTexture_t2108887433 **)L_28)));
		RenderTexture_Create_m2861863713((*((RenderTexture_t2108887433 **)L_28)), /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionsRenderer_Render_m1147485825 (ScreenSpaceReflectionsRenderer_t661283308 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionsRenderer_Render_m1147485825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandBuffer_t2206337031 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Texture2D_t3840446185 * V_4 = NULL;
	PropertySheet_t3821403501 * V_5 = NULL;
	Matrix4x4_t1817901843  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Matrix4x4_t1817901843  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Matrix4x4_t1817901843  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	ComputeShader_t317220254 * V_10 = NULL;
	int32_t V_11 = 0;
	RenderTargetIdentifier_t2079184500  V_12;
	memset(&V_12, 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t2206337031 * L_1 = PostProcessRenderContext_get_command_m1157578430(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CommandBuffer_t2206337031 * L_2 = V_0;
		NullCheck(L_2);
		CommandBuffer_BeginSample_m204508461(L_2, _stringLiteral3852728067, /*hidden argument*/NULL);
		ScreenSpaceReflections_t3117296337 * L_3 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_3);
		ScreenSpaceReflectionPresetParameter_t2494457668 * L_4 = L_3->get_preset_9();
		NullCheck(L_4);
		int32_t L_5 = ((ParameterOverride_1_t381536667 *)L_4)->get_value_1();
		if ((((int32_t)L_5) == ((int32_t)7)))
		{
			goto IL_0090;
		}
	}
	{
		ScreenSpaceReflections_t3117296337 * L_6 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_6);
		ScreenSpaceReflectionPresetParameter_t2494457668 * L_7 = L_6->get_preset_9();
		NullCheck(L_7);
		int32_t L_8 = ((ParameterOverride_1_t381536667 *)L_7)->get_value_1();
		V_1 = L_8;
		ScreenSpaceReflections_t3117296337 * L_9 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_9);
		IntParameter_t773781776 * L_10 = L_9->get_maximumIterationCount_10();
		QualityPresetU5BU5D_t2343555814* L_11 = __this->get_m_Presets_5();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		QualityPreset_t734522687 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = L_14->get_maximumIterationCount_0();
		NullCheck(L_10);
		((ParameterOverride_1_t931330764 *)L_10)->set_value_1(L_15);
		ScreenSpaceReflections_t3117296337 * L_16 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_16);
		FloatParameter_t1840207740 * L_17 = L_16->get_thickness_12();
		QualityPresetU5BU5D_t2343555814* L_18 = __this->get_m_Presets_5();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		QualityPreset_t734522687 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		float L_22 = L_21->get_thickness_1();
		NullCheck(L_17);
		((ParameterOverride_1_t3672619081 *)L_17)->set_value_1(L_22);
		ScreenSpaceReflections_t3117296337 * L_23 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_23);
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_24 = L_23->get_resolution_11();
		QualityPresetU5BU5D_t2343555814* L_25 = __this->get_m_Presets_5();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		QualityPreset_t734522687 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		int32_t L_29 = L_28->get_downsampling_2();
		NullCheck(L_24);
		((ParameterOverride_1_t1070587220 *)L_24)->set_value_1(L_29);
	}

IL_0090:
	{
		ScreenSpaceReflections_t3117296337 * L_30 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_30);
		FloatParameter_t1840207740 * L_31 = L_30->get_maximumMarchDistance_13();
		ScreenSpaceReflections_t3117296337 * L_32 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_32);
		FloatParameter_t1840207740 * L_33 = L_32->get_maximumMarchDistance_13();
		NullCheck(L_33);
		float L_34 = ((ParameterOverride_1_t3672619081 *)L_33)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_35 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		((ParameterOverride_1_t3672619081 *)L_31)->set_value_1(L_35);
		PostProcessRenderContext_t597611190 * L_36 = ___context0;
		NullCheck(L_36);
		int32_t L_37 = PostProcessRenderContext_get_width_m2958072728(L_36, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_38 = ___context0;
		NullCheck(L_38);
		int32_t L_39 = PostProcessRenderContext_get_height_m3501755701(L_38, /*hidden argument*/NULL);
		int32_t L_40 = Mathf_Min_m18103608(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		int32_t L_41 = Mathf_ClosestPowerOfTwo_m1106515315(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
		ScreenSpaceReflections_t3117296337 * L_42 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_42);
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_43 = L_42->get_resolution_11();
		NullCheck(L_43);
		int32_t L_44 = ((ParameterOverride_1_t1070587220 *)L_43)->get_value_1();
		if (L_44)
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)((int32_t)L_45>>(int32_t)1));
		goto IL_0109;
	}

IL_00ef:
	{
		ScreenSpaceReflections_t3117296337 * L_46 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_46);
		ScreenSpaceReflectionResolutionParameter_t1804578420 * L_47 = L_46->get_resolution_11();
		NullCheck(L_47);
		int32_t L_48 = ((ParameterOverride_1_t1070587220 *)L_47)->get_value_1();
		if ((!(((uint32_t)L_48) == ((uint32_t)2))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)((int32_t)L_49<<(int32_t)1));
	}

IL_0109:
	{
		int32_t L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_51 = Mathf_Log_m2177375338(NULL /*static, unused*/, (((float)((float)L_50))), (2.0f), /*hidden argument*/NULL);
		int32_t L_52 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_51, (float)(3.0f))), /*hidden argument*/NULL);
		V_3 = L_52;
		int32_t L_53 = V_3;
		int32_t L_54 = Mathf_Min_m18103608(NULL /*static, unused*/, L_53, ((int32_t)12), /*hidden argument*/NULL);
		V_3 = L_54;
		RenderTexture_t2108887433 ** L_55 = __this->get_address_of_m_Resolve_2();
		int32_t L_56 = V_2;
		int32_t L_57 = V_2;
		PostProcessRenderContext_t597611190 * L_58 = ___context0;
		NullCheck(L_58);
		int32_t L_59 = PostProcessRenderContext_get_sourceFormat_m478427658(L_58, /*hidden argument*/NULL);
		ScreenSpaceReflectionsRenderer_CheckRT_m170166065(__this, (RenderTexture_t2108887433 **)L_55, L_56, L_57, L_59, 2, (bool)1, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_60 = ___context0;
		NullCheck(L_60);
		PostProcessResources_t1163236733 * L_61 = PostProcessRenderContext_get_resources_m2276304934(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Texture2DU5BU5D_t149664596* L_62 = L_61->get_blueNoise256_5();
		NullCheck(L_62);
		int32_t L_63 = 0;
		Texture2D_t3840446185 * L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_4 = L_64;
		PostProcessRenderContext_t597611190 * L_65 = ___context0;
		NullCheck(L_65);
		PropertySheetFactory_t1490101248 * L_66 = PostProcessRenderContext_get_propertySheets_m1819469502(L_65, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_67 = ___context0;
		NullCheck(L_67);
		PostProcessResources_t1163236733 * L_68 = PostProcessRenderContext_get_resources_m2276304934(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Shaders_t2807171077 * L_69 = L_68->get_shaders_7();
		NullCheck(L_69);
		Shader_t4151988712 * L_70 = L_69->get_screenSpaceReflections_21();
		NullCheck(L_66);
		PropertySheet_t3821403501 * L_71 = PropertySheetFactory_Get_m2969175896(L_66, L_70, /*hidden argument*/NULL);
		V_5 = L_71;
		PropertySheet_t3821403501 * L_72 = V_5;
		NullCheck(L_72);
		MaterialPropertyBlock_t3213117958 * L_73 = PropertySheet_get_properties_m3229239987(L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_74 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Noise_31();
		Texture2D_t3840446185 * L_75 = V_4;
		NullCheck(L_73);
		MaterialPropertyBlock_SetTexture_m3027584768(L_73, L_74, L_75, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_6), sizeof(Matrix4x4_t1817901843 ));
		int32_t L_76 = V_2;
		int32_t L_77 = V_2;
		Vector4_t3319028937  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector4__ctor_m2498754347((&L_78), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_76))), (float)(0.5f))), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_77))), (float)(0.5f))), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((Matrix4x4_t1817901843 *)(&V_6), 0, L_78, /*hidden argument*/NULL);
		int32_t L_79 = V_2;
		int32_t L_80 = V_2;
		Vector4_t3319028937  L_81;
		memset(&L_81, 0, sizeof(L_81));
		Vector4__ctor_m2498754347((&L_81), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_79))), (float)(0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_80))), (float)(0.5f))), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((Matrix4x4_t1817901843 *)(&V_6), 1, L_81, /*hidden argument*/NULL);
		Vector4_t3319028937  L_82;
		memset(&L_82, 0, sizeof(L_82));
		Vector4__ctor_m2498754347((&L_82), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((Matrix4x4_t1817901843 *)(&V_6), 2, L_82, /*hidden argument*/NULL);
		Vector4_t3319028937  L_83;
		memset(&L_83, 0, sizeof(L_83));
		Vector4__ctor_m2498754347((&L_83), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((Matrix4x4_t1817901843 *)(&V_6), 3, L_83, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_84 = ___context0;
		NullCheck(L_84);
		Camera_t4157153871 * L_85 = PostProcessRenderContext_get_camera_m696707977(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Matrix4x4_t1817901843  L_86 = Camera_get_projectionMatrix_m667780853(L_85, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_87 = GL_GetGPUProjectionMatrix_m628855021(NULL /*static, unused*/, L_86, (bool)0, /*hidden argument*/NULL);
		V_7 = L_87;
		Matrix4x4_t1817901843  L_88 = V_6;
		Matrix4x4_t1817901843  L_89 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_90 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
		V_6 = L_90;
		PropertySheet_t3821403501 * L_91 = V_5;
		NullCheck(L_91);
		MaterialPropertyBlock_t3213117958 * L_92 = PropertySheet_get_properties_m3229239987(L_91, /*hidden argument*/NULL);
		int32_t L_93 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_ViewMatrix_35();
		PostProcessRenderContext_t597611190 * L_94 = ___context0;
		NullCheck(L_94);
		Camera_t4157153871 * L_95 = PostProcessRenderContext_get_camera_m696707977(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Matrix4x4_t1817901843  L_96 = Camera_get_worldToCameraMatrix_m22661425(L_95, /*hidden argument*/NULL);
		NullCheck(L_92);
		MaterialPropertyBlock_SetMatrix_m3427850489(L_92, L_93, L_96, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_97 = V_5;
		NullCheck(L_97);
		MaterialPropertyBlock_t3213117958 * L_98 = PropertySheet_get_properties_m3229239987(L_97, /*hidden argument*/NULL);
		int32_t L_99 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_InverseViewMatrix_36();
		PostProcessRenderContext_t597611190 * L_100 = ___context0;
		NullCheck(L_100);
		Camera_t4157153871 * L_101 = PostProcessRenderContext_get_camera_m696707977(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Matrix4x4_t1817901843  L_102 = Camera_get_worldToCameraMatrix_m22661425(L_101, /*hidden argument*/NULL);
		V_8 = L_102;
		Matrix4x4_t1817901843  L_103 = Matrix4x4_get_inverse_m1870592360((Matrix4x4_t1817901843 *)(&V_8), /*hidden argument*/NULL);
		NullCheck(L_98);
		MaterialPropertyBlock_SetMatrix_m3427850489(L_98, L_99, L_103, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_104 = V_5;
		NullCheck(L_104);
		MaterialPropertyBlock_t3213117958 * L_105 = PropertySheet_get_properties_m3229239987(L_104, /*hidden argument*/NULL);
		int32_t L_106 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_InverseProjectionMatrix_37();
		Matrix4x4_t1817901843  L_107 = Matrix4x4_get_inverse_m1870592360((Matrix4x4_t1817901843 *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_105);
		MaterialPropertyBlock_SetMatrix_m3427850489(L_105, L_106, L_107, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_108 = V_5;
		NullCheck(L_108);
		MaterialPropertyBlock_t3213117958 * L_109 = PropertySheet_get_properties_m3229239987(L_108, /*hidden argument*/NULL);
		int32_t L_110 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_ScreenSpaceProjectionMatrix_38();
		Matrix4x4_t1817901843  L_111 = V_6;
		NullCheck(L_109);
		MaterialPropertyBlock_SetMatrix_m3427850489(L_109, L_110, L_111, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_112 = V_5;
		NullCheck(L_112);
		MaterialPropertyBlock_t3213117958 * L_113 = PropertySheet_get_properties_m3229239987(L_112, /*hidden argument*/NULL);
		int32_t L_114 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Params_65();
		ScreenSpaceReflections_t3117296337 * L_115 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_115);
		FloatParameter_t1840207740 * L_116 = L_115->get_vignette_15();
		NullCheck(L_116);
		float L_117 = ((ParameterOverride_1_t3672619081 *)L_116)->get_value_1();
		ScreenSpaceReflections_t3117296337 * L_118 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_118);
		FloatParameter_t1840207740 * L_119 = L_118->get_distanceFade_14();
		NullCheck(L_119);
		float L_120 = ((ParameterOverride_1_t3672619081 *)L_119)->get_value_1();
		ScreenSpaceReflections_t3117296337 * L_121 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_121);
		FloatParameter_t1840207740 * L_122 = L_121->get_maximumMarchDistance_13();
		NullCheck(L_122);
		float L_123 = ((ParameterOverride_1_t3672619081 *)L_122)->get_value_1();
		int32_t L_124 = V_3;
		Vector4_t3319028937  L_125;
		memset(&L_125, 0, sizeof(L_125));
		Vector4__ctor_m2498754347((&L_125), (((float)((float)L_117))), L_120, L_123, (((float)((float)L_124))), /*hidden argument*/NULL);
		NullCheck(L_113);
		MaterialPropertyBlock_SetVector_m2604168798(L_113, L_114, L_125, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_126 = V_5;
		NullCheck(L_126);
		MaterialPropertyBlock_t3213117958 * L_127 = PropertySheet_get_properties_m3229239987(L_126, /*hidden argument*/NULL);
		int32_t L_128 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Params2_39();
		PostProcessRenderContext_t597611190 * L_129 = ___context0;
		NullCheck(L_129);
		int32_t L_130 = PostProcessRenderContext_get_width_m2958072728(L_129, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_131 = ___context0;
		NullCheck(L_131);
		int32_t L_132 = PostProcessRenderContext_get_height_m3501755701(L_131, /*hidden argument*/NULL);
		int32_t L_133 = V_2;
		Texture2D_t3840446185 * L_134 = V_4;
		NullCheck(L_134);
		int32_t L_135 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_134);
		ScreenSpaceReflections_t3117296337 * L_136 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_136);
		FloatParameter_t1840207740 * L_137 = L_136->get_thickness_12();
		NullCheck(L_137);
		float L_138 = ((ParameterOverride_1_t3672619081 *)L_137)->get_value_1();
		ScreenSpaceReflections_t3117296337 * L_139 = PostProcessEffectRenderer_1_get_settings_m16580396(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m16580396_RuntimeMethod_var);
		NullCheck(L_139);
		IntParameter_t773781776 * L_140 = L_139->get_maximumIterationCount_10();
		NullCheck(L_140);
		int32_t L_141 = ((ParameterOverride_1_t931330764 *)L_140)->get_value_1();
		Vector4_t3319028937  L_142;
		memset(&L_142, 0, sizeof(L_142));
		Vector4__ctor_m2498754347((&L_142), ((float)((float)(((float)((float)L_130)))/(float)(((float)((float)L_132))))), ((float)((float)(((float)((float)L_133)))/(float)(((float)((float)L_135))))), L_138, (((float)((float)L_141))), /*hidden argument*/NULL);
		NullCheck(L_127);
		MaterialPropertyBlock_SetVector_m2604168798(L_127, L_128, L_142, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_143 = V_0;
		int32_t L_144 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Test_32();
		int32_t L_145 = V_2;
		int32_t L_146 = V_2;
		PostProcessRenderContext_t597611190 * L_147 = ___context0;
		NullCheck(L_147);
		int32_t L_148 = PostProcessRenderContext_get_sourceFormat_m478427658(L_147, /*hidden argument*/NULL);
		NullCheck(L_143);
		CommandBuffer_GetTemporaryRT_m2252457381(L_143, L_144, L_145, L_146, 0, 0, L_148, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_149 = V_0;
		PostProcessRenderContext_t597611190 * L_150 = ___context0;
		NullCheck(L_150);
		RenderTargetIdentifier_t2079184500  L_151 = PostProcessRenderContext_get_source_m2965911429(L_150, /*hidden argument*/NULL);
		int32_t L_152 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Test_32();
		RenderTargetIdentifier_t2079184500  L_153 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_152, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_154 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_149, L_151, L_153, L_154, 0, (bool)0, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_155 = ___context0;
		NullCheck(L_155);
		bool L_156 = PostProcessRenderContext_get_isSceneView_m3210462044(L_155, /*hidden argument*/NULL);
		if (!L_156)
		{
			goto IL_0395;
		}
	}
	{
		CommandBuffer_t2206337031 * L_157 = V_0;
		PostProcessRenderContext_t597611190 * L_158 = ___context0;
		NullCheck(L_158);
		RenderTargetIdentifier_t2079184500  L_159 = PostProcessRenderContext_get_source_m2965911429(L_158, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_160 = __this->get_m_Resolve_2();
		RenderTargetIdentifier_t2079184500  L_161 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_160, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_162 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_157, L_159, L_161, L_162, 1, (bool)0, /*hidden argument*/NULL);
		goto IL_046a;
	}

IL_0395:
	{
		RenderTexture_t2108887433 ** L_163 = __this->get_address_of_m_History_3();
		int32_t L_164 = V_2;
		int32_t L_165 = V_2;
		PostProcessRenderContext_t597611190 * L_166 = ___context0;
		NullCheck(L_166);
		int32_t L_167 = PostProcessRenderContext_get_sourceFormat_m478427658(L_166, /*hidden argument*/NULL);
		ScreenSpaceReflectionsRenderer_CheckRT_m170166065(__this, (RenderTexture_t2108887433 **)L_163, L_164, L_165, L_167, 1, (bool)0, /*hidden argument*/NULL);
		bool L_168 = ((PostProcessEffectRenderer_t1060237 *)__this)->get_m_ResetHistory_0();
		if (!L_168)
		{
			goto IL_03da;
		}
	}
	{
		PostProcessRenderContext_t597611190 * L_169 = ___context0;
		NullCheck(L_169);
		CommandBuffer_t2206337031 * L_170 = PostProcessRenderContext_get_command_m1157578430(L_169, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_171 = ___context0;
		NullCheck(L_171);
		RenderTargetIdentifier_t2079184500  L_172 = PostProcessRenderContext_get_source_m2965911429(L_171, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_173 = __this->get_m_History_3();
		RenderTargetIdentifier_t2079184500  L_174 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_173, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1965208853(NULL /*static, unused*/, L_170, L_172, L_174, (bool)0, /*hidden argument*/NULL);
		((PostProcessEffectRenderer_t1060237 *)__this)->set_m_ResetHistory_0((bool)0);
	}

IL_03da:
	{
		CommandBuffer_t2206337031 * L_175 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_176 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SSRResolveTemp_30();
		int32_t L_177 = V_2;
		int32_t L_178 = V_2;
		PostProcessRenderContext_t597611190 * L_179 = ___context0;
		NullCheck(L_179);
		int32_t L_180 = PostProcessRenderContext_get_sourceFormat_m478427658(L_179, /*hidden argument*/NULL);
		NullCheck(L_175);
		CommandBuffer_GetTemporaryRT_m2252457381(L_175, L_176, L_177, L_178, 0, 1, L_180, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_181 = V_0;
		PostProcessRenderContext_t597611190 * L_182 = ___context0;
		NullCheck(L_182);
		RenderTargetIdentifier_t2079184500  L_183 = PostProcessRenderContext_get_source_m2965911429(L_182, /*hidden argument*/NULL);
		int32_t L_184 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SSRResolveTemp_30();
		RenderTargetIdentifier_t2079184500  L_185 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_184, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_186 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_181, L_183, L_185, L_186, 1, (bool)0, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_187 = V_5;
		NullCheck(L_187);
		MaterialPropertyBlock_t3213117958 * L_188 = PropertySheet_get_properties_m3229239987(L_187, /*hidden argument*/NULL);
		int32_t L_189 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_History_34();
		RenderTexture_t2108887433 * L_190 = __this->get_m_History_3();
		NullCheck(L_188);
		MaterialPropertyBlock_SetTexture_m3027584768(L_188, L_189, L_190, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_191 = V_0;
		int32_t L_192 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SSRResolveTemp_30();
		RenderTargetIdentifier_t2079184500  L_193 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_192, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_194 = __this->get_m_Resolve_2();
		RenderTargetIdentifier_t2079184500  L_195 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_194, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_196 = V_5;
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_191, L_193, L_195, L_196, 2, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_197 = V_0;
		RenderTexture_t2108887433 * L_198 = __this->get_m_Resolve_2();
		RenderTargetIdentifier_t2079184500  L_199 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_198, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_200 = __this->get_m_History_3();
		RenderTargetIdentifier_t2079184500  L_201 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_200, /*hidden argument*/NULL);
		NullCheck(L_197);
		CommandBuffer_CopyTexture_m3572336067(L_197, L_199, 0, 0, L_201, 0, 0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_202 = V_0;
		int32_t L_203 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SSRResolveTemp_30();
		NullCheck(L_202);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_202, L_203, /*hidden argument*/NULL);
	}

IL_046a:
	{
		CommandBuffer_t2206337031 * L_204 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_205 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Test_32();
		NullCheck(L_204);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_204, L_205, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_206 = __this->get_m_MipIDs_4();
		if (!L_206)
		{
			goto IL_048d;
		}
	}
	{
		Int32U5BU5D_t385246372* L_207 = __this->get_m_MipIDs_4();
		NullCheck(L_207);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_207)->max_length)))))
		{
			goto IL_04d0;
		}
	}

IL_048d:
	{
		Int32U5BU5D_t385246372* L_208 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->set_m_MipIDs_4(L_208);
		V_9 = 0;
		goto IL_04c7;
	}

IL_04a2:
	{
		Int32U5BU5D_t385246372* L_209 = __this->get_m_MipIDs_4();
		int32_t L_210 = V_9;
		int32_t L_211 = V_9;
		int32_t L_212 = L_211;
		RuntimeObject * L_213 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_212);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_214 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1533427649, L_213, /*hidden argument*/NULL);
		int32_t L_215 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_214, /*hidden argument*/NULL);
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(L_210), (int32_t)L_215);
		int32_t L_216 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)1));
	}

IL_04c7:
	{
		int32_t L_217 = V_9;
		if ((((int32_t)L_217) < ((int32_t)((int32_t)12))))
		{
			goto IL_04a2;
		}
	}

IL_04d0:
	{
		PostProcessRenderContext_t597611190 * L_218 = ___context0;
		NullCheck(L_218);
		PostProcessResources_t1163236733 * L_219 = PostProcessRenderContext_get_resources_m2276304934(L_218, /*hidden argument*/NULL);
		NullCheck(L_219);
		ComputeShaders_t4172110136 * L_220 = L_219->get_computeShaders_8();
		NullCheck(L_220);
		ComputeShader_t317220254 * L_221 = L_220->get_gaussianDownsample_11();
		V_10 = L_221;
		ComputeShader_t317220254 * L_222 = V_10;
		NullCheck(L_222);
		int32_t L_223 = ComputeShader_FindKernel_m3460470216(L_222, _stringLiteral3566316586, /*hidden argument*/NULL);
		V_11 = L_223;
		RenderTexture_t2108887433 * L_224 = __this->get_m_Resolve_2();
		RenderTargetIdentifier__ctor_m2966131472((RenderTargetIdentifier_t2079184500 *)(&V_12), L_224, /*hidden argument*/NULL);
		V_13 = 0;
		goto IL_05c6;
	}

IL_0505:
	{
		int32_t L_225 = V_2;
		V_2 = ((int32_t)((int32_t)L_225>>(int32_t)1));
		CommandBuffer_t2206337031 * L_226 = V_0;
		Int32U5BU5D_t385246372* L_227 = __this->get_m_MipIDs_4();
		int32_t L_228 = V_13;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		int32_t L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = V_2;
		int32_t L_232 = V_2;
		PostProcessRenderContext_t597611190 * L_233 = ___context0;
		NullCheck(L_233);
		int32_t L_234 = PostProcessRenderContext_get_sourceFormat_m478427658(L_233, /*hidden argument*/NULL);
		NullCheck(L_226);
		CommandBuffer_GetTemporaryRT_m3263294880(L_226, L_230, L_231, L_232, 0, 1, L_234, 0, 1, (bool)1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_235 = V_0;
		ComputeShader_t317220254 * L_236 = V_10;
		int32_t L_237 = V_11;
		RenderTargetIdentifier_t2079184500  L_238 = V_12;
		NullCheck(L_235);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_235, L_236, L_237, _stringLiteral3736738307, L_238, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_239 = V_0;
		ComputeShader_t317220254 * L_240 = V_10;
		int32_t L_241 = V_11;
		Int32U5BU5D_t385246372* L_242 = __this->get_m_MipIDs_4();
		int32_t L_243 = V_13;
		NullCheck(L_242);
		int32_t L_244 = L_243;
		int32_t L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		RenderTargetIdentifier_t2079184500  L_246 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_245, /*hidden argument*/NULL);
		NullCheck(L_239);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_239, L_240, L_241, _stringLiteral2814226647, L_246, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_247 = V_0;
		ComputeShader_t317220254 * L_248 = V_10;
		int32_t L_249 = V_2;
		int32_t L_250 = V_2;
		int32_t L_251 = V_2;
		int32_t L_252 = V_2;
		Vector4_t3319028937  L_253;
		memset(&L_253, 0, sizeof(L_253));
		Vector4__ctor_m2498754347((&L_253), (((float)((float)L_249))), (((float)((float)L_250))), ((float)((float)(1.0f)/(float)(((float)((float)L_251))))), ((float)((float)(1.0f)/(float)(((float)((float)L_252))))), /*hidden argument*/NULL);
		NullCheck(L_247);
		CommandBuffer_SetComputeVectorParam_m2729447044(L_247, L_248, _stringLiteral3951757521, L_253, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_254 = V_0;
		ComputeShader_t317220254 * L_255 = V_10;
		int32_t L_256 = V_11;
		int32_t L_257 = V_2;
		int32_t L_258 = V_2;
		NullCheck(L_254);
		CommandBuffer_DispatchCompute_m1540502915(L_254, L_255, L_256, ((int32_t)((int32_t)L_257/(int32_t)8)), ((int32_t)((int32_t)L_258/(int32_t)8)), 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_259 = V_0;
		Int32U5BU5D_t385246372* L_260 = __this->get_m_MipIDs_4();
		int32_t L_261 = V_13;
		NullCheck(L_260);
		int32_t L_262 = L_261;
		int32_t L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		RenderTargetIdentifier_t2079184500  L_264 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_263, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_265 = __this->get_m_Resolve_2();
		RenderTargetIdentifier_t2079184500  L_266 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_265, /*hidden argument*/NULL);
		int32_t L_267 = V_13;
		NullCheck(L_259);
		CommandBuffer_CopyTexture_m3572336067(L_259, L_264, 0, 0, L_266, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_267, (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_268 = __this->get_m_MipIDs_4();
		int32_t L_269 = V_13;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		RenderTargetIdentifier_t2079184500  L_272 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_271, /*hidden argument*/NULL);
		V_12 = L_272;
		int32_t L_273 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_273, (int32_t)1));
	}

IL_05c6:
	{
		int32_t L_274 = V_13;
		int32_t L_275 = V_3;
		if ((((int32_t)L_274) < ((int32_t)L_275)))
		{
			goto IL_0505;
		}
	}
	{
		V_14 = 0;
		goto IL_05eb;
	}

IL_05d6:
	{
		CommandBuffer_t2206337031 * L_276 = V_0;
		Int32U5BU5D_t385246372* L_277 = __this->get_m_MipIDs_4();
		int32_t L_278 = V_14;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_276);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_276, L_280, /*hidden argument*/NULL);
		int32_t L_281 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_281, (int32_t)1));
	}

IL_05eb:
	{
		int32_t L_282 = V_14;
		int32_t L_283 = V_3;
		if ((((int32_t)L_282) < ((int32_t)L_283)))
		{
			goto IL_05d6;
		}
	}
	{
		PropertySheet_t3821403501 * L_284 = V_5;
		NullCheck(L_284);
		MaterialPropertyBlock_t3213117958 * L_285 = PropertySheet_get_properties_m3229239987(L_284, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_286 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Resolve_33();
		RenderTexture_t2108887433 * L_287 = __this->get_m_Resolve_2();
		NullCheck(L_285);
		MaterialPropertyBlock_SetTexture_m3027584768(L_285, L_286, L_287, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_288 = V_0;
		PostProcessRenderContext_t597611190 * L_289 = ___context0;
		NullCheck(L_289);
		RenderTargetIdentifier_t2079184500  L_290 = PostProcessRenderContext_get_source_m2965911429(L_289, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_291 = ___context0;
		NullCheck(L_291);
		RenderTargetIdentifier_t2079184500  L_292 = PostProcessRenderContext_get_destination_m1404869586(L_291, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_293 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_288, L_290, L_292, L_293, 3, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_294 = V_0;
		NullCheck(L_294);
		CommandBuffer_EndSample_m536251891(L_294, _stringLiteral3852728067, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::Release()
extern "C" IL2CPP_METHOD_ATTR void ScreenSpaceReflectionsRenderer_Release_m3958716219 (ScreenSpaceReflectionsRenderer_t661283308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionsRenderer_Release_m3958716219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = __this->get_m_Resolve_2();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = __this->get_m_History_3();
		RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_m_Resolve_2((RenderTexture_t2108887433 *)NULL);
		__this->set_m_History_3((RenderTexture_t2108887433 *)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QualityPreset__ctor_m1020650113 (QualityPreset_t734522687 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.ShaderIDs::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ShaderIDs__cctor_m2925472702 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderIDs__cctor_m2925472702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3184621405, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MainTex_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral108671656, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Jitter_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3986185328, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Sharpness_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2390542409, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_FinalBlendParameters_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3181956072, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_HistoryTex_4(L_4);
		int32_t L_5 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3463312434, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_SMAA_Flip_5(L_5);
		int32_t L_6 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3463312432, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_SMAA_Flop_6(L_6);
		int32_t L_7 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4170186857, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_AOParams_7(L_7);
		int32_t L_8 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1269419862, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_AOColor_8(L_8);
		int32_t L_9 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1146596388, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_OcclusionTexture1_9(L_9);
		int32_t L_10 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1146530852, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_OcclusionTexture2_10(L_10);
		int32_t L_11 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3181763460, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_SAOcclusionTexture_11(L_11);
		int32_t L_12 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4058919964, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MSVOcclusionTexture_12(L_12);
		int32_t L_13 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2023788177, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_DepthCopy_13(L_13);
		int32_t L_14 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral667428669, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LinearDepth_14(L_14);
		int32_t L_15 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3294203578, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LowDepth1_15(L_15);
		int32_t L_16 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3294203581, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LowDepth2_16(L_16);
		int32_t L_17 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3294203580, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LowDepth3_17(L_17);
		int32_t L_18 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3294203583, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LowDepth4_18(L_18);
		int32_t L_19 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2966701326, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TiledDepth1_19(L_19);
		int32_t L_20 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3369985853, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TiledDepth2_20(L_20);
		int32_t L_21 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1803901912, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TiledDepth3_21(L_21);
		int32_t L_22 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2207186439, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TiledDepth4_22(L_22);
		int32_t L_23 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3462619189, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Occlusion1_23(L_23);
		int32_t L_24 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3462422581, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Occlusion2_24(L_24);
		int32_t L_25 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3462488117, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Occlusion3_25(L_25);
		int32_t L_26 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3462291509, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Occlusion4_26(L_26);
		int32_t L_27 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4105667178, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Combined1_27(L_27);
		int32_t L_28 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4105667179, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Combined2_28(L_28);
		int32_t L_29 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4105667180, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Combined3_29(L_29);
		int32_t L_30 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral356995084, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_SSRResolveTemp_30(L_30);
		int32_t L_31 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2403779717, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Noise_31(L_31);
		int32_t L_32 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2763423780, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Test_32(L_32);
		int32_t L_33 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3200108423, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Resolve_33(L_33);
		int32_t L_34 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2284466856, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_History_34(L_34);
		int32_t L_35 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral249695751, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ViewMatrix_35(L_35);
		int32_t L_36 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2215499874, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_InverseViewMatrix_36(L_36);
		int32_t L_37 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2463475661, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_InverseProjectionMatrix_37(L_37);
		int32_t L_38 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1847659181, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ScreenSpaceProjectionMatrix_38(L_38);
		int32_t L_39 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2643395962, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Params2_39(L_39);
		int32_t L_40 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2441464067, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_FogColor_40(L_40);
		int32_t L_41 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1260226397, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_FogParams_41(L_41);
		int32_t L_42 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4137103658, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_VelocityScale_42(L_42);
		int32_t L_43 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2153845717, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MaxBlurRadius_43(L_43);
		int32_t L_44 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3504005554, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_RcpMaxBlurRadius_44(L_44);
		int32_t L_45 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral75136829, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_VelocityTex_45(L_45);
		int32_t L_46 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2793129465, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Tile2RT_46(L_46);
		int32_t L_47 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2793522681, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Tile4RT_47(L_47);
		int32_t L_48 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2792736249, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Tile8RT_48(L_48);
		int32_t L_49 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3869933050, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TileMaxOffs_49(L_49);
		int32_t L_50 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2359387270, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TileMaxLoop_50(L_50);
		int32_t L_51 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2791294457, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TileVRT_51(L_51);
		int32_t L_52 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1010924843, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_NeighborMaxTex_52(L_52);
		int32_t L_53 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral258292599, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LoopCount_53(L_53);
		int32_t L_54 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2177221748, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_DepthOfFieldTemp_54(L_54);
		int32_t L_55 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3053790218, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_DepthOfFieldTex_55(L_55);
		int32_t L_56 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4231150815, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Distance_56(L_56);
		int32_t L_57 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1671643584, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LensCoeff_57(L_57);
		int32_t L_58 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2471241864, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MaxCoC_58(L_58);
		int32_t L_59 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral563699592, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_RcpMaxCoC_59(L_59);
		int32_t L_60 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1689173040, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_RcpAspect_60(L_60);
		int32_t L_61 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2751900376, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_CoCTex_61(L_61);
		int32_t L_62 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3107066471, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_TaaParams_62(L_62);
		int32_t L_63 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1297594091, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_AutoExposureTex_63(L_63);
		int32_t L_64 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2762540215, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_HistogramBuffer_64(L_64);
		int32_t L_65 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1674904954, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Params_65(L_65);
		int32_t L_66 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3601388697, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ScaleOffsetRes_66(L_66);
		int32_t L_67 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2355791104, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_BloomTex_67(L_67);
		int32_t L_68 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3724884897, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_SampleScale_68(L_68);
		int32_t L_69 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3860033654, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Threshold_69(L_69);
		int32_t L_70 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1411910041, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ColorIntensity_70(L_70);
		int32_t L_71 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2116052672, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Bloom_DirtTex_71(L_71);
		int32_t L_72 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1583701646, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Bloom_Settings_72(L_72);
		int32_t L_73 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3258063348, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Bloom_Color_73(L_73);
		int32_t L_74 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1051284553, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Bloom_DirtTileOffset_74(L_74);
		int32_t L_75 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1257172633, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ChromaticAberration_Amount_75(L_75);
		int32_t L_76 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1245105280, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ChromaticAberration_SpectralLut_76(L_76);
		int32_t L_77 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3367647173, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Distortion_CenterScale_77(L_77);
		int32_t L_78 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1724946991, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Distortion_Amount_78(L_78);
		int32_t L_79 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3986044598, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Lut2D_79(L_79);
		int32_t L_80 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3986044599, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Lut3D_80(L_80);
		int32_t L_81 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2345619339, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Lut3D_Params_81(L_81);
		int32_t L_82 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2345611850, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Lut2D_Params_82(L_82);
		int32_t L_83 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral912009985, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_UserLut2D_Params_83(L_83);
		int32_t L_84 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4228677330, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_PostExposure_84(L_84);
		int32_t L_85 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3629263775, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ColorBalance_85(L_85);
		int32_t L_86 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3366981795, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ColorFilter_86(L_86);
		int32_t L_87 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1064943856, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_HueSatCon_87(L_87);
		int32_t L_88 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3062100205, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Brightness_88(L_88);
		int32_t L_89 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2114311090, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ChannelMixerRed_89(L_89);
		int32_t L_90 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3145815565, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ChannelMixerGreen_90(L_90);
		int32_t L_91 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2729941611, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ChannelMixerBlue_91(L_91);
		int32_t L_92 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2874542304, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Lift_92(L_92);
		int32_t L_93 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral176315376, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_InvGamma_93(L_93);
		int32_t L_94 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3544690078, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Gain_94(L_94);
		int32_t L_95 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1944165919, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Curves_95(L_95);
		int32_t L_96 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2308970823, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_CustomToneCurve_96(L_96);
		int32_t L_97 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2880983304, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ToeSegmentA_97(L_97);
		int32_t L_98 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral159994120, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ToeSegmentB_98(L_98);
		int32_t L_99 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4256383554, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MidSegmentA_99(L_99);
		int32_t L_100 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2682405442, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_MidSegmentB_100(L_100);
		int32_t L_101 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2191789461, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ShoSegmentA_101(L_101);
		int32_t L_102 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral235474325, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_ShoSegmentB_102(L_102);
		int32_t L_103 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1569778134, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Color_103(L_103);
		int32_t L_104 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1253245767, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Center_104(L_104);
		int32_t L_105 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1478126650, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Settings_105(L_105);
		int32_t L_106 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4174543017, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Mask_106(L_106);
		int32_t L_107 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral629754547, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Opacity_107(L_107);
		int32_t L_108 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2555803806, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Vignette_Mode_108(L_108);
		int32_t L_109 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3323024667, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Grain_Params1_109(L_109);
		int32_t L_110 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3322828059, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Grain_Params2_110(L_110);
		int32_t L_111 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3395715816, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_GrainTex_111(L_111);
		int32_t L_112 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3268449352, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Phase_112(L_112);
		int32_t L_113 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1432282104, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_LumaInAlpha_113(L_113);
		int32_t L_114 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral828472025, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_DitheringTex_114(L_114);
		int32_t L_115 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral53162804, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Dithering_Coords_115(L_115);
		int32_t L_116 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral121297036, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_From_116(L_116);
		int32_t L_117 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2509374944, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_To_117(L_117);
		int32_t L_118 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3394643094, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_Interp_118(L_118);
		int32_t L_119 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3072607600, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_HalfResFinalCopy_119(L_119);
		int32_t L_120 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2977831838, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_WaveformSource_120(L_120);
		int32_t L_121 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2711297415, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_WaveformBuffer_121(L_121);
		int32_t L_122 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2575753903, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_VectorscopeBuffer_122(L_122);
		int32_t L_123 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1492108719, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_RenderViewportScaleFactor_123(L_123);
		int32_t L_124 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1789992613, /*hidden argument*/NULL);
		((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->set_UVTransform_124(L_124);
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
// System.Void UnityEngine.Rendering.PostProcessing.Spline::.ctor(UnityEngine.AnimationCurve,System.Single,System.Boolean,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Spline__ctor_m3923510359 (Spline_t3835237600 * __this, AnimationCurve_t3046754366 * ___curve0, float ___zeroValue1, bool ___loop2, Vector2_t2156229523  ___bounds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spline__ctor_m3923510359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_frameCount_7((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_0 = ___curve0;
		__this->set_curve_2(L_0);
		float L_1 = ___zeroValue1;
		__this->set_m_ZeroValue_4(L_1);
		bool L_2 = ___loop2;
		__this->set_m_Loop_3(L_2);
		float L_3 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&___bounds3), /*hidden argument*/NULL);
		__this->set_m_Range_5(L_3);
		SingleU5BU5D_t1444911251* L_4 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_cachedData_8(L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Spline::Cache(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Spline_Cache_m1110319752 (Spline_t3835237600 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spline_Cache_m1110319752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Keyframe_t4206410242  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Keyframe_t4206410242  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___frame0;
		int32_t L_1 = __this->get_frameCount_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		AnimationCurve_t3046754366 * L_2 = __this->get_curve_2();
		NullCheck(L_2);
		int32_t L_3 = AnimationCurve_get_length_m1548433259(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = __this->get_m_Loop_3();
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		AnimationCurve_t3046754366 * L_6 = __this->get_m_InternalLoopingCurve_6();
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		AnimationCurve_t3046754366 * L_7 = (AnimationCurve_t3046754366 *)il2cpp_codegen_object_new(AnimationCurve_t3046754366_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m3000526466(L_7, /*hidden argument*/NULL);
		__this->set_m_InternalLoopingCurve_6(L_7);
	}

IL_0041:
	{
		AnimationCurve_t3046754366 * L_8 = __this->get_curve_2();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Keyframe_t4206410242  L_10 = AnimationCurve_get_Item_m4209227769(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_10;
		Keyframe_t4206410242 * L_11 = (&V_1);
		float L_12 = Keyframe_get_time_m803196188((Keyframe_t4206410242 *)L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_m_Range_5();
		Keyframe_set_time_m4083895404((Keyframe_t4206410242 *)L_11, ((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_14 = __this->get_curve_2();
		NullCheck(L_14);
		Keyframe_t4206410242  L_15 = AnimationCurve_get_Item_m4209227769(L_14, 0, /*hidden argument*/NULL);
		V_2 = L_15;
		Keyframe_t4206410242 * L_16 = (&V_2);
		float L_17 = Keyframe_get_time_m803196188((Keyframe_t4206410242 *)L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_m_Range_5();
		Keyframe_set_time_m4083895404((Keyframe_t4206410242 *)L_16, ((float)il2cpp_codegen_add((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_19 = __this->get_m_InternalLoopingCurve_6();
		AnimationCurve_t3046754366 * L_20 = __this->get_curve_2();
		NullCheck(L_20);
		KeyframeU5BU5D_t1068524471* L_21 = AnimationCurve_get_keys_m1672862131(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		AnimationCurve_set_keys_m3970853534(L_19, L_21, /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_22 = __this->get_m_InternalLoopingCurve_6();
		Keyframe_t4206410242  L_23 = V_1;
		NullCheck(L_22);
		AnimationCurve_AddKey_m431470589(L_22, L_23, /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_24 = __this->get_m_InternalLoopingCurve_6();
		Keyframe_t4206410242  L_25 = V_2;
		NullCheck(L_24);
		AnimationCurve_AddKey_m431470589(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		V_3 = 0;
		goto IL_00d7;
	}

IL_00bc:
	{
		SingleU5BU5D_t1444911251* L_26 = __this->get_cachedData_8();
		int32_t L_27 = V_3;
		int32_t L_28 = V_3;
		int32_t L_29 = V_0;
		float L_30 = Spline_Evaluate_m4042023820(__this, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_28))), (float)(0.0078125f))), L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (float)L_30);
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00d7:
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)128))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_33 = Time_get_renderedFrameCount_m3445787045(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_frameCount_7(L_33);
		return;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Spline_Evaluate_m4042023820 (Spline_t3835237600 * __this, float ___t0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		float L_1 = __this->get_m_ZeroValue_4();
		return L_1;
	}

IL_000d:
	{
		bool L_2 = __this->get_m_Loop_3();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___length1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}

IL_001f:
	{
		AnimationCurve_t3046754366 * L_4 = __this->get_curve_2();
		float L_5 = ___t0;
		NullCheck(L_4);
		float L_6 = AnimationCurve_Evaluate_m2125563588(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002c:
	{
		AnimationCurve_t3046754366 * L_7 = __this->get_m_InternalLoopingCurve_6();
		float L_8 = ___t0;
		NullCheck(L_7);
		float L_9 = AnimationCurve_Evaluate_m2125563588(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Spline_Evaluate_m3125215075 (Spline_t3835237600 * __this, float ___t0, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		AnimationCurve_t3046754366 * L_1 = __this->get_curve_2();
		NullCheck(L_1);
		int32_t L_2 = AnimationCurve_get_length_m1548433259(L_1, /*hidden argument*/NULL);
		float L_3 = Spline_Evaluate_m4042023820(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Spline_GetHashCode_m2534156769 (Spline_t3835237600 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		AnimationCurve_t3046754366 * L_1 = __this->get_curve_2();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		int32_t L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SplineParameter__ctor_m3864170264 (SplineParameter_t905443520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineParameter__ctor_m3864170264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m3872296206(__this, /*hidden argument*/ParameterOverride_1__ctor_m3872296206_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void SplineParameter_OnEnable_m2241132770 (SplineParameter_t905443520 * __this, const RuntimeMethod* method)
{
	{
		Spline_t3835237600 * L_0 = ((ParameterOverride_1_t1815622611 *)__this)->get_value_1();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Spline_t3835237600 * L_1 = ((ParameterOverride_1_t1815622611 *)__this)->get_value_1();
		NullCheck(L_1);
		Spline_Cache_m1110319752(L_1, ((int32_t)-2147483648LL), /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void SplineParameter_SetValue_m674779393 (SplineParameter_t905443520 * __this, ParameterOverride_t3061054201 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineParameter_SetValue_m674779393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_t3061054201 * L_0 = ___parameter0;
		ParameterOverride_1_SetValue_m3595080103(__this, L_0, /*hidden argument*/ParameterOverride_1_SetValue_m3595080103_RuntimeMethod_var);
		Spline_t3835237600 * L_1 = ((ParameterOverride_1_t1815622611 *)__this)->get_value_1();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Spline_t3835237600 * L_2 = ((ParameterOverride_1_t1815622611 *)__this)->get_value_1();
		int32_t L_3 = Time_get_renderedFrameCount_m3445787045(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Spline_Cache_m1110319752(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::Interp(UnityEngine.Rendering.PostProcessing.Spline,UnityEngine.Rendering.PostProcessing.Spline,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SplineParameter_Interp_m3163867138 (SplineParameter_t905443520 * __this, Spline_t3835237600 * ___from0, Spline_t3835237600 * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineParameter_Interp_m3163867138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Spline_t3835237600 * L_0 = ___from0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Spline_t3835237600 * L_1 = ___to1;
		if (L_1)
		{
			goto IL_0016;
		}
	}

IL_000c:
	{
		Spline_t3835237600 * L_2 = ___from0;
		Spline_t3835237600 * L_3 = ___to1;
		float L_4 = ___t2;
		ParameterOverride_1_Interp_m3314760251(__this, L_2, L_3, L_4, /*hidden argument*/ParameterOverride_1_Interp_m3314760251_RuntimeMethod_var);
		return;
	}

IL_0016:
	{
		int32_t L_5 = Time_get_renderedFrameCount_m3445787045(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		Spline_t3835237600 * L_6 = ___from0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Spline_Cache_m1110319752(L_6, L_7, /*hidden argument*/NULL);
		Spline_t3835237600 * L_8 = ___to1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Spline_Cache_m1110319752(L_8, L_9, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_005b;
	}

IL_0031:
	{
		Spline_t3835237600 * L_10 = ___from0;
		NullCheck(L_10);
		SingleU5BU5D_t1444911251* L_11 = L_10->get_cachedData_8();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		Spline_t3835237600 * L_15 = ___to1;
		NullCheck(L_15);
		SingleU5BU5D_t1444911251* L_16 = L_15->get_cachedData_8();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		Spline_t3835237600 * L_20 = ((ParameterOverride_1_t1815622611 *)__this)->get_value_1();
		NullCheck(L_20);
		SingleU5BU5D_t1444911251* L_21 = L_20->get_cachedData_8();
		int32_t L_22 = V_1;
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25 = V_2;
		float L_26 = ___t2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (float)((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)), (float)L_26)))));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)128))))
		{
			goto IL_0031;
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
// System.Void UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SubpixelMorphologicalAntialiasing__ctor_m993481452 (SubpixelMorphologicalAntialiasing_t3102233738 * __this, const RuntimeMethod* method)
{
	{
		__this->set_quality_0(2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::IsSupported()
extern "C" IL2CPP_METHOD_ATTR bool SubpixelMorphologicalAntialiasing_IsSupported_m3529194477 (SubpixelMorphologicalAntialiasing_t3102233738 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubpixelMorphologicalAntialiasing_IsSupported_m3529194477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		bool L_0 = RuntimeUtilities_get_isSinglePassStereoEnabled_m4185657310(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void SubpixelMorphologicalAntialiasing_Render_m522711021 (SubpixelMorphologicalAntialiasing_t3102233738 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubpixelMorphologicalAntialiasing_Render_m522711021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t3821403501 * V_0 = NULL;
	CommandBuffer_t2206337031 * V_1 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheetFactory_t1490101248 * L_1 = PostProcessRenderContext_get_propertySheets_m1819469502(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		PostProcessResources_t1163236733 * L_3 = PostProcessRenderContext_get_resources_m2276304934(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shaders_t2807171077 * L_4 = L_3->get_shaders_7();
		NullCheck(L_4);
		Shader_t4151988712 * L_5 = L_4->get_subpixelMorphologicalAntialiasing_9();
		NullCheck(L_1);
		PropertySheet_t3821403501 * L_6 = PropertySheetFactory_Get_m2969175896(L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		PropertySheet_t3821403501 * L_7 = V_0;
		NullCheck(L_7);
		MaterialPropertyBlock_t3213117958 * L_8 = PropertySheet_get_properties_m3229239987(L_7, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_9 = ___context0;
		NullCheck(L_9);
		PostProcessResources_t1163236733 * L_10 = PostProcessRenderContext_get_resources_m2276304934(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		SMAALuts_t184516107 * L_11 = L_10->get_smaaLuts_6();
		NullCheck(L_11);
		Texture2D_t3840446185 * L_12 = L_11->get_area_0();
		NullCheck(L_8);
		MaterialPropertyBlock_SetTexture_m3017316857(L_8, _stringLiteral2181186581, L_12, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_13 = V_0;
		NullCheck(L_13);
		MaterialPropertyBlock_t3213117958 * L_14 = PropertySheet_get_properties_m3229239987(L_13, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_15 = ___context0;
		NullCheck(L_15);
		PostProcessResources_t1163236733 * L_16 = PostProcessRenderContext_get_resources_m2276304934(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		SMAALuts_t184516107 * L_17 = L_16->get_smaaLuts_6();
		NullCheck(L_17);
		Texture2D_t3840446185 * L_18 = L_17->get_search_1();
		NullCheck(L_14);
		MaterialPropertyBlock_SetTexture_m3017316857(L_14, _stringLiteral520385055, L_18, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_19 = ___context0;
		NullCheck(L_19);
		CommandBuffer_t2206337031 * L_20 = PostProcessRenderContext_get_command_m1157578430(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		CommandBuffer_t2206337031 * L_21 = V_1;
		NullCheck(L_21);
		CommandBuffer_BeginSample_m204508461(L_21, _stringLiteral766582391, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		PostProcessRenderContext_t597611190 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25 = PostProcessRenderContext_get_width_m2958072728(L_24, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_26 = ___context0;
		NullCheck(L_26);
		int32_t L_27 = PostProcessRenderContext_get_height_m3501755701(L_26, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_28 = ___context0;
		NullCheck(L_28);
		int32_t L_29 = PostProcessRenderContext_get_sourceFormat_m478427658(L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		CommandBuffer_GetTemporaryRT_m2948653747(L_22, L_23, L_25, L_27, 0, 1, L_29, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_30 = V_1;
		int32_t L_31 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		PostProcessRenderContext_t597611190 * L_32 = ___context0;
		NullCheck(L_32);
		int32_t L_33 = PostProcessRenderContext_get_width_m2958072728(L_32, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_34 = ___context0;
		NullCheck(L_34);
		int32_t L_35 = PostProcessRenderContext_get_height_m3501755701(L_34, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_36 = ___context0;
		NullCheck(L_36);
		int32_t L_37 = PostProcessRenderContext_get_sourceFormat_m478427658(L_36, /*hidden argument*/NULL);
		NullCheck(L_30);
		CommandBuffer_GetTemporaryRT_m2948653747(L_30, L_31, L_33, L_35, 0, 1, L_37, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_38 = V_1;
		PostProcessRenderContext_t597611190 * L_39 = ___context0;
		NullCheck(L_39);
		RenderTargetIdentifier_t2079184500  L_40 = PostProcessRenderContext_get_source_m2965911429(L_39, /*hidden argument*/NULL);
		int32_t L_41 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		RenderTargetIdentifier_t2079184500  L_42 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_43 = V_0;
		int32_t L_44 = __this->get_quality_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_38, L_40, L_42, L_43, L_44, (bool)1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_45 = V_1;
		int32_t L_46 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		RenderTargetIdentifier_t2079184500  L_47 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		int32_t L_48 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		RenderTargetIdentifier_t2079184500  L_49 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_50 = V_0;
		int32_t L_51 = __this->get_quality_0();
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_45, L_47, L_49, L_50, ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_51)), (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_52 = V_1;
		int32_t L_53 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		RenderTargetIdentifier_t2079184500  L_54 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		CommandBuffer_SetGlobalTexture_m4003901513(L_52, _stringLiteral3403384095, L_54, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_55 = V_1;
		PostProcessRenderContext_t597611190 * L_56 = ___context0;
		NullCheck(L_56);
		RenderTargetIdentifier_t2079184500  L_57 = PostProcessRenderContext_get_source_m2965911429(L_56, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_58 = ___context0;
		NullCheck(L_58);
		RenderTargetIdentifier_t2079184500  L_59 = PostProcessRenderContext_get_destination_m1404869586(L_58, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_60 = V_0;
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_55, L_57, L_59, L_60, 6, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_61 = V_1;
		int32_t L_62 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		NullCheck(L_61);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_61, L_62, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_63 = V_1;
		int32_t L_64 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		NullCheck(L_63);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_63, L_64, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_65 = V_1;
		NullCheck(L_65);
		CommandBuffer_EndSample_m536251891(L_65, _stringLiteral766582391, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TargetPool__ctor_m1969230678 (TargetPool_t1535233241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetPool__ctor_m1969230678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_m_Pool_0(L_0);
		TargetPool_Get_m123143857(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
extern "C" IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m123143857 (TargetPool_t1535233241 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Current_1();
		int32_t L_1 = TargetPool_Get_m1394169317(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_Current_1();
		__this->set_m_Current_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m1394169317 (TargetPool_t1535233241 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetPool_Get_m1394169317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t128053199 * L_0 = __this->get_m_Pool_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m361000296(L_0, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		int32_t L_2 = ___i0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		List_1_t128053199 * L_3 = __this->get_m_Pool_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		int32_t L_5 = List_1_get_Item_m1566576383(L_3, L_4, /*hidden argument*/List_1_get_Item_m1566576383_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0066;
	}

IL_0023:
	{
		goto IL_0048;
	}

IL_0028:
	{
		List_1_t128053199 * L_6 = __this->get_m_Pool_0();
		int32_t L_7 = ___i0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2804743930, L_9, /*hidden argument*/NULL);
		int32_t L_11 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m697420525(L_6, L_11, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
	}

IL_0048:
	{
		List_1_t128053199 * L_12 = __this->get_m_Pool_0();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m361000296(L_12, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		int32_t L_14 = ___i0;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0028;
		}
	}
	{
		List_1_t128053199 * L_15 = __this->get_m_Pool_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = List_1_get_Item_m1566576383(L_15, L_16, /*hidden argument*/List_1_get_Item_m1566576383_RuntimeMethod_var);
		V_0 = L_17;
	}

IL_0066:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::Reset()
extern "C" IL2CPP_METHOD_ATTR void TargetPool_Reset_m3807802481 (TargetPool_t1535233241 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Current_1(0);
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
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing__ctor_m1651721602 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing__ctor_m1651721602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_jitterSpread_0((0.75f));
		__this->set_sharpness_1((0.25f));
		__this->set_stationaryBlending_2((0.95f));
		__this->set_motionBlending_3((0.85f));
		RenderTargetIdentifierU5BU5D_t2742279485* L_0 = (RenderTargetIdentifierU5BU5D_t2742279485*)SZArrayNew(RenderTargetIdentifierU5BU5D_t2742279485_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Mrt_6(L_0);
		__this->set_m_ResetHistory_7((bool)1);
		RenderTextureU5BU5DU5BU5D_t847993469* L_1 = (RenderTextureU5BU5DU5BU5D_t847993469*)SZArrayNew(RenderTextureU5BU5DU5BU5D_t847993469_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_HistoryTextures_12(L_1);
		Int32U5BU5D_t385246372* L_2 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_HistoryPingPong_13(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_jitter()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  TemporalAntialiasing_get_jitter_m2288191876 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_U3CjitterU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_jitter(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_jitter_m2951904401 (TemporalAntialiasing_t1482226156 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		__this->set_U3CjitterU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_sampleIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_get_sampleIndex_m2985447574 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CsampleIndexU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_sampleIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_sampleIndex_m2208767343 (TemporalAntialiasing_t1482226156 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CsampleIndexU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::IsSupported()
extern "C" IL2CPP_METHOD_ATTR bool TemporalAntialiasing_IsSupported_m3311660817 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = SystemInfo_get_supportedRenderTargetCount_m259160359(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = SystemInfo_get_supportsMotionVectors_m46965105(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = SystemInfo_get_graphicsDeviceType_m2360462293(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		return (bool)G_B4_0;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetCameraFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_GetCameraFlags_m1154059511 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(5);
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ResetHistory()
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_ResetHistory_m1085668116 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ResetHistory_7((bool)1);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateRandomOffset()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  TemporalAntialiasing_GenerateRandomOffset_m3867100342 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = TemporalAntialiasing_get_sampleIndex_m2985447574(__this, /*hidden argument*/NULL);
		float L_1 = HaltonSeq_Get_m176842504(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1023))), (int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_2 = TemporalAntialiasing_get_sampleIndex_m2985447574(__this, /*hidden argument*/NULL);
		float L_3 = HaltonSeq_Get_m176842504(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)1023))), (int32_t)1)), 3, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_0), ((float)il2cpp_codegen_subtract((float)L_1, (float)(0.5f))), ((float)il2cpp_codegen_subtract((float)L_3, (float)(0.5f))), /*hidden argument*/NULL);
		int32_t L_4 = TemporalAntialiasing_get_sampleIndex_m2985447574(__this, /*hidden argument*/NULL);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		V_1 = L_5;
		TemporalAntialiasing_set_sampleIndex_m2208767343(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_0059;
		}
	}
	{
		TemporalAntialiasing_set_sampleIndex_m2208767343(__this, 0, /*hidden argument*/NULL);
	}

IL_0059:
	{
		Vector2_t2156229523  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetJitteredProjectionMatrix(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  TemporalAntialiasing_GetJitteredProjectionMatrix_m2147217554 (TemporalAntialiasing_t1482226156 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing_GetJitteredProjectionMatrix_m2147217554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Matrix4x4_t1817901843  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	{
		Vector2_t2156229523  L_0 = TemporalAntialiasing_GenerateRandomOffset_m3867100342(__this, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_jitterSpread_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_3, /*hidden argument*/NULL);
		Func_3_t2888966892 * L_4 = __this->get_jitteredMatrixFunc_4();
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		Func_3_t2888966892 * L_5 = __this->get_jitteredMatrixFunc_4();
		Camera_t4157153871 * L_6 = ___camera0;
		Vector2_t2156229523  L_7 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Matrix4x4_t1817901843  L_8 = Func_3_Invoke_m3317342226(L_5, L_6, L_7, /*hidden argument*/Func_3_Invoke_m3317342226_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_006f;
	}

IL_0046:
	{
		Camera_t4157153871 * L_9 = ___camera0;
		NullCheck(L_9);
		bool L_10 = Camera_get_orthographic_m2831464531(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		Camera_t4157153871 * L_11 = ___camera0;
		Vector2_t2156229523  L_12 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_13 = RuntimeUtilities_GetJitteredOrthographicProjectionMatrix_m2141652827(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		G_B5_0 = L_13;
		goto IL_006e;
	}

IL_0062:
	{
		Camera_t4157153871 * L_14 = ___camera0;
		Vector2_t2156229523  L_15 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_16 = RuntimeUtilities_GetJitteredPerspectiveProjectionMatrix_m595328452(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		G_B5_0 = L_16;
	}

IL_006e:
	{
		V_0 = G_B5_0;
	}

IL_006f:
	{
		Vector2_t2156229523  L_17 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = (&V_1)->get_x_0();
		Camera_t4157153871 * L_19 = ___camera0;
		NullCheck(L_19);
		int32_t L_20 = Camera_get_pixelWidth_m1110053668(L_19, /*hidden argument*/NULL);
		Vector2_t2156229523  L_21 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		V_2 = L_21;
		float L_22 = (&V_2)->get_y_1();
		Camera_t4157153871 * L_23 = ___camera0;
		NullCheck(L_23);
		int32_t L_24 = Camera_get_pixelHeight_m722276884(L_23, /*hidden argument*/NULL);
		Vector2_t2156229523  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector2__ctor_m3970636864((&L_25), ((float)((float)L_18/(float)(((float)((float)L_20))))), ((float)((float)L_22/(float)(((float)((float)L_24))))), /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_25, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ConfigureJitteredProjectionMatrix(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_ConfigureJitteredProjectionMatrix_m2357263397 (TemporalAntialiasing_t1482226156 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	Camera_t4157153871 * V_0 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = PostProcessRenderContext_get_camera_m696707977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = V_0;
		Camera_t4157153871 * L_3 = V_0;
		NullCheck(L_3);
		Matrix4x4_t1817901843  L_4 = Camera_get_projectionMatrix_m667780853(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_nonJitteredProjectionMatrix_m3492270478(L_2, L_4, /*hidden argument*/NULL);
		Camera_t4157153871 * L_5 = V_0;
		Camera_t4157153871 * L_6 = V_0;
		Matrix4x4_t1817901843  L_7 = TemporalAntialiasing_GetJitteredProjectionMatrix_m2147217554(__this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_projectionMatrix_m3293177686(L_5, L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = V_0;
		NullCheck(L_8);
		Camera_set_useJitteredProjectionMatrixForTransparentRendering_m1059913304(L_8, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ConfigureStereoJitteredProjectionMatrices(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_ConfigureStereoJitteredProjectionMatrices_m3464532113 (TemporalAntialiasing_t1482226156 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing_ConfigureStereoJitteredProjectionMatrices_m3464532113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_t1817901843  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Matrix4x4_t1817901843  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = PostProcessRenderContext_get_camera_m696707977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_t2156229523  L_2 = TemporalAntialiasing_GenerateRandomOffset_m3867100342(__this, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_2, /*hidden argument*/NULL);
		Vector2_t2156229523  L_3 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_jitterSpread_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_5, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0069;
	}

IL_0031:
	{
		PostProcessRenderContext_t597611190 * L_6 = ___context0;
		NullCheck(L_6);
		Camera_t4157153871 * L_7 = PostProcessRenderContext_get_camera_m696707977(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Camera_CopyStereoDeviceProjectionMatrixToNonJittered_m3543542262(L_7, L_8, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_9 = ___context0;
		NullCheck(L_9);
		Camera_t4157153871 * L_10 = PostProcessRenderContext_get_camera_m696707977(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Matrix4x4_t1817901843  L_12 = Camera_GetStereoNonJitteredProjectionMatrix_m830397540(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		PostProcessRenderContext_t597611190 * L_13 = ___context0;
		Matrix4x4_t1817901843  L_14 = V_2;
		Vector2_t2156229523  L_15 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_16 = RuntimeUtilities_GenerateJitteredProjectionMatrixFromOriginal_m3527468181(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		PostProcessRenderContext_t597611190 * L_17 = ___context0;
		NullCheck(L_17);
		Camera_t4157153871 * L_18 = PostProcessRenderContext_get_camera_m696707977(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		Matrix4x4_t1817901843  L_20 = V_3;
		NullCheck(L_18);
		Camera_SetStereoProjectionMatrix_m3606386899(L_18, L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0069:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		Vector2_t2156229523  L_23 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = (&V_4)->get_x_0();
		PostProcessRenderContext_t597611190 * L_25 = ___context0;
		NullCheck(L_25);
		int32_t L_26 = PostProcessRenderContext_get_screenWidth_m1639863605(L_25, /*hidden argument*/NULL);
		Vector2_t2156229523  L_27 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		V_5 = L_27;
		float L_28 = (&V_5)->get_y_1();
		PostProcessRenderContext_t597611190 * L_29 = ___context0;
		NullCheck(L_29);
		int32_t L_30 = PostProcessRenderContext_get_screenHeight_m1800830117(L_29, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector2__ctor_m3970636864((&L_31), ((float)((float)L_24/(float)(((float)((float)L_26))))), ((float)((float)L_28/(float)(((float)((float)L_30))))), /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m2951904401(__this, L_31, /*hidden argument*/NULL);
		Camera_t4157153871 * L_32 = V_0;
		NullCheck(L_32);
		Camera_set_useJitteredProjectionMatrixForTransparentRendering_m1059913304(L_32, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateHistoryName(UnityEngine.RenderTexture,System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_GenerateHistoryName_m269087843 (TemporalAntialiasing_t1482226156 * __this, RenderTexture_t2108887433 * ___rt0, int32_t ___id1, PostProcessRenderContext_t597611190 * ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing_GenerateHistoryName_m269087843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = ___rt0;
		int32_t L_1 = ___id1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2641822323, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_set_name_m291480324(L_0, L_4, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_5 = ___context2;
		NullCheck(L_5);
		bool L_6 = PostProcessRenderContext_get_stereoActive_m3332228708(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		RenderTexture_t2108887433 * L_7 = ___rt0;
		RenderTexture_t2108887433 * L_8 = L_7;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_m4211327027(L_8, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_10 = ___context2;
		NullCheck(L_10);
		int32_t L_11 = PostProcessRenderContext_get_xrActiveEye_m71849947(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1715369213(NULL /*static, unused*/, L_9, _stringLiteral3421566861, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m291480324(L_8, L_14, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::CheckHistory(System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * TemporalAntialiasing_CheckHistory_m418383224 (TemporalAntialiasing_t1482226156 * __this, int32_t ___id0, PostProcessRenderContext_t597611190 * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing_CheckHistory_m418383224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_t2108887433 * V_1 = NULL;
	RenderTexture_t2108887433 * V_2 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context1;
		NullCheck(L_0);
		int32_t L_1 = PostProcessRenderContext_get_xrActiveEye_m71849947(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RenderTextureU5BU5DU5BU5D_t847993469* L_2 = __this->get_m_HistoryTextures_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RenderTextureU5BU5D_t4111643188* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_6 = __this->get_m_HistoryTextures_12();
		int32_t L_7 = V_0;
		RenderTextureU5BU5D_t4111643188* L_8 = (RenderTextureU5BU5D_t4111643188*)SZArrayNew(RenderTextureU5BU5D_t4111643188_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RenderTextureU5BU5D_t4111643188*)L_8);
	}

IL_0022:
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_9 = __this->get_m_HistoryTextures_12();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RenderTextureU5BU5D_t4111643188* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___id0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RenderTexture_t2108887433 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		bool L_16 = __this->get_m_ResetHistory_7();
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		RenderTexture_t2108887433 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		RenderTexture_t2108887433 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = RenderTexture_IsCreated_m1088809752(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_009e;
		}
	}

IL_004f:
	{
		RenderTexture_t2108887433 * L_21 = V_1;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_22 = ___context1;
		PostProcessRenderContext_t597611190 * L_23 = ___context1;
		NullCheck(L_23);
		int32_t L_24 = PostProcessRenderContext_get_sourceFormat_m478427658(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		RenderTexture_t2108887433 * L_25 = PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1657812484(L_22, 0, L_24, 0, 0, 0, /*hidden argument*/NULL);
		V_1 = L_25;
		RenderTexture_t2108887433 * L_26 = V_1;
		int32_t L_27 = ___id0;
		PostProcessRenderContext_t597611190 * L_28 = ___context1;
		TemporalAntialiasing_GenerateHistoryName_m269087843(__this, L_26, L_27, L_28, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_29 = V_1;
		NullCheck(L_29);
		Texture_set_filterMode_m3078068058(L_29, 1, /*hidden argument*/NULL);
		RenderTextureU5BU5DU5BU5D_t847993469* L_30 = __this->get_m_HistoryTextures_12();
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		RenderTextureU5BU5D_t4111643188* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = ___id0;
		RenderTexture_t2108887433 * L_35 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (RenderTexture_t2108887433 *)L_35);
		PostProcessRenderContext_t597611190 * L_36 = ___context1;
		NullCheck(L_36);
		CommandBuffer_t2206337031 * L_37 = PostProcessRenderContext_get_command_m1157578430(L_36, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_38 = ___context1;
		NullCheck(L_38);
		RenderTargetIdentifier_t2079184500  L_39 = PostProcessRenderContext_get_source_m2965911429(L_38, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_40 = V_1;
		RenderTargetIdentifier_t2079184500  L_41 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1965208853(NULL /*static, unused*/, L_37, L_39, L_41, (bool)0, /*hidden argument*/NULL);
		goto IL_010a;
	}

IL_009e:
	{
		RenderTexture_t2108887433 * L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_42);
		PostProcessRenderContext_t597611190 * L_44 = ___context1;
		NullCheck(L_44);
		int32_t L_45 = PostProcessRenderContext_get_width_m2958072728(L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)L_45))))
		{
			goto IL_00c0;
		}
	}
	{
		RenderTexture_t2108887433 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_46);
		PostProcessRenderContext_t597611190 * L_48 = ___context1;
		NullCheck(L_48);
		int32_t L_49 = PostProcessRenderContext_get_height_m3501755701(L_48, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)L_49)))
		{
			goto IL_010a;
		}
	}

IL_00c0:
	{
		PostProcessRenderContext_t597611190 * L_50 = ___context1;
		PostProcessRenderContext_t597611190 * L_51 = ___context1;
		NullCheck(L_51);
		int32_t L_52 = PostProcessRenderContext_get_sourceFormat_m478427658(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		RenderTexture_t2108887433 * L_53 = PostProcessRenderContext_GetScreenSpaceTemporaryRT_m1657812484(L_50, 0, L_52, 0, 0, 0, /*hidden argument*/NULL);
		V_2 = L_53;
		RenderTexture_t2108887433 * L_54 = V_2;
		int32_t L_55 = ___id0;
		PostProcessRenderContext_t597611190 * L_56 = ___context1;
		TemporalAntialiasing_GenerateHistoryName_m269087843(__this, L_54, L_55, L_56, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_57 = V_2;
		NullCheck(L_57);
		Texture_set_filterMode_m3078068058(L_57, 1, /*hidden argument*/NULL);
		RenderTextureU5BU5DU5BU5D_t847993469* L_58 = __this->get_m_HistoryTextures_12();
		int32_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		RenderTextureU5BU5D_t4111643188* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = ___id0;
		RenderTexture_t2108887433 * L_63 = V_2;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (RenderTexture_t2108887433 *)L_63);
		PostProcessRenderContext_t597611190 * L_64 = ___context1;
		NullCheck(L_64);
		CommandBuffer_t2206337031 * L_65 = PostProcessRenderContext_get_command_m1157578430(L_64, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_66 = V_1;
		RenderTargetIdentifier_t2079184500  L_67 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_68 = V_2;
		RenderTargetIdentifier_t2079184500  L_69 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1965208853(NULL /*static, unused*/, L_65, L_67, L_69, (bool)0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_70 = V_1;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
	}

IL_010a:
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_71 = __this->get_m_HistoryTextures_12();
		int32_t L_72 = V_0;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		RenderTextureU5BU5D_t4111643188* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ___id0;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		RenderTexture_t2108887433 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		return L_77;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_Render_m2536100356 (TemporalAntialiasing_t1482226156 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TemporalAntialiasing_Render_m2536100356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t3821403501 * V_0 = NULL;
	CommandBuffer_t2206337031 * V_1 = NULL;
	int32_t V_2 = 0;
	RenderTexture_t2108887433 * V_3 = NULL;
	RenderTexture_t2108887433 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheetFactory_t1490101248 * L_1 = PostProcessRenderContext_get_propertySheets_m1819469502(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		PostProcessResources_t1163236733 * L_3 = PostProcessRenderContext_get_resources_m2276304934(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shaders_t2807171077 * L_4 = L_3->get_shaders_7();
		NullCheck(L_4);
		Shader_t4151988712 * L_5 = L_4->get_temporalAntialiasing_8();
		NullCheck(L_1);
		PropertySheet_t3821403501 * L_6 = PropertySheetFactory_Get_m2969175896(L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		PostProcessRenderContext_t597611190 * L_7 = ___context0;
		NullCheck(L_7);
		CommandBuffer_t2206337031 * L_8 = PostProcessRenderContext_get_command_m1157578430(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		CommandBuffer_t2206337031 * L_9 = V_1;
		NullCheck(L_9);
		CommandBuffer_BeginSample_m204508461(L_9, _stringLiteral2121740015, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_10 = __this->get_m_HistoryPingPong_13();
		PostProcessRenderContext_t597611190 * L_11 = ___context0;
		NullCheck(L_11);
		int32_t L_12 = PostProcessRenderContext_get_xrActiveEye_m71849947(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_2 = L_16;
		PostProcessRenderContext_t597611190 * L_17 = ___context0;
		RenderTexture_t2108887433 * L_18 = TemporalAntialiasing_CheckHistory_m418383224(__this, ((int32_t)((int32_t)L_16%(int32_t)2)), L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		int32_t L_19 = V_2;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		V_2 = L_20;
		PostProcessRenderContext_t597611190 * L_21 = ___context0;
		RenderTexture_t2108887433 * L_22 = TemporalAntialiasing_CheckHistory_m418383224(__this, ((int32_t)((int32_t)L_20%(int32_t)2)), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		Int32U5BU5D_t385246372* L_23 = __this->get_m_HistoryPingPong_13();
		PostProcessRenderContext_t597611190 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25 = PostProcessRenderContext_get_xrActiveEye_m71849947(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		V_2 = L_27;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)((int32_t)L_27%(int32_t)2)));
		PropertySheet_t3821403501 * L_28 = V_0;
		NullCheck(L_28);
		MaterialPropertyBlock_t3213117958 * L_29 = PropertySheet_get_properties_m3229239987(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Jitter_1();
		Vector2_t2156229523  L_31 = TemporalAntialiasing_get_jitter_m2288191876(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_32 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		MaterialPropertyBlock_SetVector_m2604168798(L_29, L_30, L_32, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_33 = V_0;
		NullCheck(L_33);
		MaterialPropertyBlock_t3213117958 * L_34 = PropertySheet_get_properties_m3229239987(L_33, /*hidden argument*/NULL);
		int32_t L_35 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Sharpness_2();
		float L_36 = __this->get_sharpness_1();
		NullCheck(L_34);
		MaterialPropertyBlock_SetFloat_m3255723079(L_34, L_35, L_36, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_37 = V_0;
		NullCheck(L_37);
		MaterialPropertyBlock_t3213117958 * L_38 = PropertySheet_get_properties_m3229239987(L_37, /*hidden argument*/NULL);
		int32_t L_39 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_FinalBlendParameters_3();
		float L_40 = __this->get_stationaryBlending_2();
		float L_41 = __this->get_motionBlending_3();
		Vector4_t3319028937  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector4__ctor_m2498754347((&L_42), L_40, L_41, (6000.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		MaterialPropertyBlock_SetVector_m2604168798(L_38, L_39, L_42, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_43 = V_0;
		NullCheck(L_43);
		MaterialPropertyBlock_t3213117958 * L_44 = PropertySheet_get_properties_m3229239987(L_43, /*hidden argument*/NULL);
		int32_t L_45 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_HistoryTex_4();
		RenderTexture_t2108887433 * L_46 = V_3;
		NullCheck(L_44);
		MaterialPropertyBlock_SetTexture_m3027584768(L_44, L_45, L_46, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_47 = ___context0;
		NullCheck(L_47);
		Camera_t4157153871 * L_48 = PostProcessRenderContext_get_camera_m696707977(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_49 = Camera_get_orthographic_m2831464531(L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_00f2;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_00f3;
	}

IL_00f2:
	{
		G_B3_0 = 0;
	}

IL_00f3:
	{
		V_5 = G_B3_0;
		RenderTargetIdentifierU5BU5D_t2742279485* L_50 = __this->get_m_Mrt_6();
		NullCheck(L_50);
		PostProcessRenderContext_t597611190 * L_51 = ___context0;
		NullCheck(L_51);
		RenderTargetIdentifier_t2079184500  L_52 = PostProcessRenderContext_get_destination_m1404869586(L_51, /*hidden argument*/NULL);
		*(RenderTargetIdentifier_t2079184500 *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_52;
		RenderTargetIdentifierU5BU5D_t2742279485* L_53 = __this->get_m_Mrt_6();
		NullCheck(L_53);
		RenderTexture_t2108887433 * L_54 = V_4;
		RenderTargetIdentifier_t2079184500  L_55 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		*(RenderTargetIdentifier_t2079184500 *)((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_55;
		CommandBuffer_t2206337031 * L_56 = V_1;
		PostProcessRenderContext_t597611190 * L_57 = ___context0;
		NullCheck(L_57);
		RenderTargetIdentifier_t2079184500  L_58 = PostProcessRenderContext_get_source_m2965911429(L_57, /*hidden argument*/NULL);
		RenderTargetIdentifierU5BU5D_t2742279485* L_59 = __this->get_m_Mrt_6();
		PostProcessRenderContext_t597611190 * L_60 = ___context0;
		NullCheck(L_60);
		RenderTargetIdentifier_t2079184500  L_61 = PostProcessRenderContext_get_source_m2965911429(L_60, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_62 = V_0;
		int32_t L_63 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1976593394(NULL /*static, unused*/, L_56, L_58, L_59, L_61, L_62, L_63, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_64 = V_1;
		NullCheck(L_64);
		CommandBuffer_EndSample_m536251891(L_64, _stringLiteral2121740015, /*hidden argument*/NULL);
		__this->set_m_ResetHistory_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::Release()
extern "C" IL2CPP_METHOD_ATTR void TemporalAntialiasing_Release_m465710035 (TemporalAntialiasing_t1482226156 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_0 = __this->get_m_HistoryTextures_12();
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		V_0 = 0;
		goto IL_0066;
	}

IL_0012:
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_1 = __this->get_m_HistoryTextures_12();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RenderTextureU5BU5D_t4111643188* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0062;
	}

IL_0024:
	{
		V_1 = 0;
		goto IL_0049;
	}

IL_002b:
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_5 = __this->get_m_HistoryTextures_12();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RenderTextureU5BU5D_t4111643188* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RenderTexture_t2108887433 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		RenderTextureU5BU5DU5BU5D_t847993469* L_12 = __this->get_m_HistoryTextures_12();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RenderTextureU5BU5D_t4111643188* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, NULL);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RenderTexture_t2108887433 *)NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_1;
		RenderTextureU5BU5DU5BU5D_t847993469* L_19 = __this->get_m_HistoryTextures_12();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RenderTextureU5BU5D_t4111643188* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		RenderTextureU5BU5DU5BU5D_t847993469* L_23 = __this->get_m_HistoryTextures_12();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, NULL);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (RenderTextureU5BU5D_t4111643188*)NULL);
	}

IL_0062:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_26 = V_0;
		RenderTextureU5BU5DU5BU5D_t847993469* L_27 = __this->get_m_HistoryTextures_12();
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0012;
		}
	}

IL_0074:
	{
		TemporalAntialiasing_set_sampleIndex_m2208767343(__this, 0, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_28 = __this->get_m_HistoryPingPong_13();
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_29 = __this->get_m_HistoryPingPong_13();
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		TemporalAntialiasing_ResetHistory_m1085668116(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TextureFormatUtilities__cctor_m2388758696 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureFormatUtilities__cctor_m2388758696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t4146031392 * V_0 = NULL;
	RuntimeArray * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	RuntimeArray * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t4146031392 * L_0 = (Dictionary_2_t4146031392 *)il2cpp_codegen_object_new(Dictionary_2_t4146031392_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2037905538(L_0, /*hidden argument*/Dictionary_2__ctor_m2037905538_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t4146031392 * L_1 = V_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4044645047(L_1, 1, 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_2 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_m4044645047(L_2, 2, 5, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_m4044645047(L_3, 3, 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m4044645047(L_4, 4, 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_5 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m4044645047(L_5, 5, 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_Add_m4044645047(L_6, 7, 4, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_Add_m4044645047(L_7, ((int32_t)9), ((int32_t)15), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_Add_m4044645047(L_8, ((int32_t)10), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_9 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_m4044645047(L_9, ((int32_t)12), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_m4044645047(L_10, ((int32_t)13), 5, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_11 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_m4044645047(L_11, ((int32_t)14), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_Add_m4044645047(L_12, ((int32_t)15), ((int32_t)15), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_13 = V_0;
		NullCheck(L_13);
		Dictionary_2_Add_m4044645047(L_13, ((int32_t)16), ((int32_t)13), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_Add_m4044645047(L_14, ((int32_t)17), 2, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_15 = V_0;
		NullCheck(L_15);
		Dictionary_2_Add_m4044645047(L_15, ((int32_t)18), ((int32_t)14), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_16 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_m4044645047(L_16, ((int32_t)19), ((int32_t)12), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_17 = V_0;
		NullCheck(L_17);
		Dictionary_2_Add_m4044645047(L_17, ((int32_t)20), ((int32_t)11), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_18 = V_0;
		NullCheck(L_18);
		Dictionary_2_Add_m4044645047(L_18, ((int32_t)22), 2, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_19 = V_0;
		NullCheck(L_19);
		Dictionary_2_Add_m4044645047(L_19, ((int32_t)26), ((int32_t)16), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_20 = V_0;
		NullCheck(L_20);
		Dictionary_2_Add_m4044645047(L_20, ((int32_t)27), ((int32_t)13), /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_21 = V_0;
		NullCheck(L_21);
		Dictionary_2_Add_m4044645047(L_21, ((int32_t)24), 2, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_22 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_m4044645047(L_22, ((int32_t)25), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_23 = V_0;
		NullCheck(L_23);
		Dictionary_2_Add_m4044645047(L_23, ((int32_t)30), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_24 = V_0;
		NullCheck(L_24);
		Dictionary_2_Add_m4044645047(L_24, ((int32_t)31), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_25 = V_0;
		NullCheck(L_25);
		Dictionary_2_Add_m4044645047(L_25, ((int32_t)32), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_26 = V_0;
		NullCheck(L_26);
		Dictionary_2_Add_m4044645047(L_26, ((int32_t)33), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_27 = V_0;
		NullCheck(L_27);
		Dictionary_2_Add_m4044645047(L_27, ((int32_t)34), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_28 = V_0;
		NullCheck(L_28);
		Dictionary_2_Add_m4044645047(L_28, ((int32_t)45), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_29 = V_0;
		NullCheck(L_29);
		Dictionary_2_Add_m4044645047(L_29, ((int32_t)46), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_30 = V_0;
		NullCheck(L_30);
		Dictionary_2_Add_m4044645047(L_30, ((int32_t)47), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_31 = V_0;
		NullCheck(L_31);
		Dictionary_2_Add_m4044645047(L_31, ((int32_t)48), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_32 = V_0;
		NullCheck(L_32);
		Dictionary_2_Add_m4044645047(L_32, ((int32_t)49), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_33 = V_0;
		NullCheck(L_33);
		Dictionary_2_Add_m4044645047(L_33, ((int32_t)50), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_34 = V_0;
		NullCheck(L_34);
		Dictionary_2_Add_m4044645047(L_34, ((int32_t)51), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_35 = V_0;
		NullCheck(L_35);
		Dictionary_2_Add_m4044645047(L_35, ((int32_t)52), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_36 = V_0;
		NullCheck(L_36);
		Dictionary_2_Add_m4044645047(L_36, ((int32_t)53), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_37 = V_0;
		NullCheck(L_37);
		Dictionary_2_Add_m4044645047(L_37, ((int32_t)54), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_38 = V_0;
		NullCheck(L_38);
		Dictionary_2_Add_m4044645047(L_38, ((int32_t)55), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_39 = V_0;
		NullCheck(L_39);
		Dictionary_2_Add_m4044645047(L_39, ((int32_t)56), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_40 = V_0;
		NullCheck(L_40);
		Dictionary_2_Add_m4044645047(L_40, ((int32_t)57), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_41 = V_0;
		NullCheck(L_41);
		Dictionary_2_Add_m4044645047(L_41, ((int32_t)58), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_42 = V_0;
		NullCheck(L_42);
		Dictionary_2_Add_m4044645047(L_42, ((int32_t)59), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_43 = V_0;
		NullCheck(L_43);
		Dictionary_2_Add_m4044645047(L_43, ((int32_t)60), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_44 = V_0;
		NullCheck(L_44);
		Dictionary_2_Add_m4044645047(L_44, ((int32_t)61), 0, /*hidden argument*/Dictionary_2_Add_m4044645047_RuntimeMethod_var);
		Dictionary_2_t4146031392 * L_45 = V_0;
		((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->set_s_FormatAliasMap_0(L_45);
		Dictionary_2_t3280968592 * L_46 = (Dictionary_2_t3280968592 *)il2cpp_codegen_object_new(Dictionary_2_t3280968592_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m432692139(L_46, /*hidden argument*/Dictionary_2__ctor_m432692139_RuntimeMethod_var);
		((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->set_s_SupportedRenderTextureFormats_1(L_46);
		RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (RenderTextureFormat_t962350765_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeArray * L_49 = Enum_GetValues_m4192343468(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		V_1 = L_49;
		RuntimeArray * L_50 = V_1;
		NullCheck(L_50);
		RuntimeObject* L_51 = Array_GetEnumerator_m4277730612(L_50, /*hidden argument*/NULL);
		V_3 = L_51;
	}

IL_01bb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0207;
		}

IL_01c0:
		{
			RuntimeObject* L_52 = V_3;
			NullCheck(L_52);
			RuntimeObject * L_53 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_52);
			V_2 = L_53;
			RuntimeObject * L_54 = V_2;
			if ((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_54, Int32_t2950945753_il2cpp_TypeInfo_var))))) >= ((int32_t)0)))
			{
				goto IL_01d8;
			}
		}

IL_01d3:
		{
			goto IL_0207;
		}

IL_01d8:
		{
			RuntimeObject * L_55 = V_2;
			bool L_56 = TextureFormatUtilities_IsObsolete_m1854244735(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
			if (!L_56)
			{
				goto IL_01e8;
			}
		}

IL_01e3:
		{
			goto IL_0207;
		}

IL_01e8:
		{
			RuntimeObject * L_57 = V_2;
			bool L_58 = SystemInfo_SupportsRenderTextureFormat_m1663449629(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_57, RenderTextureFormat_t962350765_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			V_4 = L_58;
			Dictionary_2_t3280968592 * L_59 = ((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->get_s_SupportedRenderTextureFormats_1();
			RuntimeObject * L_60 = V_2;
			bool L_61 = V_4;
			NullCheck(L_59);
			Dictionary_2_Add_m2308266505(L_59, ((*(int32_t*)((int32_t*)UnBox(L_60, Int32_t2950945753_il2cpp_TypeInfo_var)))), L_61, /*hidden argument*/Dictionary_2_Add_m2308266505_RuntimeMethod_var);
		}

IL_0207:
		{
			RuntimeObject* L_62 = V_3;
			NullCheck(L_62);
			bool L_63 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_01c0;
			}
		}

IL_0212:
		{
			IL2CPP_LEAVE(0x22D, FINALLY_0217);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0217;
	}

FINALLY_0217:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_64 = V_3;
			RuntimeObject* L_65 = ((RuntimeObject*)IsInst((RuntimeObject*)L_64, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_5 = L_65;
			if (!L_65)
			{
				goto IL_022c;
			}
		}

IL_0225:
		{
			RuntimeObject* L_66 = V_5;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_66);
		}

IL_022c:
		{
			IL2CPP_END_FINALLY(535)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(535)
	{
		IL2CPP_JUMP_TBL(0x22D, IL_022d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_022d:
	{
		Dictionary_2_t3280968592 * L_67 = (Dictionary_2_t3280968592 *)il2cpp_codegen_object_new(Dictionary_2_t3280968592_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m432692139(L_67, /*hidden argument*/Dictionary_2__ctor_m432692139_RuntimeMethod_var);
		((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->set_s_SupportedTextureFormats_2(L_67);
		RuntimeTypeHandle_t3027515415  L_68 = { reinterpret_cast<intptr_t> (TextureFormat_t2701165832_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeArray * L_70 = Enum_GetValues_m4192343468(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		V_6 = L_70;
		RuntimeArray * L_71 = V_6;
		NullCheck(L_71);
		RuntimeObject* L_72 = Array_GetEnumerator_m4277730612(L_71, /*hidden argument*/NULL);
		V_8 = L_72;
	}

IL_0251:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02a3;
		}

IL_0256:
		{
			RuntimeObject* L_73 = V_8;
			NullCheck(L_73);
			RuntimeObject * L_74 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_73);
			V_7 = L_74;
			RuntimeObject * L_75 = V_7;
			if ((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_75, Int32_t2950945753_il2cpp_TypeInfo_var))))) >= ((int32_t)0)))
			{
				goto IL_0271;
			}
		}

IL_026c:
		{
			goto IL_02a3;
		}

IL_0271:
		{
			RuntimeObject * L_76 = V_7;
			bool L_77 = TextureFormatUtilities_IsObsolete_m1854244735(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
			if (!L_77)
			{
				goto IL_0282;
			}
		}

IL_027d:
		{
			goto IL_02a3;
		}

IL_0282:
		{
			RuntimeObject * L_78 = V_7;
			bool L_79 = SystemInfo_SupportsTextureFormat_m2150300861(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_78, TextureFormat_t2701165832_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			V_9 = L_79;
			Dictionary_2_t3280968592 * L_80 = ((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->get_s_SupportedTextureFormats_2();
			RuntimeObject * L_81 = V_7;
			bool L_82 = V_9;
			NullCheck(L_80);
			Dictionary_2_Add_m2308266505(L_80, ((*(int32_t*)((int32_t*)UnBox(L_81, Int32_t2950945753_il2cpp_TypeInfo_var)))), L_82, /*hidden argument*/Dictionary_2_Add_m2308266505_RuntimeMethod_var);
		}

IL_02a3:
		{
			RuntimeObject* L_83 = V_8;
			NullCheck(L_83);
			bool L_84 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_83);
			if (L_84)
			{
				goto IL_0256;
			}
		}

IL_02af:
		{
			IL2CPP_LEAVE(0x2CB, FINALLY_02b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02b4;
	}

FINALLY_02b4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_85 = V_8;
			RuntimeObject* L_86 = ((RuntimeObject*)IsInst((RuntimeObject*)L_85, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_10 = L_86;
			if (!L_86)
			{
				goto IL_02ca;
			}
		}

IL_02c3:
		{
			RuntimeObject* L_87 = V_10;
			NullCheck(L_87);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_87);
		}

IL_02ca:
		{
			IL2CPP_END_FINALLY(692)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(692)
	{
		IL2CPP_JUMP_TBL(0x2CB, IL_02cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02cb:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m1854244735 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureFormatUtilities_IsObsolete_m1854244735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	ObsoleteAttributeU5BU5D_t3400296190* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		FieldInfo_t * L_4 = Type_GetField_m2961003358(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		FieldInfo_t * L_5 = V_0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (ObsoleteAttribute_t303876359_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ObjectU5BU5D_t2843939325* L_8 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		V_1 = ((ObsoleteAttributeU5BU5D_t3400296190*)Castclass((RuntimeObject*)L_8, ObsoleteAttributeU5BU5D_t3400296190_il2cpp_TypeInfo_var));
		ObsoleteAttributeU5BU5D_t3400296190* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		ObsoleteAttributeU5BU5D_t3400296190* L_10 = V_1;
		NullCheck(L_10);
		G_B3_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) > ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		return (bool)G_B3_0;
	}
}
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture_t3661962703 * L_0 = ___texture0;
		if (!((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_0, RenderTexture_t2108887433_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		Texture_t3661962703 * L_1 = ___texture0;
		NullCheck(((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_1, RenderTexture_t2108887433_il2cpp_TypeInfo_var)));
		int32_t L_2 = RenderTexture_get_format_m3846871418(((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_1, RenderTexture_t2108887433_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Texture_t3661962703 * L_3 = ___texture0;
		if (!((Texture2D_t3840446185 *)IsInstSealed((RuntimeObject*)L_3, Texture2D_t3840446185_il2cpp_TypeInfo_var)))
		{
			goto IL_004d;
		}
	}
	{
		Texture_t3661962703 * L_4 = ___texture0;
		NullCheck(((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_4, Texture2D_t3840446185_il2cpp_TypeInfo_var)));
		int32_t L_5 = Texture2D_get_format_m2371899271(((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_4, Texture2D_t3840446185_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var);
		Dictionary_2_t4146031392 * L_6 = ((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->get_s_FormatAliasMap_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m1147134866(L_6, L_7, (int32_t*)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m1147134866_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		NotSupportedException_t1314879016 * L_9 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_9, _stringLiteral79654061, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463_RuntimeMethod_var);
	}

IL_004b:
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_004d:
	{
		return (int32_t)(7);
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_m4186123649 (RuntimeObject * __this /* static, unused */, int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureFormatUtilities_IsSupported_m4186123649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var);
		Dictionary_2_t3280968592 * L_0 = ((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->get_s_SupportedRenderTextureFormats_1();
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m676106703(L_0, L_1, (bool*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m676106703_RuntimeMethod_var);
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_m249138407 (RuntimeObject * __this /* static, unused */, int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureFormatUtilities_IsSupported_m249138407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var);
		Dictionary_2_t3280968592 * L_0 = ((TextureFormatUtilities_t2217912845_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var))->get_s_SupportedTextureFormats_2();
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m676106703(L_0, L_1, (bool*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m676106703_RuntimeMethod_var);
		bool L_2 = V_0;
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
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextureLerper__ctor_m2979572854 (TextureLerper_t1948079985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper__ctor_m2979572854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t3580962175 * L_0 = (List_1_t3580962175 *)il2cpp_codegen_object_new(List_1_t3580962175_il2cpp_TypeInfo_var);
		List_1__ctor_m1154264654(L_0, /*hidden argument*/List_1__ctor_m1154264654_RuntimeMethod_var);
		__this->set_m_Recycled_4(L_0);
		List_1_t3580962175 * L_1 = (List_1_t3580962175 *)il2cpp_codegen_object_new(List_1_t3580962175_il2cpp_TypeInfo_var);
		List_1__ctor_m1154264654(L_1, /*hidden argument*/List_1__ctor_m1154264654_RuntimeMethod_var);
		__this->set_m_Actives_5(L_1);
		return;
	}
}
// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::get_instance()
extern "C" IL2CPP_METHOD_ATTR TextureLerper_t1948079985 * TextureLerper_get_instance_m4196735956 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper_get_instance_m4196735956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureLerper_t1948079985 * L_0 = ((TextureLerper_t1948079985_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t1948079985_il2cpp_TypeInfo_var))->get_m_Instance_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextureLerper_t1948079985 * L_1 = (TextureLerper_t1948079985 *)il2cpp_codegen_object_new(TextureLerper_t1948079985_il2cpp_TypeInfo_var);
		TextureLerper__ctor_m2979572854(L_1, /*hidden argument*/NULL);
		((TextureLerper_t1948079985_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t1948079985_il2cpp_TypeInfo_var))->set_m_Instance_0(L_1);
	}

IL_0014:
	{
		TextureLerper_t1948079985 * L_2 = ((TextureLerper_t1948079985_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t1948079985_il2cpp_TypeInfo_var))->get_m_Instance_0();
		return L_2;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::BeginFrame(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void TextureLerper_BeginFrame_m479950370 (TextureLerper_t1948079985 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t2206337031 * L_1 = PostProcessRenderContext_get_command_m1157578430(L_0, /*hidden argument*/NULL);
		__this->set_m_Command_1(L_1);
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		PropertySheetFactory_t1490101248 * L_3 = PostProcessRenderContext_get_propertySheets_m1819469502(L_2, /*hidden argument*/NULL);
		__this->set_m_PropertySheets_2(L_3);
		PostProcessRenderContext_t597611190 * L_4 = ___context0;
		NullCheck(L_4);
		PostProcessResources_t1163236733 * L_5 = PostProcessRenderContext_get_resources_m2276304934(L_4, /*hidden argument*/NULL);
		__this->set_m_Resources_3(L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::EndFrame()
extern "C" IL2CPP_METHOD_ATTR void TextureLerper_EndFrame_m3809744284 (TextureLerper_t1948079985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper_EndFrame_m3809744284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	Enumerator_t1175238756  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RenderTexture_t2108887433 * V_2 = NULL;
	Enumerator_t1175238756  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3580962175 * L_0 = __this->get_m_Recycled_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3123268278(L_0, /*hidden argument*/List_1_get_Count_m3123268278_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		List_1_t3580962175 * L_2 = __this->get_m_Recycled_4();
		NullCheck(L_2);
		Enumerator_t1175238756  L_3 = List_1_GetEnumerator_m257972393(L_2, /*hidden argument*/List_1_GetEnumerator_m257972393_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0022:
		{
			RenderTexture_t2108887433 * L_4 = Enumerator_get_Current_m1569019338((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1569019338_RuntimeMethod_var);
			V_0 = L_4;
			RenderTexture_t2108887433 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_0030:
		{
			bool L_6 = Enumerator_MoveNext_m2394901845((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2394901845_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0022;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m292658209((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m292658209_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		List_1_t3580962175 * L_7 = __this->get_m_Recycled_4();
		NullCheck(L_7);
		List_1_Clear_m1346869089(L_7, /*hidden argument*/List_1_Clear_m1346869089_RuntimeMethod_var);
	}

IL_005a:
	{
		List_1_t3580962175 * L_8 = __this->get_m_Actives_5();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m3123268278(L_8, /*hidden argument*/List_1_get_Count_m3123268278_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		List_1_t3580962175 * L_10 = __this->get_m_Actives_5();
		NullCheck(L_10);
		Enumerator_t1175238756  L_11 = List_1_GetEnumerator_m257972393(L_10, /*hidden argument*/List_1_GetEnumerator_m257972393_RuntimeMethod_var);
		V_3 = L_11;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_007c:
		{
			RenderTexture_t2108887433 * L_12 = Enumerator_get_Current_m1569019338((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1569019338_RuntimeMethod_var);
			V_2 = L_12;
			List_1_t3580962175 * L_13 = __this->get_m_Recycled_4();
			RenderTexture_t2108887433 * L_14 = V_2;
			NullCheck(L_13);
			List_1_Add_m1290642862(L_13, L_14, /*hidden argument*/List_1_Add_m1290642862_RuntimeMethod_var);
		}

IL_0090:
		{
			bool L_15 = Enumerator_MoveNext_m2394901845((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2394901845_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_007c;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m292658209((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m292658209_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		List_1_t3580962175 * L_16 = __this->get_m_Actives_5();
		NullCheck(L_16);
		List_1_Clear_m1346869089(L_16, /*hidden argument*/List_1_Clear_m1346869089_RuntimeMethod_var);
	}

IL_00ba:
	{
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * TextureLerper_Get_m1923166400 (TextureLerper_t1948079985 * __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper_Get_m1923166400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_t2108887433 * V_3 = NULL;
	int32_t V_4 = 0;
	RenderTexture_t2108887433 * V_5 = NULL;
	int32_t G_B13_0 = 0;
	{
		V_0 = (RenderTexture_t2108887433 *)NULL;
		List_1_t3580962175 * L_0 = __this->get_m_Recycled_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3123268278(L_0, /*hidden argument*/List_1_get_Count_m3123268278_RuntimeMethod_var);
		V_2 = L_1;
		V_1 = 0;
		goto IL_006b;
	}

IL_0015:
	{
		List_1_t3580962175 * L_2 = __this->get_m_Recycled_4();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RenderTexture_t2108887433 * L_4 = List_1_get_Item_m2851784777(L_2, L_3, /*hidden argument*/List_1_get_Item_m2851784777_RuntimeMethod_var);
		V_3 = L_4;
		RenderTexture_t2108887433 * L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = ___w1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_t2108887433 * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		int32_t L_10 = ___h2;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_t2108887433 * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = RenderTexture_get_volumeDepth_m4071882760(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___d3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_t2108887433 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_format_m3846871418(L_14, /*hidden argument*/NULL);
		int32_t L_16 = ___format0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_t2108887433 * L_17 = V_3;
		NullCheck(L_17);
		bool L_18 = RenderTexture_get_enableRandomWrite_m2579136497(L_17, /*hidden argument*/NULL);
		bool L_19 = ___enableRandomWrite4;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_t2108887433 * L_20 = V_3;
		V_0 = L_20;
		goto IL_0072;
	}

IL_0067:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0015;
		}
	}

IL_0072:
	{
		RenderTexture_t2108887433 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = ___d3;
		if ((((int32_t)L_26) <= ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		G_B13_0 = 3;
		goto IL_008d;
	}

IL_008c:
	{
		G_B13_0 = 2;
	}

IL_008d:
	{
		V_4 = G_B13_0;
		int32_t L_27 = ___w1;
		int32_t L_28 = ___h2;
		int32_t L_29 = ___d3;
		int32_t L_30 = ___format0;
		RenderTexture_t2108887433 * L_31 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_31, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		RenderTexture_t2108887433 * L_32 = V_5;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, L_32, L_33);
		RenderTexture_t2108887433 * L_34 = V_5;
		NullCheck(L_34);
		Texture_set_filterMode_m3078068058(L_34, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_35 = V_5;
		NullCheck(L_35);
		Texture_set_wrapMode_m587872754(L_35, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_36 = V_5;
		NullCheck(L_36);
		Texture_set_anisoLevel_m4149907611(L_36, 0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_37 = V_5;
		int32_t L_38 = ___d3;
		NullCheck(L_37);
		RenderTexture_set_volumeDepth_m3586428292(L_37, L_38, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_39 = V_5;
		bool L_40 = ___enableRandomWrite4;
		NullCheck(L_39);
		RenderTexture_set_enableRandomWrite_m2404509411(L_39, L_40, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_41 = V_5;
		V_0 = L_41;
		RenderTexture_t2108887433 * L_42 = V_0;
		NullCheck(L_42);
		RenderTexture_Create_m2861863713(L_42, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00dd:
	{
		List_1_t3580962175 * L_43 = __this->get_m_Recycled_4();
		int32_t L_44 = V_1;
		NullCheck(L_43);
		List_1_RemoveAt_m4210299999(L_43, L_44, /*hidden argument*/List_1_RemoveAt_m4210299999_RuntimeMethod_var);
	}

IL_00e9:
	{
		List_1_t3580962175 * L_45 = __this->get_m_Actives_5();
		RenderTexture_t2108887433 * L_46 = V_0;
		NullCheck(L_45);
		List_1_Add_m1290642862(L_45, L_46, /*hidden argument*/List_1_Add_m1290642862_RuntimeMethod_var);
		RenderTexture_t2108887433 * L_47 = V_0;
		return L_47;
	}
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * TextureLerper_Lerp_m107447087 (TextureLerper_t1948079985 * __this, Texture_t3661962703 * ___from0, Texture_t3661962703 * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper_Lerp_m107447087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_t2108887433 * V_1 = NULL;
	int32_t V_2 = 0;
	ComputeShader_t317220254 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	PropertySheet_t3821403501 * V_8 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		Texture_t3661962703 * L_0 = ___from0;
		Texture_t3661962703 * L_1 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		Texture_t3661962703 * L_3 = ___from0;
		return L_3;
	}

IL_000e:
	{
		Texture_t3661962703 * L_4 = ___to1;
		if (((Texture3D_t1884131049 *)IsInstSealed((RuntimeObject*)L_4, Texture3D_t1884131049_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		Texture_t3661962703 * L_5 = ___to1;
		if (!((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_5, RenderTexture_t2108887433_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		Texture_t3661962703 * L_6 = ___to1;
		NullCheck(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_6, RenderTexture_t2108887433_il2cpp_TypeInfo_var)));
		int32_t L_7 = RenderTexture_get_volumeDepth_m4071882760(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_6, RenderTexture_t2108887433_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_7) > ((int32_t)1))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		G_B8_0 = G_B6_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B8_0 = 1;
	}

IL_0038:
	{
		V_0 = (bool)G_B8_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0126;
		}
	}
	{
		Texture_t3661962703 * L_9 = ___to1;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		int32_t L_12 = V_2;
		int32_t L_13 = V_2;
		RenderTexture_t2108887433 * L_14 = TextureLerper_Get_m1923166400(__this, 2, L_11, L_12, L_13, (bool)1, /*hidden argument*/NULL);
		V_1 = L_14;
		PostProcessResources_t1163236733 * L_15 = __this->get_m_Resources_3();
		NullCheck(L_15);
		ComputeShaders_t4172110136 * L_16 = L_15->get_computeShaders_8();
		NullCheck(L_16);
		ComputeShader_t317220254 * L_17 = L_16->get_texture3dLerp_3();
		V_3 = L_17;
		ComputeShader_t317220254 * L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = ComputeShader_FindKernel_m3460470216(L_18, _stringLiteral2823748904, /*hidden argument*/NULL);
		V_4 = L_19;
		CommandBuffer_t2206337031 * L_20 = __this->get_m_Command_1();
		ComputeShader_t317220254 * L_21 = V_3;
		float L_22 = ___t2;
		int32_t L_23 = V_2;
		Vector4_t3319028937  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector4__ctor_m2498754347((&L_24), L_22, (((float)((float)L_23))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		CommandBuffer_SetComputeVectorParam_m2729447044(L_20, L_21, _stringLiteral1674904954, L_24, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_25 = __this->get_m_Command_1();
		ComputeShader_t317220254 * L_26 = V_3;
		int32_t L_27 = V_4;
		RenderTexture_t2108887433 * L_28 = V_1;
		RenderTargetIdentifier_t2079184500  L_29 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_25, L_26, L_27, _stringLiteral3785107850, L_29, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_30 = __this->get_m_Command_1();
		ComputeShader_t317220254 * L_31 = V_3;
		int32_t L_32 = V_4;
		Texture_t3661962703 * L_33 = ___from0;
		RenderTargetIdentifier_t2079184500  L_34 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_30, L_31, L_32, _stringLiteral121297036, L_34, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_35 = __this->get_m_Command_1();
		ComputeShader_t317220254 * L_36 = V_3;
		int32_t L_37 = V_4;
		Texture_t3661962703 * L_38 = ___to1;
		RenderTargetIdentifier_t2079184500  L_39 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_35, L_36, L_37, _stringLiteral2509374944, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_41 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_40)))/(float)(8.0f))), /*hidden argument*/NULL);
		V_5 = L_41;
		int32_t L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		bool L_43 = RuntimeUtilities_get_isAndroidOpenGL_m4225342255(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B10_0 = (((float)((float)L_42)));
		if (!L_43)
		{
			G_B11_0 = (((float)((float)L_42)));
			goto IL_0103;
		}
	}
	{
		G_B12_0 = (2.0f);
		G_B12_1 = G_B10_0;
		goto IL_0108;
	}

IL_0103:
	{
		G_B12_0 = (8.0f);
		G_B12_1 = G_B11_0;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_44 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)G_B12_1/(float)G_B12_0)), /*hidden argument*/NULL);
		V_6 = L_44;
		CommandBuffer_t2206337031 * L_45 = __this->get_m_Command_1();
		ComputeShader_t317220254 * L_46 = V_3;
		int32_t L_47 = V_4;
		int32_t L_48 = V_5;
		int32_t L_49 = V_5;
		int32_t L_50 = V_6;
		NullCheck(L_45);
		CommandBuffer_DispatchCompute_m1540502915(L_45, L_46, L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_51 = V_1;
		return L_51;
	}

IL_0126:
	{
		Texture_t3661962703 * L_52 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t2217912845_il2cpp_TypeInfo_var);
		int32_t L_53 = TextureFormatUtilities_GetUncompressedRenderTextureFormat_m2229513463(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		V_7 = L_53;
		int32_t L_54 = V_7;
		Texture_t3661962703 * L_55 = ___to1;
		NullCheck(L_55);
		int32_t L_56 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		Texture_t3661962703 * L_57 = ___to1;
		NullCheck(L_57);
		int32_t L_58 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_57);
		RenderTexture_t2108887433 * L_59 = TextureLerper_Get_m1923166400(__this, L_54, L_56, L_58, 1, (bool)0, /*hidden argument*/NULL);
		V_1 = L_59;
		PropertySheetFactory_t1490101248 * L_60 = __this->get_m_PropertySheets_2();
		PostProcessResources_t1163236733 * L_61 = __this->get_m_Resources_3();
		NullCheck(L_61);
		Shaders_t2807171077 * L_62 = L_61->get_shaders_7();
		NullCheck(L_62);
		Shader_t4151988712 * L_63 = L_62->get_texture2dLerp_10();
		NullCheck(L_60);
		PropertySheet_t3821403501 * L_64 = PropertySheetFactory_Get_m2969175896(L_60, L_63, /*hidden argument*/NULL);
		V_8 = L_64;
		PropertySheet_t3821403501 * L_65 = V_8;
		NullCheck(L_65);
		MaterialPropertyBlock_t3213117958 * L_66 = PropertySheet_get_properties_m3229239987(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_67 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_To_117();
		Texture_t3661962703 * L_68 = ___to1;
		NullCheck(L_66);
		MaterialPropertyBlock_SetTexture_m3027584768(L_66, L_67, L_68, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_69 = V_8;
		NullCheck(L_69);
		MaterialPropertyBlock_t3213117958 * L_70 = PropertySheet_get_properties_m3229239987(L_69, /*hidden argument*/NULL);
		int32_t L_71 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Interp_118();
		float L_72 = ___t2;
		NullCheck(L_70);
		MaterialPropertyBlock_SetFloat_m3255723079(L_70, L_71, L_72, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_73 = __this->get_m_Command_1();
		Texture_t3661962703 * L_74 = ___from0;
		RenderTargetIdentifier_t2079184500  L_75 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_76 = V_1;
		RenderTargetIdentifier_t2079184500  L_77 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_78 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_73, L_75, L_77, L_78, 0, (bool)0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_79 = V_1;
		return L_79;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::Clear()
extern "C" IL2CPP_METHOD_ATTR void TextureLerper_Clear_m427311549 (TextureLerper_t1948079985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureLerper_Clear_m427311549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	Enumerator_t1175238756  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RenderTexture_t2108887433 * V_2 = NULL;
	Enumerator_t1175238756  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3580962175 * L_0 = __this->get_m_Actives_5();
		NullCheck(L_0);
		Enumerator_t1175238756  L_1 = List_1_GetEnumerator_m257972393(L_0, /*hidden argument*/List_1_GetEnumerator_m257972393_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0011:
		{
			RenderTexture_t2108887433 * L_2 = Enumerator_get_Current_m1569019338((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1569019338_RuntimeMethod_var);
			V_0 = L_2;
			RenderTexture_t2108887433 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m2394901845((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2394901845_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m292658209((Enumerator_t1175238756 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m292658209_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		List_1_t3580962175 * L_5 = __this->get_m_Recycled_4();
		NullCheck(L_5);
		Enumerator_t1175238756  L_6 = List_1_GetEnumerator_m257972393(L_5, /*hidden argument*/List_1_GetEnumerator_m257972393_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_004f:
		{
			RenderTexture_t2108887433 * L_7 = Enumerator_get_Current_m1569019338((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1569019338_RuntimeMethod_var);
			V_2 = L_7;
			RenderTexture_t2108887433 * L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_m3870140013(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_005d:
		{
			bool L_9 = Enumerator_MoveNext_m2394901845((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2394901845_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_004f;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m292658209((Enumerator_t1175238756 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m292658209_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007c:
	{
		List_1_t3580962175 * L_10 = __this->get_m_Actives_5();
		NullCheck(L_10);
		List_1_Clear_m1346869089(L_10, /*hidden argument*/List_1_Clear_m1346869089_RuntimeMethod_var);
		List_1_t3580962175 * L_11 = __this->get_m_Recycled_4();
		NullCheck(L_11);
		List_1_Clear_m1346869089(L_11, /*hidden argument*/List_1_Clear_m1346869089_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextureParameter__ctor_m306418143 (TextureParameter_t4267400415 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureParameter__ctor_m306418143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_defaultState_2(1);
		ParameterOverride_1__ctor_m3290804085(__this, /*hidden argument*/ParameterOverride_1__ctor_m3290804085_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::Interp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
extern "C" IL2CPP_METHOD_ATTR void TextureParameter_Interp_m219523800 (TextureParameter_t4267400415 * __this, Texture_t3661962703 * ___from0, Texture_t3661962703 * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureParameter_Interp_m219523800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	Texture3D_t1884131049 * G_B26_0 = NULL;
	Texture3D_t1884131049 * G_B30_0 = NULL;
	Texture3D_t1884131049 * G_B34_0 = NULL;
	int32_t G_B38_0 = 0;
	{
		Texture_t3661962703 * L_0 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Texture_t3661962703 * L_2 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		((ParameterOverride_1_t1642347714 *)__this)->set_value_1((Texture_t3661962703 *)NULL);
		return;
	}

IL_0020:
	{
		Texture_t3661962703 * L_4 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Texture_t3661962703 * L_6 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		TextureLerper_t1948079985 * L_8 = TextureLerper_get_instance_m4196735956(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t3661962703 * L_9 = ___from0;
		Texture_t3661962703 * L_10 = ___to1;
		float L_11 = ___t2;
		NullCheck(L_8);
		Texture_t3661962703 * L_12 = TextureLerper_Lerp_m107447087(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		((ParameterOverride_1_t1642347714 *)__this)->set_value_1(L_12);
		return;
	}

IL_004c:
	{
		V_1 = (bool)0;
		Texture_t3661962703 * L_13 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		Texture_t3661962703 * L_15 = ___to1;
		if (((Texture3D_t1884131049 *)IsInstSealed((RuntimeObject*)L_15, Texture3D_t1884131049_il2cpp_TypeInfo_var)))
		{
			goto IL_0083;
		}
	}
	{
		Texture_t3661962703 * L_16 = ___to1;
		if (!((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_16, RenderTexture_t2108887433_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		Texture_t3661962703 * L_17 = ___to1;
		NullCheck(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_17, RenderTexture_t2108887433_il2cpp_TypeInfo_var)));
		int32_t L_18 = RenderTexture_get_volumeDepth_m4071882760(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_17, RenderTexture_t2108887433_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_18) > ((int32_t)1))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B11_0 = 0;
	}

IL_0081:
	{
		G_B13_0 = G_B11_0;
		goto IL_0084;
	}

IL_0083:
	{
		G_B13_0 = 1;
	}

IL_0084:
	{
		V_1 = (bool)G_B13_0;
		goto IL_00b5;
	}

IL_008a:
	{
		Texture_t3661962703 * L_19 = ___from0;
		if (((Texture3D_t1884131049 *)IsInstSealed((RuntimeObject*)L_19, Texture3D_t1884131049_il2cpp_TypeInfo_var)))
		{
			goto IL_00b3;
		}
	}
	{
		Texture_t3661962703 * L_20 = ___from0;
		if (!((RenderTexture_t2108887433 *)IsInstClass((RuntimeObject*)L_20, RenderTexture_t2108887433_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		Texture_t3661962703 * L_21 = ___from0;
		NullCheck(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_21, RenderTexture_t2108887433_il2cpp_TypeInfo_var)));
		int32_t L_22 = RenderTexture_get_volumeDepth_m4071882760(((RenderTexture_t2108887433 *)CastclassClass((RuntimeObject*)L_21, RenderTexture_t2108887433_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B18_0 = ((((int32_t)L_22) > ((int32_t)1))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B18_0 = 0;
	}

IL_00b1:
	{
		G_B20_0 = G_B18_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B20_0 = 1;
	}

IL_00b4:
	{
		V_1 = (bool)G_B20_0;
	}

IL_00b5:
	{
		int32_t L_23 = __this->get_defaultState_2();
		V_2 = L_23;
		int32_t L_24 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00d9;
			}
			case 1:
			{
				goto IL_00f4;
			}
			case 2:
			{
				goto IL_010f;
			}
			case 3:
			{
				goto IL_012a;
			}
		}
	}
	{
		goto IL_0154;
	}

IL_00d9:
	{
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_00e9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture3D_t1884131049 * L_26 = RuntimeUtilities_get_blackTexture3D_m2687258546(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B26_0 = L_26;
		goto IL_00ee;
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture2D_t3840446185 * L_27 = RuntimeUtilities_get_blackTexture_m530142159(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B26_0 = ((Texture3D_t1884131049 *)(L_27));
	}

IL_00ee:
	{
		V_0 = G_B26_0;
		goto IL_015b;
	}

IL_00f4:
	{
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0104;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture3D_t1884131049 * L_29 = RuntimeUtilities_get_whiteTexture3D_m2474358765(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B30_0 = L_29;
		goto IL_0109;
	}

IL_0104:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture2D_t3840446185 * L_30 = RuntimeUtilities_get_whiteTexture_m1062041121(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B30_0 = ((Texture3D_t1884131049 *)(L_30));
	}

IL_0109:
	{
		V_0 = G_B30_0;
		goto IL_015b;
	}

IL_010f:
	{
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture3D_t1884131049 * L_32 = RuntimeUtilities_get_transparentTexture3D_m1537991332(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B34_0 = L_32;
		goto IL_0124;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture2D_t3840446185 * L_33 = RuntimeUtilities_get_transparentTexture_m1937899612(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B34_0 = ((Texture3D_t1884131049 *)(L_33));
	}

IL_0124:
	{
		V_0 = G_B34_0;
		goto IL_015b;
	}

IL_012a:
	{
		Texture_t3661962703 * L_34 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0141;
		}
	}
	{
		Texture_t3661962703 * L_36 = ___from0;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
		G_B38_0 = L_37;
		goto IL_0147;
	}

IL_0141:
	{
		Texture_t3661962703 * L_38 = ___to1;
		NullCheck(L_38);
		int32_t L_39 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_38);
		G_B38_0 = L_39;
	}

IL_0147:
	{
		V_3 = G_B38_0;
		int32_t L_40 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		Texture2D_t3840446185 * L_41 = RuntimeUtilities_GetLutStrip_m2974621249(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		goto IL_015b;
	}

IL_0154:
	{
		V_0 = (Texture_t3661962703 *)NULL;
		goto IL_015b;
	}

IL_015b:
	{
		Texture_t3661962703 * L_42 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_42, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_016a;
		}
	}
	{
		Texture_t3661962703 * L_44 = V_0;
		___from0 = L_44;
	}

IL_016a:
	{
		Texture_t3661962703 * L_45 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_45, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0179;
		}
	}
	{
		Texture_t3661962703 * L_47 = V_0;
		___to1 = L_47;
	}

IL_0179:
	{
		Texture_t3661962703 * L_48 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_49 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_48, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0191;
		}
	}
	{
		Texture_t3661962703 * L_50 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_51 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_50, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_019b;
		}
	}

IL_0191:
	{
		Texture_t3661962703 * L_52 = ___from0;
		Texture_t3661962703 * L_53 = ___to1;
		float L_54 = ___t2;
		ParameterOverride_1_Interp_m1616255617(__this, L_52, L_53, L_54, /*hidden argument*/ParameterOverride_1_Interp_m1616255617_RuntimeMethod_var);
		return;
	}

IL_019b:
	{
		TextureLerper_t1948079985 * L_55 = TextureLerper_get_instance_m4196735956(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t3661962703 * L_56 = ___from0;
		Texture_t3661962703 * L_57 = ___to1;
		float L_58 = ___t2;
		NullCheck(L_55);
		Texture_t3661962703 * L_59 = TextureLerper_Lerp_m107447087(L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		((ParameterOverride_1_t1642347714 *)__this)->set_value_1(L_59);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.TonemapperParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TonemapperParameter__ctor_m2226531985 (TonemapperParameter_t2646255172 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TonemapperParameter__ctor_m2226531985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m735043315(__this, /*hidden argument*/ParameterOverride_1__ctor_m735043315_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.TrackballAttribute::.ctor(UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode)
extern "C" IL2CPP_METHOD_ATTR void TrackballAttribute__ctor_m3705087096 (TrackballAttribute_t1878300430 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___mode0;
		__this->set_mode_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector2Parameter__ctor_m1650761954 (Vector2Parameter_t1794608574 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Parameter__ctor_m1650761954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m2089496861(__this, /*hidden argument*/ParameterOverride_1__ctor_m2089496861_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::Interp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2Parameter_Interp_m2239114857 (Vector2Parameter_t1794608574 * __this, Vector2_t2156229523  ___from0, Vector2_t2156229523  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = ((ParameterOverride_1_t136614534 *)__this)->get_address_of_value_1();
		float L_1 = (&___from0)->get_x_0();
		float L_2 = (&___to1)->get_x_0();
		float L_3 = (&___from0)->get_x_0();
		float L_4 = ___t2;
		L_0->set_x_0(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), (float)L_4)))));
		Vector2_t2156229523 * L_5 = ((ParameterOverride_1_t136614534 *)__this)->get_address_of_value_1();
		float L_6 = (&___from0)->get_y_1();
		float L_7 = (&___to1)->get_y_1();
		float L_8 = (&___from0)->get_y_1();
		float L_9 = ___t2;
		L_5->set_y_1(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)))));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rendering.PostProcessing.Vector2Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector2Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2Parameter_op_Implicit_m3594044013 (RuntimeObject * __this /* static, unused */, Vector2Parameter_t1794608574 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Parameter_op_Implicit_m3594044013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2Parameter_t1794608574 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = ((ParameterOverride_1_t136614534 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.Vector2Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector2Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector2Parameter_op_Implicit_m2607702286 (RuntimeObject * __this /* static, unused */, Vector2Parameter_t1794608574 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Parameter_op_Implicit_m2607702286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2Parameter_t1794608574 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = ((ParameterOverride_1_t136614534 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_2 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vector3Parameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3Parameter__ctor_m1944386951 (Vector3Parameter_t753307070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Parameter__ctor_m1944386951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m2089495734(__this, /*hidden argument*/ParameterOverride_1__ctor_m2089495734_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector3Parameter::Interp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3Parameter_Interp_m3379389561 (Vector3Parameter_t753307070 * __this, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464 * L_0 = ((ParameterOverride_1_t1702698475 *)__this)->get_address_of_value_1();
		float L_1 = (&___from0)->get_x_2();
		float L_2 = (&___to1)->get_x_2();
		float L_3 = (&___from0)->get_x_2();
		float L_4 = ___t2;
		L_0->set_x_2(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), (float)L_4)))));
		Vector3_t3722313464 * L_5 = ((ParameterOverride_1_t1702698475 *)__this)->get_address_of_value_1();
		float L_6 = (&___from0)->get_y_3();
		float L_7 = (&___to1)->get_y_3();
		float L_8 = (&___from0)->get_y_3();
		float L_9 = ___t2;
		L_5->set_y_3(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)))));
		Vector3_t3722313464 * L_10 = ((ParameterOverride_1_t1702698475 *)__this)->get_address_of_value_1();
		float L_11 = (&___from0)->get_z_4();
		float L_12 = (&___to1)->get_z_4();
		float L_13 = (&___from0)->get_z_4();
		float L_14 = ___t2;
		L_10->set_z_4(((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)), (float)L_14)))));
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.Vector3Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector3Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector3Parameter_op_Implicit_m2842825481 (RuntimeObject * __this /* static, unused */, Vector3Parameter_t753307070 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Parameter_op_Implicit_m2842825481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3Parameter_t753307070 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = ((ParameterOverride_1_t1702698475 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.Vector3Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector3Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector3Parameter_op_Implicit_m2102844031 (RuntimeObject * __this /* static, unused */, Vector3Parameter_t753307070 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Parameter_op_Implicit_m2102844031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3Parameter_t753307070 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = ((ParameterOverride_1_t1702698475 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_2 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vector4Parameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector4Parameter__ctor_m1943216604 (Vector4Parameter_t1505856958 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Parameter__ctor_m1943216604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m2089498935(__this, /*hidden argument*/ParameterOverride_1__ctor_m2089498935_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector4Parameter::Interp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4Parameter_Interp_m1794268244 (Vector4Parameter_t1505856958 * __this, Vector4_t3319028937  ___from0, Vector4_t3319028937  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		Vector4_t3319028937 * L_0 = ((ParameterOverride_1_t1299413948 *)__this)->get_address_of_value_1();
		float L_1 = (&___from0)->get_x_1();
		float L_2 = (&___to1)->get_x_1();
		float L_3 = (&___from0)->get_x_1();
		float L_4 = ___t2;
		L_0->set_x_1(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), (float)L_4)))));
		Vector4_t3319028937 * L_5 = ((ParameterOverride_1_t1299413948 *)__this)->get_address_of_value_1();
		float L_6 = (&___from0)->get_y_2();
		float L_7 = (&___to1)->get_y_2();
		float L_8 = (&___from0)->get_y_2();
		float L_9 = ___t2;
		L_5->set_y_2(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)))));
		Vector4_t3319028937 * L_10 = ((ParameterOverride_1_t1299413948 *)__this)->get_address_of_value_1();
		float L_11 = (&___from0)->get_z_3();
		float L_12 = (&___to1)->get_z_3();
		float L_13 = (&___from0)->get_z_3();
		float L_14 = ___t2;
		L_10->set_z_3(((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)), (float)L_14)))));
		Vector4_t3319028937 * L_15 = ((ParameterOverride_1_t1299413948 *)__this)->get_address_of_value_1();
		float L_16 = (&___from0)->get_w_4();
		float L_17 = (&___to1)->get_w_4();
		float L_18 = (&___from0)->get_w_4();
		float L_19 = ___t2;
		L_15->set_w_4(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)), (float)L_19)))));
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.Vector4Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector4Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector4Parameter_op_Implicit_m173107943 (RuntimeObject * __this /* static, unused */, Vector4Parameter_t1505856958 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Parameter_op_Implicit_m173107943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4Parameter_t1505856958 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = ((ParameterOverride_1_t1299413948 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector4_op_Implicit_m3335148350(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Rendering.PostProcessing.Vector4Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector4Parameter)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector4Parameter_op_Implicit_m3407647676 (RuntimeObject * __this /* static, unused */, Vector4Parameter_t1505856958 * ___prop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Parameter_op_Implicit_m3407647676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4Parameter_t1505856958 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = ((ParameterOverride_1_t1299413948 *)L_0)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector4_op_Implicit_m1158564884(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorscopeMonitor__ctor_m2820560688 (VectorscopeMonitor_t2083911122 * __this, const RuntimeMethod* method)
{
	{
		__this->set_size_2(((int32_t)256));
		__this->set_exposure_3((0.12f));
		Monitor__ctor_m2606995334(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void VectorscopeMonitor_OnDisable_m2718338361 (VectorscopeMonitor_t2083911122 * __this, const RuntimeMethod* method)
{
	{
		Monitor_OnDisable_m2833492000(__this, /*hidden argument*/NULL);
		ComputeBuffer_t1033194329 * L_0 = __this->get_m_Data_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ComputeBuffer_t1033194329 * L_1 = __this->get_m_Data_4();
		NullCheck(L_1);
		ComputeBuffer_Release_m899244412(L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_Data_4((ComputeBuffer_t1033194329 *)NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::NeedsHalfRes()
extern "C" IL2CPP_METHOD_ATTR bool VectorscopeMonitor_NeedsHalfRes_m4190049234 (VectorscopeMonitor_t2083911122 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::ShaderResourcesAvailable(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR bool VectorscopeMonitor_ShaderResourcesAvailable_m996270793 (VectorscopeMonitor_t2083911122 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorscopeMonitor_ShaderResourcesAvailable_m996270793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PostProcessResources_t1163236733 * L_1 = PostProcessRenderContext_get_resources_m2276304934(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ComputeShaders_t4172110136 * L_2 = L_1->get_computeShaders_8();
		NullCheck(L_2);
		ComputeShader_t317220254 * L_3 = L_2->get_vectorscope_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void VectorscopeMonitor_Render_m1839211803 (VectorscopeMonitor_t2083911122 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorscopeMonitor_Render_m1839211803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ComputeShader_t317220254 * V_1 = NULL;
	CommandBuffer_t2206337031 * V_2 = NULL;
	Vector4_t3319028937  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	PropertySheet_t3821403501 * V_5 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Vector4_t3319028937 * G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	Vector4_t3319028937 * G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	float G_B7_3 = 0.0f;
	Vector4_t3319028937 * G_B7_4 = NULL;
	{
		int32_t L_0 = __this->get_size_2();
		int32_t L_1 = __this->get_size_2();
		Monitor_CheckOutput_m878144460(__this, L_0, L_1, /*hidden argument*/NULL);
		float L_2 = __this->get_exposure_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), L_2, /*hidden argument*/NULL);
		__this->set_exposure_3(L_3);
		int32_t L_4 = __this->get_size_2();
		int32_t L_5 = __this->get_size_2();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5));
		ComputeBuffer_t1033194329 * L_6 = __this->get_m_Data_4();
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_7 = V_0;
		ComputeBuffer_t1033194329 * L_8 = (ComputeBuffer_t1033194329 *)il2cpp_codegen_object_new(ComputeBuffer_t1033194329_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m2741670761(L_8, L_7, 4, /*hidden argument*/NULL);
		__this->set_m_Data_4(L_8);
		goto IL_007c;
	}

IL_0053:
	{
		ComputeBuffer_t1033194329 * L_9 = __this->get_m_Data_4();
		NullCheck(L_9);
		int32_t L_10 = ComputeBuffer_get_count_m2259804836(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_007c;
		}
	}
	{
		ComputeBuffer_t1033194329 * L_12 = __this->get_m_Data_4();
		NullCheck(L_12);
		ComputeBuffer_Release_m899244412(L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		ComputeBuffer_t1033194329 * L_14 = (ComputeBuffer_t1033194329 *)il2cpp_codegen_object_new(ComputeBuffer_t1033194329_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m2741670761(L_14, L_13, 4, /*hidden argument*/NULL);
		__this->set_m_Data_4(L_14);
	}

IL_007c:
	{
		PostProcessRenderContext_t597611190 * L_15 = ___context0;
		NullCheck(L_15);
		PostProcessResources_t1163236733 * L_16 = PostProcessRenderContext_get_resources_m2276304934(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		ComputeShaders_t4172110136 * L_17 = L_16->get_computeShaders_8();
		NullCheck(L_17);
		ComputeShader_t317220254 * L_18 = L_17->get_vectorscope_6();
		V_1 = L_18;
		PostProcessRenderContext_t597611190 * L_19 = ___context0;
		NullCheck(L_19);
		CommandBuffer_t2206337031 * L_20 = PostProcessRenderContext_get_command_m1157578430(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		CommandBuffer_t2206337031 * L_21 = V_2;
		NullCheck(L_21);
		CommandBuffer_BeginSample_m204508461(L_21, _stringLiteral1512669492, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_22 = ___context0;
		NullCheck(L_22);
		int32_t L_23 = PostProcessRenderContext_get_width_m2958072728(L_22, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25 = PostProcessRenderContext_get_height_m3501755701(L_24, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_size_2();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		bool L_27 = RuntimeUtilities_get_isLinearColorSpace_m3438273647(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = (((float)((float)L_26)));
		G_B5_1 = (((float)((float)((int32_t)((int32_t)L_25/(int32_t)2)))));
		G_B5_2 = (((float)((float)((int32_t)((int32_t)L_23/(int32_t)2)))));
		G_B5_3 = (&V_3);
		if (!L_27)
		{
			G_B6_0 = (((float)((float)L_26)));
			G_B6_1 = (((float)((float)((int32_t)((int32_t)L_25/(int32_t)2)))));
			G_B6_2 = (((float)((float)((int32_t)((int32_t)L_23/(int32_t)2)))));
			G_B6_3 = (&V_3);
			goto IL_00ca;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_00cb:
	{
		Vector4__ctor_m2498754347((Vector4_t3319028937 *)G_B7_4, G_B7_3, G_B7_2, G_B7_1, (((float)((float)G_B7_0))), /*hidden argument*/NULL);
		ComputeShader_t317220254 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = ComputeShader_FindKernel_m3460470216(L_28, _stringLiteral1802272080, /*hidden argument*/NULL);
		V_4 = L_29;
		CommandBuffer_t2206337031 * L_30 = V_2;
		ComputeShader_t317220254 * L_31 = V_1;
		int32_t L_32 = V_4;
		ComputeBuffer_t1033194329 * L_33 = __this->get_m_Data_4();
		NullCheck(L_30);
		CommandBuffer_SetComputeBufferParam_m1245524233(L_30, L_31, L_32, _stringLiteral2575753903, L_33, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_34 = V_2;
		ComputeShader_t317220254 * L_35 = V_1;
		Vector4_t3319028937  L_36 = V_3;
		NullCheck(L_34);
		CommandBuffer_SetComputeVectorParam_m2729447044(L_34, L_35, _stringLiteral1674904954, L_36, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_37 = V_2;
		ComputeShader_t317220254 * L_38 = V_1;
		int32_t L_39 = V_4;
		int32_t L_40 = __this->get_size_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_41 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_40)))/(float)(16.0f))), /*hidden argument*/NULL);
		int32_t L_42 = __this->get_size_2();
		int32_t L_43 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_42)))/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_37);
		CommandBuffer_DispatchCompute_m1540502915(L_37, L_38, L_39, L_41, L_43, 1, /*hidden argument*/NULL);
		ComputeShader_t317220254 * L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45 = ComputeShader_FindKernel_m3460470216(L_44, _stringLiteral1830665872, /*hidden argument*/NULL);
		V_4 = L_45;
		CommandBuffer_t2206337031 * L_46 = V_2;
		ComputeShader_t317220254 * L_47 = V_1;
		int32_t L_48 = V_4;
		ComputeBuffer_t1033194329 * L_49 = __this->get_m_Data_4();
		NullCheck(L_46);
		CommandBuffer_SetComputeBufferParam_m1245524233(L_46, L_47, L_48, _stringLiteral2575753903, L_49, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_50 = V_2;
		ComputeShader_t317220254 * L_51 = V_1;
		int32_t L_52 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_53 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_HalfResFinalCopy_119();
		RenderTargetIdentifier_t2079184500  L_54 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_50, L_51, L_52, _stringLiteral3736738307, L_54, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_55 = V_2;
		ComputeShader_t317220254 * L_56 = V_1;
		int32_t L_57 = V_4;
		float L_58 = (&V_3)->get_x_1();
		int32_t L_59 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)L_58/(float)(16.0f))), /*hidden argument*/NULL);
		float L_60 = (&V_3)->get_y_2();
		int32_t L_61 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)L_60/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_55);
		CommandBuffer_DispatchCompute_m1540502915(L_55, L_56, L_57, L_59, L_61, 1, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_62 = ___context0;
		NullCheck(L_62);
		PropertySheetFactory_t1490101248 * L_63 = PostProcessRenderContext_get_propertySheets_m1819469502(L_62, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_64 = ___context0;
		NullCheck(L_64);
		PostProcessResources_t1163236733 * L_65 = PostProcessRenderContext_get_resources_m2276304934(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Shaders_t2807171077 * L_66 = L_65->get_shaders_7();
		NullCheck(L_66);
		Shader_t4151988712 * L_67 = L_66->get_vectorscope_16();
		NullCheck(L_63);
		PropertySheet_t3821403501 * L_68 = PropertySheetFactory_Get_m2969175896(L_63, L_67, /*hidden argument*/NULL);
		V_5 = L_68;
		PropertySheet_t3821403501 * L_69 = V_5;
		NullCheck(L_69);
		MaterialPropertyBlock_t3213117958 * L_70 = PropertySheet_get_properties_m3229239987(L_69, /*hidden argument*/NULL);
		int32_t L_71 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Params_65();
		int32_t L_72 = __this->get_size_2();
		int32_t L_73 = __this->get_size_2();
		float L_74 = __this->get_exposure_3();
		Vector4_t3319028937  L_75;
		memset(&L_75, 0, sizeof(L_75));
		Vector4__ctor_m2498754347((&L_75), (((float)((float)L_72))), (((float)((float)L_73))), L_74, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_70);
		MaterialPropertyBlock_SetVector_m2604168798(L_70, L_71, L_75, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_76 = V_5;
		NullCheck(L_76);
		MaterialPropertyBlock_t3213117958 * L_77 = PropertySheet_get_properties_m3229239987(L_76, /*hidden argument*/NULL);
		int32_t L_78 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_VectorscopeBuffer_122();
		ComputeBuffer_t1033194329 * L_79 = __this->get_m_Data_4();
		NullCheck(L_77);
		MaterialPropertyBlock_SetBuffer_m476945857(L_77, L_78, L_79, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_80 = V_2;
		RenderTargetIdentifier_t2079184500  L_81 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_82 = Monitor_get_output_m2227513525(__this, /*hidden argument*/NULL);
		RenderTargetIdentifier_t2079184500  L_83 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_84 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_80, L_81, L_83, L_84, 0, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_85 = V_2;
		NullCheck(L_85);
		CommandBuffer_EndSample_m536251891(L_85, _stringLiteral1512669492, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vignette::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vignette__ctor_m2773660694 (Vignette_t2084058635 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vignette__ctor_m2773660694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VignetteModeParameter_t1229959487 * V_0 = NULL;
	ColorParameter_t2998827320 * V_1 = NULL;
	Vector2Parameter_t1794608574 * V_2 = NULL;
	FloatParameter_t1840207740 * V_3 = NULL;
	BoolParameter_t2299103272 * V_4 = NULL;
	TextureParameter_t4267400415 * V_5 = NULL;
	{
		VignetteModeParameter_t1229959487 * L_0 = (VignetteModeParameter_t1229959487 *)il2cpp_codegen_object_new(VignetteModeParameter_t1229959487_il2cpp_TypeInfo_var);
		VignetteModeParameter__ctor_m3769796975(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		VignetteModeParameter_t1229959487 * L_1 = V_0;
		NullCheck(L_1);
		((ParameterOverride_1_t3368882051 *)L_1)->set_value_1(0);
		VignetteModeParameter_t1229959487 * L_2 = V_0;
		__this->set_mode_9(L_2);
		ColorParameter_t2998827320 * L_3 = (ColorParameter_t2998827320 *)il2cpp_codegen_object_new(ColorParameter_t2998827320_il2cpp_TypeInfo_var);
		ColorParameter__ctor_m4202280825(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		ColorParameter_t2998827320 * L_4 = V_1;
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		((ParameterOverride_1_t536071335 *)L_4)->set_value_1(L_5);
		ColorParameter_t2998827320 * L_6 = V_1;
		__this->set_color_10(L_6);
		Vector2Parameter_t1794608574 * L_7 = (Vector2Parameter_t1794608574 *)il2cpp_codegen_object_new(Vector2Parameter_t1794608574_il2cpp_TypeInfo_var);
		Vector2Parameter__ctor_m1650761954(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector2Parameter_t1794608574 * L_8 = V_2;
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_8);
		((ParameterOverride_1_t136614534 *)L_8)->set_value_1(L_9);
		Vector2Parameter_t1794608574 * L_10 = V_2;
		__this->set_center_11(L_10);
		FloatParameter_t1840207740 * L_11 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_11, /*hidden argument*/NULL);
		V_3 = L_11;
		FloatParameter_t1840207740 * L_12 = V_3;
		NullCheck(L_12);
		((ParameterOverride_1_t3672619081 *)L_12)->set_value_1((0.0f));
		FloatParameter_t1840207740 * L_13 = V_3;
		__this->set_intensity_12(L_13);
		FloatParameter_t1840207740 * L_14 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_14, /*hidden argument*/NULL);
		V_3 = L_14;
		FloatParameter_t1840207740 * L_15 = V_3;
		NullCheck(L_15);
		((ParameterOverride_1_t3672619081 *)L_15)->set_value_1((0.2f));
		FloatParameter_t1840207740 * L_16 = V_3;
		__this->set_smoothness_13(L_16);
		FloatParameter_t1840207740 * L_17 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		FloatParameter_t1840207740 * L_18 = V_3;
		NullCheck(L_18);
		((ParameterOverride_1_t3672619081 *)L_18)->set_value_1((1.0f));
		FloatParameter_t1840207740 * L_19 = V_3;
		__this->set_roundness_14(L_19);
		BoolParameter_t2299103272 * L_20 = (BoolParameter_t2299103272 *)il2cpp_codegen_object_new(BoolParameter_t2299103272_il2cpp_TypeInfo_var);
		BoolParameter__ctor_m3463290174(L_20, /*hidden argument*/NULL);
		V_4 = L_20;
		BoolParameter_t2299103272 * L_21 = V_4;
		NullCheck(L_21);
		((ParameterOverride_1_t2372640272 *)L_21)->set_value_1((bool)0);
		BoolParameter_t2299103272 * L_22 = V_4;
		__this->set_rounded_15(L_22);
		TextureParameter_t4267400415 * L_23 = (TextureParameter_t4267400415 *)il2cpp_codegen_object_new(TextureParameter_t4267400415_il2cpp_TypeInfo_var);
		TextureParameter__ctor_m306418143(L_23, /*hidden argument*/NULL);
		V_5 = L_23;
		TextureParameter_t4267400415 * L_24 = V_5;
		NullCheck(L_24);
		((ParameterOverride_1_t1642347714 *)L_24)->set_value_1((Texture_t3661962703 *)NULL);
		TextureParameter_t4267400415 * L_25 = V_5;
		__this->set_mask_16(L_25);
		FloatParameter_t1840207740 * L_26 = (FloatParameter_t1840207740 *)il2cpp_codegen_object_new(FloatParameter_t1840207740_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m4169378919(L_26, /*hidden argument*/NULL);
		V_3 = L_26;
		FloatParameter_t1840207740 * L_27 = V_3;
		NullCheck(L_27);
		((ParameterOverride_1_t3672619081 *)L_27)->set_value_1((1.0f));
		FloatParameter_t1840207740 * L_28 = V_3;
		__this->set_opacity_17(L_28);
		PostProcessEffectSettings__ctor_m2519160958(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.Vignette::IsEnabledAndSupported(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR bool Vignette_IsEnabledAndSupported_m3952113681 (Vignette_t2084058635 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vignette_IsEnabledAndSupported_m3952113681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	{
		BoolParameter_t2299103272 * L_0 = ((PostProcessEffectSettings_t1672565614 *)__this)->get_enabled_5();
		NullCheck(L_0);
		bool L_1 = ((ParameterOverride_1_t2372640272 *)L_0)->get_value_1();
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		VignetteModeParameter_t1229959487 * L_2 = __this->get_mode_9();
		NullCheck(L_2);
		int32_t L_3 = ((ParameterOverride_1_t3368882051 *)L_2)->get_value_1();
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		FloatParameter_t1840207740 * L_4 = __this->get_intensity_12();
		NullCheck(L_4);
		float L_5 = ((ParameterOverride_1_t3672619081 *)L_4)->get_value_1();
		if ((((float)L_5) > ((float)(0.0f))))
		{
			goto IL_0071;
		}
	}

IL_0035:
	{
		VignetteModeParameter_t1229959487 * L_6 = __this->get_mode_9();
		NullCheck(L_6);
		int32_t L_7 = ((ParameterOverride_1_t3368882051 *)L_6)->get_value_1();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		FloatParameter_t1840207740 * L_8 = __this->get_opacity_17();
		NullCheck(L_8);
		float L_9 = ((ParameterOverride_1_t3672619081 *)L_8)->get_value_1();
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		TextureParameter_t4267400415 * L_10 = __this->get_mask_16();
		NullCheck(L_10);
		Texture_t3661962703 * L_11 = ((ParameterOverride_1_t1642347714 *)L_10)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 0;
	}

IL_006f:
	{
		G_B9_0 = G_B7_0;
		goto IL_0072;
	}

IL_0071:
	{
		G_B9_0 = 1;
	}

IL_0072:
	{
		G_B11_0 = G_B9_0;
		goto IL_0075;
	}

IL_0074:
	{
		G_B11_0 = 0;
	}

IL_0075:
	{
		return (bool)G_B11_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.VignetteModeParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VignetteModeParameter__ctor_m3769796975 (VignetteModeParameter_t1229959487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteModeParameter__ctor_m3769796975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m200298470(__this, /*hidden argument*/ParameterOverride_1__ctor_m200298470_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.VignetteRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VignetteRenderer__ctor_m2520288354 (VignetteRenderer_t4277974699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteRenderer__ctor_m2520288354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessEffectRenderer_1__ctor_m2131729682(__this, /*hidden argument*/PostProcessEffectRenderer_1__ctor_m2131729682_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VignetteRenderer::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void VignetteRenderer_Render_m833322936 (VignetteRenderer_t4277974699 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteRenderer_Render_m833322936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t3821403501 * V_0 = NULL;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	int32_t G_B3_3 = 0;
	MaterialPropertyBlock_t3213117958 * G_B3_4 = NULL;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	int32_t G_B2_3 = 0;
	MaterialPropertyBlock_t3213117958 * G_B2_4 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	float G_B4_3 = 0.0f;
	int32_t G_B4_4 = 0;
	MaterialPropertyBlock_t3213117958 * G_B4_5 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheet_t3821403501 * L_1 = L_0->get_uberSheet_19();
		V_0 = L_1;
		PropertySheet_t3821403501 * L_2 = V_0;
		NullCheck(L_2);
		PropertySheet_EnableKeyword_m2766312292(L_2, _stringLiteral1307103884, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_3 = V_0;
		NullCheck(L_3);
		MaterialPropertyBlock_t3213117958 * L_4 = PropertySheet_get_properties_m3229239987(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Color_103();
		Vignette_t2084058635 * L_6 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_6);
		ColorParameter_t2998827320 * L_7 = L_6->get_color_10();
		NullCheck(L_7);
		Color_t2555686324  L_8 = ((ParameterOverride_1_t536071335 *)L_7)->get_value_1();
		NullCheck(L_4);
		MaterialPropertyBlock_SetColor_m763383436(L_4, L_5, L_8, /*hidden argument*/NULL);
		Vignette_t2084058635 * L_9 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_9);
		VignetteModeParameter_t1229959487 * L_10 = L_9->get_mode_9();
		int32_t L_11 = ParameterOverride_1_op_Implicit_m2453929980(NULL /*static, unused*/, L_10, /*hidden argument*/ParameterOverride_1_op_Implicit_m2453929980_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_011a;
		}
	}
	{
		PropertySheet_t3821403501 * L_12 = V_0;
		NullCheck(L_12);
		MaterialPropertyBlock_t3213117958 * L_13 = PropertySheet_get_properties_m3229239987(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_14 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Mode_108();
		NullCheck(L_13);
		MaterialPropertyBlock_SetFloat_m3255723079(L_13, L_14, (0.0f), /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_15 = V_0;
		NullCheck(L_15);
		MaterialPropertyBlock_t3213117958 * L_16 = PropertySheet_get_properties_m3229239987(L_15, /*hidden argument*/NULL);
		int32_t L_17 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Center_104();
		Vignette_t2084058635 * L_18 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_18);
		Vector2Parameter_t1794608574 * L_19 = L_18->get_center_11();
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = ((ParameterOverride_1_t136614534 *)L_19)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_21 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		MaterialPropertyBlock_SetVector_m2604168798(L_16, L_17, L_21, /*hidden argument*/NULL);
		Vignette_t2084058635 * L_22 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_22);
		FloatParameter_t1840207740 * L_23 = L_22->get_roundness_14();
		NullCheck(L_23);
		float L_24 = ((ParameterOverride_1_t3672619081 *)L_23)->get_value_1();
		Vignette_t2084058635 * L_25 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_25);
		FloatParameter_t1840207740 * L_26 = L_25->get_roundness_14();
		NullCheck(L_26);
		float L_27 = ((ParameterOverride_1_t3672619081 *)L_26)->get_value_1();
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_24)), (float)(6.0f))), (float)L_27));
		PropertySheet_t3821403501 * L_28 = V_0;
		NullCheck(L_28);
		MaterialPropertyBlock_t3213117958 * L_29 = PropertySheet_get_properties_m3229239987(L_28, /*hidden argument*/NULL);
		int32_t L_30 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Settings_105();
		Vignette_t2084058635 * L_31 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_31);
		FloatParameter_t1840207740 * L_32 = L_31->get_intensity_12();
		NullCheck(L_32);
		float L_33 = ((ParameterOverride_1_t3672619081 *)L_32)->get_value_1();
		Vignette_t2084058635 * L_34 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_34);
		FloatParameter_t1840207740 * L_35 = L_34->get_smoothness_13();
		NullCheck(L_35);
		float L_36 = ((ParameterOverride_1_t3672619081 *)L_35)->get_value_1();
		float L_37 = V_1;
		Vignette_t2084058635 * L_38 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_38);
		BoolParameter_t2299103272 * L_39 = L_38->get_rounded_15();
		NullCheck(L_39);
		bool L_40 = ((ParameterOverride_1_t2372640272 *)L_39)->get_value_1();
		G_B2_0 = L_37;
		G_B2_1 = ((float)il2cpp_codegen_multiply((float)L_36, (float)(5.0f)));
		G_B2_2 = ((float)il2cpp_codegen_multiply((float)L_33, (float)(3.0f)));
		G_B2_3 = L_30;
		G_B2_4 = L_29;
		if (!L_40)
		{
			G_B3_0 = L_37;
			G_B3_1 = ((float)il2cpp_codegen_multiply((float)L_36, (float)(5.0f)));
			G_B3_2 = ((float)il2cpp_codegen_multiply((float)L_33, (float)(3.0f)));
			G_B3_3 = L_30;
			G_B3_4 = L_29;
			goto IL_0106;
		}
	}
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		goto IL_010b;
	}

IL_0106:
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
	}

IL_010b:
	{
		Vector4_t3319028937  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector4__ctor_m2498754347((&L_41), G_B4_3, G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_5);
		MaterialPropertyBlock_SetVector_m2604168798(G_B4_5, G_B4_4, L_41, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_011a:
	{
		PropertySheet_t3821403501 * L_42 = V_0;
		NullCheck(L_42);
		MaterialPropertyBlock_t3213117958 * L_43 = PropertySheet_get_properties_m3229239987(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_44 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Mode_108();
		NullCheck(L_43);
		MaterialPropertyBlock_SetFloat_m3255723079(L_43, L_44, (1.0f), /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_45 = V_0;
		NullCheck(L_45);
		MaterialPropertyBlock_t3213117958 * L_46 = PropertySheet_get_properties_m3229239987(L_45, /*hidden argument*/NULL);
		int32_t L_47 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Mask_106();
		Vignette_t2084058635 * L_48 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_48);
		TextureParameter_t4267400415 * L_49 = L_48->get_mask_16();
		NullCheck(L_49);
		Texture_t3661962703 * L_50 = ((ParameterOverride_1_t1642347714 *)L_49)->get_value_1();
		NullCheck(L_46);
		MaterialPropertyBlock_SetTexture_m3027584768(L_46, L_47, L_50, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_51 = V_0;
		NullCheck(L_51);
		MaterialPropertyBlock_t3213117958 * L_52 = PropertySheet_get_properties_m3229239987(L_51, /*hidden argument*/NULL);
		int32_t L_53 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Vignette_Opacity_107();
		Vignette_t2084058635 * L_54 = PostProcessEffectRenderer_1_get_settings_m1974241928(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_m1974241928_RuntimeMethod_var);
		NullCheck(L_54);
		FloatParameter_t1840207740 * L_55 = L_54->get_opacity_17();
		NullCheck(L_55);
		float L_56 = ((ParameterOverride_1_t3672619081 *)L_55)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		MaterialPropertyBlock_SetFloat_m3255723079(L_52, L_53, L_57, /*hidden argument*/NULL);
	}

IL_0174:
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
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaveformMonitor__ctor_m315670520 (WaveformMonitor_t2029591948 * __this, const RuntimeMethod* method)
{
	{
		__this->set_exposure_2((0.12f));
		__this->set_height_3(((int32_t)256));
		Monitor__ctor_m2606995334(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void WaveformMonitor_OnDisable_m4247418653 (WaveformMonitor_t2029591948 * __this, const RuntimeMethod* method)
{
	{
		Monitor_OnDisable_m2833492000(__this, /*hidden argument*/NULL);
		ComputeBuffer_t1033194329 * L_0 = __this->get_m_Data_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ComputeBuffer_t1033194329 * L_1 = __this->get_m_Data_4();
		NullCheck(L_1);
		ComputeBuffer_Release_m899244412(L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_Data_4((ComputeBuffer_t1033194329 *)NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.WaveformMonitor::NeedsHalfRes()
extern "C" IL2CPP_METHOD_ATTR bool WaveformMonitor_NeedsHalfRes_m3828176311 (WaveformMonitor_t2029591948 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.WaveformMonitor::ShaderResourcesAvailable(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR bool WaveformMonitor_ShaderResourcesAvailable_m709849121 (WaveformMonitor_t2029591948 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveformMonitor_ShaderResourcesAvailable_m709849121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		PostProcessResources_t1163236733 * L_1 = PostProcessRenderContext_get_resources_m2276304934(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ComputeShaders_t4172110136 * L_2 = L_1->get_computeShaders_8();
		NullCheck(L_2);
		ComputeShader_t317220254 * L_3 = L_2->get_waveform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
extern "C" IL2CPP_METHOD_ATTR void WaveformMonitor_Render_m3177004855 (WaveformMonitor_t2029591948 * __this, PostProcessRenderContext_t597611190 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveformMonitor_Render_m3177004855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ComputeShader_t317220254 * V_3 = NULL;
	CommandBuffer_t2206337031 * V_4 = NULL;
	Vector4_t3319028937  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	PropertySheet_t3821403501 * V_7 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector4_t3319028937 * G_B6_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Vector4_t3319028937 * G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	Vector4_t3319028937 * G_B7_3 = NULL;
	{
		PostProcessRenderContext_t597611190 * L_0 = ___context0;
		NullCheck(L_0);
		int32_t L_1 = PostProcessRenderContext_get_width_m2958072728(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_2 = ___context0;
		NullCheck(L_2);
		int32_t L_3 = PostProcessRenderContext_get_height_m3501755701(L_2, /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)(((float)((float)L_1)))/(float)(2.0f)))/(float)((float)((float)(((float)((float)L_3)))/(float)(2.0f)))));
		int32_t L_4 = __this->get_height_3();
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_height_3();
		Monitor_CheckOutput_m878144460(__this, L_7, L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_exposure_2();
		float L_10 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), L_9, /*hidden argument*/NULL);
		__this->set_exposure_2(L_10);
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_height_3();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12));
		ComputeBuffer_t1033194329 * L_13 = __this->get_m_Data_4();
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_2;
		ComputeBuffer_t1033194329 * L_15 = (ComputeBuffer_t1033194329 *)il2cpp_codegen_object_new(ComputeBuffer_t1033194329_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m2741670761(L_15, L_14, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_m_Data_4(L_15);
		goto IL_009f;
	}

IL_0075:
	{
		ComputeBuffer_t1033194329 * L_16 = __this->get_m_Data_4();
		NullCheck(L_16);
		int32_t L_17 = ComputeBuffer_get_count_m2259804836(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_009f;
		}
	}
	{
		ComputeBuffer_t1033194329 * L_19 = __this->get_m_Data_4();
		NullCheck(L_19);
		ComputeBuffer_Release_m899244412(L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		ComputeBuffer_t1033194329 * L_21 = (ComputeBuffer_t1033194329 *)il2cpp_codegen_object_new(ComputeBuffer_t1033194329_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m2741670761(L_21, L_20, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_m_Data_4(L_21);
	}

IL_009f:
	{
		PostProcessRenderContext_t597611190 * L_22 = ___context0;
		NullCheck(L_22);
		PostProcessResources_t1163236733 * L_23 = PostProcessRenderContext_get_resources_m2276304934(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		ComputeShaders_t4172110136 * L_24 = L_23->get_computeShaders_8();
		NullCheck(L_24);
		ComputeShader_t317220254 * L_25 = L_24->get_waveform_5();
		V_3 = L_25;
		PostProcessRenderContext_t597611190 * L_26 = ___context0;
		NullCheck(L_26);
		CommandBuffer_t2206337031 * L_27 = PostProcessRenderContext_get_command_m1157578430(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		CommandBuffer_t2206337031 * L_28 = V_4;
		NullCheck(L_28);
		CommandBuffer_BeginSample_m204508461(L_28, _stringLiteral3081789513, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_height_3();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		bool L_31 = RuntimeUtilities_get_isLinearColorSpace_m3438273647(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = (((float)((float)L_30)));
		G_B5_1 = (((float)((float)L_29)));
		G_B5_2 = (&V_5);
		if (!L_31)
		{
			G_B6_0 = (((float)((float)L_30)));
			G_B6_1 = (((float)((float)L_29)));
			G_B6_2 = (&V_5);
			goto IL_00df;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_00e0;
	}

IL_00df:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_00e0:
	{
		Vector4__ctor_m2498754347((Vector4_t3319028937 *)G_B7_3, G_B7_2, G_B7_1, (((float)((float)G_B7_0))), (0.0f), /*hidden argument*/NULL);
		ComputeShader_t317220254 * L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = ComputeShader_FindKernel_m3460470216(L_32, _stringLiteral1836204922, /*hidden argument*/NULL);
		V_6 = L_33;
		CommandBuffer_t2206337031 * L_34 = V_4;
		ComputeShader_t317220254 * L_35 = V_3;
		int32_t L_36 = V_6;
		ComputeBuffer_t1033194329 * L_37 = __this->get_m_Data_4();
		NullCheck(L_34);
		CommandBuffer_SetComputeBufferParam_m1245524233(L_34, L_35, L_36, _stringLiteral2711297415, L_37, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_38 = V_4;
		ComputeShader_t317220254 * L_39 = V_3;
		Vector4_t3319028937  L_40 = V_5;
		NullCheck(L_38);
		CommandBuffer_SetComputeVectorParam_m2729447044(L_38, L_39, _stringLiteral1674904954, L_40, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_41 = V_4;
		ComputeShader_t317220254 * L_42 = V_3;
		int32_t L_43 = V_6;
		int32_t L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_45 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_44)))/(float)(16.0f))), /*hidden argument*/NULL);
		int32_t L_46 = __this->get_height_3();
		int32_t L_47 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_46)))/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_41);
		CommandBuffer_DispatchCompute_m1540502915(L_41, L_42, L_43, L_45, L_47, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_48 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_t2844105293_il2cpp_TypeInfo_var);
		int32_t L_49 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_WaveformSource_120();
		int32_t L_50 = V_1;
		int32_t L_51 = __this->get_height_3();
		PostProcessRenderContext_t597611190 * L_52 = ___context0;
		NullCheck(L_52);
		int32_t L_53 = PostProcessRenderContext_get_sourceFormat_m478427658(L_52, /*hidden argument*/NULL);
		NullCheck(L_48);
		CommandBuffer_GetTemporaryRT_m2252457381(L_48, L_49, L_50, L_51, 0, 1, L_53, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_54 = V_4;
		int32_t L_55 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_HalfResFinalCopy_119();
		RenderTargetIdentifier_t2079184500  L_56 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		int32_t L_57 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_WaveformSource_120();
		RenderTargetIdentifier_t2079184500  L_58 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_t4060785994_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m1965208853(NULL /*static, unused*/, L_54, L_56, L_58, (bool)0, /*hidden argument*/NULL);
		ComputeShader_t317220254 * L_59 = V_3;
		NullCheck(L_59);
		int32_t L_60 = ComputeShader_FindKernel_m3460470216(L_59, _stringLiteral2235547617, /*hidden argument*/NULL);
		V_6 = L_60;
		CommandBuffer_t2206337031 * L_61 = V_4;
		ComputeShader_t317220254 * L_62 = V_3;
		int32_t L_63 = V_6;
		ComputeBuffer_t1033194329 * L_64 = __this->get_m_Data_4();
		NullCheck(L_61);
		CommandBuffer_SetComputeBufferParam_m1245524233(L_61, L_62, L_63, _stringLiteral2711297415, L_64, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_65 = V_4;
		ComputeShader_t317220254 * L_66 = V_3;
		int32_t L_67 = V_6;
		int32_t L_68 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_WaveformSource_120();
		RenderTargetIdentifier_t2079184500  L_69 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		NullCheck(L_65);
		CommandBuffer_SetComputeTextureParam_m3740663926(L_65, L_66, L_67, _stringLiteral3736738307, L_69, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_70 = V_4;
		ComputeShader_t317220254 * L_71 = V_3;
		Vector4_t3319028937  L_72 = V_5;
		NullCheck(L_70);
		CommandBuffer_SetComputeVectorParam_m2729447044(L_70, L_71, _stringLiteral1674904954, L_72, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_73 = V_4;
		ComputeShader_t317220254 * L_74 = V_3;
		int32_t L_75 = V_6;
		int32_t L_76 = V_1;
		int32_t L_77 = __this->get_height_3();
		int32_t L_78 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_77)))/(float)(256.0f))), /*hidden argument*/NULL);
		NullCheck(L_73);
		CommandBuffer_DispatchCompute_m1540502915(L_73, L_74, L_75, L_76, L_78, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_79 = V_4;
		int32_t L_80 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_WaveformSource_120();
		NullCheck(L_79);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_79, L_80, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_81 = ___context0;
		NullCheck(L_81);
		PropertySheetFactory_t1490101248 * L_82 = PostProcessRenderContext_get_propertySheets_m1819469502(L_81, /*hidden argument*/NULL);
		PostProcessRenderContext_t597611190 * L_83 = ___context0;
		NullCheck(L_83);
		PostProcessResources_t1163236733 * L_84 = PostProcessRenderContext_get_resources_m2276304934(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		Shaders_t2807171077 * L_85 = L_84->get_shaders_7();
		NullCheck(L_85);
		Shader_t4151988712 * L_86 = L_85->get_waveform_15();
		NullCheck(L_82);
		PropertySheet_t3821403501 * L_87 = PropertySheetFactory_Get_m2969175896(L_82, L_86, /*hidden argument*/NULL);
		V_7 = L_87;
		PropertySheet_t3821403501 * L_88 = V_7;
		NullCheck(L_88);
		MaterialPropertyBlock_t3213117958 * L_89 = PropertySheet_get_properties_m3229239987(L_88, /*hidden argument*/NULL);
		int32_t L_90 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_Params_65();
		int32_t L_91 = V_1;
		int32_t L_92 = __this->get_height_3();
		float L_93 = __this->get_exposure_2();
		Vector4_t3319028937  L_94;
		memset(&L_94, 0, sizeof(L_94));
		Vector4__ctor_m2498754347((&L_94), (((float)((float)L_91))), (((float)((float)L_92))), L_93, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_89);
		MaterialPropertyBlock_SetVector_m2604168798(L_89, L_90, L_94, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_95 = V_7;
		NullCheck(L_95);
		MaterialPropertyBlock_t3213117958 * L_96 = PropertySheet_get_properties_m3229239987(L_95, /*hidden argument*/NULL);
		int32_t L_97 = ((ShaderIDs_t2844105293_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t2844105293_il2cpp_TypeInfo_var))->get_WaveformBuffer_121();
		ComputeBuffer_t1033194329 * L_98 = __this->get_m_Data_4();
		NullCheck(L_96);
		MaterialPropertyBlock_SetBuffer_m476945857(L_96, L_97, L_98, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_99 = V_4;
		RenderTargetIdentifier_t2079184500  L_100 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_101 = Monitor_get_output_m2227513525(__this, /*hidden argument*/NULL);
		RenderTargetIdentifier_t2079184500  L_102 = RenderTargetIdentifier_op_Implicit_m3327331520(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		PropertySheet_t3821403501 * L_103 = V_7;
		RuntimeUtilities_BlitFullscreenTriangle_m2329992359(NULL /*static, unused*/, L_99, L_100, L_102, L_103, 0, (bool)0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_104 = V_4;
		NullCheck(L_104);
		CommandBuffer_EndSample_m536251891(L_104, _stringLiteral3081789513, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
