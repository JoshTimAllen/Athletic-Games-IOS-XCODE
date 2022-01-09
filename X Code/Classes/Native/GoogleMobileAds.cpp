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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// GoogleMobileAds.Api.AdError
struct AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667;
// GoogleMobileAds.Api.AdSize
struct AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3;
// GoogleMobileAds.Api.AdValue
struct AdValue_tFFE447046A68A3F3A21614B785A75761D2F824E1;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F;
// GoogleMobileAds.Api.BannerView
struct BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B;
// GoogleMobileAds.Api.Reward
struct Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t0598B5D8DE09D9495F5A2C8403E803AB95474A25;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_tB6AF90A8FA850039CB0A92E13E8A40743C0D7DED;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_tE2CEA7B43970F2A7BFAB40C9D1C073FE118F41E6;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tA73C27EABF9B58515C03B84248B737D525C1B2C3;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t7EA3F352293E387DA0C7F8789B8805F14B5083AC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tA73C27EABF9B58515C03B84248B737D525C1B2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t9D9D176CE5C2F0B9580EE72E1DE74EF6A18CE43A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
IL2CPP_EXTERN_C String_t* _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE4D4DA894073992DFECFC97ADFCCFF7007EF4C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m179897E1CD640FD32F0FCCFE083E269CE99ECDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m80FDB7438C26EAE211928B5457DE3A39CDC48B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD6E97334E7E632A54A663D618BC554A11B3D3048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m3D0A89953ACA8BCDCA2EEDCB5B309B8E5409A9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_m66237202092B74C1A1170D64E8899BCD4B66EBB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m984EF6BB8FBCC9D826530EA219959B9860FA6238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m19263CF4DEE43DCFF128138E63F68AAAA5A78476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_mF0EE7E22B87F8CC0F2504CAF61872F9688A467B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_m002A0A44E9EC5D58C5F0096F7FD9EDBB0768E439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_mAEB59EA3A875AA07B7EC42A716E465ADDF079B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_m8295BB17919638F106E4850F94FC706CBC1FF07B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_m5ED2B52A8943CFB505F74F33A5CB9F17128F1AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m16757DBE25D1F75E7662B6F22847EC26855D13C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_LoadAd_mADF3B3EFD73BD93E8D6DF24F87CC817FF1A80772_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__1_m179897E1CD640FD32F0FCCFE083E269CE99ECDA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__4_m80FDB7438C26EAE211928B5457DE3A39CDC48B8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView__ctor_mAB870CD99C54A4F2DBD2CED536473DFF2C8843C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_LoadAd_m92AA3E7D2C3BB8B07F06E6BF607B9B4EC8FF47CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__1_m66237202092B74C1A1170D64E8899BCD4B66EBB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__4_m984EF6BB8FBCC9D826530EA219959B9860FA6238_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__6_m19263CF4DEE43DCFF128138E63F68AAAA5A78476_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetMobileAdsClient_m973058ECBA5C41815D44A3A34826FD72A0DD1845_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_LoadAd_mE2011E4B7E1A8D16D4BA517A8687F599976FA544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__1_mF0EE7E22B87F8CC0F2504CAF61872F9688A467B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__2_m002A0A44E9EC5D58C5F0096F7FD9EDBB0768E439_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__5_mAEB59EA3A875AA07B7EC42A716E465ADDF079B11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__7_m8295BB17919638F106E4850F94FC706CBC1FF07B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__8_m5ED2B52A8943CFB505F74F33A5CB9F17128F1AD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdFailedToShow_mF6404B397710B55A8C02A123055B70FC93AFABA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdOpening_mD1C552402C050B11E34C344D4397FE8456D830CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnUserEarnedReward_m4BC3DB6D32795A875E4F13C2C8E178876A6309C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdFailedToShow_mA8D006C81631DBA80A2F08B5C903FBB03D24CAD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdOpening_m5E3A35837CC5D4DD50BE20682EFE6C45A19980CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnUserEarnedReward_m4ACD2A92D36832C1533429A203A3EC4BA9B4043F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m16757DBE25D1F75E7662B6F22847EC26855D13C5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t40BD4D4186D12CA40A04D052CD68B90503C38ADC 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t7EA3F352293E387DA0C7F8789B8805F14B5083AC * ___U3CMediationExtrasU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667, ___U3CExtrasU3Ek__BackingField_3)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CExtrasU3Ek__BackingField_3() const { return ___U3CExtrasU3Ek__BackingField_3; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CExtrasU3Ek__BackingField_3() { return &___U3CExtrasU3Ek__BackingField_3; }
	inline void set_U3CExtrasU3Ek__BackingField_3(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667, ___U3CMediationExtrasU3Ek__BackingField_4)); }
	inline List_1_t7EA3F352293E387DA0C7F8789B8805F14B5083AC * get_U3CMediationExtrasU3Ek__BackingField_4() const { return ___U3CMediationExtrasU3Ek__BackingField_4; }
	inline List_1_t7EA3F352293E387DA0C7F8789B8805F14B5083AC ** get_address_of_U3CMediationExtrasU3Ek__BackingField_4() { return &___U3CMediationExtrasU3Ek__BackingField_4; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_4(List_1_t7EA3F352293E387DA0C7F8789B8805F14B5083AC * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_4), (void*)value);
	}
};


// GoogleMobileAds.Api.BannerView
struct BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdLoaded_1)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdOpening_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdClosed_4)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnPaidEvent_5)); }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdLoaded_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdOpening_5)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdClosed_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnPaidEvent_9)); }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields, ___instance_2)); }
	inline MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B, ___initCompleteAction_0)); }
	inline Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * ___OnPaidEvent_10;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdLoaded_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdOpening_5)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdClosed_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEarnedReward_9() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnUserEarnedReward_9)); }
	inline EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * get_OnUserEarnedReward_9() const { return ___OnUserEarnedReward_9; }
	inline EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 ** get_address_of_OnUserEarnedReward_9() { return &___OnUserEarnedReward_9; }
	inline void set_OnUserEarnedReward_9(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * value)
	{
		___OnUserEarnedReward_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEarnedReward_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_10() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnPaidEvent_10)); }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * get_OnPaidEvent_10() const { return ___OnPaidEvent_10; }
	inline EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C ** get_address_of_OnPaidEvent_10() { return &___OnPaidEvent_10; }
	inline void set_OnPaidEvent_10(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * value)
	{
		___OnPaidEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_10), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_tFFE447046A68A3F3A21614B785A75761D2F824E1 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_tFFE447046A68A3F3A21614B785A75761D2F824E1 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_tFFE447046A68A3F3A21614B785A75761D2F824E1 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_tFFE447046A68A3F3A21614B785A75761D2F824E1 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2  : public AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
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


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_t4B26B17B463F5874B9D8B671755127FC7DEBA6EF 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_t4B26B17B463F5874B9D8B671755127FC7DEBA6EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_t2ABE09674C0854EFF197440C01C6E298FE52AD46 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t2ABE09674C0854EFF197440C01C6E298FE52AD46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.Orientation
struct Orientation_t49147CBDDFC3891C55D58FBD393D42F32B77FB2E 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t49147CBDDFC3891C55D58FBD393D42F32B77FB2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___Banner_4)); }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___IABBanner_6)); }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___Leaderboard_7)); }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___SmartBanner_8)); }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B (EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0 (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m31F64BABE43B70B846A73D5E74B8EF34877215F4_inline (LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m086A54932FE43AEEEE4186B93D772F4E88D17B25 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322 (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143 (EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *, RuntimeObject *, AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39 (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * __this, RuntimeObject * ___sender0, AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C *, RuntimeObject *, AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2 (EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m9F0C9790B90B3B04395AE3CA1B363A0DF4FA84EF_inline (AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291 (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240 (EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *, RuntimeObject *, AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m973058ECBA5C41815D44A3A34826FD72A0DD1845 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE4D4DA894073992DFECFC97ADFCCFF7007EF4C1E (Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mFF34CA2462218B9F934788B140C014AC52235667 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* ___typeName0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_mE9EC369AEABC3B21659ACD84F513413E9AA3F1A4 (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13 (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * __this, InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 *, InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3D0A89953ACA8BCDCA2EEDCB5B309B8E5409A9D1 (EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD6E97334E7E632A54A663D618BC554A11B3D3048 (EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * __this, RuntimeObject * ___sender0, Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *, RuntimeObject *, Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291 (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m2CC8A6A1894656E2FFD9E61707CCD6588A905119 (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322 (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mAB870CD99C54A4F2DBD2CED536473DFF2C8843C9 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, String_t* ___adUnitId0, AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView__ctor_mAB870CD99C54A4F2DBD2CED536473DFF2C8843C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_t9FF3DBAAC1AAACC9ECA667290E380B7D961318A3 *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mADF3B3EFD73BD93E8D6DF24F87CC817FF1A80772 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_LoadAd_mADF3B3EFD73BD93E8D6DF24F87CC817FF1A80772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * L_3 = (EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B *)il2cpp_codegen_object_new(EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_m179897E1CD640FD32F0FCCFE083E269CE99ECDA4_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_9 = (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C *)il2cpp_codegen_object_new(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_m80FDB7438C26EAE211928B5457DE3A39CDC48B8E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t6083EB8D1AC41EB933239CA260FBBD251436E8C4_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m179897E1CD640FD32F0FCCFE083E269CE99ECDA4 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__1_m179897E1CD640FD32F0FCCFE083E269CE99ECDA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m31F64BABE43B70B846A73D5E74B8EF34877215F4_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m086A54932FE43AEEEE4186B93D772F4E88D17B25(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_4();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m80FDB7438C26EAE211928B5457DE3A39CDC48B8E (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__4_m80FDB7438C26EAE211928B5457DE3A39CDC48B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_mE9EC369AEABC3B21659ACD84F513413E9AA3F1A4 (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * L_7 = (EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B *)il2cpp_codegen_object_new(EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_m66237202092B74C1A1170D64E8899BCD4B66EBB0_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_11 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * L_13 = (EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 *)il2cpp_codegen_object_new(EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_m984EF6BB8FBCC9D826530EA219959B9860FA6238_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_15 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_17 = (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C *)il2cpp_codegen_object_new(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_m19263CF4DEE43DCFF128138E63F68AAAA5A78476_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m92AA3E7D2C3BB8B07F06E6BF607B9B4EC8FF47CE (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_LoadAd_m92AA3E7D2C3BB8B07F06E6BF607B9B4EC8FF47CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m2AE6EBF498E724A7664D0FB2E3DF0BE526389F78 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t15B64BC6B727448B61DB21A54D2C29A378EBE8A4_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_m66237202092B74C1A1170D64E8899BCD4B66EBB0 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__1_m66237202092B74C1A1170D64E8899BCD4B66EBB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m31F64BABE43B70B846A73D5E74B8EF34877215F4_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m086A54932FE43AEEEE4186B93D772F4E88D17B25(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_5();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_6();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m984EF6BB8FBCC9D826530EA219959B9860FA6238 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__4_m984EF6BB8FBCC9D826530EA219959B9860FA6238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_m9F0C9790B90B3B04395AE3CA1B363A0DF4FA84EF_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m19263CF4DEE43DCFF128138E63F68AAAA5A78476 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__6_m19263CF4DEE43DCFF128138E63F68AAAA5A78476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m086A54932FE43AEEEE4186B93D772F4E88D17B25 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_m602F9982BD37495A024F72C600B3ED9BA73B10B7 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = MobileAds_GetMobileAdsClient_m973058ECBA5C41815D44A3A34826FD72A0DD1845(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_0 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_1 = (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE *)il2cpp_codegen_object_new(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var);
		MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D(L_1, /*hidden argument*/NULL);
		((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_2 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_0 = (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_1 = V_0;
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_3 = MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_5 = V_0;
		Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43 * L_6 = (Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43 *)il2cpp_codegen_object_new(Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43_il2cpp_TypeInfo_var);
		Action_1__ctor_mE4D4DA894073992DFECFC97ADFCCFF7007EF4C1E(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m16757DBE25D1F75E7662B6F22847EC26855D13C5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE4D4DA894073992DFECFC97ADFCCFF7007EF4C1E_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tCF692287CA6D6E7D5C7DBBBD6062B0FC1D2BFD43 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tA73C27EABF9B58515C03B84248B737D525C1B2C3_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_t9D9D176CE5C2F0B9580EE72E1DE74EF6A18CE43A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mFF34CA2462218B9F934788B140C014AC52235667(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_3, "GoogleMobileAds, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_5, /*hidden argument*/NULL);
		((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m973058ECBA5C41815D44A3A34826FD72A0DD1845 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetMobileAdsClient_m973058ECBA5C41815D44A3A34826FD72A0DD1845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var, L_0);
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
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m16757DBE25D1F75E7662B6F22847EC26855D13C5 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m16757DBE25D1F75E7662B6F22847EC26855D13C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * L_3 = (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 *)il2cpp_codegen_object_new(InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_mE9EC369AEABC3B21659ACD84F513413E9AA3F1A4(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13(L_1, L_3, /*hidden argument*/Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13_RuntimeMethod_var);
	}

IL_001c:
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
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m69293C299269B9516D6D09B8F707D6452B7D168C(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_t68943FDF65B6D3F2049EC8AAF4AC53F0BAFBB3A9_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * L_7 = (EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B *)il2cpp_codegen_object_new(EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B(L_7, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__1_mF0EE7E22B87F8CC0F2504CAF61872F9688A467B3_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD66571B176967AB35248AFE728F3C31C73E8CA9B_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t0F547105594F963F5DACAEA56F02F3873ACE7C4B * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * L_9 = (EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 *)il2cpp_codegen_object_new(EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2(L_9, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__2_m002A0A44E9EC5D58C5F0096F7FD9EDBB0768E439_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_11 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_11, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_13 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_13, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * L_15 = (EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 *)il2cpp_codegen_object_new(EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2(L_15, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__5_mAEB59EA3A875AA07B7EC42A716E465ADDF079B11_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mC7977A2EC7494FC12D135F266A4AE64F897573E2_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tEF58501BE4F540320D0F9BA3E4816EF42A48B882 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_17 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_17, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->get_client_0();
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_19 = (EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)il2cpp_codegen_object_new(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3D0A89953ACA8BCDCA2EEDCB5B309B8E5409A9D1(L_19, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__7_m8295BB17919638F106E4850F94FC706CBC1FF07B_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m3D0A89953ACA8BCDCA2EEDCB5B309B8E5409A9D1_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->get_client_0();
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_21 = (EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C *)il2cpp_codegen_object_new(EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF(L_21, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__8_m5ED2B52A8943CFB505F74F33A5CB9F17128F1AD8_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m71EE8EE5981FD929420057C41FAF3659EB702BEF_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_mD1C552402C050B11E34C344D4397FE8456D830CA (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdOpening_mD1C552402C050B11E34C344D4397FE8456D830CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m5E3A35837CC5D4DD50BE20682EFE6C45A19980CD (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdOpening_m5E3A35837CC5D4DD50BE20682EFE6C45A19980CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mF6404B397710B55A8C02A123055B70FC93AFABA2 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdFailedToShow_mF6404B397710B55A8C02A123055B70FC93AFABA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_0 = NULL;
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_3 = V_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_6 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *>((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C **)L_2, ((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_8 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_8) == ((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToShow_mA8D006C81631DBA80A2F08B5C903FBB03D24CAD2 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdFailedToShow_mA8D006C81631DBA80A2F08B5C903FBB03D24CAD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_0 = NULL;
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_3 = V_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_6 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *>((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C **)L_2, ((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_8 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_8) == ((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_m4BC3DB6D32795A875E4F13C2C8E178876A6309C1 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnUserEarnedReward_m4BC3DB6D32795A875E4F13C2C8E178876A6309C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * V_0 = NULL;
	EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * V_1 = NULL;
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_3 = V_1;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_6 = V_0;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *>((EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 **)L_2, ((EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_8 = V_0;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)L_8) == ((RuntimeObject*)(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m4ACD2A92D36832C1533429A203A3EC4BA9B4043F (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnUserEarnedReward_m4ACD2A92D36832C1533429A203A3EC4BA9B4043F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * V_0 = NULL;
	EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * V_1 = NULL;
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_3 = V_1;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_6 = V_0;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *>((EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 **)L_2, ((EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_8 = V_0;
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)L_8) == ((RuntimeObject*)(EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_mE2011E4B7E1A8D16D4BA517A8687F599976FA544 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_LoadAd_mE2011E4B7E1A8D16D4BA517A8687F599976FA544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB0AB6FFFF0B84BD56AB099AC4E217E7CFEBB2667 * >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_mB5F9BBAFBC79ACD0A33C269E75426433D151DC3C (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_tD2105688F76AD41C2AF2704A4FBA2CA8B5AD1B41_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_mF0EE7E22B87F8CC0F2504CAF61872F9688A467B3 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__1_mF0EE7E22B87F8CC0F2504CAF61872F9688A467B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m31F64BABE43B70B846A73D5E74B8EF34877215F4_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m086A54932FE43AEEEE4186B93D772F4E88D17B25(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_m002A0A44E9EC5D58C5F0096F7FD9EDBB0768E439 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__2_m002A0A44E9EC5D58C5F0096F7FD9EDBB0768E439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_m9F0C9790B90B3B04395AE3CA1B363A0DF4FA84EF_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_5();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_6();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_mAEB59EA3A875AA07B7EC42A716E465ADDF079B11 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__5_mAEB59EA3A875AA07B7EC42A716E465ADDF079B11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_m9F0C9790B90B3B04395AE3CA1B363A0DF4FA84EF_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m01E4FC9F416CCD330301B333A09C31A8F1F05291(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_m8295BB17919638F106E4850F94FC706CBC1FF07B (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__7_m8295BB17919638F106E4850F94FC706CBC1FF07B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_0 = __this->get_OnUserEarnedReward_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD69E2124DC3302E3E5A27757FB221947C0C0E210 * L_1 = __this->get_OnUserEarnedReward_9();
		Reward_tA02902758A6ED18DCDBB5F3DD5C8F5D6590CAA8C * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mD6E97334E7E632A54A663D618BC554A11B3D3048(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mD6E97334E7E632A54A663D618BC554A11B3D3048_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_m5ED2B52A8943CFB505F74F33A5CB9F17128F1AD8 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__8_m5ED2B52A8943CFB505F74F33A5CB9F17128F1AD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_0 = __this->get_OnPaidEvent_10();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t3009CDE579F6245BC3C15E7B640F9D98B0655B8C * L_1 = __this->get_OnPaidEvent_10();
		AdValueEventArgs_t65DE87B9EF5FE11DACB7F401FF8CB5742B9F045F * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mFFA131F5F037E10F8900B6B2086C522D36D7DF39_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m31F64BABE43B70B846A73D5E74B8EF34877215F4_inline (LoadAdErrorClientEventArgs_t56754D599F8DDA427993C4D9116214E79889EF6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m9F0C9790B90B3B04395AE3CA1B363A0DF4FA84EF_inline (AdErrorClientEventArgs_t041F88974F288E33C2D20269360DD52C2980A66B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
