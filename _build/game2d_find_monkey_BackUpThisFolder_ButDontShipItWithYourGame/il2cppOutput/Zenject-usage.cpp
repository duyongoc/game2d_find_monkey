#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>
struct Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79;
// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>
struct IEnumerable_1_t690B1FFF32A181B62E52F2203EF955BC4353D155;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectTypeInfo/InjectMemberInfo>
struct IEnumerable_1_t2FE949E928D4773D8B8BBD8D2C290CAE9279265D;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectTypeInfo/InjectMethodInfo>
struct IEnumerable_1_tCCCA4A9E43F01EC4255470958BD712E14347EAA7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Zenject.InjectableInfo[]
struct InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Zenject.InjectTypeInfo/InjectMemberInfo[]
struct InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0;
// Zenject.InjectTypeInfo/InjectMethodInfo[]
struct InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6;
// JetBrains.Annotations.AspChildControlTypeAttribute
struct AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013;
// JetBrains.Annotations.AspDataFieldAttribute
struct AspDataFieldAttribute_tCA412AD20ADE6674F3013D49FE4D4F92F1B0BBB1;
// JetBrains.Annotations.AspDataFieldsAttribute
struct AspDataFieldsAttribute_t46A02B64B1F99BEDEB97CFAFAD00A82571542269;
// JetBrains.Annotations.AspMethodPropertyAttribute
struct AspMethodPropertyAttribute_t7EE0B987C2D21AC31209F1041DAFC51A3EA2A974;
// JetBrains.Annotations.AspMvcActionAttribute
struct AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724;
// JetBrains.Annotations.AspMvcActionSelectorAttribute
struct AspMvcActionSelectorAttribute_t861AA60A46C4F58BBC6577F670AF50B02F4DAAFD;
// JetBrains.Annotations.AspMvcAreaAttribute
struct AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA;
// JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute
struct AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18;
// JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
struct AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB;
// JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
struct AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373;
// JetBrains.Annotations.AspMvcControllerAttribute
struct AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26;
// JetBrains.Annotations.AspMvcDisplayTemplateAttribute
struct AspMvcDisplayTemplateAttribute_t087FBB8FCFE59CE960F1BC338CB6B890E990BBFF;
// JetBrains.Annotations.AspMvcEditorTemplateAttribute
struct AspMvcEditorTemplateAttribute_tFF0EA553D52ED9B02745AB841376777B897FABA6;
// JetBrains.Annotations.AspMvcMasterAttribute
struct AspMvcMasterAttribute_t262901573DE431A3A2A7DC885915D04A9AD14021;
// JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
struct AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A;
// JetBrains.Annotations.AspMvcModelTypeAttribute
struct AspMvcModelTypeAttribute_tCD23EFD439CEB0518D34F919D8D5BA6DFB514A53;
// JetBrains.Annotations.AspMvcPartialViewAttribute
struct AspMvcPartialViewAttribute_t624C42920D5134593A8085F155201256FE93798E;
// JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
struct AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9;
// JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
struct AspMvcSuppressViewErrorAttribute_t1C9A94BEFC0D5DABB3B2B10261D26AB807DEDB34;
// JetBrains.Annotations.AspMvcTemplateAttribute
struct AspMvcTemplateAttribute_t8C0A47BB4B2B7A41D2321123B28BB2F7588D5D37;
// JetBrains.Annotations.AspMvcViewAttribute
struct AspMvcViewAttribute_t0DF82ACC6C447E44D1CCD2916AD49F1B97228E10;
// JetBrains.Annotations.AspMvcViewComponentAttribute
struct AspMvcViewComponentAttribute_t39762B6D91F39F3BFC4AE94079BC2A2BC910E245;
// JetBrains.Annotations.AspMvcViewComponentViewAttribute
struct AspMvcViewComponentViewAttribute_t81FDB6C5B7D0D119120F707D6F9ABB4C9E13363A;
// JetBrains.Annotations.AspMvcViewLocationFormatAttribute
struct AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA;
// JetBrains.Annotations.AspRequiredAttributeAttribute
struct AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682;
// JetBrains.Annotations.AspTypePropertyAttribute
struct AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9;
// JetBrains.Annotations.AssertionConditionAttribute
struct AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87;
// JetBrains.Annotations.AssertionMethodAttribute
struct AssertionMethodAttribute_tF36423AC02ED3A5DC43D112F6FA1C877A0ED7184;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// JetBrains.Annotations.BaseTypeRequiredAttribute
struct BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// JetBrains.Annotations.CanBeNullAttribute
struct CanBeNullAttribute_tB3BC3663C23EDFA17E47E038A19535F94DB8B4BA;
// JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
struct CannotApplyEqualityOperatorAttribute_tCE365BDFE10B3DFAFC3F3E627123F70C59ACCF23;
// JetBrains.Annotations.CollectionAccessAttribute
struct CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D;
// JetBrains.Annotations.ContractAnnotationAttribute
struct ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// JetBrains.Annotations.HtmlAttributeValueAttribute
struct HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F;
// JetBrains.Annotations.HtmlElementAttributesAttribute
struct HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Zenject.InjectAttribute
struct InjectAttribute_tF5759353EC5C136EE902948477FFB438D69E4EBB;
// Zenject.InjectAttributeBase
struct InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E;
// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tA7F1DE7242D85098C77D480D0CE5FA3F57E23233;
// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_t9EF536470FB58EDB82A0E7CABB386EAAB7362F7E;
// Zenject.InjectTypeInfo
struct InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958;
// Zenject.InjectableInfo
struct InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78;
// JetBrains.Annotations.InstantHandleAttribute
struct InstantHandleAttribute_t2A86DE5A069F3A86091DD187D257BB5430A6AEE7;
// JetBrains.Annotations.InvokerParameterNameAttribute
struct InvokerParameterNameAttribute_t31F8A8B2EA32774ACB8A250006D1ED2A19823C23;
// JetBrains.Annotations.ItemCanBeNullAttribute
struct ItemCanBeNullAttribute_t8ECCB7F972D0D18C085E6C18F6A1DE8AEE4A7257;
// JetBrains.Annotations.ItemNotNullAttribute
struct ItemNotNullAttribute_tAC4E514110FC2AA0F565F4D716C67F6449934927;
// JetBrains.Annotations.LinqTunnelAttribute
struct LinqTunnelAttribute_t6A57FB454716EFCA29D1D85C3EBD7B6C94CA017B;
// JetBrains.Annotations.LocalizationRequiredAttribute
struct LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A;
// JetBrains.Annotations.MacroAttribute
struct MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC;
// JetBrains.Annotations.MeansImplicitUseAttribute
struct MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// JetBrains.Annotations.MustUseReturnValueAttribute
struct MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825;
// JetBrains.Annotations.NoEnumerationAttribute
struct NoEnumerationAttribute_t5C6B39C98BE5872073062CAE5F13C3A7360A1299;
// Zenject.NoReflectionBakingAttribute
struct NoReflectionBakingAttribute_t6778392834AED7BC865F3BA7ECEAAC85D74F85E8;
// JetBrains.Annotations.NoReorderAttribute
struct NoReorderAttribute_tA27C6BCBA173C84F230DDD5EDF3CD276C43E0FD8;
// JetBrains.Annotations.NotNullAttribute
struct NotNullAttribute_t9BCC686A7AF92A17E9A56C4D2F7EEB0C3818FB77;
// JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
struct NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0;
// JetBrains.Annotations.PathReferenceAttribute
struct PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1;
// Zenject.Internal.PreserveAttribute
struct PreserveAttribute_t632995F707753F9308E3B3724BD18252C3A9019D;
// JetBrains.Annotations.ProvidesContextAttribute
struct ProvidesContextAttribute_t5C24F1C0E6A3FFBF35D138AFC160440D33A02EEF;
// JetBrains.Annotations.PublicAPIAttribute
struct PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C;
// JetBrains.Annotations.PureAttribute
struct PureAttribute_t49DFEA451870EAF3284145D6A73AE5C4A9D5AD25;
// JetBrains.Annotations.RazorDirectiveAttribute
struct RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A;
// JetBrains.Annotations.RazorHelperCommonAttribute
struct RazorHelperCommonAttribute_t7F247B12797F0D36D97C41B7697B40CF87A83370;
// JetBrains.Annotations.RazorImportNamespaceAttribute
struct RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC;
// JetBrains.Annotations.RazorInjectionAttribute
struct RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA;
// JetBrains.Annotations.RazorLayoutAttribute
struct RazorLayoutAttribute_tAA771510011EB2B6BE56BB079399DEA175017CA8;
// JetBrains.Annotations.RazorPageBaseTypeAttribute
struct RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92;
// JetBrains.Annotations.RazorSectionAttribute
struct RazorSectionAttribute_t434B53F9844057C929EFDC006DE9484DA6767273;
// JetBrains.Annotations.RazorWriteLiteralMethodAttribute
struct RazorWriteLiteralMethodAttribute_tEF4F3747041F2D545AFE59A1A1AB1938044C3F6C;
// JetBrains.Annotations.RazorWriteMethodAttribute
struct RazorWriteMethodAttribute_t39AD3FB31D9C1D368EBDB286AEA4C00868F57A7D;
// JetBrains.Annotations.RazorWriteMethodParameterAttribute
struct RazorWriteMethodParameterAttribute_t1674A1C95FC64DCBC447653A52FC7CF45F667219;
// JetBrains.Annotations.RegexPatternAttribute
struct RegexPatternAttribute_tAFF95AB373C9905AF75F33A974BC73943967B11F;
// JetBrains.Annotations.SourceTemplateAttribute
struct SourceTemplateAttribute_t3B7D3F96F6D2D5A5599874C901AF4E2ED529CAAD;
// System.String
struct String_t;
// JetBrains.Annotations.StringFormatMethodAttribute
struct StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107;
// JetBrains.Annotations.TerminatesProgramAttribute
struct TerminatesProgramAttribute_t438D7F1E7A59D461A8F3007EB9FA53CA6152EBB6;
// System.Type
struct Type_t;
// JetBrains.Annotations.UsedImplicitlyAttribute
struct UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863;
// JetBrains.Annotations.ValueProviderAttribute
struct ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
struct XamlItemBindingOfItemsControlAttribute_t1EB8E02080DE6CDA71E9E6C447FA8AC4F7B4494B;
// JetBrains.Annotations.XamlItemsControlAttribute
struct XamlItemsControlAttribute_t1E38108EE1CD142F88383A0D5BB820E4DCE47417;
// Zenject.ZenFactoryMethod
struct ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4;
// Zenject.ZenInjectMethod
struct ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9;
// Zenject.ZenMemberSetterMethod
struct ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC;
// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_t3A2692FA1A1C65319C6B86F3CED6D8ECB9E846F2;
// Zenject.InjectTypeInfo/InjectConstructorInfo
struct InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9;
// Zenject.InjectTypeInfo/InjectMemberInfo
struct InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083;
// Zenject.InjectTypeInfo/InjectMethodInfo
struct InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisInjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m6532E2D7DC40CFC3FB3C4CAB5D16849C4D30C2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_mB2B04F691AE52273571E898AB1526D98EB92AFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_m9BB40A785A2735896B28075E80C053E3542A7123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m89D25F8E4FDAB9E45A56D3E3E0164927D7A68C5C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0;
struct InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t79ACD9CF4CF71CCAB3048C9648073E72C3116EAC 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Zenject.InjectTypeInfo
struct InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958  : public RuntimeObject
{
	// System.Type Zenject.InjectTypeInfo::Type
	Type_t* ___Type_0;
	// Zenject.InjectTypeInfo/InjectMethodInfo[] Zenject.InjectTypeInfo::InjectMethods
	InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* ___InjectMethods_1;
	// Zenject.InjectTypeInfo/InjectMemberInfo[] Zenject.InjectTypeInfo::InjectMembers
	InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* ___InjectMembers_2;
	// Zenject.InjectTypeInfo/InjectConstructorInfo Zenject.InjectTypeInfo::InjectConstructor
	InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9* ___InjectConstructor_3;
	// Zenject.InjectTypeInfo Zenject.InjectTypeInfo::<BaseTypeInfo>k__BackingField
	InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* ___U3CBaseTypeInfoU3Ek__BackingField_4;
};

struct InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields
{
	// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> Zenject.InjectTypeInfo::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5;
	// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> Zenject.InjectTypeInfo::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6;
};

// Zenject.InjectableInfo
struct InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78  : public RuntimeObject
{
	// System.Boolean Zenject.InjectableInfo::Optional
	bool ___Optional_0;
	// System.Object Zenject.InjectableInfo::Identifier
	RuntimeObject* ___Identifier_1;
	// Zenject.InjectSources Zenject.InjectableInfo::SourceType
	int32_t ___SourceType_2;
	// System.String Zenject.InjectableInfo::MemberName
	String_t* ___MemberName_3;
	// System.Type Zenject.InjectableInfo::MemberType
	Type_t* ___MemberType_4;
	// System.Object Zenject.InjectableInfo::DefaultValue
	RuntimeObject* ___DefaultValue_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Zenject.InjectTypeInfo/InjectConstructorInfo
struct InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9  : public RuntimeObject
{
	// Zenject.ZenFactoryMethod Zenject.InjectTypeInfo/InjectConstructorInfo::Factory
	ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* ___Factory_0;
	// Zenject.InjectableInfo[] Zenject.InjectTypeInfo/InjectConstructorInfo::Parameters
	InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* ___Parameters_1;
};

// Zenject.InjectTypeInfo/InjectMemberInfo
struct InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083  : public RuntimeObject
{
	// Zenject.ZenMemberSetterMethod Zenject.InjectTypeInfo/InjectMemberInfo::Setter
	ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* ___Setter_0;
	// Zenject.InjectableInfo Zenject.InjectTypeInfo/InjectMemberInfo::Info
	InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* ___Info_1;
};

// Zenject.InjectTypeInfo/InjectMethodInfo
struct InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11  : public RuntimeObject
{
	// System.String Zenject.InjectTypeInfo/InjectMethodInfo::Name
	String_t* ___Name_0;
	// Zenject.ZenInjectMethod Zenject.InjectTypeInfo/InjectMethodInfo::Action
	ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* ___Action_1;
	// Zenject.InjectableInfo[] Zenject.InjectTypeInfo/InjectMethodInfo::Parameters
	InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* ___Parameters_2;
};

// JetBrains.Annotations.AspChildControlTypeAttribute
struct AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspChildControlTypeAttribute::<TagName>k__BackingField
	String_t* ___U3CTagNameU3Ek__BackingField_0;
	// System.Type JetBrains.Annotations.AspChildControlTypeAttribute::<ControlType>k__BackingField
	Type_t* ___U3CControlTypeU3Ek__BackingField_1;
};

// JetBrains.Annotations.AspDataFieldAttribute
struct AspDataFieldAttribute_tCA412AD20ADE6674F3013D49FE4D4F92F1B0BBB1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspDataFieldsAttribute
struct AspDataFieldsAttribute_t46A02B64B1F99BEDEB97CFAFAD00A82571542269  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMethodPropertyAttribute
struct AspMethodPropertyAttribute_t7EE0B987C2D21AC31209F1041DAFC51A3EA2A974  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcActionAttribute
struct AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcActionAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcActionSelectorAttribute
struct AspMvcActionSelectorAttribute_t861AA60A46C4F58BBC6577F670AF50B02F4DAAFD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcAreaAttribute
struct AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcAreaAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute
struct AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
struct AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
struct AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcControllerAttribute
struct AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcControllerAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcDisplayTemplateAttribute
struct AspMvcDisplayTemplateAttribute_t087FBB8FCFE59CE960F1BC338CB6B890E990BBFF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcEditorTemplateAttribute
struct AspMvcEditorTemplateAttribute_tFF0EA553D52ED9B02745AB841376777B897FABA6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcMasterAttribute
struct AspMvcMasterAttribute_t262901573DE431A3A2A7DC885915D04A9AD14021  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
struct AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcModelTypeAttribute
struct AspMvcModelTypeAttribute_tCD23EFD439CEB0518D34F919D8D5BA6DFB514A53  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcPartialViewAttribute
struct AspMvcPartialViewAttribute_t624C42920D5134593A8085F155201256FE93798E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
struct AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
struct AspMvcSuppressViewErrorAttribute_t1C9A94BEFC0D5DABB3B2B10261D26AB807DEDB34  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcTemplateAttribute
struct AspMvcTemplateAttribute_t8C0A47BB4B2B7A41D2321123B28BB2F7588D5D37  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcViewAttribute
struct AspMvcViewAttribute_t0DF82ACC6C447E44D1CCD2916AD49F1B97228E10  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcViewComponentAttribute
struct AspMvcViewComponentAttribute_t39762B6D91F39F3BFC4AE94079BC2A2BC910E245  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcViewComponentViewAttribute
struct AspMvcViewComponentViewAttribute_t81FDB6C5B7D0D119120F707D6F9ABB4C9E13363A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.AspMvcViewLocationFormatAttribute
struct AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspMvcViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspRequiredAttributeAttribute
struct AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.AspRequiredAttributeAttribute::<Attribute>k__BackingField
	String_t* ___U3CAttributeU3Ek__BackingField_0;
};

// JetBrains.Annotations.AspTypePropertyAttribute
struct AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean JetBrains.Annotations.AspTypePropertyAttribute::<CreateConstructorReferences>k__BackingField
	bool ___U3CCreateConstructorReferencesU3Ek__BackingField_0;
};

// JetBrains.Annotations.AssertionConditionAttribute
struct AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// JetBrains.Annotations.AssertionConditionType JetBrains.Annotations.AssertionConditionAttribute::<ConditionType>k__BackingField
	int32_t ___U3CConditionTypeU3Ek__BackingField_0;
};

// JetBrains.Annotations.AssertionMethodAttribute
struct AssertionMethodAttribute_tF36423AC02ED3A5DC43D112F6FA1C877A0ED7184  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.BaseTypeRequiredAttribute
struct BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type JetBrains.Annotations.BaseTypeRequiredAttribute::<BaseType>k__BackingField
	Type_t* ___U3CBaseTypeU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// JetBrains.Annotations.CanBeNullAttribute
struct CanBeNullAttribute_tB3BC3663C23EDFA17E47E038A19535F94DB8B4BA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
struct CannotApplyEqualityOperatorAttribute_tCE365BDFE10B3DFAFC3F3E627123F70C59ACCF23  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.CollectionAccessAttribute
struct CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// JetBrains.Annotations.CollectionAccessType JetBrains.Annotations.CollectionAccessAttribute::<CollectionAccessType>k__BackingField
	int32_t ___U3CCollectionAccessTypeU3Ek__BackingField_0;
};

// JetBrains.Annotations.ContractAnnotationAttribute
struct ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.ContractAnnotationAttribute::<Contract>k__BackingField
	String_t* ___U3CContractU3Ek__BackingField_0;
	// System.Boolean JetBrains.Annotations.ContractAnnotationAttribute::<ForceFullStates>k__BackingField
	bool ___U3CForceFullStatesU3Ek__BackingField_1;
};

// JetBrains.Annotations.HtmlAttributeValueAttribute
struct HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.HtmlAttributeValueAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// JetBrains.Annotations.HtmlElementAttributesAttribute
struct HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.HtmlElementAttributesAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// JetBrains.Annotations.InstantHandleAttribute
struct InstantHandleAttribute_t2A86DE5A069F3A86091DD187D257BB5430A6AEE7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// JetBrains.Annotations.InvokerParameterNameAttribute
struct InvokerParameterNameAttribute_t31F8A8B2EA32774ACB8A250006D1ED2A19823C23  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.ItemCanBeNullAttribute
struct ItemCanBeNullAttribute_t8ECCB7F972D0D18C085E6C18F6A1DE8AEE4A7257  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.ItemNotNullAttribute
struct ItemNotNullAttribute_tAC4E514110FC2AA0F565F4D716C67F6449934927  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.LinqTunnelAttribute
struct LinqTunnelAttribute_t6A57FB454716EFCA29D1D85C3EBD7B6C94CA017B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.LocalizationRequiredAttribute
struct LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean JetBrains.Annotations.LocalizationRequiredAttribute::<Required>k__BackingField
	bool ___U3CRequiredU3Ek__BackingField_0;
};

// JetBrains.Annotations.MacroAttribute
struct MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.MacroAttribute::<Expression>k__BackingField
	String_t* ___U3CExpressionU3Ek__BackingField_0;
	// System.Int32 JetBrains.Annotations.MacroAttribute::<Editable>k__BackingField
	int32_t ___U3CEditableU3Ek__BackingField_1;
	// System.String JetBrains.Annotations.MacroAttribute::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_2;
};

// JetBrains.Annotations.MeansImplicitUseAttribute
struct MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.MeansImplicitUseAttribute::<UseKindFlags>k__BackingField
	int32_t ___U3CUseKindFlagsU3Ek__BackingField_0;
	// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.MeansImplicitUseAttribute::<TargetFlags>k__BackingField
	int32_t ___U3CTargetFlagsU3Ek__BackingField_1;
};

// JetBrains.Annotations.MustUseReturnValueAttribute
struct MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.MustUseReturnValueAttribute::<Justification>k__BackingField
	String_t* ___U3CJustificationU3Ek__BackingField_0;
};

// JetBrains.Annotations.NoEnumerationAttribute
struct NoEnumerationAttribute_t5C6B39C98BE5872073062CAE5F13C3A7360A1299  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Zenject.NoReflectionBakingAttribute
struct NoReflectionBakingAttribute_t6778392834AED7BC865F3BA7ECEAAC85D74F85E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.NoReorderAttribute
struct NoReorderAttribute_tA27C6BCBA173C84F230DDD5EDF3CD276C43E0FD8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.NotNullAttribute
struct NotNullAttribute_t9BCC686A7AF92A17E9A56C4D2F7EEB0C3818FB77  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
struct NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;
};

// JetBrains.Annotations.PathReferenceAttribute
struct PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.PathReferenceAttribute::<BasePath>k__BackingField
	String_t* ___U3CBasePathU3Ek__BackingField_0;
};

// Zenject.Internal.PreserveAttribute
struct PreserveAttribute_t632995F707753F9308E3B3724BD18252C3A9019D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.ProvidesContextAttribute
struct ProvidesContextAttribute_t5C24F1C0E6A3FFBF35D138AFC160440D33A02EEF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.PublicAPIAttribute
struct PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.PublicAPIAttribute::<Comment>k__BackingField
	String_t* ___U3CCommentU3Ek__BackingField_0;
};

// JetBrains.Annotations.PureAttribute
struct PureAttribute_t49DFEA451870EAF3284145D6A73AE5C4A9D5AD25  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorDirectiveAttribute
struct RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.RazorDirectiveAttribute::<Directive>k__BackingField
	String_t* ___U3CDirectiveU3Ek__BackingField_0;
};

// JetBrains.Annotations.RazorHelperCommonAttribute
struct RazorHelperCommonAttribute_t7F247B12797F0D36D97C41B7697B40CF87A83370  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorImportNamespaceAttribute
struct RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.RazorImportNamespaceAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// JetBrains.Annotations.RazorInjectionAttribute
struct RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.RazorInjectionAttribute::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// System.String JetBrains.Annotations.RazorInjectionAttribute::<FieldName>k__BackingField
	String_t* ___U3CFieldNameU3Ek__BackingField_1;
};

// JetBrains.Annotations.RazorLayoutAttribute
struct RazorLayoutAttribute_tAA771510011EB2B6BE56BB079399DEA175017CA8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorPageBaseTypeAttribute
struct RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::<BaseType>k__BackingField
	String_t* ___U3CBaseTypeU3Ek__BackingField_0;
	// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::<PageName>k__BackingField
	String_t* ___U3CPageNameU3Ek__BackingField_1;
};

// JetBrains.Annotations.RazorSectionAttribute
struct RazorSectionAttribute_t434B53F9844057C929EFDC006DE9484DA6767273  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorWriteLiteralMethodAttribute
struct RazorWriteLiteralMethodAttribute_tEF4F3747041F2D545AFE59A1A1AB1938044C3F6C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorWriteMethodAttribute
struct RazorWriteMethodAttribute_t39AD3FB31D9C1D368EBDB286AEA4C00868F57A7D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RazorWriteMethodParameterAttribute
struct RazorWriteMethodParameterAttribute_t1674A1C95FC64DCBC447653A52FC7CF45F667219  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.RegexPatternAttribute
struct RegexPatternAttribute_tAFF95AB373C9905AF75F33A974BC73943967B11F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.SourceTemplateAttribute
struct SourceTemplateAttribute_t3B7D3F96F6D2D5A5599874C901AF4E2ED529CAAD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.StringFormatMethodAttribute
struct StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.StringFormatMethodAttribute::<FormatParameterName>k__BackingField
	String_t* ___U3CFormatParameterNameU3Ek__BackingField_0;
};

// JetBrains.Annotations.TerminatesProgramAttribute
struct TerminatesProgramAttribute_t438D7F1E7A59D461A8F3007EB9FA53CA6152EBB6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.UsedImplicitlyAttribute
struct UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.UsedImplicitlyAttribute::<UseKindFlags>k__BackingField
	int32_t ___U3CUseKindFlagsU3Ek__BackingField_0;
	// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.UsedImplicitlyAttribute::<TargetFlags>k__BackingField
	int32_t ___U3CTargetFlagsU3Ek__BackingField_1;
};

// JetBrains.Annotations.ValueProviderAttribute
struct ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String JetBrains.Annotations.ValueProviderAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
struct XamlItemBindingOfItemsControlAttribute_t1EB8E02080DE6CDA71E9E6C447FA8AC4F7B4494B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// JetBrains.Annotations.XamlItemsControlAttribute
struct XamlItemsControlAttribute_t1E38108EE1CD142F88383A0D5BB820E4DCE47417  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_t3A2692FA1A1C65319C6B86F3CED6D8ECB9E846F2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Zenject.InjectAttributeBase
struct InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E  : public PreserveAttribute_t632995F707753F9308E3B3724BD18252C3A9019D
{
	// System.Boolean Zenject.InjectAttributeBase::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_0;
	// System.Object Zenject.InjectAttributeBase::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_1;
	// Zenject.InjectSources Zenject.InjectAttributeBase::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Zenject.InjectAttribute
struct InjectAttribute_tF5759353EC5C136EE902948477FFB438D69E4EBB  : public InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E
{
};

// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tA7F1DE7242D85098C77D480D0CE5FA3F57E23233  : public InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E
{
};

// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_t9EF536470FB58EDB82A0E7CABB386EAAB7362F7E  : public InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>
struct Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79  : public MulticastDelegate_t
{
};

// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Zenject.ZenFactoryMethod
struct ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4  : public MulticastDelegate_t
{
};

// Zenject.ZenInjectMethod
struct ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9  : public MulticastDelegate_t
{
};

// Zenject.ZenMemberSetterMethod
struct ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.InjectTypeInfo/InjectMethodInfo[]
struct InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6  : public RuntimeArray
{
	ALIGN_FIELD (8) InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* m_Items[1];

	inline InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.InjectTypeInfo/InjectMemberInfo[]
struct InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0  : public RuntimeArray
{
	ALIGN_FIELD (8) InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* m_Items[1];

	inline InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.InjectableInfo[]
struct InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D  : public RuntimeArray
{
	ALIGN_FIELD (8) InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* m_Items[1];

	inline InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.Internal.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mD1CE7AC82D12C8ABB202EC4D0F0238137F587725 (PreserveAttribute_t632995F707753F9308E3B3724BD18252C3A9019D* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_m3FAB02020FA516023BC38588B604C0607463F685 (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_m3A74684FFD7601062086DB6BE3980DF9CF9B231B_inline (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m7F22693115B6F74B9970C15F2B7EA10E6B0B4993_inline (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9D58C3A73CAB873FFE3BEB39F179EF551BC9BAAD (Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisInjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_mB2B04F691AE52273571E898AB1526D98EB92AFA4 (RuntimeObject* ___source0, Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8F06770B46AAC8B3F6FB8C348A131A3E9FEF38E0 (Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<Zenject.InjectTypeInfo/InjectMethodInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisInjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m6532E2D7DC40CFC3FB3C4CAB5D16849C4D30C2FC (RuntimeObject* ___source0, Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::set_FormatParameterName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_mFB2231675FC299C5EC3EE2D5900BEC042880BF45_inline (StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.ValueProviderAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m4BA0785911B53888EF11774894FD76584384FB86_inline (ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::set_ParameterName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m98958924FD9886905062B78FADC74CD0BAC574D6_inline (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m65E30EDFC409E5D4964EB012EE3958157FD030F3 (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___contract0, bool ___forceFullStates1, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_Contract(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_m6266E93BF3EA367FD8F4BE0DD81FB10F27F3CFD6_inline (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_ForceFullStates(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m6C13825843A8D16FB0A3C8CB746A4952611A5D9C_inline (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m2728D8C462695131B8342FBDA0428FD60FAA8F21 (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, bool ___required0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::set_Required(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mC9D1451B5A716DD4442CBDEE50EECD7EF2925238_inline (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::set_BaseType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m78356CA23AB87FF3E2BB1F5B132EC49C61692100_inline (BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m7D886D48F9B5FC5C52611FC7002748CE56B0FA9C (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_mB9383DA8654FBC7006C128C3CB1750EF81E8CA14_inline (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mF9AC64E08F7AD263A2A959B43CCC645223B1480E_inline (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m8A6DB43722D6B02937D85A04106558B6BD86B9DE (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m90D00044333C4E35D07BF536FE014C2EB348E962_inline (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_m8A7B3E4E2B404F56C606D54C5F8EF18A5CA5EAC3_inline (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.PublicAPIAttribute::set_Comment(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m22D6803E40F68BC4480832D969D2A45D0AEFA579_inline (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::set_Justification(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mE271AAF99C0688819DCD6711EDE69743FCD00D63_inline (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.PathReferenceAttribute::set_BasePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_mD6CA7772746CC52C07B61BEF6CBE8F4A3070D8F7_inline (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m31C4788361144F084A0D85F0804364813DCC08D2_inline (AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mE541513D45DE2063AB7186F22A8F0EDDBA3CB116_inline (AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_mE677B34A6A100AAEEB47DA2C320B9A0EA73B5124_inline (AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m497A2A84579DF1009EC258121ED923FA3DEDF8DB_inline (AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mCED73196A0D65B37FDA73AAB7D8DC77D85118A83_inline (AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m5EB7EB6FD33D67C499032B8D32F029AF2BE70762_inline (AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcActionAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m5B4ABFB0238220F206C65173BD4D2C8893131DEF_inline (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_m5885201DF2D638F8481057ADA795815EE5D57E10_inline (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_m5821F4F48B43B4952383DA5BD50898F8ECA4D6A4_inline (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_mFF16FCE021BCDF41A99AEB9E8450474C97D71015_inline (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mD0F2380B3B90281B60BB129C3EC69E1394A79DC9_inline (HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.CollectionAccessAttribute::set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE77895974BB8AC5DB42113A122A024D8A72B9C1A_inline (CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AssertionConditionAttribute::set_ConditionType(JetBrains.Annotations.AssertionConditionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m588CB7FF4ABD246DF6EBB362EC69066DCA22EAE3_inline (AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_TagName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m272D9F6606C0257F834D5E7B829398CC6C46AC5E_inline (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_ControlType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m02A1956BE81EB36DEF40F01FC0B5B3F6A85FA578_inline (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::set_Attribute(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_mB28CD67241D38913EA797FD821FEFA3104556D56_inline (AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::set_CreateConstructorReferences(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m7F5CAEA9EE0E0FD98222EFB333ADE0526C252130_inline (AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_m6980C52C17A041400681511BC7467432D558BF23_inline (RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_Type(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_mD96635C5C87E311F89A65EC99A028FA156DCAEF9_inline (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_FieldName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_mFFE3DAE16293938A46F1CB521AB9E7738C042AF4_inline (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::set_Directive(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_mB2EAB57548F2FA82A325C8623CC13801067E0FCE_inline (RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_BaseType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_mB6F04E6A1996872C72E76748BE2329386A013023_inline (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_PageName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_mCF84A0014145CE8A28E68C79BF9D571F90C764F8_inline (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) ;
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
// System.Void Zenject.InjectableInfo::.ctor(System.Boolean,System.Object,System.String,System.Type,System.Object,Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectableInfo__ctor_mA8C08B6C9C8164CEF9920DBB4428F7D734602245 (InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* __this, bool ___optional0, RuntimeObject* ___identifier1, String_t* ___memberName2, Type_t* ___memberType3, RuntimeObject* ___defaultValue4, int32_t ___sourceType5, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___optional0;
		__this->___Optional_0 = L_0;
		Type_t* L_1 = ___memberType3;
		__this->___MemberType_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MemberType_4), (void*)L_1);
		String_t* L_2 = ___memberName2;
		__this->___MemberName_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MemberName_3), (void*)L_2);
		RuntimeObject* L_3 = ___identifier1;
		__this->___Identifier_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_1), (void*)L_3);
		RuntimeObject* L_4 = ___defaultValue4;
		__this->___DefaultValue_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DefaultValue_5), (void*)L_4);
		int32_t L_5 = ___sourceType5;
		__this->___SourceType_2 = L_5;
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
// System.Void Zenject.Internal.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mD1CE7AC82D12C8ABB202EC4D0F0238137F587725 (PreserveAttribute_t632995F707753F9308E3B3724BD18252C3A9019D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Boolean Zenject.InjectAttributeBase::get_Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InjectAttributeBase_get_Optional_m0EDFE4FE520CB2BBBDA5E78A57CB150CA5765706 (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COptionalU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m7F22693115B6F74B9970C15F2B7EA10E6B0B4993 (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COptionalU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Object Zenject.InjectAttributeBase::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectAttributeBase_get_Id_mE3DF4DF7B0D038DA800A476DA94BB4ED405718AD (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Id_mF1C07D9422E6284BE4B70128BD9F5F640B9431AE (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Zenject.InjectSources Zenject.InjectAttributeBase::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InjectAttributeBase_get_Source_m228A2B8C3DE13AA2E0C959D5067D315AAEFCDBC1 (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_m3A74684FFD7601062086DB6BE3980DF9CF9B231B (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_m3FAB02020FA516023BC38588B604C0607463F685 (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, const RuntimeMethod* method) 
{
	{
		PreserveAttribute__ctor_mD1CE7AC82D12C8ABB202EC4D0F0238137F587725(__this, NULL);
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
// System.Void Zenject.InjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttribute__ctor_m6C7D7679C404D52F749AAF5BE530FE8838180F6F (InjectAttribute_tF5759353EC5C136EE902948477FFB438D69E4EBB* __this, const RuntimeMethod* method) 
{
	{
		InjectAttributeBase__ctor_m3FAB02020FA516023BC38588B604C0607463F685(__this, NULL);
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
// System.Void Zenject.InjectLocalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectLocalAttribute__ctor_mFF0CEE31C0D4C234FA9B7C6B4B0EB7530681C80C (InjectLocalAttribute_tA7F1DE7242D85098C77D480D0CE5FA3F57E23233* __this, const RuntimeMethod* method) 
{
	{
		InjectAttributeBase__ctor_m3FAB02020FA516023BC38588B604C0607463F685(__this, NULL);
		InjectAttributeBase_set_Source_m3A74684FFD7601062086DB6BE3980DF9CF9B231B_inline(__this, 1, NULL);
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
// System.Void Zenject.InjectOptionalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectOptionalAttribute__ctor_m5939FDDC32DD4BE9DB1B1A30B4558ED5AA8067CE (InjectOptionalAttribute_t9EF536470FB58EDB82A0E7CABB386EAAB7362F7E* __this, const RuntimeMethod* method) 
{
	{
		InjectAttributeBase__ctor_m3FAB02020FA516023BC38588B604C0607463F685(__this, NULL);
		InjectAttributeBase_set_Optional_m7F22693115B6F74B9970C15F2B7EA10E6B0B4993_inline(__this, (bool)1, NULL);
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
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_Multicast(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* currentDelegate = reinterpret_cast<ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, ___args1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenInst(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___args1, method);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenStatic(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___args1, method);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenStaticInvoker(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0, ___args1);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_ClosedStaticInvoker(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0, ___args1);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenVirtual(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	VirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_method_get_slot(method), ___obj0, ___args1);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenInterface(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	InterfaceActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___obj0, ___args1);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenGenericVirtual(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericVirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(method, ___obj0, ___args1);
}
void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenGenericInterface(ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericInterfaceActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(method, ___obj0, ___args1);
}
// System.Void Zenject.ZenInjectMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod__ctor_m210BE06CF62E3B59AEB5BDCF11D01A7317E29A9F (ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51_Multicast;
}
// System.Void Zenject.ZenInjectMethod::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod_Invoke_mA16A34483018FF3135F83905CEF236081B40EB51 (ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Zenject.ZenInjectMethod::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenInjectMethod_BeginInvoke_mB98D4C3824FE8FF60E17FD73020076138C75A430 (ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Zenject.ZenInjectMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod_EndInvoke_m38ABFF26CADB5AB9AAC6D7C71BA4D0154C5712B6 (ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_Multicast(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* currentDelegate = reinterpret_cast<ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___args0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenInst(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	NullCheck(___args0);
	typedef RuntimeObject* (*FunctionPointerType) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___args0, method);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenStatic(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___args0, method);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenStaticInvoker(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___args0);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_ClosedStaticInvoker(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___args0);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenVirtual(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	NullCheck(___args0);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___args0);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenInterface(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	NullCheck(___args0);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___args0);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenGenericVirtual(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	NullCheck(___args0);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___args0);
}
RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenGenericInterface(ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	NullCheck(___args0);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___args0);
}
// System.Void Zenject.ZenFactoryMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenFactoryMethod__ctor_mE0F785F93EE89C53C5AEF68B95177010D96226E8 (ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E_Multicast;
}
// System.Object Zenject.ZenFactoryMethod::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenFactoryMethod_Invoke_m538C7C5C23013D856C2DB7555049BA64E6D0677E (ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___args0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Zenject.ZenFactoryMethod::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenFactoryMethod_BeginInvoke_m679B04AA1198AEFB4797FCD966D6A45EBD423CCD (ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Zenject.ZenFactoryMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenFactoryMethod_EndInvoke_mEEFBFF5A3B9132265CCB66A139AE21CDF4DF59A9 (ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_Multicast(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* currentDelegate = reinterpret_cast<ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenInst(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___value1, method);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenStatic(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___value1, method);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenStaticInvoker(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0, ___value1);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_ClosedStaticInvoker(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0, ___value1);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenVirtual(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___obj0, ___value1);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenInterface(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___obj0, ___value1);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenGenericVirtual(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___obj0, ___value1);
}
void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenGenericInterface(ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___obj0, ___value1);
}
// System.Void Zenject.ZenMemberSetterMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod__ctor_mEC5AAFB79187298C1E67D662C46A088AA5334BEA (ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955_Multicast;
}
// System.Void Zenject.ZenMemberSetterMethod::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod_Invoke_m4BB9479BB4AE49B6DAD3CDA7B4E2E9F2A776F955 (ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Zenject.ZenMemberSetterMethod::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenMemberSetterMethod_BeginInvoke_m706F4555F6487ABECF3CD15C85AE3B5F062CE867 (ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Zenject.ZenMemberSetterMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod_EndInvoke_m0C04D091C49B883CA82EBB7AE2EEBE2756AE438F (ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zenject.InjectTypeInfo::.ctor(System.Type,Zenject.InjectTypeInfo/InjectConstructorInfo,Zenject.InjectTypeInfo/InjectMethodInfo[],Zenject.InjectTypeInfo/InjectMemberInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectTypeInfo__ctor_mCD98918DAE44BBE196FC7FB51AFBB0E16B8215A6 (InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* __this, Type_t* ___type0, InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9* ___injectConstructor1, InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* ___injectMethods2, InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* ___injectMembers3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___Type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_0), (void*)L_0);
		InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* L_1 = ___injectMethods2;
		__this->___InjectMethods_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InjectMethods_1), (void*)L_1);
		InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* L_2 = ___injectMembers3;
		__this->___InjectMembers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InjectMembers_2), (void*)L_2);
		InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9* L_3 = ___injectConstructor1;
		__this->___InjectConstructor_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InjectConstructor_3), (void*)L_3);
		return;
	}
}
// Zenject.InjectTypeInfo Zenject.InjectTypeInfo::get_BaseTypeInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* InjectTypeInfo_get_BaseTypeInfo_m8A90E3F8856DC9CF3E8A9C1B02580E7F03AA02B1 (InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* __this, const RuntimeMethod* method) 
{
	{
		InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* L_0 = __this->___U3CBaseTypeInfoU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Zenject.InjectTypeInfo::set_BaseTypeInfo(Zenject.InjectTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectTypeInfo_set_BaseTypeInfo_m05897542A322AA0BDAC148458D1EF9CD55646A11 (InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* __this, InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* ___value0, const RuntimeMethod* method) 
{
	{
		InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* L_0 = ___value0;
		__this->___U3CBaseTypeInfoU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeInfoU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.InjectTypeInfo::get_AllInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectTypeInfo_get_AllInjectables_m8E6952658DF47038E70734E41FE9BE80E859BB32 (InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisInjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m6532E2D7DC40CFC3FB3C4CAB5D16849C4D30C2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_mB2B04F691AE52273571E898AB1526D98EB92AFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_m9BB40A785A2735896B28075E80C053E3542A7123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m89D25F8E4FDAB9E45A56D3E3E0164927D7A68C5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* G_B2_0 = NULL;
	InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* G_B2_1 = NULL;
	InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* G_B1_0 = NULL;
	InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* G_B1_1 = NULL;
	InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9* L_0 = __this->___InjectConstructor_3;
		NullCheck(L_0);
		InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* L_1 = L_0->___Parameters_1;
		InjectMemberInfoU5BU5D_t6136E53070C4BE057281B2BD87F197C1C96A51B0* L_2 = __this->___InjectMembers_2;
		Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* L_3 = ((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_0029;
		}
	}
	{
		Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* L_4 = (Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79*)il2cpp_codegen_object_new(Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m9D58C3A73CAB873FFE3BEB39F179EF551BC9BAAD(L_4, NULL, (intptr_t)((void*)InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_m9BB40A785A2735896B28075E80C053E3542A7123_RuntimeMethod_var), NULL);
		((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5), (void*)L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		Func_2_t6C1CDD0E24A47907F405D4D87DF187B50BD2FB79* L_5 = ((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5;
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisInjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_mB2B04F691AE52273571E898AB1526D98EB92AFA4((RuntimeObject*)G_B2_0, L_5, Enumerable_Select_TisInjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_mB2B04F691AE52273571E898AB1526D98EB92AFA4_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76((RuntimeObject*)G_B2_1, L_6, Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76_RuntimeMethod_var);
		InjectMethodInfoU5BU5D_tD0D52B47BE5FA8F421F49077FE8B41ED6B3369E6* L_8 = __this->___InjectMethods_1;
		Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* L_9 = ((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6;
		G_B3_0 = L_8;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_7;
			goto IL_0056;
		}
	}
	{
		Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* L_10 = (Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D*)il2cpp_codegen_object_new(Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m8F06770B46AAC8B3F6FB8C348A131A3E9FEF38E0(L_10, NULL, (intptr_t)((void*)InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m89D25F8E4FDAB9E45A56D3E3E0164927D7A68C5C_RuntimeMethod_var), NULL);
		((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6), (void*)L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0056:
	{
		Func_2_t33B49CAA2115D852D027E88E2B6F69B29400A40D* L_11 = ((InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t2211B4D4CC3FADBB90EA1FEAC5CC3BB33CD5F958_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6;
		RuntimeObject* L_12;
		L_12 = Enumerable_SelectMany_TisInjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m6532E2D7DC40CFC3FB3C4CAB5D16849C4D30C2FC((RuntimeObject*)G_B4_0, L_11, Enumerable_SelectMany_TisInjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m6532E2D7DC40CFC3FB3C4CAB5D16849C4D30C2FC_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76(G_B4_1, L_12, Enumerable_Concat_TisInjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78_m2B19D0F6D6CD086610A1BF819BB90F1B9106DD76_RuntimeMethod_var);
		return L_13;
	}
}
// Zenject.InjectableInfo Zenject.InjectTypeInfo::<get_AllInjectables>b__0(Zenject.InjectTypeInfo/InjectMemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_m9BB40A785A2735896B28075E80C053E3542A7123 (InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* ___x0, const RuntimeMethod* method) 
{
	{
		InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* L_0 = ___x0;
		NullCheck(L_0);
		InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* L_1 = L_0->___Info_1;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.InjectTypeInfo::<get_AllInjectables>b__1(Zenject.InjectTypeInfo/InjectMethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m89D25F8E4FDAB9E45A56D3E3E0164927D7A68C5C (InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* ___x0, const RuntimeMethod* method) 
{
	{
		InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* L_0 = ___x0;
		NullCheck(L_0);
		InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* L_1 = L_0->___Parameters_2;
		return (RuntimeObject*)L_1;
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
// System.Void Zenject.InjectTypeInfo/InjectMemberInfo::.ctor(Zenject.ZenMemberSetterMethod,Zenject.InjectableInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectMemberInfo__ctor_m0298EF878D35A470DFC912B37F53D0770439B0A1 (InjectMemberInfo_t704C7AAA7CD0BB3212C409F1AE01286F8762A083* __this, ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* ___setter0, InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* ___info1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ZenMemberSetterMethod_tC4BDAB76DB22B03DCC55EBF99F6CA852B0F1F4BC* L_0 = ___setter0;
		__this->___Setter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Setter_0), (void*)L_0);
		InjectableInfo_t13EF8AD6214664F7FF8302C1A5D1E0B0F237BD78* L_1 = ___info1;
		__this->___Info_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Info_1), (void*)L_1);
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
// System.Void Zenject.InjectTypeInfo/InjectConstructorInfo::.ctor(Zenject.ZenFactoryMethod,Zenject.InjectableInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectConstructorInfo__ctor_m7071B5C79F156AE61E4A55A5FDCA0AEDD81A9D00 (InjectConstructorInfo_tD8D829D5BCB133FAA9DBE06F8E370FCAB89818C9* __this, ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* ___factory0, InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* ___parameters1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* L_0 = ___parameters1;
		__this->___Parameters_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parameters_1), (void*)L_0);
		ZenFactoryMethod_t2167E84776A67EABFE15CE982EB1244B767334C4* L_1 = ___factory0;
		__this->___Factory_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Factory_0), (void*)L_1);
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
// System.Void Zenject.InjectTypeInfo/InjectMethodInfo::.ctor(Zenject.ZenInjectMethod,Zenject.InjectableInfo[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectMethodInfo__ctor_mB88FF6AC211D54904234384529E22563884EEAAF (InjectMethodInfo_t4EC68E0813A1BF5E128013C05C7DE9B2FD3B0B11* __this, ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* ___action0, InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* ___parameters1, String_t* ___name2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InjectableInfoU5BU5D_tF63D9A6FB7F25A34A1EF341163B54C65139D4A6D* L_0 = ___parameters1;
		__this->___Parameters_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parameters_2), (void*)L_0);
		ZenInjectMethod_t1E80D961465815B3E4B0C9EA941F1E48478C2EB9* L_1 = ___action0;
		__this->___Action_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Action_1), (void*)L_1);
		String_t* L_2 = ___name2;
		__this->___Name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_2);
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
// System.Void JetBrains.Annotations.CanBeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanBeNullAttribute__ctor_mD9C9B5401CF2624241945E6B20F0A3BB7469292D (CanBeNullAttribute_tB3BC3663C23EDFA17E47E038A19535F94DB8B4BA* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m1D67FF17CBC3A73F1C283AB033C172D84E685EC0 (NotNullAttribute_t9BCC686A7AF92A17E9A56C4D2F7EEB0C3818FB77* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.ItemNotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemNotNullAttribute__ctor_m3C0B4C46FD3A9333F29218A568B261BCBC0BA22E (ItemNotNullAttribute_tAC4E514110FC2AA0F565F4D716C67F6449934927* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.ItemCanBeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCanBeNullAttribute__ctor_mDDCD458427B88DE02B1C59FFC0BA21B1AAF556F1 (ItemCanBeNullAttribute_t8ECCB7F972D0D18C085E6C18F6A1DE8AEE4A7257* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFormatMethodAttribute__ctor_mFAC489CF56ED55F41BF58CF26EDD8FAF52475D34 (StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107* __this, String_t* ___formatParameterName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___formatParameterName0;
		StringFormatMethodAttribute_set_FormatParameterName_mFB2231675FC299C5EC3EE2D5900BEC042880BF45_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.StringFormatMethodAttribute::get_FormatParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringFormatMethodAttribute_get_FormatParameterName_m8120651F3A4E34AF4DA4DDD7C64965A6AD717F42 (StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatParameterNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::set_FormatParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_mFB2231675FC299C5EC3EE2D5900BEC042880BF45 (StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatParameterNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.ValueProviderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProviderAttribute__ctor_m7073E175F78A4D2457450F81963FE1146CC247B4 (ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		ValueProviderAttribute_set_Name_m4BA0785911B53888EF11774894FD76584384FB86_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.ValueProviderAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProviderAttribute_get_Name_m084336E5ABC93FF2F0247D808C40DE2EDD0A65A5 (ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ValueProviderAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m4BA0785911B53888EF11774894FD76584384FB86 (ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.InvokerParameterNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokerParameterNameAttribute__ctor_m1F8DE5963A410CC491BC1CF6CB3C178810F8B81E (InvokerParameterNameAttribute_t31F8A8B2EA32774ACB8A250006D1ED2A19823C23* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute__ctor_mF5026081582AEB3BF3ECEE1DC31998C81FC109FF (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute__ctor_m0B8F55E9C4005352F11327C0F47DDEA23937C454 (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___parameterName0;
		NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m98958924FD9886905062B78FADC74CD0BAC574D6_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyPropertyChangedInvocatorAttribute_get_ParameterName_m09115735E68CBC38649D3749A48B95955E9A7310 (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CParameterNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::set_ParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m98958924FD9886905062B78FADC74CD0BAC574D6 (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m631245740A20297CC36609F9DCD3D27C15C26E9B (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___contract0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___contract0;
		ContractAnnotationAttribute__ctor_m65E30EDFC409E5D4964EB012EE3958157FD030F3(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m65E30EDFC409E5D4964EB012EE3958157FD030F3 (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___contract0, bool ___forceFullStates1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___contract0;
		ContractAnnotationAttribute_set_Contract_m6266E93BF3EA367FD8F4BE0DD81FB10F27F3CFD6_inline(__this, L_0, NULL);
		bool L_1 = ___forceFullStates1;
		ContractAnnotationAttribute_set_ForceFullStates_m6C13825843A8D16FB0A3C8CB746A4952611A5D9C_inline(__this, L_1, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.ContractAnnotationAttribute::get_Contract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractAnnotationAttribute_get_Contract_m567E1D1331296DBACFA681A4F696492BD48025FC (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContractU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_Contract(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_m6266E93BF3EA367FD8F4BE0DD81FB10F27F3CFD6 (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CContractU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean JetBrains.Annotations.ContractAnnotationAttribute::get_ForceFullStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContractAnnotationAttribute_get_ForceFullStates_m7BD35C7EAA2D302B1C81575A2A47DE30A8945DAA (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CForceFullStatesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_ForceFullStates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m6C13825843A8D16FB0A3C8CB746A4952611A5D9C (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CForceFullStatesU3Ek__BackingField_1 = L_0;
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
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m6871F2603CF93555B1E565BF0D031C7C774DBBD8 (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, const RuntimeMethod* method) 
{
	{
		LocalizationRequiredAttribute__ctor_m2728D8C462695131B8342FBDA0428FD60FAA8F21(__this, (bool)1, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m2728D8C462695131B8342FBDA0428FD60FAA8F21 (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, bool ___required0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___required0;
		LocalizationRequiredAttribute_set_Required_mC9D1451B5A716DD4442CBDEE50EECD7EF2925238_inline(__this, L_0, NULL);
		return;
	}
}
// System.Boolean JetBrains.Annotations.LocalizationRequiredAttribute::get_Required()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizationRequiredAttribute_get_Required_mB3B72A89ECBDD658373E73A6F44C6717C2578EB4 (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRequiredU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::set_Required(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mC9D1451B5A716DD4442CBDEE50EECD7EF2925238 (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CRequiredU3Ek__BackingField_0 = L_0;
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
// System.Void JetBrains.Annotations.CannotApplyEqualityOperatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannotApplyEqualityOperatorAttribute__ctor_m9EA498AE7B77D99F7BDE6592523EA1FB83597D75 (CannotApplyEqualityOperatorAttribute_tCE365BDFE10B3DFAFC3F3E627123F70C59ACCF23* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute__ctor_m32EC93D7BD5DFDC5750B73207FC3E17FEF0AD17B (BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76* __this, Type_t* ___baseType0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___baseType0;
		BaseTypeRequiredAttribute_set_BaseType_m78356CA23AB87FF3E2BB1F5B132EC49C61692100_inline(__this, L_0, NULL);
		return;
	}
}
// System.Type JetBrains.Annotations.BaseTypeRequiredAttribute::get_BaseType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BaseTypeRequiredAttribute_get_BaseType_mC2869CD7C2294785C50DF3021E41D91440A206A1 (BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CBaseTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::set_BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m78356CA23AB87FF3E2BB1F5B132EC49C61692100 (BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CBaseTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_mB647E208CBF7206C7FAB82134556574EEF85E15A (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, const RuntimeMethod* method) 
{
	{
		UsedImplicitlyAttribute__ctor_m7D886D48F9B5FC5C52611FC7002748CE56B0FA9C(__this, 7, 1, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m15C585DCF517995CE6E99481F89FEDA8501199EF (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___useKindFlags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___useKindFlags0;
		UsedImplicitlyAttribute__ctor_m7D886D48F9B5FC5C52611FC7002748CE56B0FA9C(__this, L_0, 1, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m3323636237D5AC7C1ADF07B4E489709E6F2FE80A (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___targetFlags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___targetFlags0;
		UsedImplicitlyAttribute__ctor_m7D886D48F9B5FC5C52611FC7002748CE56B0FA9C(__this, 7, L_0, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m7D886D48F9B5FC5C52611FC7002748CE56B0FA9C (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___useKindFlags0;
		UsedImplicitlyAttribute_set_UseKindFlags_mB9383DA8654FBC7006C128C3CB1750EF81E8CA14_inline(__this, L_0, NULL);
		int32_t L_1 = ___targetFlags1;
		UsedImplicitlyAttribute_set_TargetFlags_mF9AC64E08F7AD263A2A959B43CCC645223B1480E_inline(__this, L_1, NULL);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.UsedImplicitlyAttribute::get_UseKindFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsedImplicitlyAttribute_get_UseKindFlags_m6ABCD1D870CD3B53A83EF1B5E87109FD068C3E7F (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUseKindFlagsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_mB9383DA8654FBC7006C128C3CB1750EF81E8CA14 (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUseKindFlagsU3Ek__BackingField_0 = L_0;
		return;
	}
}
// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.UsedImplicitlyAttribute::get_TargetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsedImplicitlyAttribute_get_TargetFlags_mD05832626D602B695D9094D290F499992C6E334D (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTargetFlagsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mF9AC64E08F7AD263A2A959B43CCC645223B1480E (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTargetFlagsU3Ek__BackingField_1 = L_0;
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
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m1FDE5754577BA2FE5EAA158EE499C9DEE46A222E (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, const RuntimeMethod* method) 
{
	{
		MeansImplicitUseAttribute__ctor_m8A6DB43722D6B02937D85A04106558B6BD86B9DE(__this, 7, 1, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m4320A6EA1E694068371EB92C1DEE011FE769A0CB (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___useKindFlags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___useKindFlags0;
		MeansImplicitUseAttribute__ctor_m8A6DB43722D6B02937D85A04106558B6BD86B9DE(__this, L_0, 1, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_mFF15C857F1401F54DC9CCC0DEAB8D96E719FBE5B (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___targetFlags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___targetFlags0;
		MeansImplicitUseAttribute__ctor_m8A6DB43722D6B02937D85A04106558B6BD86B9DE(__this, 7, L_0, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m8A6DB43722D6B02937D85A04106558B6BD86B9DE (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___useKindFlags0;
		MeansImplicitUseAttribute_set_UseKindFlags_m90D00044333C4E35D07BF536FE014C2EB348E962_inline(__this, L_0, NULL);
		int32_t L_1 = ___targetFlags1;
		MeansImplicitUseAttribute_set_TargetFlags_m8A7B3E4E2B404F56C606D54C5F8EF18A5CA5EAC3_inline(__this, L_1, NULL);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.MeansImplicitUseAttribute::get_UseKindFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeansImplicitUseAttribute_get_UseKindFlags_m74F2AB55A458092B563A7C594402C41B00A18AF4 (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUseKindFlagsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m90D00044333C4E35D07BF536FE014C2EB348E962 (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUseKindFlagsU3Ek__BackingField_0 = L_0;
		return;
	}
}
// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.MeansImplicitUseAttribute::get_TargetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeansImplicitUseAttribute_get_TargetFlags_m5060C8665C0D8DE2F52EB297D34B7903566822B7 (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTargetFlagsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_m8A7B3E4E2B404F56C606D54C5F8EF18A5CA5EAC3 (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTargetFlagsU3Ek__BackingField_1 = L_0;
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
// System.Void JetBrains.Annotations.PublicAPIAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute__ctor_m4863E2773FF47E1D915680436F16AB7BAAEF16D8 (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.PublicAPIAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute__ctor_m01D36BAEF71487E56BA7EFA27284FA241098FD7B (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, String_t* ___comment0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___comment0;
		PublicAPIAttribute_set_Comment_m22D6803E40F68BC4480832D969D2A45D0AEFA579_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.PublicAPIAttribute::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PublicAPIAttribute_get_Comment_mF68F456E50F5D367C374D1F7D716951C1CB298F8 (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCommentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.PublicAPIAttribute::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m22D6803E40F68BC4480832D969D2A45D0AEFA579 (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCommentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommentU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.InstantHandleAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantHandleAttribute__ctor_mA32B76C6940C955F7171F0EA657396B996360AC5 (InstantHandleAttribute_t2A86DE5A069F3A86091DD187D257BB5430A6AEE7* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.PureAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureAttribute__ctor_mEA9134890CF6DA678DC6050344DB307592E87177 (PureAttribute_t49DFEA451870EAF3284145D6A73AE5C4A9D5AD25* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute__ctor_m97366EE36C5A20942A054F70928B978BD2FC1A21 (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute__ctor_mA8922277C7AC934602EE94192DE8D791F51FB6A2 (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, String_t* ___justification0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___justification0;
		MustUseReturnValueAttribute_set_Justification_mE271AAF99C0688819DCD6711EDE69743FCD00D63_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.MustUseReturnValueAttribute::get_Justification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MustUseReturnValueAttribute_get_Justification_m8E1280646111FCD9E1BD7A9AC3555E3B5380A2D0 (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJustificationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::set_Justification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mE271AAF99C0688819DCD6711EDE69743FCD00D63 (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJustificationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJustificationU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.ProvidesContextAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvidesContextAttribute__ctor_m32B4338697373D7AD2F33FD14CE94033CFCBF16F (ProvidesContextAttribute_t5C24F1C0E6A3FFBF35D138AFC160440D33A02EEF* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.PathReferenceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute__ctor_m1FD64184C2FEB66E7C323BEEC00079B3C09373FA (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.PathReferenceAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute__ctor_m77DA520A97507ADC116FAD4C82C9EA4ADC947B9D (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, String_t* ___basePath0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___basePath0;
		PathReferenceAttribute_set_BasePath_mD6CA7772746CC52C07B61BEF6CBE8F4A3070D8F7_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.PathReferenceAttribute::get_BasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathReferenceAttribute_get_BasePath_m100FCC144DA794B0F78FE1B9021C79269111A227 (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBasePathU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.PathReferenceAttribute::set_BasePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_mD6CA7772746CC52C07B61BEF6CBE8F4A3070D8F7 (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBasePathU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBasePathU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.SourceTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceTemplateAttribute__ctor_m0982525CBEDFE6C3714F97E8EF00C5B43A6A9F6E (SourceTemplateAttribute_t3B7D3F96F6D2D5A5599874C901AF4E2ED529CAAD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.String JetBrains.Annotations.MacroAttribute::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroAttribute_get_Expression_m06EBB30C10B6877FAE5F0E8302981C30B652DD96 (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CExpressionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Expression(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Expression_mA7FF042ED26672E6088A1E554FC208877F2D13E3 (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CExpressionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 JetBrains.Annotations.MacroAttribute::get_Editable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacroAttribute_get_Editable_m534FDA816C69D5230D45C27AF1593A371A5A220B (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEditableU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Editable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Editable_m2A062EDD59FB928B2FF1D013D6CD226C94D3DBC2 (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEditableU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String JetBrains.Annotations.MacroAttribute::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroAttribute_get_Target_mFF9629684C7714F1C11C7FA23FC6DEB7ED91DA64 (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Target(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Target_m38D60FF7D4AB603B76F0CD5D8161CA00ED123AFE (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTargetU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute__ctor_m121DECE20B834E6EFD97032E96DE64E1CAC57DCC (MacroAttribute_t6F8F6E9F76F91BAC2B0D29AE512DCBB96430D0EC* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute__ctor_m209EB28E3D3D09697834A7C68E6DBA2108663C94 (AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaMasterLocationFormatAttribute_set_Format_m31C4788361144F084A0D85F0804364813DCC08D2_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaMasterLocationFormatAttribute_get_Format_mA7F6D60A1082E782E7460C395B12C8A100FE09F4 (AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m31C4788361144F084A0D85F0804364813DCC08D2 (AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute__ctor_mA5605D3CC5448F9D09975832C55511C7F103F0C1 (AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mE541513D45DE2063AB7186F22A8F0EDDBA3CB116_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaPartialViewLocationFormatAttribute_get_Format_m222BA08FFB704C2C8ECEBDFC84E3CEFB0343161A (AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mE541513D45DE2063AB7186F22A8F0EDDBA3CB116 (AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute__ctor_m9FFC7A1E168E4F78924056B2458A912C08787851 (AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaViewLocationFormatAttribute_set_Format_mE677B34A6A100AAEEB47DA2C320B9A0EA73B5124_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaViewLocationFormatAttribute_get_Format_m1ADA4F9D91E3B7A30D68BC7065785E448DE14BDD (AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_mE677B34A6A100AAEEB47DA2C320B9A0EA73B5124 (AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute__ctor_m2C869F9FDC0A9D985059EF8393E5EB6376C4932C (AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcMasterLocationFormatAttribute_set_Format_m497A2A84579DF1009EC258121ED923FA3DEDF8DB_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcMasterLocationFormatAttribute_get_Format_m903818EDA6711CC61F41A3B3ECDBDFF9945CE55A (AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m497A2A84579DF1009EC258121ED923FA3DEDF8DB (AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute__ctor_m6D09C83944DE5CDC8492DC0C128D233F817297AA (AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcPartialViewLocationFormatAttribute_set_Format_mCED73196A0D65B37FDA73AAB7D8DC77D85118A83_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcPartialViewLocationFormatAttribute_get_Format_mC6186BA568F0F9515CB626630112ADD428004C6A (AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mCED73196A0D65B37FDA73AAB7D8DC77D85118A83 (AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute__ctor_m56FBA6E0045FDAB13F002B791F7B0D12BC313568 (AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___format0;
		AspMvcViewLocationFormatAttribute_set_Format_m5EB7EB6FD33D67C499032B8D32F029AF2BE70762_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcViewLocationFormatAttribute_get_Format_m41AFE6FDF9F66C44E004EE1F4E1AB86864CDD1A9 (AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFormatU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m5EB7EB6FD33D67C499032B8D32F029AF2BE70762 (AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcActionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute__ctor_m9408B21E47C3883664FB818608A49E2DDF454583 (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcActionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute__ctor_mC310E2690F11C1351F08CEA13746283C93012365 (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, String_t* ___anonymousProperty0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcActionAttribute_set_AnonymousProperty_m5B4ABFB0238220F206C65173BD4D2C8893131DEF_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcActionAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcActionAttribute_get_AnonymousProperty_mA03338259B1A4F821B22DBB3EB6A913C83DE29C8 (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAnonymousPropertyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcActionAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m5B4ABFB0238220F206C65173BD4D2C8893131DEF (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute__ctor_m9F6C225FA4568E043DFA664D0142465DAC08FB83 (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute__ctor_m1ED40B2B2FEF450CFD359E7686C57628A73DC439 (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, String_t* ___anonymousProperty0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcAreaAttribute_set_AnonymousProperty_m5885201DF2D638F8481057ADA795815EE5D57E10_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaAttribute_get_AnonymousProperty_mEA18E76912FCE5E735F2CC1F8D80E2C1D093BE41 (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAnonymousPropertyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_m5885201DF2D638F8481057ADA795815EE5D57E10 (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute__ctor_m9FFD2D26E53B7A02F34482B0462DC1F2D4277FF4 (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute__ctor_m59A2948175C8045BB375A15C31EE7B19082CE383 (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, String_t* ___anonymousProperty0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcControllerAttribute_set_AnonymousProperty_m5821F4F48B43B4952383DA5BD50898F8ECA4D6A4_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcControllerAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcControllerAttribute_get_AnonymousProperty_mE1D7F2EAC14657401668D481BB2FEB30559D82C5 (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAnonymousPropertyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_m5821F4F48B43B4952383DA5BD50898F8ECA4D6A4 (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspMvcMasterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterAttribute__ctor_mA3AA9F1344AA368B4AAD2778CA02A0EEA8AC9CCC (AspMvcMasterAttribute_t262901573DE431A3A2A7DC885915D04A9AD14021* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcModelTypeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcModelTypeAttribute__ctor_mB22E39211E9BCEA7B94D5D898FDC2786C9F2DDA1 (AspMvcModelTypeAttribute_tCD23EFD439CEB0518D34F919D8D5BA6DFB514A53* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcPartialViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewAttribute__ctor_mCA0AFF9E9A0AAEF6FCF0E52F5B361940B6B218CC (AspMvcPartialViewAttribute_t624C42920D5134593A8085F155201256FE93798E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcSuppressViewErrorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcSuppressViewErrorAttribute__ctor_m0613CD0D0A08FCACC372B901EA28B40F2504B331 (AspMvcSuppressViewErrorAttribute_t1C9A94BEFC0D5DABB3B2B10261D26AB807DEDB34* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcDisplayTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcDisplayTemplateAttribute__ctor_m7C4E1BC1B089758109FD6051EEBA83E7870E36DA (AspMvcDisplayTemplateAttribute_t087FBB8FCFE59CE960F1BC338CB6B890E990BBFF* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcEditorTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcEditorTemplateAttribute__ctor_mFE65AAEF945FCD428F5D1117CB1A96575761CF82 (AspMvcEditorTemplateAttribute_tFF0EA553D52ED9B02745AB841376777B897FABA6* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcTemplateAttribute__ctor_m9F6177A1899D122BA2D8CAEE9D51F66C3F82237A (AspMvcTemplateAttribute_t8C0A47BB4B2B7A41D2321123B28BB2F7588D5D37* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewAttribute__ctor_mAD6149089AFC4C95CB8A5D1417E342F0D21072E6 (AspMvcViewAttribute_t0DF82ACC6C447E44D1CCD2916AD49F1B97228E10* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewComponentAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewComponentAttribute__ctor_mE83B99B030154FC5F56A695664CF5C3F8447C8AB (AspMvcViewComponentAttribute_t39762B6D91F39F3BFC4AE94079BC2A2BC910E245* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewComponentViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewComponentViewAttribute__ctor_m16C7C375C8BF526A8EAE6DFAFB1DDF15B54E9743 (AspMvcViewComponentViewAttribute_t81FDB6C5B7D0D119120F707D6F9ABB4C9E13363A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMvcActionSelectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionSelectorAttribute__ctor_mF28C2CFF1AD171BC782C51A6BDBCD42F48897781 (AspMvcActionSelectorAttribute_t861AA60A46C4F58BBC6577F670AF50B02F4DAAFD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute__ctor_m941E46577C63AD3378E654459A42F3A26379B544 (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute__ctor_m4DB415801D4C644626195B04DAE892A13E9CDEE0 (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		HtmlElementAttributesAttribute_set_Name_mFF16FCE021BCDF41A99AEB9E8450474C97D71015_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.HtmlElementAttributesAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HtmlElementAttributesAttribute_get_Name_m88A5C6DFA5052A65A0312F31DA1B9D5807E1B41B (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_mFF16FCE021BCDF41A99AEB9E8450474C97D71015 (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute__ctor_m6690A6BF9375D1E6F2AB29C48FD516F7DF33B942 (HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		HtmlAttributeValueAttribute_set_Name_mD0F2380B3B90281B60BB129C3EC69E1394A79DC9_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.HtmlAttributeValueAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HtmlAttributeValueAttribute_get_Name_m17F1A9B144ED7199F6A3C1D61CFAEF113D9A0531 (HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mD0F2380B3B90281B60BB129C3EC69E1394A79DC9 (HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.RazorSectionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorSectionAttribute__ctor_mB68B62C767107BF827A8DD69696794904216AAF9 (RazorSectionAttribute_t434B53F9844057C929EFDC006DE9484DA6767273* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.CollectionAccessAttribute::.ctor(JetBrains.Annotations.CollectionAccessType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionAccessAttribute__ctor_m1359C89A4FB5BB8B459A8034DF0D6AF559557FC0 (CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D* __this, int32_t ___collectionAccessType0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___collectionAccessType0;
		CollectionAccessAttribute_set_CollectionAccessType_mE77895974BB8AC5DB42113A122A024D8A72B9C1A_inline(__this, L_0, NULL);
		return;
	}
}
// JetBrains.Annotations.CollectionAccessType JetBrains.Annotations.CollectionAccessAttribute::get_CollectionAccessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionAccessAttribute_get_CollectionAccessType_m1FD3B1229C2039C70129D0371134696BF07DBE1E (CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCollectionAccessTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.CollectionAccessAttribute::set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE77895974BB8AC5DB42113A122A024D8A72B9C1A (CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCollectionAccessTypeU3Ek__BackingField_0 = L_0;
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
// System.Void JetBrains.Annotations.AssertionMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionMethodAttribute__ctor_m5B4B785049E479A85A616A59C8241FFEFB184928 (AssertionMethodAttribute_tF36423AC02ED3A5DC43D112F6FA1C877A0ED7184* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AssertionConditionAttribute::.ctor(JetBrains.Annotations.AssertionConditionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionConditionAttribute__ctor_m98FE4F43133E83FED63663B31995F037B8E1CFB6 (AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87* __this, int32_t ___conditionType0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___conditionType0;
		AssertionConditionAttribute_set_ConditionType_m588CB7FF4ABD246DF6EBB362EC69066DCA22EAE3_inline(__this, L_0, NULL);
		return;
	}
}
// JetBrains.Annotations.AssertionConditionType JetBrains.Annotations.AssertionConditionAttribute::get_ConditionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AssertionConditionAttribute_get_ConditionType_m6FDB4E995DB179DF0669C91F2864B6B5ADDE9E1B (AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CConditionTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AssertionConditionAttribute::set_ConditionType(JetBrains.Annotations.AssertionConditionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m588CB7FF4ABD246DF6EBB362EC69066DCA22EAE3 (AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CConditionTypeU3Ek__BackingField_0 = L_0;
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
// System.Void JetBrains.Annotations.TerminatesProgramAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerminatesProgramAttribute__ctor_mBC3B257BFB1798E1DD9D0696B34399F765CD7665 (TerminatesProgramAttribute_t438D7F1E7A59D461A8F3007EB9FA53CA6152EBB6* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.LinqTunnelAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqTunnelAttribute__ctor_m924428246F7623774420AC60A49070C239697EE1 (LinqTunnelAttribute_t6A57FB454716EFCA29D1D85C3EBD7B6C94CA017B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.NoEnumerationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoEnumerationAttribute__ctor_mEBBFB14301AC2BDB7D4A844189C7F0C4A1F1B1BC (NoEnumerationAttribute_t5C6B39C98BE5872073062CAE5F13C3A7360A1299* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.RegexPatternAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexPatternAttribute__ctor_mE1D7E8DCA86BC90AB6111EB97E8A8616E3C6A6E6 (RegexPatternAttribute_tAFF95AB373C9905AF75F33A974BC73943967B11F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.NoReorderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReorderAttribute__ctor_m7FAF010FB39E5214A917E47E13A06B8BE24D99C3 (NoReorderAttribute_tA27C6BCBA173C84F230DDD5EDF3CD276C43E0FD8* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.XamlItemsControlAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XamlItemsControlAttribute__ctor_m31E387B52091FA76BBBEC5C7D061ABED28166384 (XamlItemsControlAttribute_t1E38108EE1CD142F88383A0D5BB820E4DCE47417* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XamlItemBindingOfItemsControlAttribute__ctor_mBD551BCAB3B036F9EC4E5468F1773D1B85FE6DC9 (XamlItemBindingOfItemsControlAttribute_t1EB8E02080DE6CDA71E9E6C447FA8AC4F7B4494B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute__ctor_m8C352D670669B5D1E84CD1CDF9799F37899C1E7C (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, String_t* ___tagName0, Type_t* ___controlType1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___tagName0;
		AspChildControlTypeAttribute_set_TagName_m272D9F6606C0257F834D5E7B829398CC6C46AC5E_inline(__this, L_0, NULL);
		Type_t* L_1 = ___controlType1;
		AspChildControlTypeAttribute_set_ControlType_m02A1956BE81EB36DEF40F01FC0B5B3F6A85FA578_inline(__this, L_1, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspChildControlTypeAttribute::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspChildControlTypeAttribute_get_TagName_mF131F05EE75FBDE1904FF523A26A2B16C364E026 (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTagNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_TagName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m272D9F6606C0257F834D5E7B829398CC6C46AC5E (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTagNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTagNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type JetBrains.Annotations.AspChildControlTypeAttribute::get_ControlType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AspChildControlTypeAttribute_get_ControlType_m6D2138C8A354ABC4B47CC18938EF29EEF995F334 (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CControlTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_ControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m02A1956BE81EB36DEF40F01FC0B5B3F6A85FA578 (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CControlTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CControlTypeU3Ek__BackingField_1), (void*)L_0);
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
// System.Void JetBrains.Annotations.AspDataFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspDataFieldAttribute__ctor_m4531224F1BEEE90404957A7415D987421628FE62 (AspDataFieldAttribute_tCA412AD20ADE6674F3013D49FE4D4F92F1B0BBB1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspDataFieldsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspDataFieldsAttribute__ctor_m8FCF3BC496B59145FEC4D778224210398C44B121 (AspDataFieldsAttribute_t46A02B64B1F99BEDEB97CFAFAD00A82571542269* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspMethodPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMethodPropertyAttribute__ctor_m3AE554AE23FD4E691ABBFFB69D43AE58D9C502BF (AspMethodPropertyAttribute_t7EE0B987C2D21AC31209F1041DAFC51A3EA2A974* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute__ctor_m7E0576CA3379A4E98E0A2CEC24AE52B44196F358 (AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682* __this, String_t* ___attribute0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___attribute0;
		AspRequiredAttributeAttribute_set_Attribute_mB28CD67241D38913EA797FD821FEFA3104556D56_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspRequiredAttributeAttribute::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspRequiredAttributeAttribute_get_Attribute_m156FB993563616A65F274C0EEA1443DBD1537C31 (AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAttributeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::set_Attribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_mB28CD67241D38913EA797FD821FEFA3104556D56 (AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAttributeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributeU3Ek__BackingField_0), (void*)L_0);
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
// System.Boolean JetBrains.Annotations.AspTypePropertyAttribute::get_CreateConstructorReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AspTypePropertyAttribute_get_CreateConstructorReferences_m9B14EF8A343C79F8EE4897A59A2B6F65E4B2943D (AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCreateConstructorReferencesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::set_CreateConstructorReferences(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m7F5CAEA9EE0E0FD98222EFB333ADE0526C252130 (AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CCreateConstructorReferencesU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspTypePropertyAttribute__ctor_mE845B5B09DE194DAE20726E5A3F692C9FB0CE198 (AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9* __this, bool ___createConstructorReferences0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___createConstructorReferences0;
		AspTypePropertyAttribute_set_CreateConstructorReferences_m7F5CAEA9EE0E0FD98222EFB333ADE0526C252130_inline(__this, L_0, NULL);
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
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute__ctor_m546E0A7AEDBD7AD529257F3AE317F601F006FFB5 (RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		RazorImportNamespaceAttribute_set_Name_m6980C52C17A041400681511BC7467432D558BF23_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorImportNamespaceAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorImportNamespaceAttribute_get_Name_m08BEC89F54FAC7B491715DB41D7A8397272CBBF3 (RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_m6980C52C17A041400681511BC7467432D558BF23 (RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.RazorInjectionAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute__ctor_mAB67615DE2F3D81CFBEF055170A43166A4D4FF9D (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___type0, String_t* ___fieldName1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___type0;
		RazorInjectionAttribute_set_Type_mD96635C5C87E311F89A65EC99A028FA156DCAEF9_inline(__this, L_0, NULL);
		String_t* L_1 = ___fieldName1;
		RazorInjectionAttribute_set_FieldName_mFFE3DAE16293938A46F1CB521AB9E7738C042AF4_inline(__this, L_1, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorInjectionAttribute::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorInjectionAttribute_get_Type_m50C041969921D58E9A95A918C5235828F41B11D9 (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_mD96635C5C87E311F89A65EC99A028FA156DCAEF9 (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String JetBrains.Annotations.RazorInjectionAttribute::get_FieldName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorInjectionAttribute_get_FieldName_mA5C32F63EF2625F8866AA707DADA5F1EB39B5D4C (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFieldNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_FieldName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_mFFE3DAE16293938A46F1CB521AB9E7738C042AF4 (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFieldNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldNameU3Ek__BackingField_1), (void*)L_0);
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
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorDirectiveAttribute__ctor_m3261EAB4FA53764CDD7D4D5DB8523D0CC156F5F5 (RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A* __this, String_t* ___directive0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___directive0;
		RazorDirectiveAttribute_set_Directive_mB2EAB57548F2FA82A325C8623CC13801067E0FCE_inline(__this, L_0, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorDirectiveAttribute::get_Directive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorDirectiveAttribute_get_Directive_m265D3D86F917BEFD54D84FA54135071D91A473C3 (RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDirectiveU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::set_Directive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_mB2EAB57548F2FA82A325C8623CC13801067E0FCE (RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDirectiveU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDirectiveU3Ek__BackingField_0), (void*)L_0);
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
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute__ctor_m9B98FBC7A4FC93FE55225430B0B0D92B7378C74D (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___baseType0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___baseType0;
		RazorPageBaseTypeAttribute_set_BaseType_mB6F04E6A1996872C72E76748BE2329386A013023_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute__ctor_m20EE7F94E032DF7E9D6441C88B02DF56AAEB6DEC (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___baseType0, String_t* ___pageName1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___baseType0;
		RazorPageBaseTypeAttribute_set_BaseType_mB6F04E6A1996872C72E76748BE2329386A013023_inline(__this, L_0, NULL);
		String_t* L_1 = ___pageName1;
		RazorPageBaseTypeAttribute_set_PageName_mCF84A0014145CE8A28E68C79BF9D571F90C764F8_inline(__this, L_1, NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::get_BaseType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorPageBaseTypeAttribute_get_BaseType_m616CC22722E2A7D843B6FF026F010DFCA16D7692 (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBaseTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_BaseType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_mB6F04E6A1996872C72E76748BE2329386A013023 (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBaseTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::get_PageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorPageBaseTypeAttribute_get_PageName_m16E74370EF8F284035F6F1F1625BB698F5008849 (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPageNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_PageName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_mCF84A0014145CE8A28E68C79BF9D571F90C764F8 (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPageNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPageNameU3Ek__BackingField_1), (void*)L_0);
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
// System.Void JetBrains.Annotations.RazorHelperCommonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorHelperCommonAttribute__ctor_mE03F9F8F0A5B6F11873E0CE239E38C7A1C599385 (RazorHelperCommonAttribute_t7F247B12797F0D36D97C41B7697B40CF87A83370* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.RazorLayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorLayoutAttribute__ctor_m764707972D1B5E98744AE0DBCEAE659BFFFC2329 (RazorLayoutAttribute_tAA771510011EB2B6BE56BB079399DEA175017CA8* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.RazorWriteLiteralMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteLiteralMethodAttribute__ctor_m9F877241E6A6BFB9E5D2D8B6D6608A7452C93EFD (RazorWriteLiteralMethodAttribute_tEF4F3747041F2D545AFE59A1A1AB1938044C3F6C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.RazorWriteMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteMethodAttribute__ctor_mC69E7BEEF5903716D944FFB19BC34D1800847211 (RazorWriteMethodAttribute_t39AD3FB31D9C1D368EBDB286AEA4C00868F57A7D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void JetBrains.Annotations.RazorWriteMethodParameterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteMethodParameterAttribute__ctor_mC76AF3C12483B154B04450C4DC8E718EA8D7F002 (RazorWriteMethodParameterAttribute_t1674A1C95FC64DCBC447653A52FC7CF45F667219* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Zenject.NoReflectionBakingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReflectionBakingAttribute__ctor_m16714E04741F77858765D36C8B9AD61B54F79A83 (NoReflectionBakingAttribute_t6778392834AED7BC865F3BA7ECEAAC85D74F85E8* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Zenject.ZenjectAllowDuringValidationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectAllowDuringValidationAttribute__ctor_m5CF6B4340162ECE67D2C8D2DC24E2E52D398F113 (ZenjectAllowDuringValidationAttribute_t3A2692FA1A1C65319C6B86F3CED6D8ECB9E846F2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_m3A74684FFD7601062086DB6BE3980DF9CF9B231B_inline (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m7F22693115B6F74B9970C15F2B7EA10E6B0B4993_inline (InjectAttributeBase_t2D03BBF5280C1189408BD8CA10F03E1F82B9E77E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COptionalU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_mFB2231675FC299C5EC3EE2D5900BEC042880BF45_inline (StringFormatMethodAttribute_tDD9D0336455F7C44B35C81F97EF030732CA11107* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatParameterNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m4BA0785911B53888EF11774894FD76584384FB86_inline (ValueProviderAttribute_t13E0F7A5D4284DE807F471DBB8A4ACF2DCE13B8B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m98958924FD9886905062B78FADC74CD0BAC574D6_inline (NotifyPropertyChangedInvocatorAttribute_tEED267158957A956F2016A4456CC7604198CACB0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_m6266E93BF3EA367FD8F4BE0DD81FB10F27F3CFD6_inline (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CContractU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m6C13825843A8D16FB0A3C8CB746A4952611A5D9C_inline (ContractAnnotationAttribute_t9C918B73B69BCC58CDEE4CD1FF1D2B7571FC4152* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CForceFullStatesU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mC9D1451B5A716DD4442CBDEE50EECD7EF2925238_inline (LocalizationRequiredAttribute_t0F6C9543FC4DBDBBD1166FB76C880E10D269D08A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CRequiredU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m78356CA23AB87FF3E2BB1F5B132EC49C61692100_inline (BaseTypeRequiredAttribute_t094CB718E6F45730EFCB624E880B37B87FFB1D76* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CBaseTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_mB9383DA8654FBC7006C128C3CB1750EF81E8CA14_inline (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUseKindFlagsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mF9AC64E08F7AD263A2A959B43CCC645223B1480E_inline (UsedImplicitlyAttribute_tE8E4C4EA28CDDACCF380646A5CA02CD52CF6F863* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTargetFlagsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m90D00044333C4E35D07BF536FE014C2EB348E962_inline (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUseKindFlagsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_m8A7B3E4E2B404F56C606D54C5F8EF18A5CA5EAC3_inline (MeansImplicitUseAttribute_tCEA7724977BDADADE0A51ED671C8A94D6F441631* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTargetFlagsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m22D6803E40F68BC4480832D969D2A45D0AEFA579_inline (PublicAPIAttribute_t0316F5E2DFAB1F9D22EEE22178C26E40967C7A5C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCommentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mE271AAF99C0688819DCD6711EDE69743FCD00D63_inline (MustUseReturnValueAttribute_t771800023E6C17C2A3FBD3BBAE8AD589E41B0825* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJustificationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJustificationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_mD6CA7772746CC52C07B61BEF6CBE8F4A3070D8F7_inline (PathReferenceAttribute_tA4EC96B08E5AD177788722ADCE893CAF4C4A79B1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBasePathU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBasePathU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m31C4788361144F084A0D85F0804364813DCC08D2_inline (AspMvcAreaMasterLocationFormatAttribute_tCF03C3DA723DFBDD566F90FD434AFF3F6314DC18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mE541513D45DE2063AB7186F22A8F0EDDBA3CB116_inline (AspMvcAreaPartialViewLocationFormatAttribute_t51ADE6676A87D54FE497577073EF1F560D1271CB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_mE677B34A6A100AAEEB47DA2C320B9A0EA73B5124_inline (AspMvcAreaViewLocationFormatAttribute_t860C92DBB87422568EA4D11880466C12219A1373* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m497A2A84579DF1009EC258121ED923FA3DEDF8DB_inline (AspMvcMasterLocationFormatAttribute_t9A7A850CC203124E495E6FAF68CEC7432BB0C91A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mCED73196A0D65B37FDA73AAB7D8DC77D85118A83_inline (AspMvcPartialViewLocationFormatAttribute_t090DC85AE27AD3B8671691E4CDE21CBE9A51E6E9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m5EB7EB6FD33D67C499032B8D32F029AF2BE70762_inline (AspMvcViewLocationFormatAttribute_t8D552A6200F3B2EBD1EBC0FCD2A58A8DC0526CAA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m5B4ABFB0238220F206C65173BD4D2C8893131DEF_inline (AspMvcActionAttribute_t12DB777EA6E55F0BA0CF5DBB54C342C1327B6724* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_m5885201DF2D638F8481057ADA795815EE5D57E10_inline (AspMvcAreaAttribute_t219E4FB963EA7567D9D0D33DA263A144E194B1FA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_m5821F4F48B43B4952383DA5BD50898F8ECA4D6A4_inline (AspMvcControllerAttribute_t269B3467108729C9147560F6C31A5E70FCF5CE26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAnonymousPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_mFF16FCE021BCDF41A99AEB9E8450474C97D71015_inline (HtmlElementAttributesAttribute_tA754D3D7CC817DCBB3F6CC4B27A2E3EB19940265* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mD0F2380B3B90281B60BB129C3EC69E1394A79DC9_inline (HtmlAttributeValueAttribute_t3767DF3E0F1736193E71745ED7ECB8CB026C488F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE77895974BB8AC5DB42113A122A024D8A72B9C1A_inline (CollectionAccessAttribute_t3F1FA86B79C086578A79A5605C9F0F95E536582D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCollectionAccessTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m588CB7FF4ABD246DF6EBB362EC69066DCA22EAE3_inline (AssertionConditionAttribute_t02A6751D4001D0DF9595BEE76439C87C63CFFC87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CConditionTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m272D9F6606C0257F834D5E7B829398CC6C46AC5E_inline (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTagNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTagNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m02A1956BE81EB36DEF40F01FC0B5B3F6A85FA578_inline (AspChildControlTypeAttribute_tB0F2E34AF55E09DBFCE88F78499E04F7864B2013* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CControlTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CControlTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_mB28CD67241D38913EA797FD821FEFA3104556D56_inline (AspRequiredAttributeAttribute_t646ADD07CC89DC035CE60C2EB4288617591A0682* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAttributeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m7F5CAEA9EE0E0FD98222EFB333ADE0526C252130_inline (AspTypePropertyAttribute_tABAC2AED8661EF7FDC10DE10446F731ABBB59BF9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CCreateConstructorReferencesU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_m6980C52C17A041400681511BC7467432D558BF23_inline (RazorImportNamespaceAttribute_t6E13A721212E8D74D676A72156CB6CECF13003AC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_mD96635C5C87E311F89A65EC99A028FA156DCAEF9_inline (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_mFFE3DAE16293938A46F1CB521AB9E7738C042AF4_inline (RazorInjectionAttribute_tBF13630215446B2CD1E1EF3A4927692B4AFEAACA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFieldNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_mB2EAB57548F2FA82A325C8623CC13801067E0FCE_inline (RazorDirectiveAttribute_tF5C50D99952F223DC693AA16D90BE1241C98467A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDirectiveU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDirectiveU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_mB6F04E6A1996872C72E76748BE2329386A013023_inline (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBaseTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_mCF84A0014145CE8A28E68C79BF9D571F90C764F8_inline (RazorPageBaseTypeAttribute_t4B0BC7E50C2B6B963C1A92BF1FFA47B9CB057D92* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPageNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPageNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
