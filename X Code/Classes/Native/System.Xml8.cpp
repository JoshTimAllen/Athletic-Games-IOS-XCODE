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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61;
// System.Net.ICredentials
struct ICredentials_t1A41F1096B037CAB53AE01434DF0747881455344;
// System.Net.IWebProxy
struct IWebProxy_tA24C0862A1ACA35D20FD079E2672CA5786C1A67E;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.DomNameTable
struct DomNameTable_t09CF0ACAE0D0EA06D0D6892AE0E7D17C7F931C9A;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t7702FAD652CDD694DC3D136712CA48C48FFB0DC3;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2FE768B806BA73C644AEE436491F2C3E04039CF1;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F;
// System.Xml.XmlAttribute
struct XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA;
// System.Xml.XmlCharacterData
struct XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531;
// System.Xml.XmlDocument
struct XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97;
// System.Xml.XmlDownloadManager
struct XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752;
// System.Xml.XmlException
struct XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D;
// System.Xml.XmlImplementation
struct XmlImplementation_t7C01D70C3943C7AA929C106D360E90E2D576E1EF;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E;
// System.Xml.XmlName
struct XmlName_t993BD9C827C8B0B6A0B7C49A03F2D14740AC2682;
// System.Xml.XmlNameTable
struct XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t260246787BA7B6747AB878378D22EC7693465E31;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84;
// System.Xml.XmlNode
struct XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838;
// System.Xml.XmlResolver
struct XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280;
// System.Xml.XmlTextEncoder
struct XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475;
// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_t1362FFBE93C9BC675B4A34503DB31AA6D3AAF01C;
// System.Xml.XmlUnspecifiedAttribute
struct XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9;
// System.Xml.XmlWhitespace
struct XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D;
// System.Xml.XmlWriter
struct XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869;
// System.Xml.Xsl.XsltContext
struct XsltContext_t2A299A6970CE5C5945F48265018896EC6BF93258;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4599D801351B053589C8FB8B5E3D7A2604B79DE2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8C1626447FA8716F0689D3C8B247CF5BDA4ED6D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_m2ADCCD4826BB678962D141602B12B2B0F69CC672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m7A0F2D7CFD71CFFC2586B93E3A1FAD30221784BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m4F8B73FFFC823973FDD6AD1386EE0D8B7CEDF8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m0720F20A96AD14393558BEB67540D8545A45FABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m190880408777F02426C980806C63032BEC154505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlUrlResolver_GetEntity_m48F7349856F393B8FF6990C85993D607989E8663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlWhitespace__ctor_m016512E3F1D4094C7B53F02D9799AF5303E34A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlWhitespace_set_Value_mB316D0FCF345638288C6815D381B581CB87CFC2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUnspecifiedAttribute_CloneNode_mC54FB5A0257784A556FC0789575EB4DE4DA0EC38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUrlResolver_GetEntityAsync_m95A9D45B7E41B78FD1784BB897FEC70567CB06E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUrlResolver_GetEntity_m48F7349856F393B8FF6990C85993D607989E8663_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlWhitespace__ctor_m016512E3F1D4094C7B53F02D9799AF5303E34A64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlWhitespace_set_Value_mB316D0FCF345638288C6815D381B581CB87CFC2D_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// System.Xml.Base64Encoder
struct Base64Encoder_tF61DCC5CAC82B24E3FEA7E2D3637B4F24BED6922  : public RuntimeObject
{
public:
	// System.Byte[] System.Xml.Base64Encoder::leftOverBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___leftOverBytes_0;
	// System.Int32 System.Xml.Base64Encoder::leftOverBytesCount
	int32_t ___leftOverBytesCount_1;
	// System.Char[] System.Xml.Base64Encoder::charsLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charsLine_2;

public:
	inline static int32_t get_offset_of_leftOverBytes_0() { return static_cast<int32_t>(offsetof(Base64Encoder_tF61DCC5CAC82B24E3FEA7E2D3637B4F24BED6922, ___leftOverBytes_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_leftOverBytes_0() const { return ___leftOverBytes_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_leftOverBytes_0() { return &___leftOverBytes_0; }
	inline void set_leftOverBytes_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___leftOverBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftOverBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_leftOverBytesCount_1() { return static_cast<int32_t>(offsetof(Base64Encoder_tF61DCC5CAC82B24E3FEA7E2D3637B4F24BED6922, ___leftOverBytesCount_1)); }
	inline int32_t get_leftOverBytesCount_1() const { return ___leftOverBytesCount_1; }
	inline int32_t* get_address_of_leftOverBytesCount_1() { return &___leftOverBytesCount_1; }
	inline void set_leftOverBytesCount_1(int32_t value)
	{
		___leftOverBytesCount_1 = value;
	}

	inline static int32_t get_offset_of_charsLine_2() { return static_cast<int32_t>(offsetof(Base64Encoder_tF61DCC5CAC82B24E3FEA7E2D3637B4F24BED6922, ___charsLine_2)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charsLine_2() const { return ___charsLine_2; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charsLine_2() { return &___charsLine_2; }
	inline void set_charsLine_2(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charsLine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charsLine_2), (void*)value);
	}
};


// System.Xml.XmlDownloadManager
struct XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.XmlDownloadManager::connections
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___connections_0;

public:
	inline static int32_t get_offset_of_connections_0() { return static_cast<int32_t>(offsetof(XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752, ___connections_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_connections_0() const { return ___connections_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_connections_0() { return &___connections_0; }
	inline void set_connections_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___connections_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_0), (void*)value);
	}
};


// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t92995CBBEC52166860E77B72B8EEFF00E4D64E84* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsdecls_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___nameTable_2)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___hashTable_4)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xml_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlNs_7), (void*)value);
	}
};


// System.Xml.XmlNode
struct XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB, ___parentNode_0)); }
	inline XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlResolver
struct XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlWriter
struct XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869  : public RuntimeObject
{
public:

public:
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


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>
struct ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133, ___m_task_0)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
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


// System.Xml.XmlAttribute
struct XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA  : public XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB
{
public:
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t993BD9C827C8B0B6A0B7C49A03F2D14740AC2682 * ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * ___lastChild_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA, ___name_1)); }
	inline XmlName_t993BD9C827C8B0B6A0B7C49A03F2D14740AC2682 * get_name_1() const { return ___name_1; }
	inline XmlName_t993BD9C827C8B0B6A0B7C49A03F2D14740AC2682 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(XmlName_t993BD9C827C8B0B6A0B7C49A03F2D14740AC2682 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_2() { return static_cast<int32_t>(offsetof(XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA, ___lastChild_2)); }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * get_lastChild_2() const { return ___lastChild_2; }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E ** get_address_of_lastChild_2() { return &___lastChild_2; }
	inline void set_lastChild_2(XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * value)
	{
		___lastChild_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_2), (void*)value);
	}
};


// System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9, ___charProperties_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charProperties_2), (void*)value);
	}
};

struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharProperties_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.XmlDocument
struct XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97  : public XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB
{
public:
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t7C01D70C3943C7AA929C106D360E90E2D576E1EF * ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_t09CF0ACAE0D0EA06D0D6892AE0E7D17C7F931C9A * ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t260246787BA7B6747AB878378D22EC7693465E31 * ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject * ___objLock_40;
	// System.Xml.XmlAttribute System.Xml.XmlDocument::namespaceXml
	XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * ___namespaceXml_41;

public:
	inline static int32_t get_offset_of_implementation_1() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___implementation_1)); }
	inline XmlImplementation_t7C01D70C3943C7AA929C106D360E90E2D576E1EF * get_implementation_1() const { return ___implementation_1; }
	inline XmlImplementation_t7C01D70C3943C7AA929C106D360E90E2D576E1EF ** get_address_of_implementation_1() { return &___implementation_1; }
	inline void set_implementation_1(XmlImplementation_t7C01D70C3943C7AA929C106D360E90E2D576E1EF * value)
	{
		___implementation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementation_1), (void*)value);
	}

	inline static int32_t get_offset_of_domNameTable_2() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___domNameTable_2)); }
	inline DomNameTable_t09CF0ACAE0D0EA06D0D6892AE0E7D17C7F931C9A * get_domNameTable_2() const { return ___domNameTable_2; }
	inline DomNameTable_t09CF0ACAE0D0EA06D0D6892AE0E7D17C7F931C9A ** get_address_of_domNameTable_2() { return &___domNameTable_2; }
	inline void set_domNameTable_2(DomNameTable_t09CF0ACAE0D0EA06D0D6892AE0E7D17C7F931C9A * value)
	{
		___domNameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domNameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_3() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___lastChild_3)); }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * get_lastChild_3() const { return ___lastChild_3; }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E ** get_address_of_lastChild_3() { return &___lastChild_3; }
	inline void set_lastChild_3(XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * value)
	{
		___lastChild_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_3), (void*)value);
	}

	inline static int32_t get_offset_of_entities_4() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___entities_4)); }
	inline XmlNamedNodeMap_t260246787BA7B6747AB878378D22EC7693465E31 * get_entities_4() const { return ___entities_4; }
	inline XmlNamedNodeMap_t260246787BA7B6747AB878378D22EC7693465E31 ** get_address_of_entities_4() { return &___entities_4; }
	inline void set_entities_4(XmlNamedNodeMap_t260246787BA7B6747AB878378D22EC7693465E31 * value)
	{
		___entities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_4), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIdMap_5() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___htElementIdMap_5)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_htElementIdMap_5() const { return ___htElementIdMap_5; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_htElementIdMap_5() { return &___htElementIdMap_5; }
	inline void set_htElementIdMap_5(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___htElementIdMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIdMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIDAttrDecl_6() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___htElementIDAttrDecl_6)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_htElementIDAttrDecl_6() const { return ___htElementIDAttrDecl_6; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_htElementIDAttrDecl_6() { return &___htElementIDAttrDecl_6; }
	inline void set_htElementIDAttrDecl_6(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___htElementIDAttrDecl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIDAttrDecl_6), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___schemaInfo_7)); }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_tD9774489795A78B9235BAD315E5242C974183A41 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___schemas_8)); }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_tD92B4BF5F65FBF5B106399A36284FDC64E602F7F * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_8), (void*)value);
	}

	inline static int32_t get_offset_of_reportValidity_9() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___reportValidity_9)); }
	inline bool get_reportValidity_9() const { return ___reportValidity_9; }
	inline bool* get_address_of_reportValidity_9() { return &___reportValidity_9; }
	inline void set_reportValidity_9(bool value)
	{
		___reportValidity_9 = value;
	}

	inline static int32_t get_offset_of_actualLoadingStatus_10() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___actualLoadingStatus_10)); }
	inline bool get_actualLoadingStatus_10() const { return ___actualLoadingStatus_10; }
	inline bool* get_address_of_actualLoadingStatus_10() { return &___actualLoadingStatus_10; }
	inline void set_actualLoadingStatus_10(bool value)
	{
		___actualLoadingStatus_10 = value;
	}

	inline static int32_t get_offset_of_onNodeInsertingDelegate_11() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeInsertingDelegate_11)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeInsertingDelegate_11() const { return ___onNodeInsertingDelegate_11; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeInsertingDelegate_11() { return &___onNodeInsertingDelegate_11; }
	inline void set_onNodeInsertingDelegate_11(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeInsertingDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertingDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeInsertedDelegate_12() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeInsertedDelegate_12)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeInsertedDelegate_12() const { return ___onNodeInsertedDelegate_12; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeInsertedDelegate_12() { return &___onNodeInsertedDelegate_12; }
	inline void set_onNodeInsertedDelegate_12(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeInsertedDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertedDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovingDelegate_13() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeRemovingDelegate_13)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeRemovingDelegate_13() const { return ___onNodeRemovingDelegate_13; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeRemovingDelegate_13() { return &___onNodeRemovingDelegate_13; }
	inline void set_onNodeRemovingDelegate_13(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeRemovingDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovingDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovedDelegate_14() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeRemovedDelegate_14)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeRemovedDelegate_14() const { return ___onNodeRemovedDelegate_14; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeRemovedDelegate_14() { return &___onNodeRemovedDelegate_14; }
	inline void set_onNodeRemovedDelegate_14(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeRemovedDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovedDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangingDelegate_15() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeChangingDelegate_15)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeChangingDelegate_15() const { return ___onNodeChangingDelegate_15; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeChangingDelegate_15() { return &___onNodeChangingDelegate_15; }
	inline void set_onNodeChangingDelegate_15(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeChangingDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangingDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangedDelegate_16() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___onNodeChangedDelegate_16)); }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * get_onNodeChangedDelegate_16() const { return ___onNodeChangedDelegate_16; }
	inline XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 ** get_address_of_onNodeChangedDelegate_16() { return &___onNodeChangedDelegate_16; }
	inline void set_onNodeChangedDelegate_16(XmlNodeChangedEventHandler_t730DECDAE07BB728186F47DDF2A569F50A889838 * value)
	{
		___onNodeChangedDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangedDelegate_16), (void*)value);
	}

	inline static int32_t get_offset_of_fEntRefNodesPresent_17() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___fEntRefNodesPresent_17)); }
	inline bool get_fEntRefNodesPresent_17() const { return ___fEntRefNodesPresent_17; }
	inline bool* get_address_of_fEntRefNodesPresent_17() { return &___fEntRefNodesPresent_17; }
	inline void set_fEntRefNodesPresent_17(bool value)
	{
		___fEntRefNodesPresent_17 = value;
	}

	inline static int32_t get_offset_of_fCDataNodesPresent_18() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___fCDataNodesPresent_18)); }
	inline bool get_fCDataNodesPresent_18() const { return ___fCDataNodesPresent_18; }
	inline bool* get_address_of_fCDataNodesPresent_18() { return &___fCDataNodesPresent_18; }
	inline void set_fCDataNodesPresent_18(bool value)
	{
		___fCDataNodesPresent_18 = value;
	}

	inline static int32_t get_offset_of_preserveWhitespace_19() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___preserveWhitespace_19)); }
	inline bool get_preserveWhitespace_19() const { return ___preserveWhitespace_19; }
	inline bool* get_address_of_preserveWhitespace_19() { return &___preserveWhitespace_19; }
	inline void set_preserveWhitespace_19(bool value)
	{
		___preserveWhitespace_19 = value;
	}

	inline static int32_t get_offset_of_isLoading_20() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___isLoading_20)); }
	inline bool get_isLoading_20() const { return ___isLoading_20; }
	inline bool* get_address_of_isLoading_20() { return &___isLoading_20; }
	inline void set_isLoading_20(bool value)
	{
		___isLoading_20 = value;
	}

	inline static int32_t get_offset_of_strDocumentName_21() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strDocumentName_21)); }
	inline String_t* get_strDocumentName_21() const { return ___strDocumentName_21; }
	inline String_t** get_address_of_strDocumentName_21() { return &___strDocumentName_21; }
	inline void set_strDocumentName_21(String_t* value)
	{
		___strDocumentName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentName_21), (void*)value);
	}

	inline static int32_t get_offset_of_strDocumentFragmentName_22() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strDocumentFragmentName_22)); }
	inline String_t* get_strDocumentFragmentName_22() const { return ___strDocumentFragmentName_22; }
	inline String_t** get_address_of_strDocumentFragmentName_22() { return &___strDocumentFragmentName_22; }
	inline void set_strDocumentFragmentName_22(String_t* value)
	{
		___strDocumentFragmentName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentFragmentName_22), (void*)value);
	}

	inline static int32_t get_offset_of_strCommentName_23() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strCommentName_23)); }
	inline String_t* get_strCommentName_23() const { return ___strCommentName_23; }
	inline String_t** get_address_of_strCommentName_23() { return &___strCommentName_23; }
	inline void set_strCommentName_23(String_t* value)
	{
		___strCommentName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCommentName_23), (void*)value);
	}

	inline static int32_t get_offset_of_strTextName_24() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strTextName_24)); }
	inline String_t* get_strTextName_24() const { return ___strTextName_24; }
	inline String_t** get_address_of_strTextName_24() { return &___strTextName_24; }
	inline void set_strTextName_24(String_t* value)
	{
		___strTextName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strTextName_24), (void*)value);
	}

	inline static int32_t get_offset_of_strCDataSectionName_25() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strCDataSectionName_25)); }
	inline String_t* get_strCDataSectionName_25() const { return ___strCDataSectionName_25; }
	inline String_t** get_address_of_strCDataSectionName_25() { return &___strCDataSectionName_25; }
	inline void set_strCDataSectionName_25(String_t* value)
	{
		___strCDataSectionName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCDataSectionName_25), (void*)value);
	}

	inline static int32_t get_offset_of_strEntityName_26() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strEntityName_26)); }
	inline String_t* get_strEntityName_26() const { return ___strEntityName_26; }
	inline String_t** get_address_of_strEntityName_26() { return &___strEntityName_26; }
	inline void set_strEntityName_26(String_t* value)
	{
		___strEntityName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEntityName_26), (void*)value);
	}

	inline static int32_t get_offset_of_strID_27() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strID_27)); }
	inline String_t* get_strID_27() const { return ___strID_27; }
	inline String_t** get_address_of_strID_27() { return &___strID_27; }
	inline void set_strID_27(String_t* value)
	{
		___strID_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strID_27), (void*)value);
	}

	inline static int32_t get_offset_of_strXmlns_28() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strXmlns_28)); }
	inline String_t* get_strXmlns_28() const { return ___strXmlns_28; }
	inline String_t** get_address_of_strXmlns_28() { return &___strXmlns_28; }
	inline void set_strXmlns_28(String_t* value)
	{
		___strXmlns_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXmlns_28), (void*)value);
	}

	inline static int32_t get_offset_of_strXml_29() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strXml_29)); }
	inline String_t* get_strXml_29() const { return ___strXml_29; }
	inline String_t** get_address_of_strXml_29() { return &___strXml_29; }
	inline void set_strXml_29(String_t* value)
	{
		___strXml_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXml_29), (void*)value);
	}

	inline static int32_t get_offset_of_strSpace_30() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strSpace_30)); }
	inline String_t* get_strSpace_30() const { return ___strSpace_30; }
	inline String_t** get_address_of_strSpace_30() { return &___strSpace_30; }
	inline void set_strSpace_30(String_t* value)
	{
		___strSpace_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSpace_30), (void*)value);
	}

	inline static int32_t get_offset_of_strLang_31() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strLang_31)); }
	inline String_t* get_strLang_31() const { return ___strLang_31; }
	inline String_t** get_address_of_strLang_31() { return &___strLang_31; }
	inline void set_strLang_31(String_t* value)
	{
		___strLang_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strLang_31), (void*)value);
	}

	inline static int32_t get_offset_of_strEmpty_32() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strEmpty_32)); }
	inline String_t* get_strEmpty_32() const { return ___strEmpty_32; }
	inline String_t** get_address_of_strEmpty_32() { return &___strEmpty_32; }
	inline void set_strEmpty_32(String_t* value)
	{
		___strEmpty_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEmpty_32), (void*)value);
	}

	inline static int32_t get_offset_of_strNonSignificantWhitespaceName_33() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strNonSignificantWhitespaceName_33)); }
	inline String_t* get_strNonSignificantWhitespaceName_33() const { return ___strNonSignificantWhitespaceName_33; }
	inline String_t** get_address_of_strNonSignificantWhitespaceName_33() { return &___strNonSignificantWhitespaceName_33; }
	inline void set_strNonSignificantWhitespaceName_33(String_t* value)
	{
		___strNonSignificantWhitespaceName_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strNonSignificantWhitespaceName_33), (void*)value);
	}

	inline static int32_t get_offset_of_strSignificantWhitespaceName_34() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strSignificantWhitespaceName_34)); }
	inline String_t* get_strSignificantWhitespaceName_34() const { return ___strSignificantWhitespaceName_34; }
	inline String_t** get_address_of_strSignificantWhitespaceName_34() { return &___strSignificantWhitespaceName_34; }
	inline void set_strSignificantWhitespaceName_34(String_t* value)
	{
		___strSignificantWhitespaceName_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSignificantWhitespaceName_34), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXmlns_35() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strReservedXmlns_35)); }
	inline String_t* get_strReservedXmlns_35() const { return ___strReservedXmlns_35; }
	inline String_t** get_address_of_strReservedXmlns_35() { return &___strReservedXmlns_35; }
	inline void set_strReservedXmlns_35(String_t* value)
	{
		___strReservedXmlns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXmlns_35), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXml_36() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___strReservedXml_36)); }
	inline String_t* get_strReservedXml_36() const { return ___strReservedXml_36; }
	inline String_t** get_address_of_strReservedXml_36() { return &___strReservedXml_36; }
	inline void set_strReservedXml_36(String_t* value)
	{
		___strReservedXml_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXml_36), (void*)value);
	}

	inline static int32_t get_offset_of_baseURI_37() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___baseURI_37)); }
	inline String_t* get_baseURI_37() const { return ___baseURI_37; }
	inline String_t** get_address_of_baseURI_37() { return &___baseURI_37; }
	inline void set_baseURI_37(String_t* value)
	{
		___baseURI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseURI_37), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_38() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___resolver_38)); }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * get_resolver_38() const { return ___resolver_38; }
	inline XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 ** get_address_of_resolver_38() { return &___resolver_38; }
	inline void set_resolver_38(XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * value)
	{
		___resolver_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_38), (void*)value);
	}

	inline static int32_t get_offset_of_bSetResolver_39() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___bSetResolver_39)); }
	inline bool get_bSetResolver_39() const { return ___bSetResolver_39; }
	inline bool* get_address_of_bSetResolver_39() { return &___bSetResolver_39; }
	inline void set_bSetResolver_39(bool value)
	{
		___bSetResolver_39 = value;
	}

	inline static int32_t get_offset_of_objLock_40() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___objLock_40)); }
	inline RuntimeObject * get_objLock_40() const { return ___objLock_40; }
	inline RuntimeObject ** get_address_of_objLock_40() { return &___objLock_40; }
	inline void set_objLock_40(RuntimeObject * value)
	{
		___objLock_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objLock_40), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceXml_41() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97, ___namespaceXml_41)); }
	inline XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * get_namespaceXml_41() const { return ___namespaceXml_41; }
	inline XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA ** get_address_of_namespaceXml_41() { return &___namespaceXml_41; }
	inline void set_namespaceXml_41(XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * value)
	{
		___namespaceXml_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceXml_41), (void*)value);
	}
};

struct XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97_StaticFields
{
public:
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t7702FAD652CDD694DC3D136712CA48C48FFB0DC3 * ___EmptyEnumerator_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_44;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_45;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_42() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97_StaticFields, ___EmptyEnumerator_42)); }
	inline EmptyEnumerator_t7702FAD652CDD694DC3D136712CA48C48FFB0DC3 * get_EmptyEnumerator_42() const { return ___EmptyEnumerator_42; }
	inline EmptyEnumerator_t7702FAD652CDD694DC3D136712CA48C48FFB0DC3 ** get_address_of_EmptyEnumerator_42() { return &___EmptyEnumerator_42; }
	inline void set_EmptyEnumerator_42(EmptyEnumerator_t7702FAD652CDD694DC3D136712CA48C48FFB0DC3 * value)
	{
		___EmptyEnumerator_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyEnumerator_42), (void*)value);
	}

	inline static int32_t get_offset_of_NotKnownSchemaInfo_43() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97_StaticFields, ___NotKnownSchemaInfo_43)); }
	inline RuntimeObject* get_NotKnownSchemaInfo_43() const { return ___NotKnownSchemaInfo_43; }
	inline RuntimeObject** get_address_of_NotKnownSchemaInfo_43() { return &___NotKnownSchemaInfo_43; }
	inline void set_NotKnownSchemaInfo_43(RuntimeObject* value)
	{
		___NotKnownSchemaInfo_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotKnownSchemaInfo_43), (void*)value);
	}

	inline static int32_t get_offset_of_ValidSchemaInfo_44() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97_StaticFields, ___ValidSchemaInfo_44)); }
	inline RuntimeObject* get_ValidSchemaInfo_44() const { return ___ValidSchemaInfo_44; }
	inline RuntimeObject** get_address_of_ValidSchemaInfo_44() { return &___ValidSchemaInfo_44; }
	inline void set_ValidSchemaInfo_44(RuntimeObject* value)
	{
		___ValidSchemaInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidSchemaInfo_44), (void*)value);
	}

	inline static int32_t get_offset_of_InvalidSchemaInfo_45() { return static_cast<int32_t>(offsetof(XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97_StaticFields, ___InvalidSchemaInfo_45)); }
	inline RuntimeObject* get_InvalidSchemaInfo_45() const { return ___InvalidSchemaInfo_45; }
	inline RuntimeObject** get_address_of_InvalidSchemaInfo_45() { return &___InvalidSchemaInfo_45; }
	inline void set_InvalidSchemaInfo_45(RuntimeObject* value)
	{
		___InvalidSchemaInfo_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidSchemaInfo_45), (void*)value);
	}
};


// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E  : public XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E, ___next_1)); }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// System.Xml.XmlTextWriter/Namespace
struct Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B 
{
public:
	// System.String System.Xml.XmlTextWriter/Namespace::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlTextWriter/Namespace::ns
	String_t* ___ns_1;
	// System.Boolean System.Xml.XmlTextWriter/Namespace::declared
	bool ___declared_2;
	// System.Int32 System.Xml.XmlTextWriter/Namespace::prevNsIndex
	int32_t ___prevNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_1), (void*)value);
	}

	inline static int32_t get_offset_of_declared_2() { return static_cast<int32_t>(offsetof(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B, ___declared_2)); }
	inline bool get_declared_2() const { return ___declared_2; }
	inline bool* get_address_of_declared_2() { return &___declared_2; }
	inline void set_declared_2(bool value)
	{
		___declared_2 = value;
	}

	inline static int32_t get_offset_of_prevNsIndex_3() { return static_cast<int32_t>(offsetof(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B, ___prevNsIndex_3)); }
	inline int32_t get_prevNsIndex_3() const { return ___prevNsIndex_3; }
	inline int32_t* get_address_of_prevNsIndex_3() { return &___prevNsIndex_3; }
	inline void set_prevNsIndex_3(int32_t value)
	{
		___prevNsIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};

// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_t1362FFBE93C9BC675B4A34503DB31AA6D3AAF01C  : public Base64Encoder_tF61DCC5CAC82B24E3FEA7E2D3637B4F24BED6922
{
public:
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriterBase64Encoder::xmlTextEncoder
	XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 * ___xmlTextEncoder_3;

public:
	inline static int32_t get_offset_of_xmlTextEncoder_3() { return static_cast<int32_t>(offsetof(XmlTextWriterBase64Encoder_t1362FFBE93C9BC675B4A34503DB31AA6D3AAF01C, ___xmlTextEncoder_3)); }
	inline XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 * get_xmlTextEncoder_3() const { return ___xmlTextEncoder_3; }
	inline XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 ** get_address_of_xmlTextEncoder_3() { return &___xmlTextEncoder_3; }
	inline void set_xmlTextEncoder_3(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 * value)
	{
		___xmlTextEncoder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlTextEncoder_3), (void*)value);
	}
};


// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9  : public XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::_credentials
	RuntimeObject* ____credentials_1;
	// System.Net.IWebProxy System.Xml.XmlUrlResolver::_proxy
	RuntimeObject* ____proxy_2;
	// System.Net.Cache.RequestCachePolicy System.Xml.XmlUrlResolver::_cachePolicy
	RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * ____cachePolicy_3;

public:
	inline static int32_t get_offset_of__credentials_1() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9, ____credentials_1)); }
	inline RuntimeObject* get__credentials_1() const { return ____credentials_1; }
	inline RuntimeObject** get_address_of__credentials_1() { return &____credentials_1; }
	inline void set__credentials_1(RuntimeObject* value)
	{
		____credentials_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_1), (void*)value);
	}

	inline static int32_t get_offset_of__proxy_2() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9, ____proxy_2)); }
	inline RuntimeObject* get__proxy_2() const { return ____proxy_2; }
	inline RuntimeObject** get_address_of__proxy_2() { return &____proxy_2; }
	inline void set__proxy_2(RuntimeObject* value)
	{
		____proxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxy_2), (void*)value);
	}

	inline static int32_t get_offset_of__cachePolicy_3() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9, ____cachePolicy_3)); }
	inline RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * get__cachePolicy_3() const { return ____cachePolicy_3; }
	inline RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 ** get_address_of__cachePolicy_3() { return &____cachePolicy_3; }
	inline void set__cachePolicy_3(RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * value)
	{
		____cachePolicy_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachePolicy_3), (void*)value);
	}
};

struct XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_StaticFields
{
public:
	// System.Object System.Xml.XmlUrlResolver::s_DownloadManager
	RuntimeObject * ___s_DownloadManager_0;

public:
	inline static int32_t get_offset_of_s_DownloadManager_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_StaticFields, ___s_DownloadManager_0)); }
	inline RuntimeObject * get_s_DownloadManager_0() const { return ___s_DownloadManager_0; }
	inline RuntimeObject ** get_address_of_s_DownloadManager_0() { return &___s_DownloadManager_0; }
	inline void set_s_DownloadManager_0(RuntimeObject * value)
	{
		___s_DownloadManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DownloadManager_0), (void*)value);
	}
};


// System.Xml.Xsl.XsltContext
struct XsltContext_t2A299A6970CE5C5945F48265018896EC6BF93258  : public XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F
{
public:

public:
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Cache.RequestCacheLevel
struct RequestCacheLevel_tB7692FD08BFC2E0F0CDB6499F58D77BEFD576D8B 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_tB7692FD08BFC2E0F0CDB6499F58D77BEFD576D8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>
struct ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
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


// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Uri/Flags
struct Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.WriteState
struct WriteState_tB6E09FBE3E53ABF78DCE76F82D8587ACA70EE132 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteState_tB6E09FBE3E53ABF78DCE76F82D8587ACA70EE132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XPath.XPathNodeType
struct XPathNodeType_tB1DB3F39502492756781F03A9645DD587B81BEF2 
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XPathNodeType_tB1DB3F39502492756781F03A9645DD587B81BEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlCharacterData
struct XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531  : public XmlLinkedNode_t4F76C8580C2E6D2908D88AC84A86060FA9289A0E
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// System.Xml.XmlNodeType
struct XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlSpace
struct XmlSpace_tC1A644D65B6BE72CF02BA2687B5AE169713271AB 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSpace_tC1A644D65B6BE72CF02BA2687B5AE169713271AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextEncoder
struct XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475  : public RuntimeObject
{
public:
	// System.IO.TextWriter System.Xml.XmlTextEncoder::textWriter
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___textWriter_0;
	// System.Boolean System.Xml.XmlTextEncoder::inAttribute
	bool ___inAttribute_1;
	// System.Char System.Xml.XmlTextEncoder::quoteChar
	Il2CppChar ___quoteChar_2;
	// System.Text.StringBuilder System.Xml.XmlTextEncoder::attrValue
	StringBuilder_t * ___attrValue_3;
	// System.Boolean System.Xml.XmlTextEncoder::cacheAttrValue
	bool ___cacheAttrValue_4;
	// System.Xml.XmlCharType System.Xml.XmlTextEncoder::xmlCharType
	XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  ___xmlCharType_5;

public:
	inline static int32_t get_offset_of_textWriter_0() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___textWriter_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_textWriter_0() const { return ___textWriter_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_textWriter_0() { return &___textWriter_0; }
	inline void set_textWriter_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___textWriter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textWriter_0), (void*)value);
	}

	inline static int32_t get_offset_of_inAttribute_1() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___inAttribute_1)); }
	inline bool get_inAttribute_1() const { return ___inAttribute_1; }
	inline bool* get_address_of_inAttribute_1() { return &___inAttribute_1; }
	inline void set_inAttribute_1(bool value)
	{
		___inAttribute_1 = value;
	}

	inline static int32_t get_offset_of_quoteChar_2() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___quoteChar_2)); }
	inline Il2CppChar get_quoteChar_2() const { return ___quoteChar_2; }
	inline Il2CppChar* get_address_of_quoteChar_2() { return &___quoteChar_2; }
	inline void set_quoteChar_2(Il2CppChar value)
	{
		___quoteChar_2 = value;
	}

	inline static int32_t get_offset_of_attrValue_3() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___attrValue_3)); }
	inline StringBuilder_t * get_attrValue_3() const { return ___attrValue_3; }
	inline StringBuilder_t ** get_address_of_attrValue_3() { return &___attrValue_3; }
	inline void set_attrValue_3(StringBuilder_t * value)
	{
		___attrValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_cacheAttrValue_4() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___cacheAttrValue_4)); }
	inline bool get_cacheAttrValue_4() const { return ___cacheAttrValue_4; }
	inline bool* get_address_of_cacheAttrValue_4() { return &___cacheAttrValue_4; }
	inline void set_cacheAttrValue_4(bool value)
	{
		___cacheAttrValue_4 = value;
	}

	inline static int32_t get_offset_of_xmlCharType_5() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475, ___xmlCharType_5)); }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  get_xmlCharType_5() const { return ___xmlCharType_5; }
	inline XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9 * get_address_of_xmlCharType_5() { return &___xmlCharType_5; }
	inline void set_xmlCharType_5(XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9  value)
	{
		___xmlCharType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_5))->___charProperties_2), (void*)NULL);
	}
};


// System.Xml.XmlTextWriter/NamespaceState
struct NamespaceState_tA6D09DE55EC80A8EB2C0C5853DC6EDA93857DD32 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/NamespaceState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamespaceState_tA6D09DE55EC80A8EB2C0C5853DC6EDA93857DD32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextWriter/SpecialAttr
struct SpecialAttr_tC6122E1A1EC64E66D03B8B3D17FE6FE0522D6528 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/SpecialAttr::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialAttr_tC6122E1A1EC64E66D03B8B3D17FE6FE0522D6528, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextWriter/State
struct State_t8831DFDA8E7A6CD6ACC98BD44F6BEF50B0C0E648 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t8831DFDA8E7A6CD6ACC98BD44F6BEF50B0C0E648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextWriter/Token
struct Token_tBCB56C1082F0646C24614CAED556F59987BAFA32 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_tBCB56C1082F0646C24614CAED556F59987BAFA32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTokenizedType
struct XmlTokenizedType_t1D002F010C2E5CAC616DA28F4B39F7AAA2ADE4DA 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t1D002F010C2E5CAC616DA28F4B39F7AAA2ADE4DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlUnspecifiedAttribute
struct XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D  : public XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA
{
public:
	// System.Boolean System.Xml.XmlUnspecifiedAttribute::fSpecified
	bool ___fSpecified_3;

public:
	inline static int32_t get_offset_of_fSpecified_3() { return static_cast<int32_t>(offsetof(XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D, ___fSpecified_3)); }
	inline bool get_fSpecified_3() const { return ___fSpecified_3; }
	inline bool* get_address_of_fSpecified_3() { return &___fSpecified_3; }
	inline void set_fSpecified_3(bool value)
	{
		___fSpecified_3 = value;
	}
};


// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01, ___m_result_40)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_result_40() const { return ___m_result_40; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
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


// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5 
{
public:
	// System.String System.Xml.XmlTextWriter/TagInfo::name
	String_t* ___name_0;
	// System.String System.Xml.XmlTextWriter/TagInfo::prefix
	String_t* ___prefix_1;
	// System.String System.Xml.XmlTextWriter/TagInfo::defaultNs
	String_t* ___defaultNs_2;
	// System.Xml.XmlTextWriter/NamespaceState System.Xml.XmlTextWriter/TagInfo::defaultNsState
	int32_t ___defaultNsState_3;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/TagInfo::xmlSpace
	int32_t ___xmlSpace_4;
	// System.String System.Xml.XmlTextWriter/TagInfo::xmlLang
	String_t* ___xmlLang_5;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prevNsTop
	int32_t ___prevNsTop_6;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prefixCount
	int32_t ___prefixCount_7;
	// System.Boolean System.Xml.XmlTextWriter/TagInfo::mixed
	bool ___mixed_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_1), (void*)value);
	}

	inline static int32_t get_offset_of_defaultNs_2() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___defaultNs_2)); }
	inline String_t* get_defaultNs_2() const { return ___defaultNs_2; }
	inline String_t** get_address_of_defaultNs_2() { return &___defaultNs_2; }
	inline void set_defaultNs_2(String_t* value)
	{
		___defaultNs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultNs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultNsState_3() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___defaultNsState_3)); }
	inline int32_t get_defaultNsState_3() const { return ___defaultNsState_3; }
	inline int32_t* get_address_of_defaultNsState_3() { return &___defaultNsState_3; }
	inline void set_defaultNsState_3(int32_t value)
	{
		___defaultNsState_3 = value;
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___xmlSpace_4)); }
	inline int32_t get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline int32_t* get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(int32_t value)
	{
		___xmlSpace_4 = value;
	}

	inline static int32_t get_offset_of_xmlLang_5() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___xmlLang_5)); }
	inline String_t* get_xmlLang_5() const { return ___xmlLang_5; }
	inline String_t** get_address_of_xmlLang_5() { return &___xmlLang_5; }
	inline void set_xmlLang_5(String_t* value)
	{
		___xmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlLang_5), (void*)value);
	}

	inline static int32_t get_offset_of_prevNsTop_6() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___prevNsTop_6)); }
	inline int32_t get_prevNsTop_6() const { return ___prevNsTop_6; }
	inline int32_t* get_address_of_prevNsTop_6() { return &___prevNsTop_6; }
	inline void set_prevNsTop_6(int32_t value)
	{
		___prevNsTop_6 = value;
	}

	inline static int32_t get_offset_of_prefixCount_7() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___prefixCount_7)); }
	inline int32_t get_prefixCount_7() const { return ___prefixCount_7; }
	inline int32_t* get_address_of_prefixCount_7() { return &___prefixCount_7; }
	inline void set_prefixCount_7(int32_t value)
	{
		___prefixCount_7 = value;
	}

	inline static int32_t get_offset_of_mixed_8() { return static_cast<int32_t>(offsetof(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5, ___mixed_8)); }
	inline bool get_mixed_8() const { return ___mixed_8; }
	inline bool* get_address_of_mixed_8() { return &___mixed_8; }
	inline void set_mixed_8(bool value)
	{
		___mixed_8 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___prefix_1;
	char* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};

// System.Xml.XmlUrlResolver/<GetEntityAsync>d__15
struct U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 
{
public:
	// System.Int32 System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object> System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  ___U3CU3Et__builder_1;
	// System.Type System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::ofObjectToReturn
	Type_t * ___ofObjectToReturn_2;
	// System.Uri System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::absoluteUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___absoluteUri_3;
	// System.Xml.XmlUrlResolver System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>4__this
	XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>u__1
	ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ofObjectToReturn_2() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___ofObjectToReturn_2)); }
	inline Type_t * get_ofObjectToReturn_2() const { return ___ofObjectToReturn_2; }
	inline Type_t ** get_address_of_ofObjectToReturn_2() { return &___ofObjectToReturn_2; }
	inline void set_ofObjectToReturn_2(Type_t * value)
	{
		___ofObjectToReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ofObjectToReturn_2), (void*)value);
	}

	inline static int32_t get_offset_of_absoluteUri_3() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___absoluteUri_3)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_absoluteUri_3() const { return ___absoluteUri_3; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_absoluteUri_3() { return &___absoluteUri_3; }
	inline void set_absoluteUri_3(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___absoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___absoluteUri_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___U3CU3E4__this_4)); }
	inline XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.Xml.XmlWhitespace
struct XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D  : public XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Xml.XmlException
struct XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.Xml.XmlException::res
	String_t* ___res_17;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___args_18;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_19;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_20;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_21;
	// System.String System.Xml.XmlException::message
	String_t* ___message_22;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___res_17), (void*)value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___args_18)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_18), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_19() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___lineNumber_19)); }
	inline int32_t get_lineNumber_19() const { return ___lineNumber_19; }
	inline int32_t* get_address_of_lineNumber_19() { return &___lineNumber_19; }
	inline void set_lineNumber_19(int32_t value)
	{
		___lineNumber_19 = value;
	}

	inline static int32_t get_offset_of_linePosition_20() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___linePosition_20)); }
	inline int32_t get_linePosition_20() const { return ___linePosition_20; }
	inline int32_t* get_address_of_linePosition_20() { return &___linePosition_20; }
	inline void set_linePosition_20(int32_t value)
	{
		___linePosition_20 = value;
	}

	inline static int32_t get_offset_of_sourceUri_21() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___sourceUri_21)); }
	inline String_t* get_sourceUri_21() const { return ___sourceUri_21; }
	inline String_t** get_address_of_sourceUri_21() { return &___sourceUri_21; }
	inline void set_sourceUri_21(String_t* value)
	{
		___sourceUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_message_22() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___message_22)); }
	inline String_t* get_message_22() const { return ___message_22; }
	inline String_t** get_address_of_message_22() { return &___message_22; }
	inline void set_message_22(String_t* value)
	{
		___message_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_22), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF317CFCC50E2EC331EA7CC77DD06EFC53A6DC83E_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mEF74FB920EF6CB43BAFDC1FFA58AA95235177979 (Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32 (TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5 * __this, int32_t ___nsTop0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::WriteRaw(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteRaw_mE2BB17DA3D685325F30E98E590CC58BBB7781628 (XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute__ctor_m6A0A80A14549911E2901FB44FA291BD8DDBB7A8F (XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___doc3, const RuntimeMethod* method);
// System.Void System.Xml.XmlAttribute::set_InnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute_set_InnerText_mB2E7F0E63380D3ADC2F68813B224B2BF80FC3B63 (XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlAttribute_RemoveChild_mFFCDFF1C5410F74FA8B7D9F18530C9C17D91470F (XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * __this, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___oldChild0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlAttribute_AppendChild_m7F17561A3054A0E2A4EDC19241EFD30DD5FA5D66 (XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * __this, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___newChild0, const RuntimeMethod* method);
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute_WriteTo_m029D9587C31CEB63A73EBF9C46BDBE012C01800B (XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * __this, XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * ___w0, const RuntimeMethod* method);
// System.Void System.Xml.XmlDownloadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDownloadManager__ctor_mF13307004D49134611C0246153CEBF94E3844A27 (XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlResolver__ctor_m13C03FD7D7D57C97976BBCB547B9E2C3C09C408A (XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Xml.XmlDownloadManager System.Xml.XmlUrlResolver::get_DownloadManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0 (const RuntimeMethod* method);
// System.IO.Stream System.Xml.XmlDownloadManager::GetStream(System.Uri,System.Net.ICredentials,System.Net.IWebProxy,System.Net.Cache.RequestCachePolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * XmlDownloadManager_GetStream_mD7A14E8675B8CAE8AC4AF96D53CD430024A60525 (XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, RuntimeObject* ___credentials1, RuntimeObject* ___proxy2, RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * ___cachePolicy3, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mD27C8593D4F5978D5B419DA73EB60B23D80CC9E4 (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * __this, String_t* ___res0, String_t* ___arg1, const RuntimeMethod* method);
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * XmlResolver_ResolveUri_m3B74CC7D9ABBEDBE2CD281F44E614641917F4FEB (XmlResolver_t93269F14B2F8750D040AED2FB7A303CE85016280 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
inline AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Xml.XmlDownloadManager::GetStreamAsync(System.Uri,System.Net.ICredentials,System.Net.IWebProxy,System.Net.Cache.RequestCachePolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * XmlDownloadManager_GetStreamAsync_m39DCD22D4B46A17B36D223C5BB8C818B40D4856A (XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, RuntimeObject* ___credentials1, RuntimeObject* ___proxy2, RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * ___cachePolicy3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.IO.Stream>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48  Task_1_ConfigureAwait_m190880408777F02426C980806C63032BEC154505 (Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48  (*) (Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>::GetAwaiter()
inline ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  ConfiguredTaskAwaitable_1_GetAwaiter_m7A0F2D7CFD71CFFC2586B93E3A1FAD30221784BC_inline (ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  (*) (ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m0720F20A96AD14393558BEB67540D8545A45FABF (ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_m2ADCCD4826BB678962D141602B12B2B0F69CC672 (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * ___awaiter0, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *, U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF317CFCC50E2EC331EA7CC77DD06EFC53A6DC83E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::GetResult()
inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ConfiguredTaskAwaiter_GetResult_m4F8B73FFFC823973FDD6AD1386EE0D8B7CEDF8ED (ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * __this, const RuntimeMethod* method)
{
	return ((  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * (*) (ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, RuntimeObject *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966 (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharacterData__ctor_m1733B463DB83C45AE9F57D7DE42CA997087E78A6 (XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531 * __this, String_t* ___data0, XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___doc1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlDocument::get_IsLoading()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlDocument_get_IsLoading_m6121F2E25E1B39DA8A090585EC483D289F520F6A_inline (XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlCharacterData::CheckOnData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharacterData_CheckOnData_m256EB1478D4EE87B7FD97C54882AE684EA2DA474 (XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.String System.Xml.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m47B81D62E4B5E4C48C06BCC7995B9ED5218EE7A2 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlNode_get_ParentNode_m6AC4A7F4FEE5B469A86490C129F011C12201C3E6 (XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlCharacterData::DecideXPNodeTypeForTextNodes(System.Xml.XmlNode,System.Xml.XPath.XPathNodeType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharacterData_DecideXPNodeTypeForTextNodes_m2B22C14778AEC1AA9DCDB76CA14439FFFC2CA32E (XmlCharacterData_tA7587D706680E42BD7A094F87CB0859C840A8531 * __this, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___node0, int32_t* ___xnt1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m440AF3B1A8DF08E307BA315AA997D097BFD2A9FE (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m90EC2B95E3A18E70520DF7C98FBDB439E3BE6D2D (XmlNamespaceManager_t8323BEB96BBE8F75207DC2AAFE9430E7F473658F * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke(const Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B& unmarshaled, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_0());
	marshaled.___ns_1 = il2cpp_codegen_marshal_string(unmarshaled.get_ns_1());
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.get_declared_2());
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_back(const Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_pinvoke& marshaled, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.set_ns_1(il2cpp_codegen_marshal_string_result(marshaled.___ns_1));
	bool unmarshaled_declared_temp_2 = false;
	unmarshaled_declared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.set_declared_2(unmarshaled_declared_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_cleanup(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_com(const Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B& unmarshaled, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_0());
	marshaled.___ns_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ns_1());
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.get_declared_2());
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_com_back(const Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_com& marshaled, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.set_ns_1(il2cpp_codegen_marshal_bstring_result(marshaled.___ns_1));
	bool unmarshaled_declared_temp_2 = false;
	unmarshaled_declared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.set_declared_2(unmarshaled_declared_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_com_cleanup(Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mEF74FB920EF6CB43BAFDC1FFA58AA95235177979 (Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		__this->set_prefix_0(L_0);
		String_t* L_1 = ___ns1;
		__this->set_ns_1(L_1);
		bool L_2 = ___declared2;
		__this->set_declared_2(L_2);
		__this->set_prevNsIndex_3((-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Namespace_Set_mEF74FB920EF6CB43BAFDC1FFA58AA95235177979_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B * _thisAdjusted = reinterpret_cast<Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B *>(__this + _offset);
	Namespace_Set_mEF74FB920EF6CB43BAFDC1FFA58AA95235177979(_thisAdjusted, ___prefix0, ___ns1, ___declared2, method);
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
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke(const TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5& unmarshaled, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___prefix_1 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_1());
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_string(unmarshaled.get_defaultNs_2());
	marshaled.___defaultNsState_3 = unmarshaled.get_defaultNsState_3();
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_string(unmarshaled.get_xmlLang_5());
	marshaled.___prevNsTop_6 = unmarshaled.get_prevNsTop_6();
	marshaled.___prefixCount_7 = unmarshaled.get_prefixCount_7();
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.get_mixed_8());
}
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_back(const TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_pinvoke& marshaled, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_string_result(marshaled.___prefix_1));
	unmarshaled.set_defaultNs_2(il2cpp_codegen_marshal_string_result(marshaled.___defaultNs_2));
	int32_t unmarshaled_defaultNsState_temp_3 = 0;
	unmarshaled_defaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.set_defaultNsState_3(unmarshaled_defaultNsState_temp_3);
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_string_result(marshaled.___xmlLang_5));
	int32_t unmarshaled_prevNsTop_temp_6 = 0;
	unmarshaled_prevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.set_prevNsTop_6(unmarshaled_prevNsTop_temp_6);
	int32_t unmarshaled_prefixCount_temp_7 = 0;
	unmarshaled_prefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.set_prefixCount_7(unmarshaled_prefixCount_temp_7);
	bool unmarshaled_mixed_temp_8 = false;
	unmarshaled_mixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.set_mixed_8(unmarshaled_mixed_temp_8);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_cleanup(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_com(const TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5& unmarshaled, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___prefix_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_1());
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_defaultNs_2());
	marshaled.___defaultNsState_3 = unmarshaled.get_defaultNsState_3();
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_xmlLang_5());
	marshaled.___prevNsTop_6 = unmarshaled.get_prevNsTop_6();
	marshaled.___prefixCount_7 = unmarshaled.get_prefixCount_7();
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.get_mixed_8());
}
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_com_back(const TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_com& marshaled, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_1));
	unmarshaled.set_defaultNs_2(il2cpp_codegen_marshal_bstring_result(marshaled.___defaultNs_2));
	int32_t unmarshaled_defaultNsState_temp_3 = 0;
	unmarshaled_defaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.set_defaultNsState_3(unmarshaled_defaultNsState_temp_3);
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_bstring_result(marshaled.___xmlLang_5));
	int32_t unmarshaled_prevNsTop_temp_6 = 0;
	unmarshaled_prevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.set_prevNsTop_6(unmarshaled_prevNsTop_temp_6);
	int32_t unmarshaled_prefixCount_temp_7 = 0;
	unmarshaled_prefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.set_prefixCount_7(unmarshaled_prefixCount_temp_7);
	bool unmarshaled_mixed_temp_8 = false;
	unmarshaled_mixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.set_mixed_8(unmarshaled_mixed_temp_8);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_com_cleanup(TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32 (TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5 * __this, int32_t ___nsTop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_0((String_t*)NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_defaultNs_2(L_0);
		__this->set_defaultNsState_3(0);
		__this->set_xmlSpace_4(0);
		__this->set_xmlLang_5((String_t*)NULL);
		int32_t L_1 = ___nsTop0;
		__this->set_prevNsTop_6(L_1);
		__this->set_prefixCount_7(0);
		__this->set_mixed_8((bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32_AdjustorThunk (RuntimeObject * __this, int32_t ___nsTop0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5 * _thisAdjusted = reinterpret_cast<TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5 *>(__this + _offset);
	TagInfo_Init_m631D10B6F7160EC8D54CAAF1418215168F8E6F32(_thisAdjusted, ___nsTop0, method);
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
// System.Void System.Xml.XmlTextWriterBase64Encoder::WriteChars(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriterBase64Encoder_WriteChars_m339EA5F0483DFCD5D8A0EA35DE060C8E3071E97E (XmlTextWriterBase64Encoder_t1362FFBE93C9BC675B4A34503DB31AA6D3AAF01C * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlTextEncoder_t444AD6ADF242669731301011B84C2A007B08A475 * L_0 = __this->get_xmlTextEncoder_3();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		XmlTextEncoder_WriteRaw_mE2BB17DA3D685325F30E98E590CC58BBB7781628(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlUnspecifiedAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute__ctor_mE777BCF4E5CF4B6A6FB3A5D86B2049A0FC69A9EA (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___doc3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___namespaceURI2;
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_3 = ___doc3;
		XmlAttribute__ctor_m6A0A80A14549911E2901FB44FA291BD8DDBB7A8F(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlUnspecifiedAttribute::get_Specified()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUnspecifiedAttribute_get_Specified_mBEDAB05EFC60EA50883A76DF8750107B97F89576 (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fSpecified_3();
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlUnspecifiedAttribute_CloneNode_mC54FB5A0257784A556FC0789575EB4DE4DA0EC38 (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUnspecifiedAttribute_CloneNode_mC54FB5A0257784A556FC0789575EB4DE4DA0EC38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * V_0 = NULL;
	{
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_0 = VirtFuncInvoker0< XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * >::Invoke(17 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		V_0 = L_0;
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_1 = V_0;
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(32 /* System.String System.Xml.XmlNode::get_Prefix() */, __this);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_LocalName() */, __this);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(31 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, __this);
		NullCheck(L_1);
		XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA * L_5 = VirtFuncInvoker3< XmlAttribute_tEAB5F066D1D6965D6528617BD89826AE7114DEFA *, String_t*, String_t*, String_t* >::Invoke(69 /* System.Xml.XmlAttribute System.Xml.XmlDocument::CreateDefaultAttribute(System.String,System.String,System.String) */, L_1, L_2, L_3, L_4);
		XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * L_6 = ((XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D *)CastclassClass((RuntimeObject*)L_5, XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D_il2cpp_TypeInfo_var));
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_7 = V_0;
		NullCheck(L_6);
		VirtActionInvoker3< XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 *, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *, bool >::Invoke(30 /* System.Void System.Xml.XmlNode::CopyChildren(System.Xml.XmlDocument,System.Xml.XmlNode,System.Boolean) */, L_6, L_7, __this, (bool)1);
		XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_fSpecified_3((bool)1);
		return L_8;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::set_InnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_set_InnerText_m644BCCABE70212D6419BD285A39805D88590F9BE (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		XmlAttribute_set_InnerText_mB2E7F0E63380D3ADC2F68813B224B2BF80FC3B63(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::RemoveChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlUnspecifiedAttribute_RemoveChild_mC4109B83678A178250CA6BEF215F837096EA795E (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___oldChild0, const RuntimeMethod* method)
{
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_0 = ___oldChild0;
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_1 = XmlAttribute_RemoveChild_mFFCDFF1C5410F74FA8B7D9F18530C9C17D91470F(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::AppendChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlUnspecifiedAttribute_AppendChild_m02BB99D25A5034CD4CF1823C30E53A0A3FB550FE (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * ___newChild0, const RuntimeMethod* method)
{
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_0 = ___newChild0;
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_1 = XmlAttribute_AppendChild_m7F17561A3054A0E2A4EDC19241EFD30DD5FA5D66(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return L_1;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_WriteTo_mFFCCA8DB259CE4C7BB7084D9EDD78D95D92A0479 (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * ___w0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fSpecified_3();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * L_1 = ___w0;
		XmlAttribute_WriteTo_m029D9587C31CEB63A73EBF9C46BDBE012C01800B(__this, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::SetSpecified(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_SetSpecified_mE8F69E10D5E945D419793E3AE422166CF65F3C47 (XmlUnspecifiedAttribute_t1C82B285B60096D164B703202A8BD91A2009DE5D * __this, bool ___f0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___f0;
		__this->set_fSpecified_3(L_0);
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
// System.Xml.XmlDownloadManager System.Xml.XmlUrlResolver::get_DownloadManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ((XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_il2cpp_TypeInfo_var))->get_s_DownloadManager_0();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * L_1 = (XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 *)il2cpp_codegen_object_new(XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752_il2cpp_TypeInfo_var);
		XmlDownloadManager__ctor_mF13307004D49134611C0246153CEBF94E3844A27(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(((XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_il2cpp_TypeInfo_var))->get_address_of_s_DownloadManager_0()), L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject * L_3 = ((XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9_il2cpp_TypeInfo_var))->get_s_DownloadManager_0();
		return ((XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 *)CastclassClass((RuntimeObject*)L_3, XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Xml.XmlUrlResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_m60DC644B9275BBA4308DCDE17E8378F39739640B (XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_m13C03FD7D7D57C97976BBCB547B9E2C3C09C408A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlUrlResolver_GetEntity_m48F7349856F393B8FF6990C85993D607989E8663 (XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_m48F7349856F393B8FF6990C85993D607989E8663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_2 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_2, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_6 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		bool L_9 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}

IL_002d:
	{
		XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * L_10 = XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0(/*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_11 = ___absoluteUri0;
		RuntimeObject* L_12 = __this->get__credentials_1();
		RuntimeObject* L_13 = __this->get__proxy_2();
		RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * L_14 = __this->get__cachePolicy_3();
		NullCheck(L_10);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_15 = XmlDownloadManager_GetStream_mD7A14E8675B8CAE8AC4AF96D53CD430024A60525(L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_004b:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_17 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_mD27C8593D4F5978D5B419DA73EB60B23D80CC9E4(L_17, _stringLiteral4599D801351B053589C8FB8B5E3D7A2604B79DE2, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, XmlUrlResolver_GetEntity_m48F7349856F393B8FF6990C85993D607989E8663_RuntimeMethod_var);
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * XmlUrlResolver_ResolveUri_mFF7AFFD6F0955BCE93E7355DCDAB57F7F8A146D3 (XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_2 = XmlResolver_ResolveUri_m3B74CC7D9ABBEDBE2CD281F44E614641917F4FEB(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.Object> System.Xml.XmlUrlResolver::GetEntityAsync(System.Uri,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * XmlUrlResolver_GetEntityAsync_m95A9D45B7E41B78FD1784BB897FEC70567CB06E8 (XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntityAsync_m95A9D45B7E41B78FD1784BB897FEC70567CB06E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_4(__this);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___absoluteUri0;
		(&V_0)->set_absoluteUri_3(L_0);
		Type_t * L_1 = ___ofObjectToReturn2;
		(&V_0)->set_ofObjectToReturn_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  L_2 = AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)(&V_1), (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_mF03E454780149AFBE6F88C60A4283797936195AD_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_RuntimeMethod_var);
		return L_6;
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
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966 (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ae;
			}
		}

IL_0014:
		{
			Type_t * L_3 = __this->get_ofObjectToReturn_2();
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0053;
			}
		}

IL_0022:
		{
			Type_t * L_5 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
			bool L_8 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_5, L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0053;
			}
		}

IL_0039:
		{
			Type_t * L_9 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_10, /*hidden argument*/NULL);
			bool L_12 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_00d4;
			}
		}

IL_0053:
		{
			XmlDownloadManager_tF864449330C09DCF4353B7F17EA226CE28C4D752 * L_13 = XmlUrlResolver_get_DownloadManager_m420E0324A705EBAF4320453656ABAAC232A173C0(/*hidden argument*/NULL);
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_14 = __this->get_absoluteUri_3();
			XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->get__credentials_1();
			XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * L_17 = V_1;
			NullCheck(L_17);
			RuntimeObject* L_18 = L_17->get__proxy_2();
			XmlUrlResolver_t43FE24F4601B4197354EFB5783E5CB9F57997EC9 * L_19 = V_1;
			NullCheck(L_19);
			RequestCachePolicy_t30D7352C7E9D49EEADD492A70EC92C118D90CD61 * L_20 = L_19->get__cachePolicy_3();
			NullCheck(L_13);
			Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_21 = XmlDownloadManager_GetStreamAsync_m39DCD22D4B46A17B36D223C5BB8C818B40D4856A(L_13, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48  L_22 = Task_1_ConfigureAwait_m190880408777F02426C980806C63032BEC154505(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m190880408777F02426C980806C63032BEC154505_RuntimeMethod_var);
			V_4 = L_22;
			ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m7A0F2D7CFD71CFFC2586B93E3A1FAD30221784BC_inline((ConfiguredTaskAwaitable_1_t8F8087337FA5C6475CA153C95469983DDDED9F48 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m7A0F2D7CFD71CFFC2586B93E3A1FAD30221784BC_RuntimeMethod_var);
			V_3 = L_23;
			bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m0720F20A96AD14393558BEB67540D8545A45FABF((ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m0720F20A96AD14393558BEB67540D8545A45FABF_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00ca;
			}
		}

IL_008e:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  L_26 = V_3;
			__this->set_U3CU3Eu__1_5(L_26);
			AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_m2ADCCD4826BB678962D141602B12B2B0F69CC672((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)L_27, (ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *)(&V_3), (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133_TisU3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934_m2ADCCD4826BB678962D141602B12B2B0F69CC672_RuntimeMethod_var);
			goto IL_0111;
		}

IL_00ae:
		{
			ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133  L_28 = __this->get_U3CU3Eu__1_5();
			V_3 = L_28;
			ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 * L_29 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00ca:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_31 = ConfiguredTaskAwaiter_GetResult_m4F8B73FFFC823973FDD6AD1386EE0D8B7CEDF8ED((ConfiguredTaskAwaiter_t27ECAA4B74502BD3AC7E68F47088D46DAA13D133 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m4F8B73FFFC823973FDD6AD1386EE0D8B7CEDF8ED_RuntimeMethod_var);
			V_2 = L_31;
			goto IL_00fd;
		}

IL_00d4:
		{
			String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_33 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
			XmlException__ctor_mD27C8593D4F5978D5B419DA73EB60B23D80CC9E4(L_33, _stringLiteral4599D801351B053589C8FB8B5E3D7A2604B79DE2, L_32, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966_RuntimeMethod_var);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e4;
		throw e;
	}

CATCH_00e4:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_RuntimeMethod_var);
		goto IL_0111;
	} // end catch (depth: 1)

IL_00fd:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject * L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)L_36, L_37, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_RuntimeMethod_var);
	}

IL_0111:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *>(__this + _offset);
	U3CGetEntityAsyncU3Ed__15_MoveNext_m025A24D8C9AF0CAE7D6470F3BE1FD32F71BD1966(_thisAdjusted, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B (U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C((AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t383C4608618A66FB04F41F38C0534EE9E14CC934 *>(__this + _offset);
	U3CGetEntityAsyncU3Ed__15_SetStateMachine_m102A8E0E12BF7F318C7880C850455EF3AF4B8D0B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m016512E3F1D4094C7B53F02D9799AF5303E34A64 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, String_t* ___strData0, XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * ___doc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace__ctor_m016512E3F1D4094C7B53F02D9799AF5303E34A64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_1 = ___doc1;
		XmlCharacterData__ctor_m1733B463DB83C45AE9F57D7DE42CA997087E78A6(__this, L_0, L_1, /*hidden argument*/NULL);
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_2 = ___doc1;
		NullCheck(L_2);
		bool L_3 = XmlDocument_get_IsLoading_m6121F2E25E1B39DA8A090585EC483D289F520F6A_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___strData0;
		bool L_5 = XmlCharacterData_CheckOnData_m256EB1478D4EE87B7FD97C54882AE684EA2DA474(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = Res_GetString_m47B81D62E4B5E4C48C06BCC7995B9ED5218EE7A2(_stringLiteralB8C1626447FA8716F0689D3C8B247CF5BDA4ED6D, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, XmlWhitespace__ctor_m016512E3F1D4094C7B53F02D9799AF5303E34A64_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Name_m22021E848A3448DA0CDD27A78D7465AB082415F9 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_0 = VirtFuncInvoker0< XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * >::Invoke(17 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_strNonSignificantWhitespaceName_33();
		return L_1;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_LocalName_mD23683B158041C22DB151381AA6FB0EE45BEBB9E (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_0 = VirtFuncInvoker0< XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * >::Invoke(17 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_strNonSignificantWhitespaceName_33();
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_NodeType_m37154979E28465979B6E8191DD318A3C0A9A10F9 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlWhitespace_get_ParentNode_mD94B65792F1C17FCACAC27C4465A90C1F3E24A36 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * V_1 = NULL;
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_0 = ((XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)__this)->get_parentNode_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)3))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0046;
	}

IL_0020:
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_5 = XmlNode_get_ParentNode_m6AC4A7F4FEE5B469A86490C129F011C12201C3E6(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_6 = ((XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)__this)->get_parentNode_0();
		NullCheck(L_6);
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_7 = L_6->get_parentNode_0();
		V_1 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_8 = V_1;
		NullCheck(L_8);
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_9 = L_8->get_parentNode_0();
		V_1 = L_9;
	}

IL_003c:
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(52 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_10);
		if (L_11)
		{
			goto IL_0035;
		}
	}
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_12 = V_1;
		return L_12;
	}

IL_0046:
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_13 = ((XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)__this)->get_parentNode_0();
		return L_13;
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Value_m5AF3D1513F247582D7EB8102C67085C64C57B5F0 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(54 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_set_Value_mB316D0FCF345638288C6815D381B581CB87CFC2D (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_mB316D0FCF345638288C6815D381B581CB87CFC2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		bool L_1 = XmlCharacterData_CheckOnData_m256EB1478D4EE87B7FD97C54882AE684EA2DA474(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(55 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_2);
		return;
	}

IL_0011:
	{
		String_t* L_3 = Res_GetString_m47B81D62E4B5E4C48C06BCC7995B9ED5218EE7A2(_stringLiteralB8C1626447FA8716F0689D3C8B247CF5BDA4ED6D, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, XmlWhitespace_set_Value_mB316D0FCF345638288C6815D381B581CB87CFC2D_RuntimeMethod_var);
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlWhitespace_CloneNode_m3C22A8D29CB9546529DAB5193C06E51A5E02E35C (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, bool ___deep0, const RuntimeMethod* method)
{
	{
		XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * L_0 = VirtFuncInvoker0< XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * >::Invoke(17 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(54 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * L_2 = VirtFuncInvoker1< XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D *, String_t* >::Invoke(66 /* System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_WriteTo_mF1B1453BB0E8EECCF10E03E7DEAA83C2B381676F (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * ___w0, const RuntimeMethod* method)
{
	{
		XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * L_0 = ___w0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(54 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_WriteContentTo_mB7886CC36A2DD7232903E3F773AD69C51D8B808E (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * ___w0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeType System.Xml.XmlWhitespace::get_XPNodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_XPNodeType_m63235CF68DDE7B030AE58713D1344DF73E565164 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		XmlCharacterData_DecideXPNodeTypeForTextNodes_m2B22C14778AEC1AA9DCDB76CA14439FFFC2CA32E(__this, __this, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Xml.XmlWhitespace::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlWhitespace_get_IsText_mE65776DE3C055807C4D18A331496945D8F36AB9A (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_PreviousText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * XmlWhitespace_get_PreviousText_mEBFAAA4ECADEB103A1AA1D494D740308B1E56853 (XmlWhitespace_tF5EA718743A148EBF7594ADF5A06B3224857AD4D * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_0 = ((XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)__this)->get_parentNode_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(52 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB * L_2 = ((XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)__this)->get_parentNode_0();
		return L_2;
	}

IL_0014:
	{
		return (XmlNode_t07D70045D843753E4FE8AFE40FD36244E6B6D7FB *)NULL;
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
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m440AF3B1A8DF08E307BA315AA997D097BFD2A9FE (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_mE17D93062324DEE8B9E05F0E93D661AB8B0DD868 (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		String_t* L_2 = ___value2;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m69A1D8FC4E58ED3CB84CD174EBADF625061C8B5B (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		String_t* L_1 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_mF674B85B37CB415C5602A73697B110CFF711D40B (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value3;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_3);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Close_m35D89F339C48DF5A94DAA4EFD2706DAAADB5B25F (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_m31DA0FBF7F096B7B9888E0CE645D28B18BA88982 (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		XmlWriter_WriteStartElement_m440AF3B1A8DF08E307BA315AA997D097BFD2A9FE(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___value2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___value2;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_5 = ___value2;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_5);
	}

IL_001a:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Dispose_m44475A2DD5076CED4A48FCBA03912752BA3A4FB3 (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(22 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Dispose_m67E68BEEA19D569625D76E85E9399DF83B74A8F7 (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.WriteState System.Xml.XmlWriter::get_WriteState() */, __this);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter__ctor_m1D2B58DC035709A720317204246AD58118C15740 (XmlWriter_t4FAF83E5244FC8F339B19D481C348ACA1510E869 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.Xsl.XsltContext::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsltContext__ctor_m80AA88DE91C4D4875BE2040EE9D0F2B6E10D758A (XsltContext_t2A299A6970CE5C5945F48265018896EC6BF93258 * __this, bool ___dummy0, const RuntimeMethod* method)
{
	{
		XmlNamespaceManager__ctor_m90EC2B95E3A18E70520DF7C98FBDB439E3BE6D2D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XmlDocument_get_IsLoading_m6121F2E25E1B39DA8A090585EC483D289F520F6A_inline (XmlDocument_t448325D04430147AF19F2955BD6A5F1551003C97 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoading_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  L_0 = (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )L_0;
	}
}
