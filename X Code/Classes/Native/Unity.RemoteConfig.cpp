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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.RemoteConfig.IRemoteConfigRequest
struct IRemoteConfigRequest_t17F46AA756962F2B3E40B6894FE06E6832DC12F3;
// Unity.RemoteConfig.IRemoteConfigSettings
struct IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663;
// Unity.RemoteConfig.RCConfig
struct RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078;
// Unity.RemoteConfig.RemoteConfigRequest
struct RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72;
// Unity.RemoteConfig.RuntimeConfig
struct RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRemoteConfigRequest_t17F46AA756962F2B3E40B6894FE06E6832DC12F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral251EDC0EB5A820646BDA4E103F0F007FD55321F3;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC1D5A427A45820B04FE30F78A972B784952460;
IL2CPP_EXTERN_C String_t* _stringLiteral5B39228EBC200CD4721408F50458EB36FF19552C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManager_RemoteSettings_BeforeFetchFromServer_mCB42FB103562446B9A4C153BBD75A2D3910DBE71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManager_RemoteSettings_Completed_mC5F0411EA8380ECD3495A60A56A1E527513596D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RCConfig_U3C_ctorU3Eb__4_0_m6D33A59BC0E5046A6582302420E86D9179D337D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigRequest_U3C_ctorU3Eb__6_0_m07EC8C50A552B3902609BEBD102C652FC4F8DE41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigRequest_U3C_ctorU3Eb__6_1_m6D0F54FB8DCA014A6117AA319473583157338C6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeConfig_Config_Updated_m6EDB167569495E2CE5D2D77BF9FE6A50B2748BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ConfigManager_Init_m7B0EA09EAC0E61455642A76AD937EE0C2BA4AE01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_RemoteSettings_BeforeFetchFromServer_mCB42FB103562446B9A4C153BBD75A2D3910DBE71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_RemoteSettings_Completed_mC5F0411EA8380ECD3495A60A56A1E527513596D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_SetCustomUserID_mA33B7903DC96FF525D1948C94E2D22DA888263BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_add_FetchCompleted_m2B21ABD31997877C9C008246A83629BEBAF02072_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAFUnity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_remove_FetchCompleted_mEE51D146C98B7D7C3F8D2BCF25730BBCB31CE025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_U3C_ctorU3Eb__4_0_m6D33A59BC0E5046A6582302420E86D9179D337D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_add_Updated_mE058AC8BA264D5DB646E14EC075832F0CDD00483_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_remove_Updated_mDCD4BF6A6FE6CD73078AC9B45C2D891FB3AC2982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_QueueConfig_m7C0EAA027FB1C50AAE711838C9B0EB64E86402F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_U3C_ctorU3Eb__6_1_m6D0F54FB8DCA014A6117AA319473583157338C6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest__ctor_m6A226464CDB8CDB74608744D4C774B12ECD89A43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_add_BeforeFetchFromServer_mA67A1A1B0FA523FA3CC62D705BABA15DC2803B7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_add_Completed_m9758E136E0826889714C4A26FFCD9C5B9E79083F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_remove_BeforeFetchFromServer_m612D7E0E8816ABA6C700FBACB7DE64A5FE71840A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_remove_Completed_m7A26EE950331473F35096E9175B3717A25559843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig_ForceUpdate_m9761280C237037A32918F7513046EFA1D539C23C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig_GetKeys_m271C7A5BB47863EE4448B635EC6D8ED04540F903_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig_GetString_mD4AA552F1C04FAF183C9B054BC32DAFB5B3F0FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig__ctor_mA5D397660C19284007BA637F6080CEA8118FD13C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD9B78939C2D9834A6C010E53B92AEB3203CEF6A8 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// Unity.RemoteConfig.RCConfig
struct RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> Unity.RemoteConfig.RCConfig::Updated
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___Updated_0;
	// UnityEngine.RemoteConfigSettings Unity.RemoteConfig.RCConfig::_remoteConfigSettings
	RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * ____remoteConfigSettings_1;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078, ___Updated_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_Updated_0() const { return ___Updated_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_0), (void*)value);
	}

	inline static int32_t get_offset_of__remoteConfigSettings_1() { return static_cast<int32_t>(offsetof(RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078, ____remoteConfigSettings_1)); }
	inline RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * get__remoteConfigSettings_1() const { return ____remoteConfigSettings_1; }
	inline RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A ** get_address_of__remoteConfigSettings_1() { return &____remoteConfigSettings_1; }
	inline void set__remoteConfigSettings_1(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * value)
	{
		____remoteConfigSettings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteConfigSettings_1), (void*)value);
	}
};


// Unity.RemoteConfig.RemoteConfigRequest
struct RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72  : public RuntimeObject
{
public:
	// System.Action Unity.RemoteConfig.RemoteConfigRequest::BeforeFetchFromServer
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___BeforeFetchFromServer_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> Unity.RemoteConfig.RemoteConfigRequest::Completed
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * ___Completed_1;

public:
	inline static int32_t get_offset_of_BeforeFetchFromServer_0() { return static_cast<int32_t>(offsetof(RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72, ___BeforeFetchFromServer_0)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_BeforeFetchFromServer_0() const { return ___BeforeFetchFromServer_0; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_BeforeFetchFromServer_0() { return &___BeforeFetchFromServer_0; }
	inline void set_BeforeFetchFromServer_0(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___BeforeFetchFromServer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeFetchFromServer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_1() { return static_cast<int32_t>(offsetof(RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72, ___Completed_1)); }
	inline Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * get_Completed_1() const { return ___Completed_1; }
	inline Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E ** get_address_of_Completed_1() { return &___Completed_1; }
	inline void set_Completed_1(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * value)
	{
		___Completed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_1), (void*)value);
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

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// Unity.RemoteConfig.ConfigManager/Delivery
struct Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0 
{
public:
	// System.String Unity.RemoteConfig.ConfigManager/Delivery::customUserId
	String_t* ___customUserId_0;
	// System.String Unity.RemoteConfig.ConfigManager/Delivery::packageVersion
	String_t* ___packageVersion_1;

public:
	inline static int32_t get_offset_of_customUserId_0() { return static_cast<int32_t>(offsetof(Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0, ___customUserId_0)); }
	inline String_t* get_customUserId_0() const { return ___customUserId_0; }
	inline String_t** get_address_of_customUserId_0() { return &___customUserId_0; }
	inline void set_customUserId_0(String_t* value)
	{
		___customUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_packageVersion_1() { return static_cast<int32_t>(offsetof(Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0, ___packageVersion_1)); }
	inline String_t* get_packageVersion_1() const { return ___packageVersion_1; }
	inline String_t** get_address_of_packageVersion_1() { return &___packageVersion_1; }
	inline void set_packageVersion_1(String_t* value)
	{
		___packageVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageVersion_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.RemoteConfig.ConfigManager/Delivery
struct Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_pinvoke
{
	char* ___customUserId_0;
	char* ___packageVersion_1;
};
// Native definition for COM marshalling of Unity.RemoteConfig.ConfigManager/Delivery
struct Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_com
{
	Il2CppChar* ___customUserId_0;
	Il2CppChar* ___packageVersion_1;
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

// Unity.RemoteConfig.ConfigOrigin
struct ConfigOrigin_t0C6EEA293513F8F7B88CC8BA9EDA9E4D23B35670 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigOrigin_t0C6EEA293513F8F7B88CC8BA9EDA9E4D23B35670, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.RemoteConfig.ConfigRequestStatus
struct ConfigRequestStatus_t8D4E1D462664B3477B10FFDE89377DADE3C74226 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigRequestStatus_t8D4E1D462664B3477B10FFDE89377DADE3C74226, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A, ___Updated_1)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
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

// Unity.RemoteConfig.ConfigManager
struct ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14  : public RuntimeObject
{
public:

public:
};

struct ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields
{
public:
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::<requestStatus>k__BackingField
	int32_t ___U3CrequestStatusU3Ek__BackingField_0;
	// System.Action`1<Unity.RemoteConfig.ConfigResponse> Unity.RemoteConfig.ConfigManager::FetchCompleted
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * ___FetchCompleted_1;
	// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::<appConfig>k__BackingField
	RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ___U3CappConfigU3Ek__BackingField_2;
	// Unity.RemoteConfig.IRemoteConfigRequest Unity.RemoteConfig.ConfigManager::remoteConfigRequest
	RuntimeObject* ___remoteConfigRequest_3;
	// System.Boolean Unity.RemoteConfig.ConfigManager::requestInProgress
	bool ___requestInProgress_4;
	// System.Boolean Unity.RemoteConfig.ConfigManager::queueRequest
	bool ___queueRequest_5;
	// System.Boolean Unity.RemoteConfig.ConfigManager::initialized
	bool ___initialized_6;
	// Unity.RemoteConfig.ConfigManager/Delivery Unity.RemoteConfig.ConfigManager::deliveryPayload
	Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0  ___deliveryPayload_7;

public:
	inline static int32_t get_offset_of_U3CrequestStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___U3CrequestStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CrequestStatusU3Ek__BackingField_0() const { return ___U3CrequestStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrequestStatusU3Ek__BackingField_0() { return &___U3CrequestStatusU3Ek__BackingField_0; }
	inline void set_U3CrequestStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CrequestStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_FetchCompleted_1() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___FetchCompleted_1)); }
	inline Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * get_FetchCompleted_1() const { return ___FetchCompleted_1; }
	inline Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 ** get_address_of_FetchCompleted_1() { return &___FetchCompleted_1; }
	inline void set_FetchCompleted_1(Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * value)
	{
		___FetchCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchCompleted_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappConfigU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___U3CappConfigU3Ek__BackingField_2)); }
	inline RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * get_U3CappConfigU3Ek__BackingField_2() const { return ___U3CappConfigU3Ek__BackingField_2; }
	inline RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 ** get_address_of_U3CappConfigU3Ek__BackingField_2() { return &___U3CappConfigU3Ek__BackingField_2; }
	inline void set_U3CappConfigU3Ek__BackingField_2(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * value)
	{
		___U3CappConfigU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappConfigU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_remoteConfigRequest_3() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___remoteConfigRequest_3)); }
	inline RuntimeObject* get_remoteConfigRequest_3() const { return ___remoteConfigRequest_3; }
	inline RuntimeObject** get_address_of_remoteConfigRequest_3() { return &___remoteConfigRequest_3; }
	inline void set_remoteConfigRequest_3(RuntimeObject* value)
	{
		___remoteConfigRequest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteConfigRequest_3), (void*)value);
	}

	inline static int32_t get_offset_of_requestInProgress_4() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___requestInProgress_4)); }
	inline bool get_requestInProgress_4() const { return ___requestInProgress_4; }
	inline bool* get_address_of_requestInProgress_4() { return &___requestInProgress_4; }
	inline void set_requestInProgress_4(bool value)
	{
		___requestInProgress_4 = value;
	}

	inline static int32_t get_offset_of_queueRequest_5() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___queueRequest_5)); }
	inline bool get_queueRequest_5() const { return ___queueRequest_5; }
	inline bool* get_address_of_queueRequest_5() { return &___queueRequest_5; }
	inline void set_queueRequest_5(bool value)
	{
		___queueRequest_5 = value;
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}

	inline static int32_t get_offset_of_deliveryPayload_7() { return static_cast<int32_t>(offsetof(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields, ___deliveryPayload_7)); }
	inline Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0  get_deliveryPayload_7() const { return ___deliveryPayload_7; }
	inline Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0 * get_address_of_deliveryPayload_7() { return &___deliveryPayload_7; }
	inline void set_deliveryPayload_7(Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0  value)
	{
		___deliveryPayload_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_7))->___customUserId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_7))->___packageVersion_1), (void*)NULL);
		#endif
	}
};


// Unity.RemoteConfig.ConfigResponse
struct ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6 
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.ConfigResponse::requestOrigin
	int32_t ___requestOrigin_0;
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigResponse::status
	int32_t ___status_1;

public:
	inline static int32_t get_offset_of_requestOrigin_0() { return static_cast<int32_t>(offsetof(ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6, ___requestOrigin_0)); }
	inline int32_t get_requestOrigin_0() const { return ___requestOrigin_0; }
	inline int32_t* get_address_of_requestOrigin_0() { return &___requestOrigin_0; }
	inline void set_requestOrigin_0(int32_t value)
	{
		___requestOrigin_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6, ___status_1)); }
	inline int32_t get_status_1() const { return ___status_1; }
	inline int32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(int32_t value)
	{
		___status_1 = value;
	}
};


// Unity.RemoteConfig.RuntimeConfig
struct RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097  : public RuntimeObject
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.RuntimeConfig::<origin>k__BackingField
	int32_t ___U3CoriginU3Ek__BackingField_0;
	// System.String Unity.RemoteConfig.RuntimeConfig::configKey
	String_t* ___configKey_3;

public:
	inline static int32_t get_offset_of_U3CoriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097, ___U3CoriginU3Ek__BackingField_0)); }
	inline int32_t get_U3CoriginU3Ek__BackingField_0() const { return ___U3CoriginU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CoriginU3Ek__BackingField_0() { return &___U3CoriginU3Ek__BackingField_0; }
	inline void set_U3CoriginU3Ek__BackingField_0(int32_t value)
	{
		___U3CoriginU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_configKey_3() { return static_cast<int32_t>(offsetof(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097, ___configKey_3)); }
	inline String_t* get_configKey_3() const { return ___configKey_3; }
	inline String_t** get_address_of_configKey_3() { return &___configKey_3; }
	inline void set_configKey_3(String_t* value)
	{
		___configKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configKey_3), (void*)value);
	}
};

struct RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields
{
public:
	// Unity.RemoteConfig.IRemoteConfigSettings Unity.RemoteConfig.RuntimeConfig::config
	RuntimeObject* ___config_1;
	// Unity.RemoteConfig.IRemoteConfigSettings Unity.RemoteConfig.RuntimeConfig::metadata
	RuntimeObject* ___metadata_2;

public:
	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields, ___config_1)); }
	inline RuntimeObject* get_config_1() const { return ___config_1; }
	inline RuntimeObject** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(RuntimeObject* value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_1), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_2() { return static_cast<int32_t>(offsetof(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields, ___metadata_2)); }
	inline RuntimeObject* get_metadata_2() const { return ___metadata_2; }
	inline RuntimeObject** get_address_of_metadata_2() { return &___metadata_2; }
	inline void set_metadata_2(RuntimeObject* value)
	{
		___metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_2), (void*)value);
	}
};


// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7_gshared (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B_gshared (Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * __this, ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_gshared (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Init_m7B0EA09EAC0E61455642A76AD937EE0C2BA4AE01 (const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mA5D397660C19284007BA637F6080CEA8118FD13C (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManager::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2_inline (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RemoteConfigRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest__ctor_m6A226464CDB8CDB74608744D4C774B12ECD89A43 (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7 (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.RemoteConfig.ConfigManager::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline (int32_t ___value0, const RuntimeMethod* method);
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::get_requestStatus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF_inline (const RuntimeMethod* method);
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
inline void Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B (Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * __this, ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *, ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6 , const RuntimeMethod*))Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B_gshared)(__this, ___obj0, method);
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::get_appConfig()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38_inline (const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_ForceUpdate_m9761280C237037A32918F7513046EFA1D539C23C (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings__ctor_m3F63219CA44922A66035B8C3899EDC4EC58A8D62 (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.RemoteConfigSettings::add_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_add_Updated_mF1797A07112F59F0BA8CC3FE30ABF8DC88059EF0 (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_ForceUpdate_mAF10553D160EB984A331D94CA8834C763B77C05A (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * __this, const RuntimeMethod* method);
// System.String UnityEngine.RemoteConfigSettings::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteConfigSettings_GetString_m1C34EB9F3AAA92BB8327CFB2B2C635586FE276CE (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.String[] UnityEngine.RemoteConfigSettings::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* RemoteConfigSettings_GetKeys_m0E5314C33C60A9CC783809FDAF5B295A349E49B1 (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.RemoteSettings::add_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_BeforeFetchFromServer_m7E9E7F29D3A6D05E445844A388DB34E9D905B4B1 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_Completed_m8BD179217DCB0B9561DF18871458096979F64002 (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteConfigSettings::SendDeviceInfoInConfigRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_SendDeviceInfoInConfigRequest_m8C1CFABBE54D29F672BE4EC751406E5F8E44934C (const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteConfigSettings::QueueConfig(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_QueueConfig_m637B488C8D0A9FCB77E36A9520689B37F20AC43A (String_t* ___name0, RuntimeObject * ___param1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5 (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void Unity.RemoteConfig.RCConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m35D47C151DF34DFCA62549823BC43ADE4E2C83FA_inline (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, int32_t ___value0, const RuntimeMethod* method);
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
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::get_requestStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ___value0;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::add_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_add_FetchCompleted_m2B21ABD31997877C9C008246A83629BEBAF02072 (Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_add_FetchCompleted_m2B21ABD31997877C9C008246A83629BEBAF02072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_0 = NULL;
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_1 = NULL;
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_2 = NULL;
	{
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_2 = V_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9_il2cpp_TypeInfo_var));
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_5 = V_2;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_6 = V_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_7 = InterlockedCompareExchangeImpl<Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *>((Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 **)(((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_address_of_FetchCompleted_1()), L_5, L_6);
		V_0 = L_7;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_8 = V_0;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)L_8) == ((RuntimeObject*)(Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::remove_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_remove_FetchCompleted_mEE51D146C98B7D7C3F8D2BCF25730BBCB31CE025 (Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_remove_FetchCompleted_mEE51D146C98B7D7C3F8D2BCF25730BBCB31CE025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_0 = NULL;
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_1 = NULL;
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * V_2 = NULL;
	{
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_2 = V_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9_il2cpp_TypeInfo_var));
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_5 = V_2;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_6 = V_1;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_7 = InterlockedCompareExchangeImpl<Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *>((Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 **)(((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_address_of_FetchCompleted_1()), L_5, L_6);
		V_0 = L_7;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_8 = V_0;
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)L_8) == ((RuntimeObject*)(Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::get_appConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2 (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_0 = ___value0;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Initialize_m614199A6B30A3E5EAC426F13611C5C7BDAFEDF4C (const RuntimeMethod* method)
{
	{
		// Init();
		ConfigManager_Init_m7B0EA09EAC0E61455642A76AD937EE0C2BA4AE01(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Init_m7B0EA09EAC0E61455642A76AD937EE0C2BA4AE01 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_Init_m7B0EA09EAC0E61455642A76AD937EE0C2BA4AE01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!initialized)
		bool L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_initialized_6();
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		// appConfig = new RuntimeConfig("settings");
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_1 = (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 *)il2cpp_codegen_object_new(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var);
		RuntimeConfig__ctor_mA5D397660C19284007BA637F6080CEA8118FD13C(L_1, _stringLiteral3CC1D5A427A45820B04FE30F78A972B784952460, /*hidden argument*/NULL);
		ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2_inline(L_1, /*hidden argument*/NULL);
		// deliveryPayload.packageVersion = RemoteConfigRuntimeEnvConf.pluginVersion;
		(((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_address_of_deliveryPayload_7())->set_packageVersion_1(_stringLiteral5B39228EBC200CD4721408F50458EB36FF19552C);
		// remoteConfigRequest = new RemoteConfigRequest();
		RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * L_2 = (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 *)il2cpp_codegen_object_new(RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72_il2cpp_TypeInfo_var);
		RemoteConfigRequest__ctor_m6A226464CDB8CDB74608744D4C774B12ECD89A43(L_2, /*hidden argument*/NULL);
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_remoteConfigRequest_3(L_2);
		// remoteConfigRequest.BeforeFetchFromServer += RemoteSettings_BeforeFetchFromServer;
		RuntimeObject* L_3 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_remoteConfigRequest_3();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, NULL, (intptr_t)((intptr_t)ConfigManager_RemoteSettings_BeforeFetchFromServer_mCB42FB103562446B9A4C153BBD75A2D3910DBE71_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * >::Invoke(0 /* System.Void Unity.RemoteConfig.IRemoteConfigRequest::add_BeforeFetchFromServer(System.Action) */, IRemoteConfigRequest_t17F46AA756962F2B3E40B6894FE06E6832DC12F3_il2cpp_TypeInfo_var, L_3, L_4);
		// remoteConfigRequest.Completed += RemoteSettings_Completed;
		RuntimeObject* L_5 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_remoteConfigRequest_3();
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_6 = (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)il2cpp_codegen_object_new(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E_il2cpp_TypeInfo_var);
		Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7(L_6, NULL, (intptr_t)((intptr_t)ConfigManager_RemoteSettings_Completed_mC5F0411EA8380ECD3495A60A56A1E527513596D2_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * >::Invoke(2 /* System.Void Unity.RemoteConfig.IRemoteConfigRequest::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>) */, IRemoteConfigRequest_t17F46AA756962F2B3E40B6894FE06E6832DC12F3_il2cpp_TypeInfo_var, L_5, L_6);
		// requestStatus = ConfigRequestStatus.None;
		ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline(0, /*hidden argument*/NULL);
		// initialized = true;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_initialized_6((bool)1);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::RemoteSettings_Completed(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_RemoteSettings_Completed_mC5F0411EA8380ECD3495A60A56A1E527513596D2 (bool ___wasUpdatedFromServer0, bool ___settingsChanged1, int32_t ___serverResponse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_RemoteSettings_Completed_mC5F0411EA8380ECD3495A60A56A1E527513596D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * G_B8_0 = NULL;
	Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * G_B7_0 = NULL;
	{
		// requestInProgress = false;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_requestInProgress_4((bool)0);
		// var origin = ConfigOrigin.Default;
		V_0 = 0;
		// if (wasUpdatedFromServer)
		bool L_0 = ___wasUpdatedFromServer0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// if (serverResponse == 200)
		int32_t L_1 = ___serverResponse2;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)200)))))
		{
			goto IL_001b;
		}
	}
	{
		// requestStatus = ConfigRequestStatus.Success;
		ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline(2, /*hidden argument*/NULL);
		// }
		goto IL_0021;
	}

IL_001b:
	{
		// requestStatus = ConfigRequestStatus.Failed;
		ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline(1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// origin = ConfigOrigin.Remote;
		V_0 = 2;
		// }
		goto IL_002d;
	}

IL_0025:
	{
		// requestStatus = ConfigRequestStatus.Success;
		ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline(2, /*hidden argument*/NULL);
		// origin = ConfigOrigin.Cached;
		V_0 = 1;
	}

IL_002d:
	{
		// FetchCompleted?.Invoke(new ConfigResponse() { requestOrigin = origin, status = requestStatus });
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_2 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		Action_1_t8DE0B58ECFAF2E2BD1BCC8BBEEB8902F0D65B3B9 * L_3 = L_2;
		G_B7_0 = L_3;
		if (L_3)
		{
			G_B8_0 = L_3;
			goto IL_0038;
		}
	}
	{
		goto IL_005a;
	}

IL_0038:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6 ));
		int32_t L_4 = V_0;
		(&V_1)->set_requestOrigin_0(L_4);
		int32_t L_5 = ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF_inline(/*hidden argument*/NULL);
		(&V_1)->set_status_1(L_5);
		ConfigResponse_tC937D1167FC441DE509104724D6384FBBB6D51C6  L_6 = V_1;
		NullCheck(G_B8_0);
		Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B(G_B8_0, L_6, /*hidden argument*/Action_1_Invoke_mB3A36CCBB89D58B80E58021F48353D03EA98024B_RuntimeMethod_var);
	}

IL_005a:
	{
		// if (queueRequest)
		bool L_7 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_queueRequest_5();
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// appConfig.ForceUpdate();
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_8 = ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38_inline(/*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeConfig_ForceUpdate_m9761280C237037A32918F7513046EFA1D539C23C(L_8, /*hidden argument*/NULL);
		// queueRequest = false;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_queueRequest_5((bool)0);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::RemoteSettings_BeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_RemoteSettings_BeforeFetchFromServer_mCB42FB103562446B9A4C153BBD75A2D3910DBE71 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_RemoteSettings_BeforeFetchFromServer_mCB42FB103562446B9A4C153BBD75A2D3910DBE71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// requestInProgress = true;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_requestInProgress_4((bool)1);
		// requestStatus = ConfigRequestStatus.Pending;
		ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::SetCustomUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_SetCustomUserID_mA33B7903DC96FF525D1948C94E2D22DA888263BE (String_t* ___customUserID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_SetCustomUserID_mA33B7903DC96FF525D1948C94E2D22DA888263BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deliveryPayload.customUserId = customUserID;
		String_t* L_0 = ___customUserID0;
		(((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_address_of_deliveryPayload_7())->set_customUserId_0(L_0);
		// }
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
// Conversion methods for marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_pinvoke(const Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0& unmarshaled, Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_pinvoke& marshaled)
{
	marshaled.___customUserId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_customUserId_0());
	marshaled.___packageVersion_1 = il2cpp_codegen_marshal_string(unmarshaled.get_packageVersion_1());
}
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_pinvoke_back(const Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_pinvoke& marshaled, Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0& unmarshaled)
{
	unmarshaled.set_customUserId_0(il2cpp_codegen_marshal_string_result(marshaled.___customUserId_0));
	unmarshaled.set_packageVersion_1(il2cpp_codegen_marshal_string_result(marshaled.___packageVersion_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_pinvoke_cleanup(Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___customUserId_0);
	marshaled.___customUserId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___packageVersion_1);
	marshaled.___packageVersion_1 = NULL;
}
// Conversion methods for marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_com(const Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0& unmarshaled, Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_com& marshaled)
{
	marshaled.___customUserId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_customUserId_0());
	marshaled.___packageVersion_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_packageVersion_1());
}
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_com_back(const Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_com& marshaled, Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0& unmarshaled)
{
	unmarshaled.set_customUserId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___customUserId_0));
	unmarshaled.set_packageVersion_1(il2cpp_codegen_marshal_bstring_result(marshaled.___packageVersion_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshal_com_cleanup(Delivery_tB8B6DC32FDF2279F430533FF55714C89ECB2EDF0_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___customUserId_0);
	marshaled.___customUserId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___packageVersion_1);
	marshaled.___packageVersion_1 = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.RCConfig::add_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_add_Updated_mE058AC8BA264D5DB646E14EC075832F0CDD00483 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_add_Updated_mE058AC8BA264D5DB646E14EC075832F0CDD00483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_0 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_1 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_2 = NULL;
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_Updated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = V_0;
		V_1 = L_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = V_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)CastclassSealed((RuntimeObject*)L_4, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var));
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** L_5 = __this->get_address_of_Updated_0();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_6 = V_2;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_7 = V_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_8 = InterlockedCompareExchangeImpl<Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *>((Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_9 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_9) == ((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::remove_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_remove_Updated_mDCD4BF6A6FE6CD73078AC9B45C2D891FB3AC2982 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_remove_Updated_mDCD4BF6A6FE6CD73078AC9B45C2D891FB3AC2982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_0 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_1 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_2 = NULL;
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_Updated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = V_0;
		V_1 = L_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = V_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)CastclassSealed((RuntimeObject*)L_4, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var));
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** L_5 = __this->get_address_of_Updated_0();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_6 = V_2;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_7 = V_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_8 = InterlockedCompareExchangeImpl<Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *>((Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_9 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_9) == ((RuntimeObject*)(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, String_t* ___configKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RCConfig(string configKey)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _remoteConfigSettings = new RemoteConfigSettings(configKey);
		String_t* L_0 = ___configKey0;
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_1 = (RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A *)il2cpp_codegen_object_new(RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_il2cpp_TypeInfo_var);
		RemoteConfigSettings__ctor_m3F63219CA44922A66035B8C3899EDC4EC58A8D62(L_1, L_0, /*hidden argument*/NULL);
		__this->set__remoteConfigSettings_1(L_1);
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_2 = __this->get__remoteConfigSettings_1();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896(L_3, __this, (intptr_t)((intptr_t)RCConfig_U3C_ctorU3Eb__4_0_m6D33A59BC0E5046A6582302420E86D9179D337D9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var);
		NullCheck(L_2);
		RemoteConfigSettings_add_Updated_mF1797A07112F59F0BA8CC3FE30ABF8DC88059EF0(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_ForceUpdate_m09356E7B6CF6BDBEAFC5391242071448C7060C5A (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, const RuntimeMethod* method)
{
	{
		// _remoteConfigSettings.ForceUpdate();
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_0 = __this->get__remoteConfigSettings_1();
		NullCheck(L_0);
		RemoteConfigSettings_ForceUpdate_mAF10553D160EB984A331D94CA8834C763B77C05A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.RCConfig::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RCConfig_GetString_mF3E073EB03F282C33D345D5AD4DFBADAD79A6850 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	{
		// return _remoteConfigSettings.GetString(key, defaultValue);
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_0 = __this->get__remoteConfigSettings_1();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___defaultValue1;
		NullCheck(L_0);
		String_t* L_3 = RemoteConfigSettings_GetString_m1C34EB9F3AAA92BB8327CFB2B2C635586FE276CE(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String[] Unity.RemoteConfig.RCConfig::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* RCConfig_GetKeys_mA80453215BB8C6800FD58AC05D0F891644C60CB3 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, const RuntimeMethod* method)
{
	{
		// return _remoteConfigSettings.GetKeys();
		RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A * L_0 = __this->get__remoteConfigSettings_1();
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = RemoteConfigSettings_GetKeys_m0E5314C33C60A9CC783809FDAF5B295A349E49B1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::<.ctor>b__4_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_U3C_ctorU3Eb__4_0_m6D33A59BC0E5046A6582302420E86D9179D337D9 (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * __this, bool ___wasUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_U3C_ctorU3Eb__4_0_m6D33A59BC0E5046A6582302420E86D9179D337D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * G_B2_0 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * G_B1_0 = NULL;
	{
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_Updated_0();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___wasUpdatedFromServer0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
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
// System.Void Unity.RemoteConfig.RemoteConfigRequest::add_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_add_BeforeFetchFromServer_mA67A1A1B0FA523FA3CC62D705BABA15DC2803B7E (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_add_BeforeFetchFromServer_mA67A1A1B0FA523FA3CC62D705BABA15DC2803B7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_BeforeFetchFromServer_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_BeforeFetchFromServer_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::remove_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_remove_BeforeFetchFromServer_m612D7E0E8816ABA6C700FBACB7DE64A5FE71840A (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_remove_BeforeFetchFromServer_m612D7E0E8816ABA6C700FBACB7DE64A5FE71840A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_BeforeFetchFromServer_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_BeforeFetchFromServer_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_add_Completed_m9758E136E0826889714C4A26FFCD9C5B9E79083F (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_add_Completed_m9758E136E0826889714C4A26FFCD9C5B9E79083F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_0 = NULL;
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_1 = NULL;
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_2 = NULL;
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_0 = __this->get_Completed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_1 = V_0;
		V_1 = L_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_2 = V_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)CastclassSealed((RuntimeObject*)L_4, Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E_il2cpp_TypeInfo_var));
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E ** L_5 = __this->get_address_of_Completed_1();
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_6 = V_2;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_7 = V_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_8 = InterlockedCompareExchangeImpl<Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *>((Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_9 = V_0;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)L_9) == ((RuntimeObject*)(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::remove_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_remove_Completed_m7A26EE950331473F35096E9175B3717A25559843 (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_remove_Completed_m7A26EE950331473F35096E9175B3717A25559843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_0 = NULL;
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_1 = NULL;
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * V_2 = NULL;
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_0 = __this->get_Completed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_1 = V_0;
		V_1 = L_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_2 = V_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)CastclassSealed((RuntimeObject*)L_4, Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E_il2cpp_TypeInfo_var));
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E ** L_5 = __this->get_address_of_Completed_1();
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_6 = V_2;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_7 = V_1;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_8 = InterlockedCompareExchangeImpl<Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *>((Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_9 = V_0;
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)L_9) == ((RuntimeObject*)(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest__ctor_m6A226464CDB8CDB74608744D4C774B12ECD89A43 (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest__ctor_m6A226464CDB8CDB74608744D4C774B12ECD89A43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RemoteConfigRequest()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)RemoteConfigRequest_U3C_ctorU3Eb__6_0_m07EC8C50A552B3902609BEBD102C652FC4F8DE41_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteSettings_add_BeforeFetchFromServer_m7E9E7F29D3A6D05E445844A388DB34E9D905B4B1(L_0, /*hidden argument*/NULL);
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_1 = (Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E *)il2cpp_codegen_object_new(Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E_il2cpp_TypeInfo_var);
		Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7(L_1, __this, (intptr_t)((intptr_t)RemoteConfigRequest_U3C_ctorU3Eb__6_1_m6D0F54FB8DCA014A6117AA319473583157338C6F_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mF4B11E2DADDBD03432DF63BEE8052470DC7522A7_RuntimeMethod_var);
		RemoteSettings_add_Completed_m8BD179217DCB0B9561DF18871458096979F64002(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.RemoteConfig.RemoteConfigRequest::SendDeviceInfoInConfigRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigRequest_SendDeviceInfoInConfigRequest_m3BD29495788F2A916BB67A270EB5C2EC4816EC0D (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, const RuntimeMethod* method)
{
	{
		// return RemoteConfigSettings.SendDeviceInfoInConfigRequest();
		bool L_0 = RemoteConfigSettings_SendDeviceInfoInConfigRequest_m8C1CFABBE54D29F672BE4EC751406E5F8E44934C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::QueueConfig(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_QueueConfig_m7C0EAA027FB1C50AAE711838C9B0EB64E86402F3 (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, String_t* ___configKey0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_QueueConfig_m7C0EAA027FB1C50AAE711838C9B0EB64E86402F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoteConfigSettings.QueueConfig(configKey, obj);
		String_t* L_0 = ___configKey0;
		RuntimeObject * L_1 = ___obj1;
		RemoteConfigSettings_QueueConfig_m637B488C8D0A9FCB77E36A9520689B37F20AC43A(L_0, L_1, 1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::<.ctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_U3C_ctorU3Eb__6_0_m07EC8C50A552B3902609BEBD102C652FC4F8DE41 (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_BeforeFetchFromServer_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::<.ctor>b__6_1(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_U3C_ctorU3Eb__6_1_m6D0F54FB8DCA014A6117AA319473583157338C6F (RemoteConfigRequest_t3F408F81AD87A823506142E070F2EC13AAEF6F72 * __this, bool ___wasUpdatedFromServer0, bool ___settingsChanged1, int32_t ___serverResponse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_U3C_ctorU3Eb__6_1_m6D0F54FB8DCA014A6117AA319473583157338C6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * G_B2_0 = NULL;
	Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * G_B1_0 = NULL;
	{
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_0 = __this->get_Completed_1();
		Action_3_tEE1FB0623176AFA5109FAA9BA7E82293445CAE1E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___wasUpdatedFromServer0;
		bool L_3 = ___settingsChanged1;
		int32_t L_4 = ___serverResponse2;
		NullCheck(G_B2_0);
		Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5(G_B2_0, L_2, L_3, L_4, /*hidden argument*/Action_3_Invoke_m8A4240174E60397816F6EACC65FE1E27F4275FA5_RuntimeMethod_var);
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
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
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m35D47C151DF34DFCA62549823BC43ADE4E2C83FA (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mA5D397660C19284007BA637F6080CEA8118FD13C (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, String_t* ___configKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig__ctor_mA5D397660C19284007BA637F6080CEA8118FD13C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RuntimeConfig(string configKey)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.configKey = configKey;
		String_t* L_0 = ___configKey0;
		__this->set_configKey_3(L_0);
		// config = new RCConfig(configKey);
		String_t* L_1 = ___configKey0;
		RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * L_2 = (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 *)il2cpp_codegen_object_new(RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078_il2cpp_TypeInfo_var);
		RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9(L_2, L_1, /*hidden argument*/NULL);
		((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->set_config_1(L_2);
		// metadata = new RCConfig(configKey + "Metadata");
		String_t* L_3 = ___configKey0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_3, _stringLiteral251EDC0EB5A820646BDA4E103F0F007FD55321F3, /*hidden argument*/NULL);
		RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 * L_5 = (RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078 *)il2cpp_codegen_object_new(RCConfig_tF034AF8ED28E8EA5012F14C83CE36D49B4CBC078_il2cpp_TypeInfo_var);
		RCConfig__ctor_m71ED164C61BE250FB62DBF894A9E7602EE7049A9(L_5, L_4, /*hidden argument*/NULL);
		((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->set_metadata_2(L_5);
		// origin = ConfigOrigin.Default;
		RuntimeConfig_set_origin_m35D47C151DF34DFCA62549823BC43ADE4E2C83FA_inline(__this, 0, /*hidden argument*/NULL);
		// config.Updated += Config_Updated;
		RuntimeObject* L_6 = ((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->get_config_1();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_7 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896(L_7, __this, (intptr_t)((intptr_t)RuntimeConfig_Config_Updated_m6EDB167569495E2CE5D2D77BF9FE6A50B2748BE7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void Unity.RemoteConfig.IRemoteConfigSettings::add_Updated(System.Action`1<System.Boolean>) */, IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663_il2cpp_TypeInfo_var, L_6, L_7);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::Config_Updated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_Config_Updated_m6EDB167569495E2CE5D2D77BF9FE6A50B2748BE7 (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, bool ___wasUpdatedFromServer0, const RuntimeMethod* method)
{
	RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * G_B2_0 = NULL;
	RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * G_B3_1 = NULL;
	{
		// origin = wasUpdatedFromServer ? ConfigOrigin.Remote : ConfigOrigin.Cached;
		bool L_0 = ___wasUpdatedFromServer0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		RuntimeConfig_set_origin_m35D47C151DF34DFCA62549823BC43ADE4E2C83FA_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_ForceUpdate_m9761280C237037A32918F7513046EFA1D539C23C (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig_ForceUpdate_m9761280C237037A32918F7513046EFA1D539C23C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config.ForceUpdate();
		RuntimeObject* L_0 = ((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->get_config_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.RemoteConfig.IRemoteConfigSettings::ForceUpdate() */, IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.RuntimeConfig::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeConfig_GetString_mD4AA552F1C04FAF183C9B054BC32DAFB5B3F0FD4 (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig_GetString_mD4AA552F1C04FAF183C9B054BC32DAFB5B3F0FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return config.GetString(key, defaultValue);
		RuntimeObject* L_0 = ((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->get_config_1();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___defaultValue1;
		NullCheck(L_0);
		String_t* L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.RemoteConfig.IRemoteConfigSettings::GetString(System.String,System.String) */, IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String[] Unity.RemoteConfig.RuntimeConfig::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* RuntimeConfig_GetKeys_m271C7A5BB47863EE4448B635EC6D8ED04540F903 (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig_GetKeys_m271C7A5BB47863EE4448B635EC6D8ED04540F903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return config.GetKeys();
		RuntimeObject* L_0 = ((RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097_il2cpp_TypeInfo_var))->get_config_1();
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = InterfaceFuncInvoker0< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(4 /* System.String[] Unity.RemoteConfig.IRemoteConfigSettings::GetKeys() */, IRemoteConfigSettings_t20217CD24CA28A5383F839601D22A4C58B583663_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2_inline (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_appConfig_m8E35C706A63ACECCB155370E191E2797B6D8F9F2Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_0 = ___value0;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_requestStatus_mB635B9578A2CC8784363D98F366DB57CC05A0371Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ___value0;
		((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_requestStatus_mE8933179C2AB6C342EC079F99D31A71055E98FAFUnity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_appConfig_m1415E316B646FBC53E83A3FA02C0222B26631E38Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * L_0 = ((ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t10E35BD9F57A55FAC8E8599CB3AC56A0AF659F14_il2cpp_TypeInfo_var))->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m35D47C151DF34DFCA62549823BC43ADE4E2C83FA_inline (RuntimeConfig_t7CF32292B140B78FE05B6F860C275402BD8C8097 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
