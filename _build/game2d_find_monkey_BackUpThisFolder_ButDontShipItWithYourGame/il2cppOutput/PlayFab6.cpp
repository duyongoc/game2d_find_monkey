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

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance>
struct List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment>
struct List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate>
struct List_1_t2BE2D151E3E6356A8F0DE6FDF222CFE019C3EE15;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo>
struct List_1_t36DD8E0BEC48B5AC224AC1F197CE5342EE4C6D62;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// PlayFab.AuthenticationModels.EntityKey
struct EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E;
// PlayFab.ClientModels.EntityKey
struct EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C;
// PlayFab.AuthenticationModels.EntityLineage
struct EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E;
// PlayFab.AuthenticationModels.GetEntityTokenRequest
struct GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69;
// PlayFab.AuthenticationModels.GetEntityTokenResponse
struct GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PlayFab.PlayFabAuthenticationContext
struct PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A;
// PlayFab.SharedModels.PlayFabBaseModel
struct PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E;
// PlayFab.PlayFabError
struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D;
// PlayFab.SharedModels.PlayFabResultCommon
struct PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// PlayFab.ClientModels.UnlinkSteamAccountResult
struct UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E;
// PlayFab.ClientModels.UnlinkTwitchAccountRequest
struct UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2;
// PlayFab.ClientModels.UnlinkTwitchAccountResult
struct UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4;
// PlayFab.ClientModels.UnlinkXboxAccountRequest
struct UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E;
// PlayFab.ClientModels.UnlinkXboxAccountResult
struct UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E;
// PlayFab.ClientModels.UnlockContainerInstanceRequest
struct UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94;
// PlayFab.ClientModels.UnlockContainerItemRequest
struct UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC;
// PlayFab.ClientModels.UnlockContainerItemResult
struct UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7;
// PlayFab.ClientModels.UpdateAvatarUrlRequest
struct UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040;
// PlayFab.ClientModels.UpdateCharacterDataRequest
struct UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A;
// PlayFab.ClientModels.UpdateCharacterDataResult
struct UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE;
// PlayFab.ClientModels.UpdateCharacterStatisticsRequest
struct UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F;
// PlayFab.ClientModels.UpdateCharacterStatisticsResult
struct UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A;
// PlayFab.ClientModels.UpdatePlayerStatisticsRequest
struct UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496;
// PlayFab.ClientModels.UpdatePlayerStatisticsResult
struct UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09;
// PlayFab.ClientModels.UpdateSharedGroupDataRequest
struct UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC;
// PlayFab.ClientModels.UpdateSharedGroupDataResult
struct UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9;
// PlayFab.ClientModels.UpdateUserDataRequest
struct UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A;
// PlayFab.ClientModels.UpdateUserDataResult
struct UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B;
// PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
struct UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C;
// PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
struct UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950;
// PlayFab.ClientModels.UserAccountInfo
struct UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A;
// PlayFab.ClientModels.UserAndroidDeviceInfo
struct UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7;
// PlayFab.ClientModels.UserAppleIdInfo
struct UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5;
// PlayFab.ClientModels.UserCustomIdInfo
struct UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB;
// PlayFab.ClientModels.UserDataRecord
struct UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45;
// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859;
// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA;
// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42;
// PlayFab.ClientModels.UserGoogleInfo
struct UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16;
// PlayFab.ClientModels.UserIosDeviceInfo
struct UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD;
// PlayFab.ClientModels.UserKongregateInfo
struct UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD;
// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo
struct UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13;
// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388;
// PlayFab.ClientModels.UserOpenIdInfo
struct UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3;
// PlayFab.ClientModels.UserPrivateAccountInfo
struct UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2;
// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB;
// PlayFab.ClientModels.UserSettings
struct UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0;
// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA;
// PlayFab.ClientModels.UserTitleInfo
struct UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821;
// PlayFab.ClientModels.UserTwitchInfo
struct UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431;
// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D;
// PlayFab.ClientModels.ValidateAmazonReceiptRequest
struct ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243;
// PlayFab.ClientModels.ValidateAmazonReceiptResult
struct ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF;
// PlayFab.AuthenticationModels.ValidateEntityTokenRequest
struct ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B;
// PlayFab.AuthenticationModels.ValidateEntityTokenResponse
struct ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE;
// PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
struct ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C;
// PlayFab.ClientModels.ValidateGooglePlayPurchaseResult
struct ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C;
// PlayFab.ClientModels.ValidateIOSReceiptRequest
struct ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4;
// PlayFab.ClientModels.ValidateIOSReceiptResult
struct ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C;
// PlayFab.ClientModels.ValidateWindowsReceiptRequest
struct ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7;
// PlayFab.ClientModels.ValidateWindowsReceiptResult
struct ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC;
// PlayFab.ClientModels.ValueToDateModel
struct ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE;
// PlayFab.ClientModels.Variable
struct Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7;
// PlayFab.ClientModels.VirtualCurrencyRechargeTime
struct VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// PlayFab.ClientModels.WriteClientCharacterEventRequest
struct WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3;
// PlayFab.ClientModels.WriteClientPlayerEventRequest
struct WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA;
// PlayFab.ClientModels.WriteEventResponse
struct WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116;
// PlayFab.ClientModels.WriteTitleEventRequest
struct WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3;
// PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair
struct XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE;
// PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
struct PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// PlayFab.SharedModels.PlayFabBaseModel
struct PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E  : public RuntimeObject
{
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.Currency>
struct Nullable_1_t2B10F2EF519FFB12D492C998C113D6191D4B45A9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.AuthenticationModels.IdentifiedDeviceType>
struct Nullable_1_t9AD8E1438E05D5BA0F423DA1263AFC5941A801B1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider>
struct Nullable_1_t77AB991F23E03305B5C1448C8B16EAF99B4397F2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus>
struct Nullable_1_t2AB9F1C63256F190CF5CE9AB0ED2D44A4273FDB0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.UserDataPermission>
struct Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.UserOrigination>
struct Nullable_1_t2DC981AC3510FB5B419786ACD6FCAA9611918F93 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// PlayFab.AuthenticationModels.EntityKey
struct EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.AuthenticationModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.AuthenticationModels.EntityKey::Type
	String_t* ___Type_1;
};

// PlayFab.AuthenticationModels.EntityLineage
struct EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.AuthenticationModels.EntityLineage::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.AuthenticationModels.EntityLineage::GroupId
	String_t* ___GroupId_1;
	// System.String PlayFab.AuthenticationModels.EntityLineage::MasterPlayerAccountId
	String_t* ___MasterPlayerAccountId_2;
	// System.String PlayFab.AuthenticationModels.EntityLineage::NamespaceId
	String_t* ___NamespaceId_3;
	// System.String PlayFab.AuthenticationModels.EntityLineage::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFab.AuthenticationModels.EntityLineage::TitlePlayerAccountId
	String_t* ___TitlePlayerAccountId_5;
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

// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.PlayFabAuthenticationContext PlayFab.SharedModels.PlayFabRequestCommon::AuthenticationContext
	PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A* ___AuthenticationContext_0;
};

// PlayFab.SharedModels.PlayFabResultCommon
struct PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.SharedModels.PlayFabResultCommon::Request
	PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___Request_0;
	// System.Object PlayFab.SharedModels.PlayFabResultCommon::CustomData
	RuntimeObject* ___CustomData_1;
};

// PlayFab.ClientModels.UserAndroidDeviceInfo
struct UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserAndroidDeviceInfo::AndroidDeviceId
	String_t* ___AndroidDeviceId_0;
};

// PlayFab.ClientModels.UserAppleIdInfo
struct UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserAppleIdInfo::AppleSubjectId
	String_t* ___AppleSubjectId_0;
};

// PlayFab.ClientModels.UserCustomIdInfo
struct UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserCustomIdInfo::CustomId
	String_t* ___CustomId_0;
};

// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserFacebookInfo::FacebookId
	String_t* ___FacebookId_0;
	// System.String PlayFab.ClientModels.UserFacebookInfo::FullName
	String_t* ___FullName_1;
};

// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserFacebookInstantGamesIdInfo::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;
};

// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserGameCenterInfo::GameCenterId
	String_t* ___GameCenterId_0;
};

// PlayFab.ClientModels.UserGoogleInfo
struct UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleEmail
	String_t* ___GoogleEmail_0;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleGender
	String_t* ___GoogleGender_1;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleId
	String_t* ___GoogleId_2;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleLocale
	String_t* ___GoogleLocale_3;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleName
	String_t* ___GoogleName_4;
};

// PlayFab.ClientModels.UserIosDeviceInfo
struct UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserIosDeviceInfo::IosDeviceId
	String_t* ___IosDeviceId_0;
};

// PlayFab.ClientModels.UserKongregateInfo
struct UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateId
	String_t* ___KongregateId_0;
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateName
	String_t* ___KongregateName_1;
};

// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo
struct UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo::NintendoSwitchAccountSubjectId
	String_t* ___NintendoSwitchAccountSubjectId_0;
};

// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;
};

// PlayFab.ClientModels.UserOpenIdInfo
struct UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserOpenIdInfo::ConnectionId
	String_t* ___ConnectionId_0;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Issuer
	String_t* ___Issuer_1;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Subject
	String_t* ___Subject_2;
};

// PlayFab.ClientModels.UserPrivateAccountInfo
struct UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserPrivateAccountInfo::Email
	String_t* ___Email_0;
};

// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnAccountId
	String_t* ___PsnAccountId_0;
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnOnlineId
	String_t* ___PsnOnlineId_1;
};

// PlayFab.ClientModels.UserSettings
struct UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherDeviceInfo
	bool ___GatherDeviceInfo_0;
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherFocusInfo
	bool ___GatherFocusInfo_1;
	// System.Boolean PlayFab.ClientModels.UserSettings::NeedsAttribution
	bool ___NeedsAttribution_2;
};

// PlayFab.ClientModels.UserTwitchInfo
struct UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchId
	String_t* ___TwitchId_0;
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchUserName
	String_t* ___TwitchUserName_1;
};

// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserXboxInfo::XboxUserId
	String_t* ___XboxUserId_0;
};

// PlayFab.ClientModels.ValueToDateModel
struct ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ValueToDateModel::Currency
	String_t* ___Currency_0;
	// System.UInt32 PlayFab.ClientModels.ValueToDateModel::TotalValue
	uint32_t ___TotalValue_1;
	// System.String PlayFab.ClientModels.ValueToDateModel::TotalValueAsDecimal
	String_t* ___TotalValueAsDecimal_2;
};

// PlayFab.ClientModels.Variable
struct Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.Variable::Name
	String_t* ___Name_0;
	// System.String PlayFab.ClientModels.Variable::Value
	String_t* ___Value_1;
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

// PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair
struct XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::XboxLiveAccountId
	String_t* ___XboxLiveAccountId_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09__padding[14];
	};
};
#pragma pack(pop, tp)

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D
	__StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09 ___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0;
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

// PlayFab.AuthenticationModels.GetEntityTokenRequest
struct GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.GetEntityTokenRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.GetEntityTokenRequest::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
};

// PlayFab.PlayFabError
struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23  : public RuntimeObject
{
	// System.String PlayFab.PlayFabError::ApiEndpoint
	String_t* ___ApiEndpoint_0;
	// System.Int32 PlayFab.PlayFabError::HttpCode
	int32_t ___HttpCode_1;
	// System.String PlayFab.PlayFabError::HttpStatus
	String_t* ___HttpStatus_2;
	// PlayFab.PlayFabErrorCode PlayFab.PlayFabError::Error
	int32_t ___Error_3;
	// System.String PlayFab.PlayFabError::ErrorMessage
	String_t* ___ErrorMessage_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> PlayFab.PlayFabError::ErrorDetails
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___ErrorDetails_5;
	// System.Object PlayFab.PlayFabError::CustomData
	RuntimeObject* ___CustomData_6;
	// System.Nullable`1<System.UInt32> PlayFab.PlayFabError::RetryAfterSeconds
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___RetryAfterSeconds_7;
};

struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23_ThreadStaticFields
{
	// System.Text.StringBuilder PlayFab.PlayFabError::_tempSb
	StringBuilder_t* ____tempSb_8;
};

// PlayFab.ClientModels.UnlinkSteamAccountResult
struct UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkTwitchAccountRequest
struct UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlinkTwitchAccountRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkTwitchAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.ClientModels.UnlinkTwitchAccountResult
struct UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkXboxAccountRequest
struct UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkXboxAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkXboxAccountResult
struct UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlockContainerInstanceRequest
struct UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::ContainerItemInstanceId
	String_t* ___ContainerItemInstanceId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlockContainerInstanceRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::KeyItemInstanceId
	String_t* ___KeyItemInstanceId_5;
};

// PlayFab.ClientModels.UnlockContainerItemRequest
struct UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::ContainerItemId
	String_t* ___ContainerItemId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlockContainerItemRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
};

// PlayFab.ClientModels.UnlockContainerItemResult
struct UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.UnlockContainerItemResult::GrantedItems
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___GrantedItems_2;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedItemInstanceId
	String_t* ___UnlockedItemInstanceId_3;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedWithItemInstanceId
	String_t* ___UnlockedWithItemInstanceId_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.UnlockContainerItemResult::VirtualCurrency
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrency_5;
};

// PlayFab.ClientModels.UpdateAvatarUrlRequest
struct UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateAvatarUrlRequest::ImageUrl
	String_t* ___ImageUrl_1;
};

// PlayFab.ClientModels.UpdateCharacterDataRequest
struct UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateCharacterDataRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_3;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_4;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateCharacterDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_5;
};

// PlayFab.ClientModels.UpdateCharacterDataResult
struct UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.UInt32 PlayFab.ClientModels.UpdateCharacterDataResult::DataVersion
	uint32_t ___DataVersion_2;
};

// PlayFab.ClientModels.UpdateCharacterStatisticsRequest
struct UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterStatistics
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___CharacterStatistics_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
};

// PlayFab.ClientModels.UpdateCharacterStatisticsResult
struct UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdatePlayerStatisticsRequest
struct UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdatePlayerStatisticsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate> PlayFab.ClientModels.UpdatePlayerStatisticsRequest::Statistics
	List_1_t2BE2D151E3E6356A8F0DE6FDF222CFE019C3EE15* ___Statistics_2;
};

// PlayFab.ClientModels.UpdatePlayerStatisticsResult
struct UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdateSharedGroupDataRequest
struct UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_3;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_4;
	// System.String PlayFab.ClientModels.UpdateSharedGroupDataRequest::SharedGroupId
	String_t* ___SharedGroupId_5;
};

// PlayFab.ClientModels.UpdateSharedGroupDataResult
struct UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdateUserDataRequest
struct UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateUserDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_3;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateUserDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_4;
};

// PlayFab.ClientModels.UpdateUserDataResult
struct UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.UInt32 PlayFab.ClientModels.UpdateUserDataResult::DataVersion
	uint32_t ___DataVersion_2;
};

// PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
struct UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::DisplayName
	String_t* ___DisplayName_2;
};

// PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
struct UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameResult::DisplayName
	String_t* ___DisplayName_2;
};

// PlayFab.ClientModels.UserAccountInfo
struct UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.UserAndroidDeviceInfo PlayFab.ClientModels.UserAccountInfo::AndroidDeviceInfo
	UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7* ___AndroidDeviceInfo_0;
	// PlayFab.ClientModels.UserAppleIdInfo PlayFab.ClientModels.UserAccountInfo::AppleAccountInfo
	UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5* ___AppleAccountInfo_1;
	// System.DateTime PlayFab.ClientModels.UserAccountInfo::Created
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created_2;
	// PlayFab.ClientModels.UserCustomIdInfo PlayFab.ClientModels.UserAccountInfo::CustomIdInfo
	UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB* ___CustomIdInfo_3;
	// PlayFab.ClientModels.UserFacebookInfo PlayFab.ClientModels.UserAccountInfo::FacebookInfo
	UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859* ___FacebookInfo_4;
	// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo PlayFab.ClientModels.UserAccountInfo::FacebookInstantGamesIdInfo
	UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA* ___FacebookInstantGamesIdInfo_5;
	// PlayFab.ClientModels.UserGameCenterInfo PlayFab.ClientModels.UserAccountInfo::GameCenterInfo
	UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42* ___GameCenterInfo_6;
	// PlayFab.ClientModels.UserGoogleInfo PlayFab.ClientModels.UserAccountInfo::GoogleInfo
	UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16* ___GoogleInfo_7;
	// PlayFab.ClientModels.UserIosDeviceInfo PlayFab.ClientModels.UserAccountInfo::IosDeviceInfo
	UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD* ___IosDeviceInfo_8;
	// PlayFab.ClientModels.UserKongregateInfo PlayFab.ClientModels.UserAccountInfo::KongregateInfo
	UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD* ___KongregateInfo_9;
	// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo PlayFab.ClientModels.UserAccountInfo::NintendoSwitchAccountInfo
	UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13* ___NintendoSwitchAccountInfo_10;
	// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo PlayFab.ClientModels.UserAccountInfo::NintendoSwitchDeviceIdInfo
	UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388* ___NintendoSwitchDeviceIdInfo_11;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo> PlayFab.ClientModels.UserAccountInfo::OpenIdInfo
	List_1_t36DD8E0BEC48B5AC224AC1F197CE5342EE4C6D62* ___OpenIdInfo_12;
	// System.String PlayFab.ClientModels.UserAccountInfo::PlayFabId
	String_t* ___PlayFabId_13;
	// PlayFab.ClientModels.UserPrivateAccountInfo PlayFab.ClientModels.UserAccountInfo::PrivateInfo
	UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2* ___PrivateInfo_14;
	// PlayFab.ClientModels.UserPsnInfo PlayFab.ClientModels.UserAccountInfo::PsnInfo
	UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB* ___PsnInfo_15;
	// PlayFab.ClientModels.UserSteamInfo PlayFab.ClientModels.UserAccountInfo::SteamInfo
	UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA* ___SteamInfo_16;
	// PlayFab.ClientModels.UserTitleInfo PlayFab.ClientModels.UserAccountInfo::TitleInfo
	UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821* ___TitleInfo_17;
	// PlayFab.ClientModels.UserTwitchInfo PlayFab.ClientModels.UserAccountInfo::TwitchInfo
	UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431* ___TwitchInfo_18;
	// System.String PlayFab.ClientModels.UserAccountInfo::Username
	String_t* ___Username_19;
	// PlayFab.ClientModels.UserXboxInfo PlayFab.ClientModels.UserAccountInfo::XboxInfo
	UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D* ___XboxInfo_20;
};

// PlayFab.ClientModels.UserDataRecord
struct UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.UserDataRecord::LastUpdated
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastUpdated_0;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UserDataRecord::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_1;
	// System.String PlayFab.ClientModels.UserDataRecord::Value
	String_t* ___Value_2;
};

// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus> PlayFab.ClientModels.UserSteamInfo::SteamActivationStatus
	Nullable_1_t2AB9F1C63256F190CF5CE9AB0ED2D44A4273FDB0 ___SteamActivationStatus_0;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamCountry
	String_t* ___SteamCountry_1;
	// System.Nullable`1<PlayFab.ClientModels.Currency> PlayFab.ClientModels.UserSteamInfo::SteamCurrency
	Nullable_1_t2B10F2EF519FFB12D492C998C113D6191D4B45A9 ___SteamCurrency_2;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamId
	String_t* ___SteamId_3;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamName
	String_t* ___SteamName_4;
};

// PlayFab.ClientModels.ValidateAmazonReceiptRequest
struct ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateAmazonReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Int32 PlayFab.ClientModels.ValidateAmazonReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::ReceiptId
	String_t* ___ReceiptId_5;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::UserId
	String_t* ___UserId_6;
};

// PlayFab.ClientModels.ValidateAmazonReceiptResult
struct ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateAmazonReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.AuthenticationModels.ValidateEntityTokenRequest
struct ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.ValidateEntityTokenRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.AuthenticationModels.ValidateEntityTokenRequest::EntityToken
	String_t* ___EntityToken_2;
};

// PlayFab.AuthenticationModels.ValidateEntityTokenResponse
struct ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.ValidateEntityTokenResponse::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
	// System.Nullable`1<PlayFab.AuthenticationModels.IdentifiedDeviceType> PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentifiedDeviceType
	Nullable_1_t9AD8E1438E05D5BA0F423DA1263AFC5941A801B1 ___IdentifiedDeviceType_3;
	// System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider> PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentityProvider
	Nullable_1_t77AB991F23E03305B5C1448C8B16EAF99B4397F2 ___IdentityProvider_4;
	// System.String PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentityProviderIssuedId
	String_t* ___IdentityProviderIssuedId_5;
	// PlayFab.AuthenticationModels.EntityLineage PlayFab.AuthenticationModels.ValidateEntityTokenResponse::Lineage
	EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E* ___Lineage_6;
};

// PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
struct ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::PurchasePrice
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::ReceiptJson
	String_t* ___ReceiptJson_5;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::Signature
	String_t* ___Signature_6;
};

// PlayFab.ClientModels.ValidateGooglePlayPurchaseResult
struct ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateGooglePlayPurchaseResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.ValidateIOSReceiptRequest
struct ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateIOSReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Int32 PlayFab.ClientModels.ValidateIOSReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::ReceiptData
	String_t* ___ReceiptData_5;
};

// PlayFab.ClientModels.ValidateIOSReceiptResult
struct ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateIOSReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.ValidateWindowsReceiptRequest
struct ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateWindowsReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.UInt32 PlayFab.ClientModels.ValidateWindowsReceiptRequest::PurchasePrice
	uint32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::Receipt
	String_t* ___Receipt_5;
};

// PlayFab.ClientModels.ValidateWindowsReceiptResult
struct ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateWindowsReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.VirtualCurrencyRechargeTime
struct VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeMax
	int32_t ___RechargeMax_0;
	// System.DateTime PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___RechargeTime_1;
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::SecondsToRecharge
	int32_t ___SecondsToRecharge_2;
};

// PlayFab.ClientModels.WriteEventResponse
struct WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.WriteEventResponse::EventId
	String_t* ___EventId_2;
};

// PlayFab.AuthenticationModels.GetEntityTokenResponse
struct GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.GetEntityTokenResponse::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
	// System.String PlayFab.AuthenticationModels.GetEntityTokenResponse::EntityToken
	String_t* ___EntityToken_3;
	// System.Nullable`1<System.DateTime> PlayFab.AuthenticationModels.GetEntityTokenResponse::TokenExpiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___TokenExpiration_4;
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

// PlayFab.ClientModels.UserTitleInfo
struct UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserTitleInfo::AvatarUrl
	String_t* ___AvatarUrl_0;
	// System.DateTime PlayFab.ClientModels.UserTitleInfo::Created
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created_1;
	// System.String PlayFab.ClientModels.UserTitleInfo::DisplayName
	String_t* ___DisplayName_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::FirstLogin
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___FirstLogin_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.UserTitleInfo::isBanned
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isBanned_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::LastLogin
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastLogin_5;
	// System.Nullable`1<PlayFab.ClientModels.UserOrigination> PlayFab.ClientModels.UserTitleInfo::Origination
	Nullable_1_t2DC981AC3510FB5B419786ACD6FCAA9611918F93 ___Origination_6;
	// PlayFab.ClientModels.EntityKey PlayFab.ClientModels.UserTitleInfo::TitlePlayerAccount
	EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C* ___TitlePlayerAccount_7;
};

// PlayFab.ClientModels.WriteClientCharacterEventRequest
struct WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientCharacterEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteClientCharacterEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::EventName
	String_t* ___EventName_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientCharacterEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_5;
};

// PlayFab.ClientModels.WriteClientPlayerEventRequest
struct WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientPlayerEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteClientPlayerEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.WriteClientPlayerEventRequest::EventName
	String_t* ___EventName_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientPlayerEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_4;
};

// PlayFab.ClientModels.WriteTitleEventRequest
struct WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteTitleEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteTitleEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.WriteTitleEventRequest::EventName
	String_t* ___EventName_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteTitleEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
struct PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3  : public MulticastDelegate_t
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



// System.Void PlayFab.SharedModels.PlayFabResultCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46 (PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.SharedModels.PlayFabRequestCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17 (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.SharedModels.PlayFabBaseModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E (PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.ClientModels.UnlinkSteamAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkSteamAccountResult__ctor_mAF0BDB775D7A16C3C741772CF94B78BB16E90EE7 (UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkTwitchAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkTwitchAccountRequest__ctor_m6A5DCDEEA50FE3A2A19EC37694944AC67BA8FFCC (UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkTwitchAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkTwitchAccountResult__ctor_mC4C5593C7C3BAD16A607664688E0887F70C266A0 (UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkXboxAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkXboxAccountRequest__ctor_mE581A4A7F5D2CD84F9611262F2427C6D41977560 (UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkXboxAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkXboxAccountResult__ctor_mB727896FD2068BE0D54D622DED1928B2ED02B580 (UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerInstanceRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerInstanceRequest__ctor_mB555569594FB7C11F851871170C58A7B416E4211 (UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerItemRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerItemRequest__ctor_m19C5F8B37FD3800A467EB15953FC0720A806E310 (UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerItemResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerItemResult__ctor_mB6F5C9670AFD68AEBBB4BAA2FE03E138FFDE33CE (UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateAvatarUrlRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateAvatarUrlRequest__ctor_mC4E7E59145437CC1BE741B811B5F6F560F145EDE (UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterDataRequest__ctor_mC4DB763A213A3418B8CF34C196DADF2BA66BA809 (UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterDataResult__ctor_mED78D33DB6A819C3A2C0730895AD8B74C3C57011 (UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterStatisticsRequest__ctor_mB6C840EF7AC92BC0990DAADCB927ED048EC598DE (UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterStatisticsResult__ctor_m02FB1ABECC0512066F08755FD54DC75DCA382390 (UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdatePlayerStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatePlayerStatisticsRequest__ctor_m326E4C9B3C6A96A9C6CC01D4236C11C4EC4F21CC (UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdatePlayerStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatePlayerStatisticsResult__ctor_mC266BDAFF941B48C0A0EFF7226F13A15DD61C591 (UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateSharedGroupDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSharedGroupDataRequest__ctor_m77BD7FDB8EE5606C20D5038B4A8358D932943D9E (UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateSharedGroupDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSharedGroupDataResult__ctor_m88A330E4112DF044511F338AA43FC135E99C0652 (UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserDataRequest__ctor_m085241A7619C2B3BB47F59688FFB0C9E9863D5FA (UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserDataResult__ctor_m543F1445487363400B36394770594B3CC9D2EDE6 (UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserTitleDisplayNameRequest__ctor_m1478E7F1AAA82AD3925FEB80E35E8342DE16B1A8 (UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserTitleDisplayNameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserTitleDisplayNameResult__ctor_m28C736ECD3C9418DA49798092E135BFDCEF5367F (UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAccountInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAccountInfo__ctor_m0B101309D1CABA57AF6A40D9021847ED6A5DC192 (UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAndroidDeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAndroidDeviceInfo__ctor_m0CBE751E65D69225F87E352AFC3418FDB357A75D (UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAppleIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAppleIdInfo__ctor_mBB61EC4F66DC73F95187915EE5DBA752B2E9FDC0 (UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserCustomIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCustomIdInfo__ctor_mD0D0B1FB5618E29A23E08ED515C46A4A324CA13B (UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserDataRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataRecord__ctor_mD36706010FDEC77CE6C613DB2FBF13AD5628F43B (UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserFacebookInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserFacebookInfo__ctor_m8088182553413588575958F763323BDD8CE8DC62 (UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserFacebookInstantGamesIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserFacebookInstantGamesIdInfo__ctor_m7558C1724FEE9C8BD87F6CDF814B225C82CD8AFB (UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserGameCenterInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserGameCenterInfo__ctor_m5E267CB2A1F28BF14DF6FF819614186358958038 (UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserGoogleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserGoogleInfo__ctor_m841CB7D609183A3B7BA6563962831D1BCF3EEA2F (UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserIosDeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserIosDeviceInfo__ctor_mF0AE23B65482E1A01377BD8C3E24A78F64FF2219 (UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserKongregateInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserKongregateInfo__ctor_m6B1B8DC96F524DE11D4E6CB3B9F2AA7E52F64456 (UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNintendoSwitchAccountIdInfo__ctor_m687CEE384339DBFF35C51E461340C5C1853B917D (UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNintendoSwitchDeviceIdInfo__ctor_m72CEE298DDE0196934B865F114A5880A8912881F (UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserOpenIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOpenIdInfo__ctor_m81CD93B4BD545F7DD9FAA9D2E7D981BDE2E49D33 (UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserPrivateAccountInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserPrivateAccountInfo__ctor_m96BDB211833B281F90EE345C9E6D4150C8DA94D4 (UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserPsnInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserPsnInfo__ctor_m9721FBFFAB8524D0B415C35E08213B2FF9EBF6C5 (UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSettings__ctor_m5CD297D6D681F0A7820BC031BECF6B26C8C5DF90 (UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserSteamInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSteamInfo__ctor_m1C646BD4BC50F8054CD22FFAD1B043FBDBA303A0 (UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserTitleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTitleInfo__ctor_m686B56A734ADD2EB81D1B9CA12B9803F99F48A5E (UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserTwitchInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTwitchInfo__ctor_m436A9460A8818E31C3FD3BE881E0E60796E15040 (UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserXboxInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserXboxInfo__ctor_m6C5742944DB685AA37434E89518F6C8CF243E85E (UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateAmazonReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateAmazonReceiptRequest__ctor_m94D38D123ECACC4D9F59830AB731F61D3E10979A (ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateAmazonReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateAmazonReceiptResult__ctor_m3F8288B791553EF9989F128D61541E6694D4D181 (ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateGooglePlayPurchaseRequest__ctor_m99AED4344A996A93531EACFDC27984FBB28FF431 (ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateGooglePlayPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateGooglePlayPurchaseResult__ctor_m8D2EC8BAD3C1EA53F7E250E7BC9996B5A425CEAF (ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateIOSReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateIOSReceiptRequest__ctor_m6190DD618DE881A3A818945B1D8C7954E8BB2962 (ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateIOSReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateIOSReceiptResult__ctor_m289B9D4776BBC332F8A49709C6B4485EB5EB4276 (ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateWindowsReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateWindowsReceiptRequest__ctor_m9E16DB14A77715AEA6C9AFA30A3B7F240CEB3F0C (ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateWindowsReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateWindowsReceiptResult__ctor_m10BA354E7F8C095414A678ED51E60CA207673B1E (ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValueToDateModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueToDateModel__ctor_m2D0D5B7604B3F32FB72185AC2C3369063BDB6056 (ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variable__ctor_mD9A6B40479B285102BAAD6ABAE2515B799AF7810 (Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.VirtualCurrencyRechargeTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCurrencyRechargeTime__ctor_mC239AB1CAD6DCF93CBC1CBF2803A4880ECCC328E (VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteClientCharacterEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteClientCharacterEventRequest__ctor_m34164D5DAA1D00210F6582A7AD00BE63C693BE8F (WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteClientPlayerEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteClientPlayerEventRequest__ctor_m5A05D817566CE4E7DEE3428988B304AB7FD06E1C (WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteEventResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteEventResponse__ctor_mEFDA7F16257A454FBA7E16D4FFC9330FDF9F841D (WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteTitleEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTitleEventRequest__ctor_m7D1E54B4350C95D9E610267268D047CFC24EE20B (WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XboxLiveAccountPlayFabIdPair__ctor_m1A7DDAF0E16AC6F189C72A75F8012AB1B40A9662 (XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_Multicast(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* currentDelegate = reinterpret_cast<PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___request0, ___error1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInst(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	typedef void (*FunctionPointerType) (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___error1, method);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStatic(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___error1, method);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStaticInvoker(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(__this->___method_ptr_0, method, NULL, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_ClosedStaticInvoker(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenVirtual(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	VirtualActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(il2cpp_codegen_method_get_slot(method), ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInterface(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	InterfaceActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericVirtual(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	GenericVirtualActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(method, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericInterface(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	GenericInterfaceActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(method, ___request0, ___error1);
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent__ctor_m2A7788530C700396124CAE117A7B8A8D830EE99B (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_Multicast;
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::Invoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038 (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___request0, ___error1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayFabErrorEvent_BeginInvoke_mD33FA45553968F664B9C7FA6DBF5ABF91F5D656C (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___request0;
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_EndInvoke_m25BF1B023D9883283109BA5E5F2BA6215F10308A (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void PlayFab.AuthenticationModels.EntityKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityKey__ctor_mB1488235600DA953B7B9CC3FEA6BD0B581CDBABD (EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.EntityLineage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLineage__ctor_m702D59D688842FBEEA0556ADA6FF027B4C632DC3 (EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.GetEntityTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetEntityTokenRequest__ctor_m9B22427D71006B07D4EF7EE46CB3D3DEEC0B6CE9 (GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.GetEntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetEntityTokenResponse__ctor_m005FA6D3219909B9145CCA811B9EF14B76CC1D41 (GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.ValidateEntityTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateEntityTokenRequest__ctor_m1CC2F8D79AD059413023EC9D83F2ECA04DF1AECA (ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.ValidateEntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateEntityTokenResponse__ctor_m84808164C3ADB884CEB8B2E27FF7B2E206A37729 (ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
