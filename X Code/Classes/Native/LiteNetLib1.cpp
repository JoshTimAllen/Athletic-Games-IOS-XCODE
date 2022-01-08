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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// LiteNetLib.InvalidPacketException
struct InvalidPacketException_t3957874E3F6E49E675832162CDA3590A4E8FBFB3;
// LiteNetLib.NetManager
struct NetManager_tE86A7B9475BC980EF26CAEDF28242658240E6681;
// LiteNetLib.NetSocket
struct NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6;
// LiteNetLib.TooBigPacketException
struct TooBigPacketException_t3818D0C7621F2E61192C62B01B9812CFB47D5AA7;
// LiteNetLib.UnitySocketFix
struct UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF;
// LiteNetLib.Utils.InvalidTypeException
struct InvalidTypeException_t94F1305AECD146882889720BAE82EB6FDC64C541;
// LiteNetLib.Utils.NetDataReader
struct NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262;
// LiteNetLib.Utils.NetDataWriter
struct NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035;
// LiteNetLib.Utils.NetPacketProcessor
struct NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565;
// LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6;
// LiteNetLib.Utils.NetSerializer
struct NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8;
// LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_tBC9EADAE25D4E97792E744C3FA71E44F5514BA17;
// LiteNetLib.Utils.NtpPacket
struct NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A;
// LiteNetLib.Utils.NtpRequest
struct NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65;
// LiteNetLib.Utils.ParseException
struct ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8F5F55754A95DD80E678E5BA98A8813EDCC0E90E;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>[]
struct EntryU5BU5D_tE0B3317638F48F9795FAC4153DDE29EB23C90D32;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>[]
struct EntryU5BU5D_tA0B83ED6C62EC540707262227E5EEA50DF30149D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>
struct KeyCollection_t98DBE0AABCDAA8494E8BB0307FAF60EE0EBA935A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct KeyCollection_tE507EC9AE34DAC8207E2EECB7D0CC6EB40E54D15;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>
struct ValueCollection_t2583DEBB8848063A6AEB0E952476FB65AA6679CA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct ValueCollection_tA4574430DC0A49064154706118FC33A61225E62F;
// System.Collections.Generic.Dictionary`2<LiteNetLib.NativeAddr,System.Net.IPEndPoint>
struct Dictionary_2_t4B4C2B2F44B7806249435B95BBB7E7B340B277D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>
struct Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4;
// System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8FAB6C1B6A980D169DF7378B6EAD1AE1B522139B;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t234DB4EBBFEBDEA93C79F372CB471847126B6D6D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tDE9D724636528CC6E8F3E38F06595A0D22EB3539;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t3DDD412D7E0DACD1F2C3D5E6F462A7D19E370DB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetDebug_tC721578BF8AED5FA7842EF159BB2B288CF5C7D4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetUtils_t36B671318D0D73B557E85DDE77056ED76C3F5D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15675654491E47FC17E7C5AF18F84926AAC46D12;
IL2CPP_EXTERN_C String_t* _stringLiteral196C188C4E87B47A04E2363059BDA1369EB368E8;
IL2CPP_EXTERN_C String_t* _stringLiteral265EFE86433819F694B841F5E6A34C1AAD7CCA2C;
IL2CPP_EXTERN_C String_t* _stringLiteral35D259F4A3AED347786EC8A977BF9007A0905B45;
IL2CPP_EXTERN_C String_t* _stringLiteral43A3B6BFF94AB402F6B73BFBA919201D8A31753A;
IL2CPP_EXTERN_C String_t* _stringLiteral53E50CCE363FA9AFC6A4555D8F103AB456986542;
IL2CPP_EXTERN_C String_t* _stringLiteral6BBAA1BBA484ECCC0E35DDAE6315B2026C7D718F;
IL2CPP_EXTERN_C String_t* _stringLiteral88D63D9E0146031E488351C04AD8B4297C319234;
IL2CPP_EXTERN_C String_t* _stringLiteral9EDED2F538E1851E05EC5B50E39EDC51C8E7A28B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC491BDBF2803F27BAFCB4BDFA41E6EE4F72C268;
IL2CPP_EXTERN_C String_t* _stringLiteralB3396B8ADD9E89BE124CB7880791B6138166B6DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB71AB05F53873E98D8C2CC78915593F372104374;
IL2CPP_EXTERN_C String_t* _stringLiteralBE72DD80B711E4FDE6E4627D03A885EA50C489DC;
IL2CPP_EXTERN_C String_t* _stringLiteralC90D97635A9ACB40B4C37E4204A8F550634C0157;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF529A73101C2BE626B99FC6938163E7A27620B;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32C__cctor_mE81DB0403F87B20BC19DE73CE93BBD867C799B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0135FC6045C9DB2CC73DABC517FC224FCE60A58E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m284D9778ADE45C30E58CE3907D7B46FC0A32AC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetPacketProcessor_GetCallbackFromData_mC59CE0DCEECA1E6238357D689131866503A0EDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CRC32C_Compute_mF6054BBBC636F187F257A237CA1438845A23C687_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CRC32C__cctor_mE81DB0403F87B20BC19DE73CE93BBD867C799B5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetBoolArray_m2190AA2E6B82E8C2546EF900D2A415AE3E0225C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetBytesWithLength_mCB6FD7B070973A6B0CF37057D558C35A65113C5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetChar_mF1993D91F516B6CB3D12655CB54D12EDC45B06E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetDoubleArray_m2D5CECE4CF3A9CE51ADEED4FE7DD4ECB1D68BF50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetDouble_m4BF8D1CC8F345BFB746812040495C76DBFAF3911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetFloatArray_mD9EEC636864F7DEF6B78957B13D9CCFC68F35CFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetFloat_mCECF57F5803D4C9C4C890D955CB50E17E9EE4343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetIntArray_mB17B616B814639FEF24A280B28325EBDCCC4FCA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetLongArray_m70B9C11F03482CCE91F20C3DF6AC45B4414BFCD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetLong_m408EB388D2964939337D7BF36B44D71225F5CBF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetNetEndPoint_m74235D0CC160ECBC7403AE04762CDA1E92FD03DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetRemainingBytesSegment_mE38CEB599B2D6221D0570515FFD419B06DCAD2F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetRemainingBytes_mDCBD66EFD9149FFD05B296BFFF9EBC48CA6FC460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetSBytesWithLength_mC98188F8F0CD0907593F3D7CBE4B770A02C08DDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetShortArray_m2F41D76BEE7B3E43A476A1BC8D100C4842021BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetShort_mE5E2A410AAD58E5D0519BADF0BE814CB21ACCC75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetStringArray_m36F9AE87487BF43FA49A8A266F44B92A5639B835_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetStringArray_m7E794F3072EEE9D14327E501DB5E8A2D08B6762B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetUIntArray_mC464C73ABB21FFF8B536B07DB89C4F8E16E3C1E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetUInt_m3451DF0B023E55483695F131CA6D119F28053546_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetULongArray_m6BA6EEE56AABA080B780B85FBCA84C65F07BE927_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetUShortArray_mD11AA46D18676B0C8F0A1A8A91F3FA947C9B0FD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_GetUShort_m8E0687497DD76F7A50C2DFE9766EA3F1B1D163DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekChar_mCEB67283D01C951642D32455EA5936155BD3A675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekDouble_m46712334D1C24AE646813B5D7CA86FDB13C9E09E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekFloat_mCD061FFCB59CC7A2FFDE05F0EE67AF7616A16B97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekLong_m2DA5ADA153AFC09242C0F24DFB7D846F67724EDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekShort_mE3475975A2A3304E7BD2680E89F9B54E17654BBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekString_mC76475D2CEC86AF0B6D62969C75ECCCAB3433C20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekString_mC9EC8B7F31191F501BE7E58477839BCF5438A7BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekUInt_m25BB8DCBACA0A3D6EC8F8EAE33C580959FA740CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekULong_mCDFBD34614CD10BA8EA6441A21DF0945BA1F623D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_PeekUShort_mDFAF35F2DFF9BDF212CD2D473BF0265928FFD826_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataReader_TryGetStringArray_mEE10193473E7098A2C766390DC54976EF00D1D1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter_CopyData_m3611578C85FD7D31E42C904FEB4F4ECB7E2E672A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter_FromBytes_m4381D926A375D8E92816BFB0CE052A0319E2C5F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter_FromBytes_mD459F7ABFEE54AD3B891B48D9EDFFFC5B3CA6E13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter_FromString_m7F5B6DE97909745C0B5830CECF17A59D7A68DEAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetPacketProcessor_GetCallbackFromData_mC59CE0DCEECA1E6238357D689131866503A0EDE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetPacketProcessor__ctor_m29F6BE0757DD19771D8E3FD2ADEBCEA17EEC85AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetPacketProcessor__ctor_mC4A0CA0DCFDC7410CFD1F9936C06A2D4AB9704E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_FromServerResponse_mA6D08B4B7B5AC9C18C32D351A42E4D6BB08B7729_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_GetUInt64BE_m59EE60347AD103051DB2530CF022A8E813582F03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_SetDateTime64_mF0484961537FA06BF6D482C0BD8E15D002BDADFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_SetUInt64BE_mDF706E48236A2746A84B925FA6CCF779CF2C3462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket__cctor_m2445C55AA39431304103E334806A6AFC0D7C762C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket__ctor_m217CD9BBBF915C0C7A42A9EA83A522888AA367FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_get_CorrectionOffset_m2CAF8BFD062DEB21589C577A36112C6DB28F813A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpPacket_get_RoundTripTime_m17C86F36F4808068352BC78F07304210FCAA2675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NtpRequest_Send_m55ED5761087C8F066C276D6DAD4762D0A03B21FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParseException__ctor_mCD80CC1955B6150C00FBFE276B3E02C26865A033_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySocketFix_OnApplicationPause_m70B65F60CE6A73118AD25197DF0896488824C3C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySocketFix_Update_mF08226C6305EC5171897BBCCD336C6C48BD05FF8_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// LiteNetLib.Utils.CRC32C
struct CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445  : public RuntimeObject
{
public:

public:
};

struct CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields
{
public:
	// System.UInt32[] LiteNetLib.Utils.CRC32C::Table
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Table_2;

public:
	inline static int32_t get_offset_of_Table_2() { return static_cast<int32_t>(offsetof(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields, ___Table_2)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Table_2() const { return ___Table_2; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Table_2() { return &___Table_2; }
	inline void set_Table_2(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_2), (void*)value);
	}
};


// LiteNetLib.Utils.FastBitConverter
struct FastBitConverter_t6C78F3E420F325E7D2C143228C897CF2EE6F29FE  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.Utils.NetDataReader
struct NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.Utils.NetDataReader::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_0;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_position
	int32_t ____position_1;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_dataSize
	int32_t ____dataSize_2;
	// System.Int32 LiteNetLib.Utils.NetDataReader::_offset
	int32_t ____offset_3;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262, ____data_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__dataSize_2() { return static_cast<int32_t>(offsetof(NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262, ____dataSize_2)); }
	inline int32_t get__dataSize_2() const { return ____dataSize_2; }
	inline int32_t* get_address_of__dataSize_2() { return &____dataSize_2; }
	inline void set__dataSize_2(int32_t value)
	{
		____dataSize_2 = value;
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262, ____offset_3)); }
	inline int32_t get__offset_3() const { return ____offset_3; }
	inline int32_t* get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(int32_t value)
	{
		____offset_3 = value;
	}
};


// LiteNetLib.Utils.NetDataWriter
struct NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.Utils.NetDataWriter::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_0;
	// System.Int32 LiteNetLib.Utils.NetDataWriter::_position
	int32_t ____position_1;
	// System.Boolean LiteNetLib.Utils.NetDataWriter::_autoResize
	bool ____autoResize_3;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035, ____data_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__autoResize_3() { return static_cast<int32_t>(offsetof(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035, ____autoResize_3)); }
	inline bool get__autoResize_3() const { return ____autoResize_3; }
	inline bool* get_address_of__autoResize_3() { return &____autoResize_3; }
	inline void set__autoResize_3(bool value)
	{
		____autoResize_3 = value;
	}
};


// LiteNetLib.Utils.NetPacketProcessor
struct NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565  : public RuntimeObject
{
public:
	// LiteNetLib.Utils.NetSerializer LiteNetLib.Utils.NetPacketProcessor::_netSerializer
	NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * ____netSerializer_0;
	// System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate> LiteNetLib.Utils.NetPacketProcessor::_callbacks
	Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * ____callbacks_1;
	// LiteNetLib.Utils.NetDataWriter LiteNetLib.Utils.NetPacketProcessor::_netDataWriter
	NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * ____netDataWriter_2;

public:
	inline static int32_t get_offset_of__netSerializer_0() { return static_cast<int32_t>(offsetof(NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565, ____netSerializer_0)); }
	inline NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * get__netSerializer_0() const { return ____netSerializer_0; }
	inline NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 ** get_address_of__netSerializer_0() { return &____netSerializer_0; }
	inline void set__netSerializer_0(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * value)
	{
		____netSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netSerializer_0), (void*)value);
	}

	inline static int32_t get_offset_of__callbacks_1() { return static_cast<int32_t>(offsetof(NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565, ____callbacks_1)); }
	inline Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * get__callbacks_1() const { return ____callbacks_1; }
	inline Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C ** get_address_of__callbacks_1() { return &____callbacks_1; }
	inline void set__callbacks_1(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * value)
	{
		____callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacks_1), (void*)value);
	}

	inline static int32_t get_offset_of__netDataWriter_2() { return static_cast<int32_t>(offsetof(NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565, ____netDataWriter_2)); }
	inline NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * get__netDataWriter_2() const { return ____netDataWriter_2; }
	inline NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 ** get_address_of__netDataWriter_2() { return &____netDataWriter_2; }
	inline void set__netDataWriter_2(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * value)
	{
		____netDataWriter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netDataWriter_2), (void*)value);
	}
};


// LiteNetLib.Utils.NetSerializer
struct NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8  : public RuntimeObject
{
public:
	// LiteNetLib.Utils.NetDataWriter LiteNetLib.Utils.NetSerializer::_writer
	NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * ____writer_0;
	// System.Int32 LiteNetLib.Utils.NetSerializer::_maxStringLength
	int32_t ____maxStringLength_1;
	// System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/CustomType> LiteNetLib.Utils.NetSerializer::_registeredTypes
	Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 * ____registeredTypes_2;

public:
	inline static int32_t get_offset_of__writer_0() { return static_cast<int32_t>(offsetof(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8, ____writer_0)); }
	inline NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * get__writer_0() const { return ____writer_0; }
	inline NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 ** get_address_of__writer_0() { return &____writer_0; }
	inline void set__writer_0(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * value)
	{
		____writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_0), (void*)value);
	}

	inline static int32_t get_offset_of__maxStringLength_1() { return static_cast<int32_t>(offsetof(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8, ____maxStringLength_1)); }
	inline int32_t get__maxStringLength_1() const { return ____maxStringLength_1; }
	inline int32_t* get_address_of__maxStringLength_1() { return &____maxStringLength_1; }
	inline void set__maxStringLength_1(int32_t value)
	{
		____maxStringLength_1 = value;
	}

	inline static int32_t get_offset_of__registeredTypes_2() { return static_cast<int32_t>(offsetof(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8, ____registeredTypes_2)); }
	inline Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 * get__registeredTypes_2() const { return ____registeredTypes_2; }
	inline Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 ** get_address_of__registeredTypes_2() { return &____registeredTypes_2; }
	inline void set__registeredTypes_2(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 * value)
	{
		____registeredTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredTypes_2), (void*)value);
	}
};


// LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_tBC9EADAE25D4E97792E744C3FA71E44F5514BA17  : public RuntimeObject
{
public:

public:
};


// LiteNetLib.Utils.NtpRequest
struct NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint LiteNetLib.Utils.NtpRequest::_ntpEndPoint
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ____ntpEndPoint_3;
	// System.Int32 LiteNetLib.Utils.NtpRequest::_resendTime
	int32_t ____resendTime_4;
	// System.Int32 LiteNetLib.Utils.NtpRequest::_killTime
	int32_t ____killTime_5;

public:
	inline static int32_t get_offset_of__ntpEndPoint_3() { return static_cast<int32_t>(offsetof(NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65, ____ntpEndPoint_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get__ntpEndPoint_3() const { return ____ntpEndPoint_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of__ntpEndPoint_3() { return &____ntpEndPoint_3; }
	inline void set__ntpEndPoint_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		____ntpEndPoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ntpEndPoint_3), (void*)value);
	}

	inline static int32_t get_offset_of__resendTime_4() { return static_cast<int32_t>(offsetof(NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65, ____resendTime_4)); }
	inline int32_t get__resendTime_4() const { return ____resendTime_4; }
	inline int32_t* get_address_of__resendTime_4() { return &____resendTime_4; }
	inline void set__resendTime_4(int32_t value)
	{
		____resendTime_4 = value;
	}

	inline static int32_t get_offset_of__killTime_5() { return static_cast<int32_t>(offsetof(NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65, ____killTime_5)); }
	inline int32_t get__killTime_5() const { return ____killTime_5; }
	inline int32_t* get_address_of__killTime_5() { return &____killTime_5; }
	inline void set__killTime_5(int32_t value)
	{
		____killTime_5 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>
struct Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE0B3317638F48F9795FAC4153DDE29EB23C90D32* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t98DBE0AABCDAA8494E8BB0307FAF60EE0EBA935A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2583DEBB8848063A6AEB0E952476FB65AA6679CA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___entries_1)); }
	inline EntryU5BU5D_tE0B3317638F48F9795FAC4153DDE29EB23C90D32* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE0B3317638F48F9795FAC4153DDE29EB23C90D32** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE0B3317638F48F9795FAC4153DDE29EB23C90D32* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___keys_7)); }
	inline KeyCollection_t98DBE0AABCDAA8494E8BB0307FAF60EE0EBA935A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t98DBE0AABCDAA8494E8BB0307FAF60EE0EBA935A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t98DBE0AABCDAA8494E8BB0307FAF60EE0EBA935A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ___values_8)); }
	inline ValueCollection_t2583DEBB8848063A6AEB0E952476FB65AA6679CA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2583DEBB8848063A6AEB0E952476FB65AA6679CA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2583DEBB8848063A6AEB0E952476FB65AA6679CA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA0B83ED6C62EC540707262227E5EEA50DF30149D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE507EC9AE34DAC8207E2EECB7D0CC6EB40E54D15 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA4574430DC0A49064154706118FC33A61225E62F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___entries_1)); }
	inline EntryU5BU5D_tA0B83ED6C62EC540707262227E5EEA50DF30149D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA0B83ED6C62EC540707262227E5EEA50DF30149D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA0B83ED6C62EC540707262227E5EEA50DF30149D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___keys_7)); }
	inline KeyCollection_tE507EC9AE34DAC8207E2EECB7D0CC6EB40E54D15 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE507EC9AE34DAC8207E2EECB7D0CC6EB40E54D15 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE507EC9AE34DAC8207E2EECB7D0CC6EB40E54D15 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ___values_8)); }
	inline ValueCollection_tA4574430DC0A49064154706118FC33A61225E62F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA4574430DC0A49064154706118FC33A61225E62F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA4574430DC0A49064154706118FC33A61225E62F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
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


// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
struct ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Along
			uint64_t ___Along_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Along_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Adouble
			double ___Adouble_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Adouble_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Along_0() { return static_cast<int32_t>(offsetof(ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D, ___Along_0)); }
	inline uint64_t get_Along_0() const { return ___Along_0; }
	inline uint64_t* get_address_of_Along_0() { return &___Along_0; }
	inline void set_Along_0(uint64_t value)
	{
		___Along_0 = value;
	}

	inline static int32_t get_offset_of_Adouble_1() { return static_cast<int32_t>(offsetof(ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D, ___Adouble_1)); }
	inline double get_Adouble_1() const { return ___Adouble_1; }
	inline double* get_address_of_Adouble_1() { return &___Adouble_1; }
	inline void set_Adouble_1(double value)
	{
		___Adouble_1 = value;
	}
};


// LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat
struct ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Aint
			int32_t ___Aint_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Aint_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Afloat
			float ___Afloat_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Afloat_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Aint_0() { return static_cast<int32_t>(offsetof(ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB, ___Aint_0)); }
	inline int32_t get_Aint_0() const { return ___Aint_0; }
	inline int32_t* get_address_of_Aint_0() { return &___Aint_0; }
	inline void set_Aint_0(int32_t value)
	{
		___Aint_0 = value;
	}

	inline static int32_t get_offset_of_Afloat_1() { return static_cast<int32_t>(offsetof(ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB, ___Afloat_1)); }
	inline float get_Afloat_1() const { return ___Afloat_1; }
	inline float* get_address_of_Afloat_1() { return &___Afloat_1; }
	inline void set_Afloat_1(float value)
	{
		___Afloat_1 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8F5F55754A95DD80E678E5BA98A8813EDCC0E90E  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Int16
struct Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tDE9D724636528CC6E8F3E38F06595A0D22EB3539  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t3DDD412D7E0DACD1F2C3D5E6F462A7D19E370DB5  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.SByte
struct SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// LiteNetLib.IPv6Mode
struct IPv6Mode_t22F8D3B3E5455A98883B21B3E2C35D3C9D6A6D0A 
{
public:
	// System.Int32 LiteNetLib.IPv6Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPv6Mode_t22F8D3B3E5455A98883B21B3E2C35D3C9D6A6D0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.NetSocket
struct NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket LiteNetLib.NetSocket::_udpSocketv4
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ____udpSocketv4_1;
	// System.Net.Sockets.Socket LiteNetLib.NetSocket::_udpSocketv6
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ____udpSocketv6_2;
	// System.Threading.Thread LiteNetLib.NetSocket::_threadv4
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ____threadv4_3;
	// System.Threading.Thread LiteNetLib.NetSocket::_threadv6
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ____threadv6_4;
	// System.Net.IPEndPoint LiteNetLib.NetSocket::_bufferEndPointv4
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ____bufferEndPointv4_5;
	// System.Net.IPEndPoint LiteNetLib.NetSocket::_bufferEndPointv6
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ____bufferEndPointv6_6;
	// LiteNetLib.NetManager LiteNetLib.NetSocket::_listener
	NetManager_tE86A7B9475BC980EF26CAEDF28242658240E6681 * ____listener_9;
	// System.Boolean LiteNetLib.NetSocket::_useNativeSockets
	bool ____useNativeSockets_10;
	// System.Collections.Generic.Dictionary`2<LiteNetLib.NativeAddr,System.Net.IPEndPoint> LiteNetLib.NetSocket::_nativeAddrMap
	Dictionary_2_t4B4C2B2F44B7806249435B95BBB7E7B340B277D1 * ____nativeAddrMap_11;
	// LiteNetLib.UnitySocketFix LiteNetLib.NetSocket::_unitySocketFix
	UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * ____unitySocketFix_15;
	// System.Int32 LiteNetLib.NetSocket::<LocalPort>k__BackingField
	int32_t ___U3CLocalPortU3Ek__BackingField_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) LiteNetLib.NetSocket::IsRunning
	bool ___IsRunning_17;

public:
	inline static int32_t get_offset_of__udpSocketv4_1() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____udpSocketv4_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get__udpSocketv4_1() const { return ____udpSocketv4_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of__udpSocketv4_1() { return &____udpSocketv4_1; }
	inline void set__udpSocketv4_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		____udpSocketv4_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____udpSocketv4_1), (void*)value);
	}

	inline static int32_t get_offset_of__udpSocketv6_2() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____udpSocketv6_2)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get__udpSocketv6_2() const { return ____udpSocketv6_2; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of__udpSocketv6_2() { return &____udpSocketv6_2; }
	inline void set__udpSocketv6_2(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		____udpSocketv6_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____udpSocketv6_2), (void*)value);
	}

	inline static int32_t get_offset_of__threadv4_3() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____threadv4_3)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get__threadv4_3() const { return ____threadv4_3; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of__threadv4_3() { return &____threadv4_3; }
	inline void set__threadv4_3(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		____threadv4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadv4_3), (void*)value);
	}

	inline static int32_t get_offset_of__threadv6_4() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____threadv6_4)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get__threadv6_4() const { return ____threadv6_4; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of__threadv6_4() { return &____threadv6_4; }
	inline void set__threadv6_4(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		____threadv6_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadv6_4), (void*)value);
	}

	inline static int32_t get_offset_of__bufferEndPointv4_5() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____bufferEndPointv4_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get__bufferEndPointv4_5() const { return ____bufferEndPointv4_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of__bufferEndPointv4_5() { return &____bufferEndPointv4_5; }
	inline void set__bufferEndPointv4_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		____bufferEndPointv4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferEndPointv4_5), (void*)value);
	}

	inline static int32_t get_offset_of__bufferEndPointv6_6() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____bufferEndPointv6_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get__bufferEndPointv6_6() const { return ____bufferEndPointv6_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of__bufferEndPointv6_6() { return &____bufferEndPointv6_6; }
	inline void set__bufferEndPointv6_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		____bufferEndPointv6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferEndPointv6_6), (void*)value);
	}

	inline static int32_t get_offset_of__listener_9() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____listener_9)); }
	inline NetManager_tE86A7B9475BC980EF26CAEDF28242658240E6681 * get__listener_9() const { return ____listener_9; }
	inline NetManager_tE86A7B9475BC980EF26CAEDF28242658240E6681 ** get_address_of__listener_9() { return &____listener_9; }
	inline void set__listener_9(NetManager_tE86A7B9475BC980EF26CAEDF28242658240E6681 * value)
	{
		____listener_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listener_9), (void*)value);
	}

	inline static int32_t get_offset_of__useNativeSockets_10() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____useNativeSockets_10)); }
	inline bool get__useNativeSockets_10() const { return ____useNativeSockets_10; }
	inline bool* get_address_of__useNativeSockets_10() { return &____useNativeSockets_10; }
	inline void set__useNativeSockets_10(bool value)
	{
		____useNativeSockets_10 = value;
	}

	inline static int32_t get_offset_of__nativeAddrMap_11() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____nativeAddrMap_11)); }
	inline Dictionary_2_t4B4C2B2F44B7806249435B95BBB7E7B340B277D1 * get__nativeAddrMap_11() const { return ____nativeAddrMap_11; }
	inline Dictionary_2_t4B4C2B2F44B7806249435B95BBB7E7B340B277D1 ** get_address_of__nativeAddrMap_11() { return &____nativeAddrMap_11; }
	inline void set__nativeAddrMap_11(Dictionary_2_t4B4C2B2F44B7806249435B95BBB7E7B340B277D1 * value)
	{
		____nativeAddrMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeAddrMap_11), (void*)value);
	}

	inline static int32_t get_offset_of__unitySocketFix_15() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ____unitySocketFix_15)); }
	inline UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * get__unitySocketFix_15() const { return ____unitySocketFix_15; }
	inline UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF ** get_address_of__unitySocketFix_15() { return &____unitySocketFix_15; }
	inline void set__unitySocketFix_15(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * value)
	{
		____unitySocketFix_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitySocketFix_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPortU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ___U3CLocalPortU3Ek__BackingField_16)); }
	inline int32_t get_U3CLocalPortU3Ek__BackingField_16() const { return ___U3CLocalPortU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CLocalPortU3Ek__BackingField_16() { return &___U3CLocalPortU3Ek__BackingField_16; }
	inline void set_U3CLocalPortU3Ek__BackingField_16(int32_t value)
	{
		___U3CLocalPortU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_IsRunning_17() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6, ___IsRunning_17)); }
	inline bool get_IsRunning_17() const { return ___IsRunning_17; }
	inline bool* get_address_of_IsRunning_17() { return &___IsRunning_17; }
	inline void set_IsRunning_17(bool value)
	{
		___IsRunning_17 = value;
	}
};

struct NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_StaticFields
{
public:
	// System.Net.IPAddress LiteNetLib.NetSocket::MulticastAddressV6
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___MulticastAddressV6_13;
	// System.Boolean LiteNetLib.NetSocket::IPv6Support
	bool ___IPv6Support_14;

public:
	inline static int32_t get_offset_of_MulticastAddressV6_13() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_StaticFields, ___MulticastAddressV6_13)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_MulticastAddressV6_13() const { return ___MulticastAddressV6_13; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_MulticastAddressV6_13() { return &___MulticastAddressV6_13; }
	inline void set_MulticastAddressV6_13(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___MulticastAddressV6_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MulticastAddressV6_13), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Support_14() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_StaticFields, ___IPv6Support_14)); }
	inline bool get_IPv6Support_14() const { return ___IPv6Support_14; }
	inline bool* get_address_of_IPv6Support_14() { return &___IPv6Support_14; }
	inline void set_IPv6Support_14(bool value)
	{
		___IPv6Support_14 = value;
	}
};

struct NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_ThreadStaticFields
{
public:
	// System.Byte[] LiteNetLib.NetSocket::_sendToBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____sendToBuffer_7;
	// System.Byte[] LiteNetLib.NetSocket::_endPointBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____endPointBuffer_8;

public:
	inline static int32_t get_offset_of__sendToBuffer_7() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_ThreadStaticFields, ____sendToBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__sendToBuffer_7() const { return ____sendToBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__sendToBuffer_7() { return &____sendToBuffer_7; }
	inline void set__sendToBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____sendToBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendToBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__endPointBuffer_8() { return static_cast<int32_t>(offsetof(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6_ThreadStaticFields, ____endPointBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__endPointBuffer_8() const { return ____endPointBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__endPointBuffer_8() { return &____endPointBuffer_8; }
	inline void set__endPointBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____endPointBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPointBuffer_8), (void*)value);
	}
};


// LiteNetLib.ShutdownResult
struct ShutdownResult_t411F70C780A02FEDEB010160E6F17FF0FF464771 
{
public:
	// System.Int32 LiteNetLib.ShutdownResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShutdownResult_t411F70C780A02FEDEB010160E6F17FF0FF464771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.UnconnectedMessageType
struct UnconnectedMessageType_t0D88CD31915A723F30492F8B3B9331C5FC211D4B 
{
public:
	// System.Int32 LiteNetLib.UnconnectedMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnconnectedMessageType_t0D88CD31915A723F30492F8B3B9331C5FC211D4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NetSerializer/CallType
struct CallType_t345DF87FBD75FA9ECF90199EC39B24AAA5438360 
{
public:
	// System.Int32 LiteNetLib.Utils.NetSerializer/CallType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallType_t345DF87FBD75FA9ECF90199EC39B24AAA5438360, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NtpLeapIndicator
struct NtpLeapIndicator_t6428F4C463F85DC335537CF3BE3825D070349C7E 
{
public:
	// System.Int32 LiteNetLib.Utils.NtpLeapIndicator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtpLeapIndicator_t6428F4C463F85DC335537CF3BE3825D070349C7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LiteNetLib.Utils.NtpMode
struct NtpMode_t226250561960A17A4127E60ACD6E86F753D4FCF4 
{
public:
	// System.Int32 LiteNetLib.Utils.NtpMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtpMode_t226250561960A17A4127E60ACD6E86F753D4FCF4, ___value___2)); }
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

// System.Net.Sockets.AddressFamily
struct AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 
{
public:
	// T System.Nullable`1::value
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78, ___value_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_value_0() const { return ___value_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// LiteNetLib.Utils.NtpPacket
struct NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A  : public RuntimeObject
{
public:
	// System.Byte[] LiteNetLib.Utils.NtpPacket::<Bytes>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CBytesU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::<DestinationTimestamp>k__BackingField
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___U3CDestinationTimestampU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A, ___U3CBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CBytesU3Ek__BackingField_1() const { return ___U3CBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CBytesU3Ek__BackingField_1() { return &___U3CBytesU3Ek__BackingField_1; }
	inline void set_U3CBytesU3Ek__BackingField_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBytesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDestinationTimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A, ___U3CDestinationTimestampU3Ek__BackingField_2)); }
	inline Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  get_U3CDestinationTimestampU3Ek__BackingField_2() const { return ___U3CDestinationTimestampU3Ek__BackingField_2; }
	inline Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * get_address_of_U3CDestinationTimestampU3Ek__BackingField_2() { return &___U3CDestinationTimestampU3Ek__BackingField_2; }
	inline void set_U3CDestinationTimestampU3Ek__BackingField_2(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  value)
	{
		___U3CDestinationTimestampU3Ek__BackingField_2 = value;
	}
};

struct NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_StaticFields
{
public:
	// System.DateTime LiteNetLib.Utils.NtpPacket::Epoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___Epoch_0;

public:
	inline static int32_t get_offset_of_Epoch_0() { return static_cast<int32_t>(offsetof(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_StaticFields, ___Epoch_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_Epoch_0() const { return ___Epoch_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_Epoch_0() { return &___Epoch_0; }
	inline void set_Epoch_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___Epoch_0 = value;
	}
};


// LiteNetLib.Utils.ParseException
struct ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824  : public Exception_t
{
public:

public:
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

// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// LiteNetLib.InvalidPacketException
struct InvalidPacketException_t3957874E3F6E49E675832162CDA3590A4E8FBFB3  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// LiteNetLib.Utils.InvalidTypeException
struct InvalidTypeException_t94F1305AECD146882889720BAE82EB6FDC64C541  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// LiteNetLib.TooBigPacketException
struct TooBigPacketException_t3818D0C7621F2E61192C62B01B9812CFB47D5AA7  : public InvalidPacketException_t3957874E3F6E49E675832162CDA3590A4E8FBFB3
{
public:

public:
};


// LiteNetLib.UnitySocketFix
struct UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Net.IPAddress LiteNetLib.UnitySocketFix::BindAddrIPv4
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___BindAddrIPv4_4;
	// System.Net.IPAddress LiteNetLib.UnitySocketFix::BindAddrIPv6
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___BindAddrIPv6_5;
	// System.Boolean LiteNetLib.UnitySocketFix::Reuse
	bool ___Reuse_6;
	// LiteNetLib.IPv6Mode LiteNetLib.UnitySocketFix::IPv6
	int32_t ___IPv6_7;
	// System.Int32 LiteNetLib.UnitySocketFix::Port
	int32_t ___Port_8;
	// System.Boolean LiteNetLib.UnitySocketFix::Paused
	bool ___Paused_9;
	// LiteNetLib.NetSocket LiteNetLib.UnitySocketFix::Socket
	NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * ___Socket_10;
	// System.Boolean LiteNetLib.UnitySocketFix::ManualMode
	bool ___ManualMode_11;

public:
	inline static int32_t get_offset_of_BindAddrIPv4_4() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___BindAddrIPv4_4)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_BindAddrIPv4_4() const { return ___BindAddrIPv4_4; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_BindAddrIPv4_4() { return &___BindAddrIPv4_4; }
	inline void set_BindAddrIPv4_4(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___BindAddrIPv4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BindAddrIPv4_4), (void*)value);
	}

	inline static int32_t get_offset_of_BindAddrIPv6_5() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___BindAddrIPv6_5)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_BindAddrIPv6_5() const { return ___BindAddrIPv6_5; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_BindAddrIPv6_5() { return &___BindAddrIPv6_5; }
	inline void set_BindAddrIPv6_5(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___BindAddrIPv6_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BindAddrIPv6_5), (void*)value);
	}

	inline static int32_t get_offset_of_Reuse_6() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___Reuse_6)); }
	inline bool get_Reuse_6() const { return ___Reuse_6; }
	inline bool* get_address_of_Reuse_6() { return &___Reuse_6; }
	inline void set_Reuse_6(bool value)
	{
		___Reuse_6 = value;
	}

	inline static int32_t get_offset_of_IPv6_7() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___IPv6_7)); }
	inline int32_t get_IPv6_7() const { return ___IPv6_7; }
	inline int32_t* get_address_of_IPv6_7() { return &___IPv6_7; }
	inline void set_IPv6_7(int32_t value)
	{
		___IPv6_7 = value;
	}

	inline static int32_t get_offset_of_Port_8() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___Port_8)); }
	inline int32_t get_Port_8() const { return ___Port_8; }
	inline int32_t* get_address_of_Port_8() { return &___Port_8; }
	inline void set_Port_8(int32_t value)
	{
		___Port_8 = value;
	}

	inline static int32_t get_offset_of_Paused_9() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___Paused_9)); }
	inline bool get_Paused_9() const { return ___Paused_9; }
	inline bool* get_address_of_Paused_9() { return &___Paused_9; }
	inline void set_Paused_9(bool value)
	{
		___Paused_9 = value;
	}

	inline static int32_t get_offset_of_Socket_10() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___Socket_10)); }
	inline NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * get_Socket_10() const { return ___Socket_10; }
	inline NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 ** get_address_of_Socket_10() { return &___Socket_10; }
	inline void set_Socket_10(NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * value)
	{
		___Socket_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Socket_10), (void*)value);
	}

	inline static int32_t get_offset_of_ManualMode_11() { return static_cast<int32_t>(offsetof(UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF, ___ManualMode_11)); }
	inline bool get_ManualMode_11() const { return ___ManualMode_11; }
	inline bool* get_address_of_ManualMode_11() { return &___ManualMode_11; }
	inline void set_ManualMode_11(bool value)
	{
		___ManualMode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
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
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
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
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] LiteNetLib.NetUtils::AllocatePinnedUninitializedArray<System.UInt32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00_gshared (int32_t ___count0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_gshared (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48_gshared (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9F9AAED6CE24958BC31A1808A6AE8245C70C434_gshared (Dictionary_2_t8FAB6C1B6A980D169DF7378B6EAD1AE1B522139B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m96AA153A6D1906061EA9783EEB69B2BE148BC2F6_gshared (Dictionary_2_t8FAB6C1B6A980D169DF7378B6EAD1AE1B522139B * __this, uint64_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_gshared (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_gshared (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_gshared_inline (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, const RuntimeMethod* method);

// System.Void LiteNetLib.InvalidPacketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPacketException__ctor_mA463644525BFA143A6F975DB5C2A1F221F1CCD5C (InvalidPacketException_t3957874E3F6E49E675832162CDA3590A4E8FBFB3 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void LiteNetLib.NetSocket::Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocket_Close_mC0935FC8FCF9496F28BAFCD9335572507D0D2489 (NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * __this, bool ___suspend0, const RuntimeMethod* method);
// System.Boolean LiteNetLib.NetSocket::Bind(System.Net.IPAddress,System.Net.IPAddress,System.Int32,System.Boolean,LiteNetLib.IPv6Mode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetSocket_Bind_m2A6B0DCF350C2B1197DF2FEC32A00B3E36CB0298 (NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___addressIPv40, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___addressIPv61, int32_t ___port2, bool ___reuseAddress3, int32_t ___ipv6Mode4, bool ___manualMode5, const RuntimeMethod* method);
// System.Void LiteNetLib.NetDebug::WriteError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDebug_WriteError_m931E5FB70FA64345103DB94E51E10C81F780561B (String_t* ___str0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void LiteNetLib.NetSocket::OnErrorRestore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocket_OnErrorRestore_m727AD4D4DCAAA6D387D52AA97EA04C7FAB4E85E7 (NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// T[] LiteNetLib.NetUtils::AllocatePinnedUninitializedArray<System.UInt32>(System.Int32)
inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00 (int32_t ___count0, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* (*) (int32_t, const RuntimeMethod*))NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00_gshared)(___count0, method);
}
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, uint64_t ___data2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___data2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.Int16)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int16_t ___data2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Byte[] LiteNetLib.Utils.NetDataWriter::get_Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataWriter_get_Data_m1B1AEDC5A64866EF1B3A982E9FF456FA6D8CF474_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NetDataWriter::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m34BF31EBBB9C13B12DEA9A734E9DCF347FDD10AE_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_m4CEF8C30EB2FE1912851519B75DA4D5CDB050131 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * ___dataWriter0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mC3DACA2CF42CABAA47954706FCCD00E8CBFCDB2D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mBEAD3878DCED353B797412F0761BB338CFA463E4 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___maxSize2, const RuntimeMethod* method);
// System.String LiteNetLib.Utils.NetDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t ___maxLength0, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NetDataReader::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Net.IPEndPoint LiteNetLib.NetUtils::MakeEndPoint(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * NetUtils_MakeEndPoint_m5553AD0C49A843109AB322499DB7B50D864CDFFB (String_t* ___hostStr0, int32_t ___port1, const RuntimeMethod* method);
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.String LiteNetLib.Utils.NetDataReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Char System.BitConverter::ToChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitConverter_ToChar_m7FFF8EE9B303B8010A5045C5CC0F8F529EB917E4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_mBFC7B476188DF611E2B21C89693258F6A4969CEA (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_m28987106F93DB8C163FD4E740B4FEA405CC8A7FA (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_m2AB7FBC373C5A2DEB276DDF00289A69C80A84451 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_mD6A3C2F4BA020691B99FABF863F6FFF6A456FF59 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_m5C36647E95F4F3FF047B452C9A21A58E466CA295 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NetDataReader::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Byte LiteNetLib.Utils.NetDataReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_GetByte_m8B7927D913A91A271FFF07D2846F33C0856C2B43 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.SByte LiteNetLib.Utils.NetDataReader::GetSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_GetSByte_m8D41254ED9D1F34BFA548505E34286EDE822EE53 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Boolean LiteNetLib.Utils.NetDataReader::GetBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_GetBool_m46F6382C0651F104AF6ECB8E7446C0FC3B4C2A63 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Char LiteNetLib.Utils.NetDataReader::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_GetChar_mF1993D91F516B6CB3D12655CB54D12EDC45B06E3 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Int16 LiteNetLib.Utils.NetDataReader::GetShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_GetShort_mE5E2A410AAD58E5D0519BADF0BE814CB21ACCC75 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.UInt16 LiteNetLib.Utils.NetDataReader::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_GetUShort_m8E0687497DD76F7A50C2DFE9766EA3F1B1D163DC (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NetDataReader::GetUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_GetUInt_m3451DF0B023E55483695F131CA6D119F28053546 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Int64 LiteNetLib.Utils.NetDataReader::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_GetLong_m408EB388D2964939337D7BF36B44D71225F5CBF8 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.UInt64 LiteNetLib.Utils.NetDataReader::GetULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Single LiteNetLib.Utils.NetDataReader::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_GetFloat_mCECF57F5803D4C9C4C890D955CB50E17E9EE4343 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Double LiteNetLib.Utils.NetDataReader::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_GetDouble_m4BF8D1CC8F345BFB746812040495C76DBFAF3911 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NetDataReader::PeekInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetUShort(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUShort_m6A42680315DA351B0219C9385959AF34F510639D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, uint16_t* ___result0, const RuntimeMethod* method);
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetString_m7CF205183AE624BA88F0BA573A8ABE8AC29EEAB9 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, String_t** ___result0, const RuntimeMethod* method);
// System.Byte[] LiteNetLib.Utils.NetDataReader::GetBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataReader_GetBytesWithLength_mCB6FD7B070973A6B0CF37057D558C35A65113C5D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, bool ___autoResize0, int32_t ___initialSize1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE82CECF702B45EFDD96B37E796FBB067B49B1994 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m26A3D6AC270F0982DDD61222BD2FAEC7CB4DE567 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m6F14C5C6BAEFCB7B822816FA3813160D1C35B783 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0E790183AA007CB13EECC8ADDEFAEAC6E3B71B0C (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___newSize0, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
inline void Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48_gshared)(___array0, ___newSize1, method);
}
// System.Void LiteNetLib.Utils.NetDataWriter::ResizeIfNeed(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___newSize0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mEA7D975896611B7B59A6085067D1FA3AC4B08FF9_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, float ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Double)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m3EA4F6C713D98E8D7E27201DAFE082408FC3851F_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, double ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m90BA22BC0DA39EA23D73B9FD8B44EAD0D229B6A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int64_t ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m320B345B14CEB8FAAE5249B294DE65C4D60321A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint64_t ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int32_t ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m45072F0240AE2CAF78622185C7951A7A88136435_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint32_t ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint16_t ___value2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int16)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mDD16F270163CE144F47EBE4FABE8146141257E5F_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int16_t ___value2, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, RuntimeArray * ___arr0, int32_t ___sz1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mBEE4A56F55B0952380FB48D9859DB00B6BED642E (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m7A30C14A901B93161B0D08B9EB53BEE25B10B46D (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, String_t* ___value0, int32_t ___maxLength1, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>::.ctor()
inline void Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C *, const RuntimeMethod*))Dictionary_2__ctor_mE9F9AAED6CE24958BC31A1808A6AE8245C70C434_gshared)(__this, method);
}
// System.Void LiteNetLib.Utils.NetSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mDE055FB5E450E91B9F6CBD71207DB3C7F5762408 (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * __this, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetSerializer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022 (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0135FC6045C9DB2CC73DABC517FC224FCE60A58E (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * __this, uint64_t ___key0, SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C *, uint64_t, SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m96AA153A6D1906061EA9783EEB69B2BE148BC2F6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void LiteNetLib.Utils.ParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseException__ctor_mCD80CC1955B6150C00FBFE276B3E02C26865A033 (ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadPacket(LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m0C242066EFCC8099841C25CEAB49AE2275CFA576 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadPacket(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m46849718F15D69B620A517963D78FB0BC38BA782 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::Invoke(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m21EDD1A4C31F0C02D590238DA1712FEB52D7A228 (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/CustomType>::.ctor()
inline void Dictionary_2__ctor_m284D9778ADE45C30E58CE3907D7B46FC0A32AC79 (Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Byte[] LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.TimeSpan LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_mF0484961537FA06BF6D482C0BD8E15D002BDADFA (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_ReceiveTimestamp_m1343DE6E50F8921B9D2E11F1053334C8FFBE83C7 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, const RuntimeMethod* method)
{
	return ((  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  (*) (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *, const RuntimeMethod*))Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_gshared)(__this, method);
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_OriginTimestamp_mC39E7284F03BF0F61AF363AA5BC92DC255138B7D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_op_Addition_m2C916EE6F60BA72329886F1568FE9DD0D8DF0DB7 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___t10, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___t21, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_op_Subtraction_m5978CE5FCEB3D59AF0BC52AF838BFE3237AE8B23 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___t10, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___t21, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4 (int64_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_Mode(LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m71DF08DCE6408F1AFD5809EB4AF0F559246AC237 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_m64F80A4D0AA02833DD7797FDD91A728C57EEA598 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607 (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_gshared)(__this, ___value0, method);
}
// System.Void LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_m1A8F70CA0B556705F58DE72721F5629E71CE7F36 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mEB812B1CB03367217CEAAB05A74EFE67048B7D55_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value0, const RuntimeMethod* method);
// LiteNetLib.Utils.NtpMode LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_m83260B4551719C2E26B301A785458303C90E0B62 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m0E9B9F71185354D4A79CEB7DCACE7B34CFC327BC (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_gshared_inline)(__this, method);
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_m0BDE07AA166FECBC8824FD10F7CDE764E50A47FE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_mBE0FDBBC5F0EB059794E66A383853E59141B1A16 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// LiteNetLib.Utils.NtpLeapIndicator LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_m613DA80E804FA95D01C5EA5E26DD8CA128A759E2 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.UInt64 LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m59EE60347AD103051DB2530CF022A8E813582F03 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m64CA1F639893BC431286C0AE8266AA46E38FB57D (double ___value0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m027A935E14EB81BCC0739BD56AE60CDE3387990C (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int64_t ___ticks0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mA246C8DD45C3EA0EFB21E3ED8B6EE6FAAE119232 (double ___value0, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_mDF706E48236A2746A84B925FA6CCF779CF2C3462 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method);
// System.Int32 LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m29B21B8289E48FCCDDFE33EADC48A6F660D45B71 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromSeconds_mB18CB94089B3DA3B1B059BBE90367A9928AEE5CA (double ___value0, const RuntimeMethod* method);
// System.UInt64 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5 (uint64_t ___x0, const RuntimeMethod* method);
// System.UInt32 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_mFB0C52851FE6D006403B8B944E98391CF9A347ED (uint32_t ___x0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mF4506D7FF3B64F7EC739A36667DC8BC089A6539A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method);
// System.Void LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m217CD9BBBF915C0C7A42A9EA83A522888AA367FE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method);
// System.Int32 LiteNetLib.NetSocket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.IPEndPoint,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSocket_SendTo_mCE76360F88C3CA41AC70351B20C93CD4B9010399 (NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___size2, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___remoteEndPoint3, int32_t* ___errorCode4, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
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
// System.Void LiteNetLib.TooBigPacketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooBigPacketException__ctor_m2C8B6D1E6F7388626C9FC9CD5976E9DC827A0C2E (TooBigPacketException_t3818D0C7621F2E61192C62B01B9812CFB47D5AA7 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public TooBigPacketException(string message) : base(message)
		String_t* L_0 = ___message0;
		InvalidPacketException__ctor_mA463644525BFA143A6F975DB5C2A1F221F1CCD5C(__this, L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LiteNetLib.UnitySocketFix::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix_Update_mF08226C6305EC5171897BBCCD336C6C48BD05FF8 (UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySocketFix_Update_mF08226C6305EC5171897BBCCD336C6C48BD05FF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Socket == null)
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_0 = __this->get_Socket_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.UnitySocketFix::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix_OnApplicationPause_m70B65F60CE6A73118AD25197DF0896488824C3C6 (UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySocketFix_OnApplicationPause_m70B65F60CE6A73118AD25197DF0896488824C3C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Socket == null)
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_0 = __this->get_Socket_10();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (pause)
		bool L_1 = ___pause0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Paused = true;
		__this->set_Paused_9((bool)1);
		// Socket.Close(true);
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_2 = __this->get_Socket_10();
		NullCheck(L_2);
		NetSocket_Close_mC0935FC8FCF9496F28BAFCD9335572507D0D2489(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// else if (Paused)
		bool L_3 = __this->get_Paused_9();
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if (!Socket.Bind(BindAddrIPv4, BindAddrIPv6, Port, Reuse, IPv6, ManualMode))
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_4 = __this->get_Socket_10();
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_5 = __this->get_BindAddrIPv4_4();
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_6 = __this->get_BindAddrIPv6_5();
		int32_t L_7 = __this->get_Port_8();
		bool L_8 = __this->get_Reuse_6();
		int32_t L_9 = __this->get_IPv6_7();
		bool L_10 = __this->get_ManualMode_11();
		NullCheck(L_4);
		bool L_11 = NetSocket_Bind_m2A6B0DCF350C2B1197DF2FEC32A00B3E36CB0298(L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0094;
		}
	}
	{
		// NetDebug.WriteError("[S] Cannot restore connection \"{0}\",\"{1}\" port {2}", BindAddrIPv4, BindAddrIPv6, Port);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_14 = __this->get_BindAddrIPv4_4();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_16 = __this->get_BindAddrIPv6_5();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_15;
		int32_t L_18 = __this->get_Port_8();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(NetDebug_tC721578BF8AED5FA7842EF159BB2B288CF5C7D4A_il2cpp_TypeInfo_var);
		NetDebug_WriteError_m931E5FB70FA64345103DB94E51E10C81F780561B(_stringLiteralB3396B8ADD9E89BE124CB7880791B6138166B6DF, L_17, /*hidden argument*/NULL);
		// Socket.OnErrorRestore();
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_21 = __this->get_Socket_10();
		NullCheck(L_21);
		NetSocket_OnErrorRestore_m727AD4D4DCAAA6D387D52AA97EA04C7FAB4E85E7(L_21, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.UnitySocketFix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocketFix__ctor_m72EC23BC73C97AA88A0BCCA22908FE001FDC32EF (UnitySocketFix_tCD21033418C9A829469465C51D692FA33D651EDF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LiteNetLib.Utils.CRC32C::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32C__cctor_mE81DB0403F87B20BC19DE73CE93BBD867C799B5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRC32C__cctor_mE81DB0403F87B20BC19DE73CE93BBD867C799B5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t G_B6_0 = 0;
	{
		// Table = NetUtils.AllocatePinnedUninitializedArray<uint>(16 * 256);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t36B671318D0D73B557E85DDE77056ED76C3F5D80_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_0 = NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00(((int32_t)4096), /*hidden argument*/NetUtils_AllocatePinnedUninitializedArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m339546ADBC63ABE0AEF182A8FD6E74EB476B1E00_RuntimeMethod_var);
		((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->set_Table_2(L_0);
		// for (uint i = 0; i < 256; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0013:
	{
		// uint res = i;
		uint32_t L_1 = V_0;
		V_1 = L_1;
		// for (int t = 0; t < 16; t++)
		V_2 = 0;
		goto IL_0051;
	}

IL_0019:
	{
		// for (int k = 0; k < 8; k++)
		V_3 = 0;
		goto IL_0036;
	}

IL_001d:
	{
		// res = (res & 1) == 1 ? Poly ^ (res >> 1) : (res >> 1);
		uint32_t L_2 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_3 = V_1;
		G_B6_0 = ((uint32_t)(((int32_t)((uint32_t)L_3>>1))));
		goto IL_0031;
	}

IL_0028:
	{
		uint32_t L_4 = V_1;
		G_B6_0 = ((uint32_t)(((int32_t)((int32_t)((int32_t)-2097792136)^(int32_t)((int32_t)((uint32_t)L_4>>1))))));
	}

IL_0031:
	{
		V_1 = G_B6_0;
		// for (int k = 0; k < 8; k++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0036:
	{
		// for (int k = 0; k < 8; k++)
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_001d;
		}
	}
	{
		// Table[t * 256 + i] = res;
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_7 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		int32_t L_8 = V_2;
		uint32_t L_9 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)256)))))), (int64_t)(((int64_t)((uint64_t)L_9)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CRC32C__cctor_mE81DB0403F87B20BC19DE73CE93BBD867C799B5C_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>((((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)256)))))), (int64_t)(((int64_t)((uint64_t)L_9)))))))), (uint32_t)L_10);
		// for (int t = 0; t < 16; t++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0051:
	{
		// for (int t = 0; t < 16; t++)
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)16))))
		{
			goto IL_0019;
		}
	}
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005a:
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt32 LiteNetLib.Utils.CRC32C::Compute(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32C_Compute_mF6054BBBC636F187F257A237CA1438845A23C687 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRC32C_Compute_mF6054BBBC636F187F257A237CA1438845A23C687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		// uint crcLocal = uint.MaxValue;
		V_0 = (-1);
		goto IL_014b;
	}

IL_0007:
	{
		// var a = Table[(3 * 256) + input[offset + 12]]
		//         ^ Table[(2 * 256) + input[offset + 13]]
		//         ^ Table[(1 * 256) + input[offset + 14]]
		//         ^ Table[(0 * 256) + input[offset + 15]];
		IL2CPP_RUNTIME_CLASS_INIT(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_0 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___input0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)12)));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)768), (int32_t)L_4));
		uint32_t L_6 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_7 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___input0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)13)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)512), (int32_t)L_11));
		uint32_t L_13 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_14 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___input0;
		int32_t L_16 = ___offset1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)14)));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_18));
		uint32_t L_20 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_21 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___input0;
		int32_t L_23 = ___offset1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)15)));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		uint8_t L_26 = L_25;
		uint32_t L_27 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_13))^(int32_t)L_20))^(int32_t)L_27));
		// var b = Table[(7 * 256) + input[offset + 8]]
		//         ^ Table[(6 * 256) + input[offset + 9]]
		//         ^ Table[(5 * 256) + input[offset + 10]]
		//         ^ Table[(4 * 256) + input[offset + 11]];
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_28 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = ___input0;
		int32_t L_30 = ___offset1;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)8));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)1792), (int32_t)L_32));
		uint32_t L_34 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_35 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = ___input0;
		int32_t L_37 = ___offset1;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)9)));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)1536), (int32_t)L_39));
		uint32_t L_41 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_42 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = ___input0;
		int32_t L_44 = ___offset1;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)((int32_t)10)));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)1280), (int32_t)L_46));
		uint32_t L_48 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_49 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = ___input0;
		int32_t L_51 = ___offset1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)((int32_t)11)));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)1024), (int32_t)L_53));
		uint32_t L_55 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34^(int32_t)L_41))^(int32_t)L_48))^(int32_t)L_55));
		// var c = Table[(11 * 256) + input[offset + 4]]
		//         ^ Table[(10 * 256) + input[offset + 5]]
		//         ^ Table[(9 * 256) + input[offset + 6]]
		//         ^ Table[(8 * 256) + input[offset + 7]];
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_56 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = ___input0;
		int32_t L_58 = ___offset1;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)4));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_56);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)2816), (int32_t)L_60));
		uint32_t L_62 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_63 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = ___input0;
		int32_t L_65 = ___offset1;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)5));
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_63);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)2560), (int32_t)L_67));
		uint32_t L_69 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_70 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_71 = ___input0;
		int32_t L_72 = ___offset1;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)6));
		uint8_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_70);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)2304), (int32_t)L_74));
		uint32_t L_76 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_77 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_78 = ___input0;
		int32_t L_79 = ___offset1;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)7));
		uint8_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_77);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)2048), (int32_t)L_81));
		uint32_t L_83 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_62^(int32_t)L_69))^(int32_t)L_76))^(int32_t)L_83));
		// var d = Table[(15 * 256) + ((byte)crcLocal ^ input[offset])]
		//         ^ Table[(14 * 256) + ((byte)(crcLocal >> 8) ^ input[offset + 1])]
		//         ^ Table[(13 * 256) + ((byte)(crcLocal >> 16) ^ input[offset + 2])]
		//         ^ Table[(12 * 256) + ((crcLocal >> 24) ^ input[offset + 3])];
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_84 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		uint32_t L_85 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = ___input0;
		int32_t L_87 = ___offset1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint8_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_84);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)3840), (int32_t)((int32_t)((int32_t)(((int32_t)((uint8_t)L_85)))^(int32_t)L_89))));
		uint32_t L_91 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_92 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		uint32_t L_93 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = ___input0;
		int32_t L_95 = ___offset1;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_92);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)3584), (int32_t)((int32_t)((int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_93>>8)))))^(int32_t)L_97))));
		uint32_t L_99 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_100 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		uint32_t L_101 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = ___input0;
		int32_t L_103 = ___offset1;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)2));
		uint8_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_100);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)3328), (int32_t)((int32_t)((int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_101>>((int32_t)16))))))^(int32_t)L_105))));
		uint32_t L_107 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_108 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		uint32_t L_109 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_110 = ___input0;
		int32_t L_111 = ___offset1;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)3));
		uint8_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_108);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)3072), (int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_109>>((int32_t)24)))^(int32_t)L_113))));
		uint32_t L_115 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		// crcLocal = d ^ c ^ b ^ a;
		uint32_t L_116 = V_3;
		uint32_t L_117 = V_2;
		uint32_t L_118 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_91^(int32_t)L_99))^(int32_t)L_107))^(int32_t)L_115))^(int32_t)L_116))^(int32_t)L_117))^(int32_t)L_118));
		// offset += 16;
		int32_t L_119 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)((int32_t)16)));
		// length -= 16;
		int32_t L_120 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_120, (int32_t)((int32_t)16)));
	}

IL_014b:
	{
		// while (length >= 16)
		int32_t L_121 = ___length2;
		if ((((int32_t)L_121) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0007;
		}
	}
	{
		goto IL_016b;
	}

IL_0155:
	{
		// crcLocal = Table[(byte)(crcLocal ^ input[offset++])] ^ crcLocal >> 8;
		IL2CPP_RUNTIME_CLASS_INIT(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_122 = ((CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_StaticFields*)il2cpp_codegen_static_fields_for(CRC32C_t97EBCF41ADB2F5579921CFD5854D16078B095445_il2cpp_TypeInfo_var))->get_Table_2();
		uint32_t L_123 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_124 = ___input0;
		int32_t L_125 = ___offset1;
		int32_t L_126 = L_125;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		NullCheck(L_124);
		int32_t L_127 = L_126;
		uint8_t L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_122);
		int32_t L_129 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_123^(int32_t)L_128)))));
		uint32_t L_130 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		uint32_t L_131 = V_0;
		V_0 = ((int32_t)((int32_t)L_130^(int32_t)((int32_t)((uint32_t)L_131>>8))));
	}

IL_016b:
	{
		// while (--length >= 0)
		int32_t L_132 = ___length2;
		int32_t L_133 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1));
		___length2 = L_133;
		if ((((int32_t)L_133) >= ((int32_t)0)))
		{
			goto IL_0155;
		}
	}
	{
		// return crcLocal ^ uint.MaxValue;
		uint32_t L_134 = V_0;
		return ((int32_t)((int32_t)L_134^(int32_t)(-1)));
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
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, uint64_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		uint64_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		uint64_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_5>>8))))));
		// buffer[offset + 2] = (byte)(data >> 16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		uint64_t L_8 = ___data2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_8>>((int32_t)16)))))));
		// buffer[offset + 3] = (byte)(data >> 24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		uint64_t L_11 = ___data2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_11>>((int32_t)24)))))));
		// buffer[offset + 4] = (byte)(data >> 32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___buffer0;
		int32_t L_13 = ___offset1;
		uint64_t L_14 = ___data2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)4))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)32)))))));
		// buffer[offset + 5] = (byte)(data >> 40);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___buffer0;
		int32_t L_16 = ___offset1;
		uint64_t L_17 = ___data2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)5))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_17>>((int32_t)40)))))));
		// buffer[offset + 6] = (byte)(data >> 48);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___buffer0;
		int32_t L_19 = ___offset1;
		uint64_t L_20 = ___data2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)6))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_20>>((int32_t)48)))))));
		// buffer[offset + 7] = (byte)(data >> 56);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = ___buffer0;
		int32_t L_22 = ___offset1;
		uint64_t L_23 = ___data2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)7))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_23>>((int32_t)56)))))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		// buffer[offset + 2] = (byte)(data >> 16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___data2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_8>>(int32_t)((int32_t)16)))))));
		// buffer[offset + 3] = (byte)(data >> 24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___data2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)24)))))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::WriteLittleEndian(System.Byte[],System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int16_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int16_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int16_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m3EA4F6C713D98E8D7E27201DAFE082408FC3851F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, double ___value2, const RuntimeMethod* method)
{
	ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ConverterHelperDouble ch = new ConverterHelperDouble { Adouble = value };
		il2cpp_codegen_initobj((&V_1), sizeof(ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D ));
		double L_0 = ___value2;
		(&V_1)->set_Adouble_1(L_0);
		ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  L_1 = V_1;
		V_0 = L_1;
		// WriteLittleEndian(bytes, startIndex, ch.Along);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		int32_t L_3 = ___startIndex1;
		ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  L_4 = V_0;
		uint64_t L_5 = L_4.get_Along_0();
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_2, L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mEA7D975896611B7B59A6085067D1FA3AC4B08FF9 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, float ___value2, const RuntimeMethod* method)
{
	ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ConverterHelperFloat ch = new ConverterHelperFloat { Afloat = value };
		il2cpp_codegen_initobj((&V_1), sizeof(ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB ));
		float L_0 = ___value2;
		(&V_1)->set_Afloat_1(L_0);
		ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  L_1 = V_1;
		V_0 = L_1;
		// WriteLittleEndian(bytes, startIndex, ch.Aint);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		int32_t L_3 = ___startIndex1;
		ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  L_4 = V_0;
		int32_t L_5 = L_4.get_Aint_0();
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_2, L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mDD16F270163CE144F47EBE4FABE8146141257E5F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int16_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int16_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (short)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint16_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline(L_0, L_1, (((int16_t)((int16_t)L_2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int32_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m45072F0240AE2CAF78622185C7951A7A88136435 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (int)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint32_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m90BA22BC0DA39EA23D73B9FD8B44EAD0D229B6A6 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int64_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (ulong)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int64_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m320B345B14CEB8FAAE5249B294DE65C4D60321A6 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint64_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void LiteNetLib.Utils.InvalidTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTypeException__ctor_m759B2794790ED971FE58013430A992A839709BBA (InvalidTypeException_t94F1305AECD146882889720BAE82EB6FDC64C541 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public InvalidTypeException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(__this, L_0, /*hidden argument*/NULL);
		// public InvalidTypeException(string message) : base(message) { }
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
// System.Byte[] LiteNetLib.Utils.NetDataReader::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataReader_get_RawData_m0CD90D6134F8649E9B25E27558B320E2480363AD (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] RawData => _data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		return L_0;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::get_RawDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_RawDataSize_mFE2449E17A4F6C5CC7D6B2DB2D269E8FFD11952D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public int RawDataSize => _dataSize;
		int32_t L_0 = __this->get__dataSize_2();
		return L_0;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::get_UserDataOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_UserDataOffset_m31150EA8225C1BF130B85D90A9621DCD464FA627 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public int UserDataOffset => _offset;
		int32_t L_0 = __this->get__offset_3();
		return L_0;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::get_UserDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_UserDataSize_m7EFB01960456A9D68139815F3E5DB994FAAEFDE2 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public int UserDataSize => _dataSize - _offset;
		int32_t L_0 = __this->get__dataSize_2();
		int32_t L_1 = __this->get__offset_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_get_IsNull_m527C560A45E3A874D89EA4DA4EEE74C7EA462B93 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsNull => _data == null;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		return (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_Position_m0DCD9676F888CF4F508EA59CD98E46B6153A6F53 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public int Position => _position;
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::get_EndOfData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_get_EndOfData_m7B18DF773E5A0CD064F3A9D6D1D33E5BD300FD04 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public bool EndOfData => _position == _dataSize;
		int32_t L_0 = __this->get__position_1();
		int32_t L_1 = __this->get__dataSize_2();
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public int AvailableBytes => _dataSize - _position;
		int32_t L_0 = __this->get__dataSize_2();
		int32_t L_1 = __this->get__position_1();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::SkipBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SkipBytes_mF36B4FE2A901C50FB4C050F57CEBD40A49DBDD27 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		// _position += count;
		int32_t L_0 = __this->get__position_1();
		int32_t L_1 = ___count0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_m4CEF8C30EB2FE1912851519B75DA4D5CDB050131 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * ___dataWriter0, const RuntimeMethod* method)
{
	{
		// _data = dataWriter.Data;
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_0 = ___dataWriter0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = NetDataWriter_get_Data_m1B1AEDC5A64866EF1B3A982E9FF456FA6D8CF474_inline(L_0, /*hidden argument*/NULL);
		__this->set__data_0(L_1);
		// _position = 0;
		__this->set__position_1(0);
		// _offset = 0;
		__this->set__offset_3(0);
		// _dataSize = dataWriter.Length;
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_2 = ___dataWriter0;
		NullCheck(L_2);
		int32_t L_3 = NetDataWriter_get_Length_m34BF31EBBB9C13B12DEA9A734E9DCF347FDD10AE_inline(L_2, /*hidden argument*/NULL);
		__this->set__dataSize_2(L_3);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mC3DACA2CF42CABAA47954706FCCD00E8CBFCDB2D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, const RuntimeMethod* method)
{
	{
		// _data = source;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		__this->set__data_0(L_0);
		// _position = 0;
		__this->set__position_1(0);
		// _offset = 0;
		__this->set__offset_3(0);
		// _dataSize = source.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___source0;
		NullCheck(L_1);
		__this->set__dataSize_2((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mBEAD3878DCED353B797412F0761BB338CFA463E4 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___maxSize2, const RuntimeMethod* method)
{
	{
		// _data = source;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		__this->set__data_0(L_0);
		// _position = offset;
		int32_t L_1 = ___offset1;
		__this->set__position_1(L_1);
		// _offset = offset;
		int32_t L_2 = ___offset1;
		__this->set__offset_3(L_2);
		// _dataSize = maxSize;
		int32_t L_3 = ___maxSize2;
		__this->set__dataSize_2(L_3);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_m54F9930C6F8389B50F6678406C15DB4C0ABB0970 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// public NetDataReader()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::.ctor(LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_m1D8789A7C2643ED217251709B89606D655E8C954 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * ___writer0, const RuntimeMethod* method)
{
	{
		// public NetDataReader(NetDataWriter writer)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// SetSource(writer);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_0 = ___writer0;
		NetDataReader_SetSource_m4CEF8C30EB2FE1912851519B75DA4D5CDB050131(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_m1A8C8EBB1CE358A6A7E90D50DC3BA473B657A3D9 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, const RuntimeMethod* method)
{
	{
		// public NetDataReader(byte[] source)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// SetSource(source);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		NetDataReader_SetSource_mC3DACA2CF42CABAA47954706FCCD00E8CBFCDB2D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_mB7F123484D88607528E66FADF3CDCE5FAF505847 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___maxSize2, const RuntimeMethod* method)
{
	{
		// public NetDataReader(byte[] source, int offset, int maxSize)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// SetSource(source, offset, maxSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___maxSize2;
		NetDataReader_SetSource_mBEAD3878DCED353B797412F0761BB338CFA463E4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Net.IPEndPoint LiteNetLib.Utils.NetDataReader::GetNetEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * NetDataReader_GetNetEndPoint_m74235D0CC160ECBC7403AE04762CDA1E92FD03DF (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetNetEndPoint_m74235D0CC160ECBC7403AE04762CDA1E92FD03DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// string host = GetString(1000);
		String_t* L_0 = NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9(__this, ((int32_t)1000), /*hidden argument*/NULL);
		// int port = GetInt();
		int32_t L_1 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// return NetUtils.MakeEndPoint(host, port);
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtils_t36B671318D0D73B557E85DDE77056ED76C3F5D80_il2cpp_TypeInfo_var);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = NetUtils_MakeEndPoint_m5553AD0C49A843109AB322499DB7B50D864CDFFB(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte LiteNetLib.Utils.NetDataReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_GetByte_m8B7927D913A91A271FFF07D2846F33C0856C2B43 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// byte res = _data[_position];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position += 1;
		int32_t L_4 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// return res;
		return L_3;
	}
}
// System.SByte LiteNetLib.Utils.NetDataReader::GetSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_GetSByte_m8D41254ED9D1F34BFA548505E34286EDE822EE53 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// var b = (sbyte)_data[_position];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position++;
		int32_t L_4 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// return b;
		return (((int8_t)((int8_t)L_3)));
	}
}
// System.Boolean[] LiteNetLib.Utils.NetDataReader::GetBoolArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* NetDataReader_GetBoolArray_m2190AA2E6B82E8C2546EF900D2A415AE3E0225C1 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetBoolArray_m2190AA2E6B82E8C2546EF900D2A415AE3E0225C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new bool[size];
		uint16_t L_4 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_5 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		// _position += size;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		// return arr;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_12 = V_1;
		return L_12;
	}
}
// System.UInt16[] LiteNetLib.Utils.NetDataReader::GetUShortArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* NetDataReader_GetUShortArray_mD11AA46D18676B0C8F0A1A8A91F3FA947C9B0FD3 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetUShortArray_mD11AA46D18676B0C8F0A1A8A91F3FA947C9B0FD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new ushort[size];
		uint16_t L_4 = V_0;
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_5 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)SZArrayNew(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)), /*hidden argument*/NULL);
		// _position += size * 2;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)))));
		// return arr;
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_12 = V_1;
		return L_12;
	}
}
// System.Int16[] LiteNetLib.Utils.NetDataReader::GetShortArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* NetDataReader_GetShortArray_m2F41D76BEE7B3E43A476A1BC8D100C4842021BCA (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetShortArray_m2F41D76BEE7B3E43A476A1BC8D100C4842021BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new short[size];
		uint16_t L_4 = V_0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_5 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)), /*hidden argument*/NULL);
		// _position += size * 2;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)))));
		// return arr;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_12 = V_1;
		return L_12;
	}
}
// System.Int64[] LiteNetLib.Utils.NetDataReader::GetLongArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* NetDataReader_GetLongArray_m70B9C11F03482CCE91F20C3DF6AC45B4414BFCD7 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetLongArray_m70B9C11F03482CCE91F20C3DF6AC45B4414BFCD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new long[size];
		uint16_t L_4 = V_0;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_5 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)8)), /*hidden argument*/NULL);
		// _position += size * 8;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)8)))));
		// return arr;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_12 = V_1;
		return L_12;
	}
}
// System.UInt64[] LiteNetLib.Utils.NetDataReader::GetULongArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* NetDataReader_GetULongArray_m6BA6EEE56AABA080B780B85FBCA84C65F07BE927 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetULongArray_m6BA6EEE56AABA080B780B85FBCA84C65F07BE927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new ulong[size];
		uint16_t L_4 = V_0;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_5 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)SZArrayNew(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)8)), /*hidden argument*/NULL);
		// _position += size * 8;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)8)))));
		// return arr;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] LiteNetLib.Utils.NetDataReader::GetIntArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* NetDataReader_GetIntArray_mB17B616B814639FEF24A280B28325EBDCCC4FCA0 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetIntArray_mB17B616B814639FEF24A280B28325EBDCCC4FCA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new int[size];
		uint16_t L_4 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), /*hidden argument*/NULL);
		// _position += size * 4;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)))));
		// return arr;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = V_1;
		return L_12;
	}
}
// System.UInt32[] LiteNetLib.Utils.NetDataReader::GetUIntArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* NetDataReader_GetUIntArray_mC464C73ABB21FFF8B536B07DB89C4F8E16E3C1E7 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetUIntArray_mC464C73ABB21FFF8B536B07DB89C4F8E16E3C1E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new uint[size];
		uint16_t L_4 = V_0;
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_5 = (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)SZArrayNew(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), /*hidden argument*/NULL);
		// _position += size * 4;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)))));
		// return arr;
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_12 = V_1;
		return L_12;
	}
}
// System.Single[] LiteNetLib.Utils.NetDataReader::GetFloatArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* NetDataReader_GetFloatArray_mD9EEC636864F7DEF6B78957B13D9CCFC68F35CFB (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetFloatArray_mD9EEC636864F7DEF6B78957B13D9CCFC68F35CFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new float[size];
		uint16_t L_4 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), /*hidden argument*/NULL);
		// _position += size * 4;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)))));
		// return arr;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = V_1;
		return L_12;
	}
}
// System.Double[] LiteNetLib.Utils.NetDataReader::GetDoubleArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* NetDataReader_GetDoubleArray_m2D5CECE4CF3A9CE51ADEED4FE7DD4ECB1D68BF50 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetDoubleArray_m2D5CECE4CF3A9CE51ADEED4FE7DD4ECB1D68BF50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new double[size];
		uint16_t L_4 = V_0;
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_5 = (DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)SZArrayNew(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)8)), /*hidden argument*/NULL);
		// _position += size * 8;
		int32_t L_10 = __this->get__position_1();
		uint16_t L_11 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)8)))));
		// return arr;
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_12 = V_1;
		return L_12;
	}
}
// System.String[] LiteNetLib.Utils.NetDataReader::GetStringArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* NetDataReader_GetStringArray_m36F9AE87487BF43FA49A8A266F44B92A5639B835 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetStringArray_m36F9AE87487BF43FA49A8A266F44B92A5639B835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new string[size];
		uint16_t L_4 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < size; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_002b:
	{
		// arr[i] = GetString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_8);
		// for (int i = 0; i < size; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_2;
		uint16_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		// return arr;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_1;
		return L_12;
	}
}
// System.String[] LiteNetLib.Utils.NetDataReader::GetStringArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* NetDataReader_GetStringArray_m7E794F3072EEE9D14327E501DB5E8A2D08B6762B (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetStringArray_m7E794F3072EEE9D14327E501DB5E8A2D08B6762B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// var arr = new string[size];
		uint16_t L_4 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < size; i++)
		V_2 = 0;
		goto IL_0039;
	}

IL_002b:
	{
		// arr[i] = GetString(maxStringLength);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = ___maxStringLength0;
		String_t* L_9 = NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9(__this, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_9);
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_11 = V_2;
		uint16_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		// return arr;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_1;
		return L_13;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::GetBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_GetBool_m46F6382C0651F104AF6ECB8E7446C0FC3B4C2A63 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// bool res = _data[_position] > 0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position += 1;
		int32_t L_4 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// return res;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Char LiteNetLib.Utils.NetDataReader::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_GetChar_mF1993D91F516B6CB3D12655CB54D12EDC45B06E3 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetChar_mF1993D91F516B6CB3D12655CB54D12EDC45B06E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// char result = BitConverter.ToChar(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = BitConverter_ToChar_m7FFF8EE9B303B8010A5045C5CC0F8F529EB917E4(L_0, L_1, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// return result;
		return L_2;
	}
}
// System.UInt16 LiteNetLib.Utils.NetDataReader::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_GetUShort_m8E0687497DD76F7A50C2DFE9766EA3F1B1D163DC (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetUShort_m8E0687497DD76F7A50C2DFE9766EA3F1B1D163DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ushort result = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// return result;
		return L_2;
	}
}
// System.Int16 LiteNetLib.Utils.NetDataReader::GetShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_GetShort_mE5E2A410AAD58E5D0519BADF0BE814CB21ACCC75 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetShort_mE5E2A410AAD58E5D0519BADF0BE814CB21ACCC75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// short result = BitConverter.ToInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int16_t L_2 = BitConverter_ToInt16_mBFC7B476188DF611E2B21C89693258F6A4969CEA(L_0, L_1, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// return result;
		return L_2;
	}
}
// System.Int64 LiteNetLib.Utils.NetDataReader::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_GetLong_m408EB388D2964939337D7BF36B44D71225F5CBF8 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetLong_m408EB388D2964939337D7BF36B44D71225F5CBF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// long result = BitConverter.ToInt64(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int64_t L_2 = BitConverter_ToInt64_m28987106F93DB8C163FD4E740B4FEA405CC8A7FA(L_0, L_1, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// return result;
		return L_2;
	}
}
// System.UInt64 LiteNetLib.Utils.NetDataReader::GetULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ulong result = BitConverter.ToUInt64(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint64_t L_2 = BitConverter_ToUInt64_m2AB7FBC373C5A2DEB276DDF00289A69C80A84451(L_0, L_1, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// return result;
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int result = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_0, L_1, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// return result;
		return L_2;
	}
}
// System.UInt32 LiteNetLib.Utils.NetDataReader::GetUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_GetUInt_m3451DF0B023E55483695F131CA6D119F28053546 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetUInt_m3451DF0B023E55483695F131CA6D119F28053546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uint result = BitConverter.ToUInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint32_t L_2 = BitConverter_ToUInt32_mD6A3C2F4BA020691B99FABF863F6FFF6A456FF59(L_0, L_1, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// return result;
		return L_2;
	}
}
// System.Single LiteNetLib.Utils.NetDataReader::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_GetFloat_mCECF57F5803D4C9C4C890D955CB50E17E9EE4343 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetFloat_mCECF57F5803D4C9C4C890D955CB50E17E9EE4343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float result = BitConverter.ToSingle(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_2 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_0, L_1, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// return result;
		return L_2;
	}
}
// System.Double LiteNetLib.Utils.NetDataReader::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_GetDouble_m4BF8D1CC8F345BFB746812040495C76DBFAF3911 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetDouble_m4BF8D1CC8F345BFB746812040495C76DBFAF3911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = BitConverter.ToDouble(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		double L_2 = BitConverter_ToDouble_m5C36647E95F4F3FF047B452C9A21A58E466CA295(L_0, L_1, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_3 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// return result;
		return L_2;
	}
}
// System.String LiteNetLib.Utils.NetDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t ___maxLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetString_mE783665A75A542033F0B935B22451C73F78E72F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = GetInt();
		int32_t L_0 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (bytesCount <= 0 || bytesCount > maxLength*2)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___maxLength0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))))
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0017:
	{
		// int charCount = Encoding.UTF8.GetCharCount(_data, _position, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		// if (charCount > maxLength)
		int32_t L_10 = ___maxLength0;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0037;
		}
	}
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_11;
	}

IL_0037:
	{
		// string result = Encoding.UTF8.GetString(_data, _position, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_12 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get__data_0();
		int32_t L_14 = __this->get__position_1();
		int32_t L_15 = V_0;
		NullCheck(L_12);
		String_t* L_16 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, L_14, L_15);
		// _position += bytesCount;
		int32_t L_17 = __this->get__position_1();
		int32_t L_18 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		// return result;
		return L_16;
	}
}
// System.String LiteNetLib.Utils.NetDataReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = GetInt();
		int32_t L_0 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (bytesCount <= 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0011:
	{
		// string result = Encoding.UTF8.GetString(_data, _position, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get__data_0();
		int32_t L_5 = __this->get__position_1();
		int32_t L_6 = V_0;
		NullCheck(L_3);
		String_t* L_7 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		// _position += bytesCount;
		int32_t L_8 = __this->get__position_1();
		int32_t L_9 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		// return result;
		return L_7;
	}
}
// System.ArraySegment`1<System.Byte> LiteNetLib.Utils.NetDataReader::GetRemainingBytesSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  NetDataReader_GetRemainingBytesSegment_mE38CEB599B2D6221D0570515FFD419B06DCAD2F1 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetRemainingBytesSegment_mE38CEB599B2D6221D0570515FFD419B06DCAD2F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArraySegment<byte> segment = new ArraySegment<byte>(_data, _position, AvailableBytes);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A((&L_3), L_0, L_1, L_2, /*hidden argument*/ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_RuntimeMethod_var);
		// _position = _data.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get__data_0();
		NullCheck(L_4);
		__this->set__position_1((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// return segment;
		return L_3;
	}
}
// System.Byte[] LiteNetLib.Utils.NetDataReader::GetRemainingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataReader_GetRemainingBytes_mDCBD66EFD9149FFD05B296BFFF9EBC48CA6FC460 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetRemainingBytes_mDCBD66EFD9149FFD05B296BFFF9EBC48CA6FC460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] outgoingData = new byte[AvailableBytes];
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, AvailableBytes);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		int32_t L_5 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_2, L_3, (RuntimeArray *)(RuntimeArray *)L_4, 0, L_5, /*hidden argument*/NULL);
		// _position = _data.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		NullCheck(L_6);
		__this->set__position_1((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		// return outgoingData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		return L_7;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::GetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_GetBytes_m708FE7ACCC6C34494384FBAB94256658EE620879 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		// Buffer.BlockCopy(_data, _position, destination, start, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___destination0;
		int32_t L_3 = ___start1;
		int32_t L_4 = ___count2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += count;
		int32_t L_5 = __this->get__position_1();
		int32_t L_6 = ___count2;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::GetBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_GetBytes_m1ED59D5D01F7E6ACBD3A14AA935C5F5F5704F958 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		// Buffer.BlockCopy(_data, _position, destination, 0, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___destination0;
		int32_t L_3 = ___count1;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, 0, L_3, /*hidden argument*/NULL);
		// _position += count;
		int32_t L_4 = __this->get__position_1();
		int32_t L_5 = ___count1;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.SByte[] LiteNetLib.Utils.NetDataReader::GetSBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* NetDataReader_GetSBytesWithLength_mC98188F8F0CD0907593F3D7CBE4B770A02C08DDE (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetSBytesWithLength_mC98188F8F0CD0907593F3D7CBE4B770A02C08DDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* V_1 = NULL;
	{
		// int length = GetInt();
		int32_t L_0 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// sbyte[] outgoingData = new sbyte[length];
		int32_t L_1 = V_0;
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_2 = (SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)SZArrayNew(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		// _position += length;
		int32_t L_7 = __this->get__position_1();
		int32_t L_8 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// return outgoingData;
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] LiteNetLib.Utils.NetDataReader::GetBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataReader_GetBytesWithLength_mCB6FD7B070973A6B0CF37057D558C35A65113C5D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_GetBytesWithLength_mCB6FD7B070973A6B0CF37057D558C35A65113C5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// int length = GetInt();
		int32_t L_0 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// byte[] outgoingData = new byte[length];
		int32_t L_1 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		// _position += length;
		int32_t L_7 = __this->get__position_1();
		int32_t L_8 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// return outgoingData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		return L_9;
	}
}
// System.Byte LiteNetLib.Utils.NetDataReader::PeekByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_PeekByte_m98346775CC25DD614F550481B021F0DF103210BC (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// return _data[_position];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.SByte LiteNetLib.Utils.NetDataReader::PeekSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_PeekSByte_mC08165CBB7E5763D50ADB650FB5CC301299F583E (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// return (sbyte)_data[_position];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (((int8_t)((int8_t)L_3)));
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::PeekBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_PeekBool_m880F056273C6C2FD34FB135E89B9A600FDFCFA14 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// return _data[_position] > 0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Char LiteNetLib.Utils.NetDataReader::PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_PeekChar_mCEB67283D01C951642D32455EA5936155BD3A675 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekChar_mCEB67283D01C951642D32455EA5936155BD3A675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToChar(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = BitConverter_ToChar_m7FFF8EE9B303B8010A5045C5CC0F8F529EB917E4(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt16 LiteNetLib.Utils.NetDataReader::PeekUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_PeekUShort_mDFAF35F2DFF9BDF212CD2D473BF0265928FFD826 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekUShort_mDFAF35F2DFF9BDF212CD2D473BF0265928FFD826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint16_t L_2 = BitConverter_ToUInt16_m8D6CAA71ACA3A50B5481B836E51FC8D26C14ED90(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int16 LiteNetLib.Utils.NetDataReader::PeekShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_PeekShort_mE3475975A2A3304E7BD2680E89F9B54E17654BBB (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekShort_mE3475975A2A3304E7BD2680E89F9B54E17654BBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt16(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int16_t L_2 = BitConverter_ToInt16_mBFC7B476188DF611E2B21C89693258F6A4969CEA(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int64 LiteNetLib.Utils.NetDataReader::PeekLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_PeekLong_m2DA5ADA153AFC09242C0F24DFB7D846F67724EDE (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekLong_m2DA5ADA153AFC09242C0F24DFB7D846F67724EDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt64(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int64_t L_2 = BitConverter_ToInt64_m28987106F93DB8C163FD4E740B4FEA405CC8A7FA(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt64 LiteNetLib.Utils.NetDataReader::PeekULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_PeekULong_mCDFBD34614CD10BA8EA6441A21DF0945BA1F623D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekULong_mCDFBD34614CD10BA8EA6441A21DF0945BA1F623D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt64(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint64_t L_2 = BitConverter_ToUInt64_m2AB7FBC373C5A2DEB276DDF00289A69C80A84451(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataReader::PeekInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 LiteNetLib.Utils.NetDataReader::PeekUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_PeekUInt_m25BB8DCBACA0A3D6EC8F8EAE33C580959FA740CA (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekUInt_m25BB8DCBACA0A3D6EC8F8EAE33C580959FA740CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint32_t L_2 = BitConverter_ToUInt32_mD6A3C2F4BA020691B99FABF863F6FFF6A456FF59(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single LiteNetLib.Utils.NetDataReader::PeekFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_PeekFloat_mCD061FFCB59CC7A2FFDE05F0EE67AF7616A16B97 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekFloat_mCD061FFCB59CC7A2FFDE05F0EE67AF7616A16B97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToSingle(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_2 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Double LiteNetLib.Utils.NetDataReader::PeekDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_PeekDouble_m46712334D1C24AE646813B5D7CA86FDB13C9E09E (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekDouble_m46712334D1C24AE646813B5D7CA86FDB13C9E09E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToDouble(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		double L_2 = BitConverter_ToDouble_m5C36647E95F4F3FF047B452C9A21A58E466CA295(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String LiteNetLib.Utils.NetDataReader::PeekString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_PeekString_mC9EC8B7F31191F501BE7E58477839BCF5438A7BC (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t ___maxLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekString_mC9EC8B7F31191F501BE7E58477839BCF5438A7BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (bytesCount <= 0 || bytesCount > maxLength * 2)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___maxLength0;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		// return string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_6;
	}

IL_0022:
	{
		// int charCount = Encoding.UTF8.GetCharCount(_data, _position + 4, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_7 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get__data_0();
		int32_t L_9 = __this->get__position_1();
		int32_t L_10 = V_0;
		NullCheck(L_7);
		int32_t L_11 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(22 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)), L_10);
		// if (charCount > maxLength)
		int32_t L_12 = ___maxLength0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		// return string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_13;
	}

IL_0044:
	{
		// string result = Encoding.UTF8.GetString(_data, _position + 4, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_14 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = __this->get__data_0();
		int32_t L_16 = __this->get__position_1();
		int32_t L_17 = V_0;
		NullCheck(L_14);
		String_t* L_18 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)4)), L_17);
		// return result;
		return L_18;
	}
}
// System.String LiteNetLib.Utils.NetDataReader::PeekString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_PeekString_mC76475D2CEC86AF0B6D62969C75ECCCAB3433C20 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_PeekString_mC76475D2CEC86AF0B6D62969C75ECCCAB3433C20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		int32_t L_1 = __this->get__position_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (bytesCount <= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_001c:
	{
		// string result = Encoding.UTF8.GetString(_data, _position + 4, bytesCount);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__data_0();
		int32_t L_7 = __this->get__position_1();
		int32_t L_8 = V_0;
		NullCheck(L_5);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)), L_8);
		// return result;
		return L_9;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetByte_m6A123D7C83A027AA1FA9E787E72750E3DFD32519 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, uint8_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetByte();
		uint8_t* L_1 = ___result0;
		uint8_t L_2 = NetDataReader_GetByte_m8B7927D913A91A271FFF07D2846F33C0856C2B43(__this, /*hidden argument*/NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint8_t* L_3 = ___result0;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetSByte(System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetSByte_m6BDCBCDA1362CD65DAA0A45A3E17D442E338B263 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int8_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetSByte();
		int8_t* L_1 = ___result0;
		int8_t L_2 = NetDataReader_GetSByte_m8D41254ED9D1F34BFA548505E34286EDE822EE53(__this, /*hidden argument*/NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int8_t* L_3 = ___result0;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetBool(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetBool_m3DD8945C3E80273CD230143EA8DC9F5781246FBE (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, bool* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetBool();
		bool* L_1 = ___result0;
		bool L_2 = NetDataReader_GetBool_m46F6382C0651F104AF6ECB8E7446C0FC3B4C2A63(__this, /*hidden argument*/NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = false;
		bool* L_3 = ___result0;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetChar(System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetChar_mEE8549D8BDDF85B1B0D3577E1FEFA36C82DA2955 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, Il2CppChar* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetChar();
		Il2CppChar* L_1 = ___result0;
		Il2CppChar L_2 = NetDataReader_GetChar_mF1993D91F516B6CB3D12655CB54D12EDC45B06E3(__this, /*hidden argument*/NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = '\0';
		Il2CppChar* L_3 = ___result0;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetShort(System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetShort_mE6B89741050F3FEC027EB01E81D691313D3BFB32 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int16_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetShort();
		int16_t* L_1 = ___result0;
		int16_t L_2 = NetDataReader_GetShort_mE5E2A410AAD58E5D0519BADF0BE814CB21ACCC75(__this, /*hidden argument*/NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int16_t* L_3 = ___result0;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetUShort(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUShort_m6A42680315DA351B0219C9385959AF34F510639D (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, uint16_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetUShort();
		uint16_t* L_1 = ___result0;
		uint16_t L_2 = NetDataReader_GetUShort_m8E0687497DD76F7A50C2DFE9766EA3F1B1D163DC(__this, /*hidden argument*/NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint16_t* L_3 = ___result0;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetInt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetInt_mE688E580509C7B46F82774F3FE7F5BA8A8667C10 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int32_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetInt();
		int32_t* L_1 = ___result0;
		int32_t L_2 = NetDataReader_GetInt_m4D62B8DC7A89A41E6B94466443EAA0D838F6B1F1(__this, /*hidden argument*/NULL);
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int32_t* L_3 = ___result0;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetUInt(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUInt_m315CC0F10AE8F6748AD089B825914743BD391DFB (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, uint32_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetUInt();
		uint32_t* L_1 = ___result0;
		uint32_t L_2 = NetDataReader_GetUInt_m3451DF0B023E55483695F131CA6D119F28053546(__this, /*hidden argument*/NULL);
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint32_t* L_3 = ___result0;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetLong(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetLong_m41F7D23516285E776053FCB1B5E866D9F0D14619 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, int64_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetLong();
		int64_t* L_1 = ___result0;
		int64_t L_2 = NetDataReader_GetLong_m408EB388D2964939337D7BF36B44D71225F5CBF8(__this, /*hidden argument*/NULL);
		*((int64_t*)L_1) = (int64_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int64_t* L_3 = ___result0;
		*((int64_t*)L_3) = (int64_t)(((int64_t)((int64_t)0)));
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetULong(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetULong_mDC86B23E2E25E2C11D6A5872FC043DBBC8486030 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, uint64_t* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetULong();
		uint64_t* L_1 = ___result0;
		uint64_t L_2 = NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203(__this, /*hidden argument*/NULL);
		*((int64_t*)L_1) = (int64_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint64_t* L_3 = ___result0;
		*((int64_t*)L_3) = (int64_t)(((int64_t)((int64_t)0)));
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetFloat_m36463283E9E7333575E44E46BA3F0096BA3707F3 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, float* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetFloat();
		float* L_1 = ___result0;
		float L_2 = NetDataReader_GetFloat_mCECF57F5803D4C9C4C890D955CB50E17E9EE4343(__this, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		float* L_3 = ___result0;
		*((float*)L_3) = (float)(0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetDouble(System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetDouble_mF4280BECCB5F2EF948EACCFE70ABC3273B7ECFF8 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, double* ___result0, const RuntimeMethod* method)
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetDouble();
		double* L_1 = ___result0;
		double L_2 = NetDataReader_GetDouble_m4BF8D1CC8F345BFB746812040495C76DBFAF3911(__this, /*hidden argument*/NULL);
		*((double*)L_1) = (double)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		double* L_3 = ___result0;
		*((double*)L_3) = (double)(0.0);
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetString_m7CF205183AE624BA88F0BA573A8ABE8AC29EEAB9 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, String_t** ___result0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (AvailableBytes >= 4)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0025;
		}
	}
	{
		// var bytesCount = PeekInt();
		int32_t L_1 = NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (AvailableBytes >= bytesCount + 4)
		int32_t L_2 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)))))
		{
			goto IL_0025;
		}
	}
	{
		// result = GetString();
		String_t** L_4 = ___result0;
		String_t* L_5 = NetDataReader_GetString_m1C2C47CEAD122ABBC64E5C6E7394EFFF7F5B3645(__this, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_5);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// result = null;
		String_t** L_6 = ___result0;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetStringArray(System.String[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetStringArray_mEE10193473E7098A2C766390DC54976EF00D1D1E (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataReader_TryGetStringArray_mEE10193473E7098A2C766390DC54976EF00D1D1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!TryGetUShort(out size))
		bool L_0 = NetDataReader_TryGetUShort_m6A42680315DA351B0219C9385959AF34F510639D(__this, (uint16_t*)(&V_0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// result = null;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** L_1 = ___result0;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// result = new string[size];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** L_2 = ___result0;
		uint16_t L_3 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_3);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_4);
		// for (int i = 0; i < size; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		// if (!TryGetString(out result[i]))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** L_5 = ___result0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = *((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		bool L_8 = NetDataReader_TryGetString_m7CF205183AE624BA88F0BA573A8ABE8AC29EEAB9(__this, (String_t**)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		// result = null;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** L_9 = ___result0;
		*((RuntimeObject **)L_9) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}

IL_0030:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_11 = V_1;
		uint16_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LiteNetLib.Utils.NetDataReader::TryGetBytesWithLength(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetBytesWithLength_m949CA7B99E9EC0297B4B51743009E42D491BB724 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___result0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (AvailableBytes >= 4)
		int32_t L_0 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0029;
		}
	}
	{
		// var length = PeekInt();
		int32_t L_1 = NetDataReader_PeekInt_m045334E3F772FBD91BBE73F50A6F5854CD382AC7(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (length >= 0 && AvailableBytes >= length + 4)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)))))
		{
			goto IL_0029;
		}
	}
	{
		// result = GetBytesWithLength();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_5 = ___result0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = NetDataReader_GetBytesWithLength_mCB6FD7B070973A6B0CF37057D558C35A65113C5D(__this, /*hidden argument*/NULL);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// result = null;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_7 = ___result0;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void LiteNetLib.Utils.NetDataReader::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_Clear_m146648802056B9C3FC5EF3B0954CA34DE4228352 (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * __this, const RuntimeMethod* method)
{
	{
		// _position = 0;
		__this->set__position_1(0);
		// _dataSize = 0;
		__this->set__dataSize_2(0);
		// _data = null;
		__this->set__data_0((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
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
// System.Int32 LiteNetLib.Utils.NetDataWriter::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Capacity_mAAC80ECD20DA1C9D6948877D4FAA9060485BAF1D (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public int Capacity => _data.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		NullCheck(L_0);
		return (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
	}
}
// System.Byte[] LiteNetLib.Utils.NetDataWriter::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataWriter_get_Data_m1B1AEDC5A64866EF1B3A982E9FF456FA6D8CF474 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Data => _data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		return L_0;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataWriter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m34BF31EBBB9C13B12DEA9A734E9DCF347FDD10AE (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public int Length => _position;
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m6F14C5C6BAEFCB7B822816FA3813160D1C35B783 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public NetDataWriter() : this(true, InitialSize)
		NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804(__this, (bool)1, ((int32_t)64), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_mEA4AA17DA81259DAA07AA28489D12A497E5393BE (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, bool ___autoResize0, const RuntimeMethod* method)
{
	{
		// public NetDataWriter(bool autoResize) : this(autoResize, InitialSize)
		bool L_0 = ___autoResize0;
		NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804(__this, L_0, ((int32_t)64), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, bool ___autoResize0, int32_t ___initialSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetDataWriter(bool autoResize, int initialSize)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _data = new byte[initialSize];
		int32_t L_0 = ___initialSize1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set__data_0(L_1);
		// _autoResize = autoResize;
		bool L_2 = ___autoResize0;
		__this->set__autoResize_3(L_2);
		// }
		return;
	}
}
// LiteNetLib.Utils.NetDataWriter LiteNetLib.Utils.NetDataWriter::FromBytes(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * NetDataWriter_FromBytes_m4381D926A375D8E92816BFB0CE052A0319E2C5F2 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, bool ___copy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter_FromBytes_m4381D926A375D8E92816BFB0CE052A0319E2C5F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (copy)
		bool L_0 = ___copy1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// var netDataWriter = new NetDataWriter(true, bytes.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		NullCheck(L_1);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_2 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804(L_2, (bool)1, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/NULL);
		// netDataWriter.Put(bytes);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_3 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___bytes0;
		NullCheck(L_3);
		NetDataWriter_Put_mE82CECF702B45EFDD96B37E796FBB067B49B1994(L_3, L_4, /*hidden argument*/NULL);
		// return netDataWriter;
		return L_3;
	}

IL_0014:
	{
		// return new NetDataWriter(true, 0) {_data = bytes, _position = bytes.Length};
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_5 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804(L_5, (bool)1, 0, /*hidden argument*/NULL);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_6 = L_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___bytes0;
		NullCheck(L_6);
		L_6->set__data_0(L_7);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_8 = L_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___bytes0;
		NullCheck(L_9);
		NullCheck(L_8);
		L_8->set__position_1((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))));
		return L_8;
	}
}
// LiteNetLib.Utils.NetDataWriter LiteNetLib.Utils.NetDataWriter::FromBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * NetDataWriter_FromBytes_mD459F7ABFEE54AD3B891B48D9EDFFFC5B3CA6E13 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter_FromBytes_mD459F7ABFEE54AD3B891B48D9EDFFFC5B3CA6E13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var netDataWriter = new NetDataWriter(true, bytes.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_1 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m514F1482D8BE0C524608E66DC7A3E191B0CE5804(L_1, (bool)1, (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), /*hidden argument*/NULL);
		// netDataWriter.Put(bytes, offset, length);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_2 = L_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___bytes0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___length2;
		NullCheck(L_2);
		NetDataWriter_Put_m26A3D6AC270F0982DDD61222BD2FAEC7CB4DE567(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// return netDataWriter;
		return L_2;
	}
}
// LiteNetLib.Utils.NetDataWriter LiteNetLib.Utils.NetDataWriter::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * NetDataWriter_FromString_m7F5B6DE97909745C0B5830CECF17A59D7A68DEAA (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter_FromString_m7F5B6DE97909745C0B5830CECF17A59D7A68DEAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var netDataWriter = new NetDataWriter();
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_0 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m6F14C5C6BAEFCB7B822816FA3813160D1C35B783(L_0, /*hidden argument*/NULL);
		// netDataWriter.Put(value);
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_1 = L_0;
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		NetDataWriter_Put_m0E790183AA007CB13EECC8ADDEFAEAC6E3B71B0C(L_1, L_2, /*hidden argument*/NULL);
		// return netDataWriter;
		return L_1;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::ResizeIfNeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	{
		// if (_data.Length < newSize)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		NullCheck(L_0);
		int32_t L_1 = ___newSize0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// Resize(newSize);
		int32_t L_2 = ___newSize0;
		NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79(__this, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = _data.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		goto IL_000f;
	}

IL_000b:
	{
		// len *= 2;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
	}

IL_000f:
	{
		// while (len < newSize)
		int32_t L_2 = V_0;
		int32_t L_3 = ___newSize0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000b;
		}
	}
	{
		// Array.Resize(ref _data, len);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_4 = __this->get_address_of__data_0();
		int32_t L_5 = V_0;
		Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_4, L_5, /*hidden argument*/Array_Resize_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m60FA5E7A871DBCB88A9F3F73237C86ABDFBB1D48_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Reset_m0AD81DAB65CAD94EB0DAB617E311134DA56D0B15 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// ResizeIfNeed(size);
		int32_t L_0 = ___size0;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, L_0, /*hidden argument*/NULL);
		// _position = 0;
		__this->set__position_1(0);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Reset_m6BB847F22F45F790CDA567589C2ED748A3C0D025 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// _position = 0;
		__this->set__position_1(0);
		// }
		return;
	}
}
// System.Byte[] LiteNetLib.Utils.NetDataWriter::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataWriter_CopyData_m3611578C85FD7D31E42C904FEB4F4ECB7E2E672A (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetDataWriter_CopyData_m3611578C85FD7D31E42C904FEB4F4ECB7E2E672A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] resultData = new byte[_position];
		int32_t L_0 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(_data, 0, resultData, 0, _position);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int32_t L_4 = __this->get__position_1();
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		// return resultData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 LiteNetLib.Utils.NetDataWriter::SetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_SetPosition_mFE17F7CCAD47CFBF14330B23D66CA11579D285A8 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		// int prevPosition = _position;
		int32_t L_0 = __this->get__position_1();
		// _position = position;
		int32_t L_1 = ___position0;
		__this->set__position_1(L_1);
		// return prevPosition;
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m3A71054DCC760508C4608CC1A339B5445DAB525B (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		float L_4 = ___value0;
		FastBitConverter_GetBytes_mEA7D975896611B7B59A6085067D1FA3AC4B08FF9_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m72E782026D83656C4020C7654D2D476FC77E9330 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)8)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		double L_4 = ___value0;
		FastBitConverter_GetBytes_m3EA4F6C713D98E8D7E27201DAFE082408FC3851F_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0EF72C1A71E4F6698A52113A7CF9E1587856685D (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)8)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		int64_t L_4 = ___value0;
		FastBitConverter_GetBytes_m90BA22BC0DA39EA23D73B9FD8B44EAD0D229B6A6_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mDBA160175296721D20A8EF71E8368C5816A5725F (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)8)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		uint64_t L_4 = ___value0;
		FastBitConverter_GetBytes_m320B345B14CEB8FAAE5249B294DE65C4D60321A6_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 8;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		int32_t L_4 = ___value0;
		FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE53E39B51A325416AB84C8DA7328B1B966D27C4F (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		uint32_t L_4 = ___value0;
		FastBitConverter_GetBytes_m45072F0240AE2CAF78622185C7951A7A88136435_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 4;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m2C7DFADE717E5D6F30D4F6AF63E63DBB40AF6226 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		Il2CppChar L_4 = ___value0;
		FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mBEE4A56F55B0952380FB48D9859DB00B6BED642E (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		uint16_t L_4 = ___value0;
		FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE6EEDAE5F18A409325538DBD54F7C6F06E551ECC (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		int16_t L_4 = ___value0;
		FastBitConverter_GetBytes_mDD16F270163CE144F47EBE4FABE8146141257E5F_inline(L_2, L_3, L_4, /*hidden argument*/NULL);
		// _position += 2;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mD83240DCA67AAD8593E37592BA3EDE1CA2309140 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// _data[_position] = (byte)value;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		int8_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)L_4))));
		// _position++;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m2258A51BC1461EF2D8DB40C10D9DF6F98C28B34D (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// _data[_position] = value;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		uint8_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// _position++;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m26A3D6AC270F0982DDD61222BD2FAEC7CB4DE567 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + length);
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___length2;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Buffer.BlockCopy(data, offset, _data, _position, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get__data_0();
		int32_t L_6 = __this->get__position_1();
		int32_t L_7 = ___length2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, L_6, L_7, /*hidden argument*/NULL);
		// _position += length;
		int32_t L_8 = __this->get__position_1();
		int32_t L_9 = ___length2;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE82CECF702B45EFDD96B37E796FBB067B49B1994 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length);
		int32_t L_1 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))), /*hidden argument*/NULL);
	}

IL_0018:
	{
		// Buffer.BlockCopy(data, 0, _data, _position, data.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get__data_0();
		int32_t L_5 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___data0;
		NullCheck(L_6);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, L_5, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), /*hidden argument*/NULL);
		// _position += data.Length;
		int32_t L_7 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___data0;
		NullCheck(L_8);
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutSBytesWithLength(System.SByte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutSBytesWithLength_m7B87687E32E401BD9A840FFFD848F6988DD01200 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + length + 4);
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___length2;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0018:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		int32_t L_5 = ___length2;
		FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline(L_3, L_4, L_5, /*hidden argument*/NULL);
		// Buffer.BlockCopy(data, offset, _data, _position + 4, length);
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_6 = ___data0;
		int32_t L_7 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get__data_0();
		int32_t L_9 = __this->get__position_1();
		int32_t L_10 = ___length2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)), L_10, /*hidden argument*/NULL);
		// _position += length + 4;
		int32_t L_11 = __this->get__position_1();
		int32_t L_12 = ___length2;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutSBytesWithLength(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutSBytesWithLength_m3554AACD6E09B02BB99120CB4B3B509CD2CF129C (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___data0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length + 4);
		int32_t L_1 = __this->get__position_1();
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_2 = ___data0;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_001a:
	{
		// FastBitConverter.GetBytes(_data, _position, data.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_5 = ___data0;
		NullCheck(L_5);
		FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline(L_3, L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		// Buffer.BlockCopy(data, 0, _data, _position + 4, data.Length);
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_6 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get__data_0();
		int32_t L_8 = __this->get__position_1();
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_9 = ___data0;
		NullCheck(L_9);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)4)), (((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))), /*hidden argument*/NULL);
		// _position += data.Length + 4;
		int32_t L_10 = __this->get__position_1();
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_11 = ___data0;
		NullCheck(L_11);
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))), (int32_t)4)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutBytesWithLength(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutBytesWithLength_mAEF30063FA043C750C0DCE8C89F1034BFE3129A8 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + length + 4);
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___length2;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0018:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		int32_t L_5 = ___length2;
		FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline(L_3, L_4, L_5, /*hidden argument*/NULL);
		// Buffer.BlockCopy(data, offset, _data, _position + 4, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___data0;
		int32_t L_7 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get__data_0();
		int32_t L_9 = __this->get__position_1();
		int32_t L_10 = ___length2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)), L_10, /*hidden argument*/NULL);
		// _position += length + 4;
		int32_t L_11 = __this->get__position_1();
		int32_t L_12 = ___length2;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutBytesWithLength(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutBytesWithLength_m96ADD42280BC4F6F9C08470A402CF196BC2ABD1C (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length + 4);
		int32_t L_1 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_001a:
	{
		// FastBitConverter.GetBytes(_data, _position, data.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__data_0();
		int32_t L_4 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___data0;
		NullCheck(L_5);
		FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline(L_3, L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		// Buffer.BlockCopy(data, 0, _data, _position + 4, data.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get__data_0();
		int32_t L_8 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___data0;
		NullCheck(L_9);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)4)), (((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))), /*hidden argument*/NULL);
		// _position += data.Length + 4;
		int32_t L_10 = __this->get__position_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___data0;
		NullCheck(L_11);
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))), (int32_t)4)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m7D0380F28DB44BAAC2B8213E5CA64E8773F8E8D1 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B5_2 = NULL;
	{
		// if (_autoResize)
		bool L_0 = __this->get__autoResize_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->get__position_1();
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0016:
	{
		// _data[_position] = (byte)(value ? 1 : 0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get__data_0();
		int32_t L_3 = __this->get__position_1();
		bool L_4 = ___value0;
		G_B3_0 = L_3;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_2;
			goto IL_0028;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0029:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (uint8_t)(((int32_t)((uint8_t)G_B5_0))));
		// _position++;
		int32_t L_5 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, RuntimeArray * ___arr0, int32_t ___sz1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort length = arr == null ? (ushort) 0 : (ushort)arr.Length;
		RuntimeArray * L_0 = ___arr0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeArray * L_1 = ___arr0;
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_1, /*hidden argument*/NULL);
		G_B3_0 = (((int32_t)((uint16_t)L_2)));
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = (uint16_t)G_B3_0;
		// sz *= length;
		int32_t L_3 = ___sz1;
		uint16_t L_4 = V_0;
		___sz1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		// if (_autoResize)
		bool L_5 = __this->get__autoResize_3();
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// ResizeIfNeed(_position + sz + 2);
		int32_t L_6 = __this->get__position_1();
		int32_t L_7 = ___sz1;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)2)), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get__data_0();
		int32_t L_9 = __this->get__position_1();
		uint16_t L_10 = V_0;
		FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6_inline(L_8, L_9, L_10, /*hidden argument*/NULL);
		// if (arr != null)
		RuntimeArray * L_11 = ___arr0;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// Buffer.BlockCopy(arr, 0, _data, _position + 2, sz);
		RuntimeArray * L_12 = ___arr0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get__data_0();
		int32_t L_14 = __this->get__position_1();
		int32_t L_15 = ___sz1;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353(L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2)), L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// _position += sz + 2;
		int32_t L_16 = __this->get__position_1();
		int32_t L_17 = ___sz1;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)2)))));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mA2BD9E834D64B1CF824BF383C9B875D31EAB1B85 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 4);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m8B0B38AE6F90FE284E821D63E9E033FC15D59EBE (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 8);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mEB08B43259E85DD1FF3BC01065E7649C8CC5FA26 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 8);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mDD10FBBD0032DDBF7BE438AD8613100A70C67E00 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 8);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mA80F252D90A1B533030F377943BEAE15EF6F95CA (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mDC20EA68D78B9C09C975A90057B9D25807B6CADF (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 4);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mCE2C929BAFE322656712C920EA27509379E160CA (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 2);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mAC4A6B15546C434F3A73628C83E8F292F71EBD16 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 2);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mAF2F29BF3C1DB50FD3D4F8A68504B5549C9CE1CA (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___value0, const RuntimeMethod* method)
{
	{
		// PutArray(value, 1);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_0 = ___value0;
		NetDataWriter_PutArray_m15C2196232E969BF13EF354EB33C7E6AC676F6A9(__this, (RuntimeArray *)(RuntimeArray *)L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mFB908E128295D70E3DE92CCB1DEB067FEF22F9E5 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort len = value == null ? (ushort)0 : (ushort)value.Length;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___value0;
		NullCheck(L_1);
		G_B3_0 = (((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))));
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 0;
	}

IL_000a:
	{
		V_0 = (uint16_t)G_B3_0;
		// Put(len);
		uint16_t L_2 = V_0;
		NetDataWriter_Put_mBEE4A56F55B0952380FB48D9859DB00B6BED642E(__this, L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_0016:
	{
		// Put(value[i]);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___value0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NetDataWriter_Put_m0E790183AA007CB13EECC8ADDEFAEAC6E3B71B0C(__this, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < len; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_8 = V_1;
		uint16_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::PutArray(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mBFC70A56DE46DFA73EC6F87D908896D2C05A0E85 (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort len = value == null ? (ushort)0 : (ushort)value.Length;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___value0;
		NullCheck(L_1);
		G_B3_0 = (((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))));
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 0;
	}

IL_000a:
	{
		V_0 = (uint16_t)G_B3_0;
		// Put(len);
		uint16_t L_2 = V_0;
		NetDataWriter_Put_mBEE4A56F55B0952380FB48D9859DB00B6BED642E(__this, L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		// Put(value[i], maxLength);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___value0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___maxLength1;
		NetDataWriter_Put_m7A30C14A901B93161B0D08B9EB53BEE25B10B46D(__this, L_6, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < len; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_9 = V_1;
		uint16_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mB58F10909B14283A782B199C92FC4B314F08297B (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endPoint0, const RuntimeMethod* method)
{
	{
		// Put(endPoint.Address.ToString());
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_0 = ___endPoint0;
		NullCheck(L_0);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NetDataWriter_Put_m0E790183AA007CB13EECC8ADDEFAEAC6E3B71B0C(__this, L_2, /*hidden argument*/NULL);
		// Put(endPoint.Port);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = ___endPoint0;
		NullCheck(L_3);
		int32_t L_4 = IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline(L_3, /*hidden argument*/NULL);
		NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0E790183AA007CB13EECC8ADDEFAEAC6E3B71B0C (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___value0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// Put(0);
		NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516(__this, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int bytesCount = Encoding.UTF8.GetByteCount(value);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		V_0 = L_4;
		// if (_autoResize)
		bool L_5 = __this->get__autoResize_3();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// ResizeIfNeed(_position + bytesCount + 4);
		int32_t L_6 = __this->get__position_1();
		int32_t L_7 = V_0;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// Put(bytesCount);
		int32_t L_8 = V_0;
		NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516(__this, L_8, /*hidden argument*/NULL);
		// Encoding.UTF8.GetBytes(value, 0, value.Length, _data, _position);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_9 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_10 = ___value0;
		String_t* L_11 = ___value0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get__data_0();
		int32_t L_14 = __this->get__position_1();
		NullCheck(L_9);
		VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_9, L_10, 0, L_12, L_13, L_14);
		// _position += bytesCount;
		int32_t L_15 = __this->get__position_1();
		int32_t L_16 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)));
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetDataWriter::Put(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m7A30C14A901B93161B0D08B9EB53BEE25B10B46D (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, String_t* ___value0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___value0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// Put(0);
		NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516(__this, 0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int length = value.Length > maxLength ? maxLength : value.Length;
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___maxLength1;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_5, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0022;
	}

IL_0021:
	{
		int32_t L_7 = ___maxLength1;
		G_B5_0 = L_7;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		// int totalBytesCount = Encoding.UTF8.GetMaxByteCount(length); //gets max length irrespective of actual length
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_8 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(32 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_8, L_9);
		V_1 = L_10;
		// if (_autoResize)
		bool L_11 = __this->get__autoResize_3();
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// ResizeIfNeed(_position + totalBytesCount + 4);
		int32_t L_12 = __this->get__position_1();
		int32_t L_13 = V_1;
		NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0047:
	{
		// int countPosition = _position; //save position where length needs to be stored
		int32_t L_14 = __this->get__position_1();
		V_2 = L_14;
		// _position += 4;
		int32_t L_15 = __this->get__position_1();
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)4)));
		// int requiredBytesCount = Encoding.UTF8.GetBytes(value, 0, length, _data, _position); //put string here
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_17 = ___value0;
		int32_t L_18 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = __this->get__data_0();
		int32_t L_20 = __this->get__position_1();
		NullCheck(L_16);
		int32_t L_21 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_16, L_17, 0, L_18, L_19, L_20);
		V_3 = L_21;
		// int positionAfterWrite = _position + requiredBytesCount; //position where string data ends
		int32_t L_22 = __this->get__position_1();
		int32_t L_23 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		// _position = countPosition; //go to position where we need to write int value
		int32_t L_24 = V_2;
		__this->set__position_1(L_24);
		// Put(requiredBytesCount); //put length of substring
		int32_t L_25 = V_3;
		NetDataWriter_Put_mEB6F9182EB6D2AD697B83F8ABCED8A716C674516(__this, L_25, /*hidden argument*/NULL);
		// _position = positionAfterWrite; //reset position to final position
		int32_t L_26 = V_4;
		__this->set__position_1(L_26);
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
// System.Void LiteNetLib.Utils.NetPacketProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor__ctor_m29F6BE0757DD19771D8E3FD2ADEBCEA17EEC85AD (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetPacketProcessor__ctor_m29F6BE0757DD19771D8E3FD2ADEBCEA17EEC85AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<ulong, SubscribeDelegate> _callbacks = new Dictionary<ulong, SubscribeDelegate>();
		Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * L_0 = (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C *)il2cpp_codegen_object_new(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A(L_0, /*hidden argument*/Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A_RuntimeMethod_var);
		__this->set__callbacks_1(L_0);
		// private readonly NetDataWriter _netDataWriter = new NetDataWriter();
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_1 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m6F14C5C6BAEFCB7B822816FA3813160D1C35B783(L_1, /*hidden argument*/NULL);
		__this->set__netDataWriter_2(L_1);
		// public NetPacketProcessor()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _netSerializer = new NetSerializer();
		NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * L_2 = (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 *)il2cpp_codegen_object_new(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8_il2cpp_TypeInfo_var);
		NetSerializer__ctor_mDE055FB5E450E91B9F6CBD71207DB3C7F5762408(L_2, /*hidden argument*/NULL);
		__this->set__netSerializer_0(L_2);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetPacketProcessor::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor__ctor_mC4A0CA0DCFDC7410CFD1F9936C06A2D4AB9704E0 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetPacketProcessor__ctor_mC4A0CA0DCFDC7410CFD1F9936C06A2D4AB9704E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<ulong, SubscribeDelegate> _callbacks = new Dictionary<ulong, SubscribeDelegate>();
		Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * L_0 = (Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C *)il2cpp_codegen_object_new(Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A(L_0, /*hidden argument*/Dictionary_2__ctor_m301FF79F9D3B36E34C9C55CD2842BF2C4F2CCC1A_RuntimeMethod_var);
		__this->set__callbacks_1(L_0);
		// private readonly NetDataWriter _netDataWriter = new NetDataWriter();
		NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * L_1 = (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 *)il2cpp_codegen_object_new(NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035_il2cpp_TypeInfo_var);
		NetDataWriter__ctor_m6F14C5C6BAEFCB7B822816FA3813160D1C35B783(L_1, /*hidden argument*/NULL);
		__this->set__netDataWriter_2(L_1);
		// public NetPacketProcessor(int maxStringLength)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _netSerializer = new NetSerializer(maxStringLength);
		int32_t L_2 = ___maxStringLength0;
		NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * L_3 = (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 *)il2cpp_codegen_object_new(NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8_il2cpp_TypeInfo_var);
		NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022(L_3, L_2, /*hidden argument*/NULL);
		__this->set__netSerializer_0(L_3);
		// }
		return;
	}
}
// LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate LiteNetLib.Utils.NetPacketProcessor::GetCallbackFromData(LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * NetPacketProcessor_GetCallbackFromData_mC59CE0DCEECA1E6238357D689131866503A0EDE3 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetPacketProcessor_GetCallbackFromData_mC59CE0DCEECA1E6238357D689131866503A0EDE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * V_1 = NULL;
	{
		// ulong hash = reader.GetULong();
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_0 = ___reader0;
		NullCheck(L_0);
		uint64_t L_1 = NetDataReader_GetULong_m74D01575A622EB5FF61E67B3DBEF84243207E203(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (!_callbacks.TryGetValue(hash, out var action))
		Dictionary_2_t313A421102292CB3509EF5FF47B3A843F1D8970C * L_2 = __this->get__callbacks_1();
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m0135FC6045C9DB2CC73DABC517FC224FCE60A58E(L_2, L_3, (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0135FC6045C9DB2CC73DABC517FC224FCE60A58E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// throw new ParseException("Undefined packet in NetDataReader");
		ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824 * L_5 = (ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824 *)il2cpp_codegen_object_new(ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824_il2cpp_TypeInfo_var);
		ParseException__ctor_mCD80CC1955B6150C00FBFE276B3E02C26865A033(L_5, _stringLiteralBE72DD80B711E4FDE6E4627D03A885EA50C489DC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NetPacketProcessor_GetCallbackFromData_mC59CE0DCEECA1E6238357D689131866503A0EDE3_RuntimeMethod_var);
	}

IL_0022:
	{
		// return action;
		SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * L_6 = V_1;
		return L_6;
	}
}
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadAllPackets(LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadAllPackets_mDE9079F67DE71EDD6F0B5A11C58F17AE9D686C55 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, const RuntimeMethod* method)
{
	{
		goto IL_0009;
	}

IL_0002:
	{
		// ReadPacket(reader);
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_0 = ___reader0;
		NetPacketProcessor_ReadPacket_m0C242066EFCC8099841C25CEAB49AE2275CFA576(__this, L_0, /*hidden argument*/NULL);
	}

IL_0009:
	{
		// while (reader.AvailableBytes > 0)
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadAllPackets(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadAllPackets_m69E8316ED1D061517CF57D0B6A19C2084E2217E9 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method)
{
	{
		goto IL_000a;
	}

IL_0002:
	{
		// ReadPacket(reader, userData);
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_0 = ___reader0;
		RuntimeObject * L_1 = ___userData1;
		NetPacketProcessor_ReadPacket_m46849718F15D69B620A517963D78FB0BC38BA782(__this, L_0, L_1, /*hidden argument*/NULL);
	}

IL_000a:
	{
		// while (reader.AvailableBytes > 0)
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = NetDataReader_get_AvailableBytes_m458B979C996D7E6DE99E9E413134263336337677(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadPacket(LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m0C242066EFCC8099841C25CEAB49AE2275CFA576 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, const RuntimeMethod* method)
{
	{
		// ReadPacket(reader, null);
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_0 = ___reader0;
		NetPacketProcessor_ReadPacket_m46849718F15D69B620A517963D78FB0BC38BA782(__this, L_0, NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetPacketProcessor::ReadPacket(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m46849718F15D69B620A517963D78FB0BC38BA782 (NetPacketProcessor_t796D1EC874A3FA593AD80799B2F26404C25B8565 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method)
{
	{
		// GetCallbackFromData(reader)(reader, userData);
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_0 = ___reader0;
		SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * L_1 = VirtFuncInvoker1< SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 *, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * >::Invoke(5 /* LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate LiteNetLib.Utils.NetPacketProcessor::GetCallbackFromData(LiteNetLib.Utils.NetDataReader) */, __this, L_0);
		NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * L_2 = ___reader0;
		RuntimeObject * L_3 = ___userData1;
		NullCheck(L_1);
		SubscribeDelegate_Invoke_m21EDD1A4C31F0C02D590238DA1712FEB52D7A228(L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate__ctor_mD0B875BF8064EA66DE4081022EEE67729E714658 (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::Invoke(LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m21EDD1A4C31F0C02D590238DA1712FEB52D7A228 (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___userData1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___reader0, ___userData1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___reader0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___reader0, ___userData1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___reader0, ___userData1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___userData1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___reader0, ___userData1);
					else
						GenericVirtActionInvoker2< NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___reader0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___reader0, ___userData1);
					else
						VirtActionInvoker2< NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___reader0, ___userData1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___reader0) - 1), ___userData1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___reader0, ___userData1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___userData1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::BeginInvoke(LiteNetLib.Utils.NetDataReader,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscribeDelegate_BeginInvoke_mD2DA6590442F1831AF800BFB4B078484CFDBE612 (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * __this, NetDataReader_tB0962BD9BF8B3C36E4C538C424DBD37EA9D69262 * ___reader0, RuntimeObject * ___userData1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___reader0;
	__d_args[1] = ___userData1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_EndInvoke_mA0E19AD0CAC7F56C941281DCD478730FFB182A72 (SubscribeDelegate_t55D13550640D2920EAF7CF6767BEE12E55A2AAD6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LiteNetLib.Utils.NetSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mDE055FB5E450E91B9F6CBD71207DB3C7F5762408 (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * __this, const RuntimeMethod* method)
{
	{
		// public NetSerializer() : this(0)
		NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NetSerializer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022 (NetSerializer_tF6ECF5437891FC59EEC256883A900C4ACDBFF2D8 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetSerializer__ctor_mFF9658BCD698E20957B68D661D969DB825982022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<Type, CustomType> _registeredTypes = new Dictionary<Type, CustomType>();
		Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 * L_0 = (Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4 *)il2cpp_codegen_object_new(Dictionary_2_t046EF2908DF31E9B6F7378D1ABAA60C2FCCCB6E4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m284D9778ADE45C30E58CE3907D7B46FC0A32AC79(L_0, /*hidden argument*/Dictionary_2__ctor_m284D9778ADE45C30E58CE3907D7B46FC0A32AC79_RuntimeMethod_var);
		__this->set__registeredTypes_2(L_0);
		// public NetSerializer(int maxStringLength)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _maxStringLength = maxStringLength;
		int32_t L_1 = ___maxStringLength0;
		__this->set__maxStringLength_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LiteNetLib.Utils.NetSerializer/CustomType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomType__ctor_m145A96FC620219EEAEAED083D14384A5E94ACC1B (CustomType_tBC9EADAE25D4E97792E744C3FA71E44F5514BA17 * __this, const RuntimeMethod* method)
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
// System.Byte[] LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Bytes { get; }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_U3CBytesU3Ek__BackingField_1();
		return L_0;
	}
}
// LiteNetLib.Utils.NtpLeapIndicator LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_m613DA80E804FA95D01C5EA5E26DD8CA128A759E2 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public NtpLeapIndicator LeapIndicator => (NtpLeapIndicator)((Bytes[0] & 0xC0) >> 6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)))>>(int32_t)6)));
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m0E9B9F71185354D4A79CEB7DCACE7B34CFC327BC (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// get => (Bytes[0] & 0x38) >> 3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)56)))>>(int32_t)3));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_m64F80A4D0AA02833DD7797FDD91A728C57EEA598 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set => Bytes[0] = (byte)((Bytes[0] & ~0x38) | value << 3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-57)))|(int32_t)((int32_t)((int32_t)L_4<<(int32_t)3))))))));
		return;
	}
}
// LiteNetLib.Utils.NtpMode LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_m83260B4551719C2E26B301A785458303C90E0B62 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// get => (NtpMode)(Bytes[0] & 0x07);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)((int32_t)L_2&(int32_t)7)));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_Mode(LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m71DF08DCE6408F1AFD5809EB4AF0F559246AC237 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set => Bytes[0] = (byte)((Bytes[0] & ~0x07) | (int)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-8)))|(int32_t)L_4))))));
		return;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_m0BDE07AA166FECBC8824FD10F7CDE764E50A47FE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public int Stratum => Bytes[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 1;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Poll_m65B65EAF157B529517B204C32B83F5D806FEA0B6 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public int Poll => Bytes[2];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::get_Precision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Precision_m8C1B98A21851FCF7077D8ACA823F1E8085CDCE52 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public int Precision => (sbyte)Bytes[3];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 3;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (((int8_t)((int8_t)L_2)));
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RootDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_get_RootDelay_m9CF56E7556FDAF6CFDF01CACF608A869C930BD08 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public TimeSpan RootDelay => GetTimeSpan32(4);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D(__this, 4, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RootDispersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_get_RootDispersion_m45D65105FABC1FA07D959CB6CB5DA46AEED49B61 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public TimeSpan RootDispersion => GetTimeSpan32(8);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D(__this, 8, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_mBE0FDBBC5F0EB059794E66A383853E59141B1A16 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public uint ReferenceId => GetUInt32BE(12);
		uint32_t L_0 = NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D(__this, ((int32_t)12), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReferenceTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_ReferenceTimestamp_m0CF09C1355CC8D74DB4C74A3128E4162DDD48829 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ReferenceTimestamp => GetDateTime64(16);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18(__this, ((int32_t)16), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_OriginTimestamp_mC39E7284F03BF0F61AF363AA5BC92DC255138B7D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? OriginTimestamp => GetDateTime64(24);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18(__this, ((int32_t)24), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_ReceiveTimestamp_m1343DE6E50F8921B9D2E11F1053334C8FFBE83C7 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ReceiveTimestamp => GetDateTime64(32);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18(__this, ((int32_t)32), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18(__this, ((int32_t)40), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_m1A8F70CA0B556705F58DE72721F5629E71CE7F36 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = ___value0;
		NtpPacket_SetDateTime64_mF0484961537FA06BF6D482C0BD8E15D002BDADFA(__this, ((int32_t)40), L_0, /*hidden argument*/NULL);
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		return;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = __this->get_U3CDestinationTimestampU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mEB812B1CB03367217CEAAB05A74EFE67048B7D55 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = ___value0;
		__this->set_U3CDestinationTimestampU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_get_RoundTripTime_m17C86F36F4808068352BC78F07304210FCAA2675 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_get_RoundTripTime_m17C86F36F4808068352BC78F07304210FCAA2675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD(__this, /*hidden argument*/NULL);
		// return (ReceiveTimestamp.Value - OriginTimestamp.Value) + (DestinationTimestamp.Value - TransmitTimestamp.Value);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_get_ReceiveTimestamp_m1343DE6E50F8921B9D2E11F1053334C8FFBE83C7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_2 = NtpPacket_get_OriginTimestamp_mC39E7284F03BF0F61AF363AA5BC92DC255138B7D(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_1, L_3, /*hidden argument*/NULL);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_5 = NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF_inline(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_7 = NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_9 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_10 = TimeSpan_op_Addition_m2C916EE6F60BA72329886F1568FE9DD0D8DF0DB7(L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::get_CorrectionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_get_CorrectionOffset_m2CAF8BFD062DEB21589C577A36112C6DB28F813A (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_get_CorrectionOffset_m2CAF8BFD062DEB21589C577A36112C6DB28F813A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD(__this, /*hidden argument*/NULL);
		// return TimeSpan.FromTicks(((ReceiveTimestamp.Value - OriginTimestamp.Value) - (DestinationTimestamp.Value - TransmitTimestamp.Value)).Ticks / 2);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_get_ReceiveTimestamp_m1343DE6E50F8921B9D2E11F1053334C8FFBE83C7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_2 = NtpPacket_get_OriginTimestamp_mC39E7284F03BF0F61AF363AA5BC92DC255138B7D(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_1, L_3, /*hidden argument*/NULL);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_5 = NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF_inline(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_7 = NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_9 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_10 = TimeSpan_op_Subtraction_m5978CE5FCEB3D59AF0BC52AF838BFE3237AE8B23(L_4, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int64_t L_11 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_1), /*hidden argument*/NULL);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_12 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)((int64_t)L_11/(int64_t)(((int64_t)((int64_t)2))))), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m217CD9BBBF915C0C7A42A9EA83A522888AA367FE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket__ctor_m217CD9BBBF915C0C7A42A9EA83A522888AA367FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NtpPacket() : this(new byte[48])
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE(__this, L_0, /*hidden argument*/NULL);
		// Mode = NtpMode.Client;
		NtpPacket_set_Mode_m71DF08DCE6408F1AFD5809EB4AF0F559246AC237(__this, 3, /*hidden argument*/NULL);
		// VersionNumber = 4;
		NtpPacket_set_VersionNumber_m64F80A4D0AA02833DD7797FDD91A728C57EEA598(__this, 4, /*hidden argument*/NULL);
		// TransmitTimestamp = DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_RuntimeMethod_var);
		NtpPacket_set_TransmitTimestamp_m1A8F70CA0B556705F58DE72721F5629E71CE7F36(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NtpPacket(byte[] bytes)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (bytes.Length < 48)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) >= ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("SNTP reply packet must be at least 48 bytes long.", "bytes");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_1, _stringLiteral265EFE86433819F694B841F5E6A34C1AAD7CCA2C, _stringLiteralDAF529A73101C2BE626B99FC6938163E7A27620B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE_RuntimeMethod_var);
	}

IL_001d:
	{
		// Bytes = bytes;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		__this->set_U3CBytesU3Ek__BackingField_1(L_2);
		// }
		return;
	}
}
// LiteNetLib.Utils.NtpPacket LiteNetLib.Utils.NtpPacket::FromServerResponse(System.Byte[],System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * NtpPacket_FromServerResponse_mA6D08B4B7B5AC9C18C32D351A42E4D6BB08B7729 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___destinationTimestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_FromServerResponse_mA6D08B4B7B5AC9C18C32D351A42E4D6BB08B7729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NtpPacket(bytes) { DestinationTimestamp = destinationTimestamp };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_1 = (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A *)il2cpp_codegen_object_new(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		NtpPacket__ctor_mBA21A6C8031BEB65177E6CA25143570A56E59BBE(L_1, L_0, /*hidden argument*/NULL);
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_2 = L_1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___destinationTimestamp1;
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_RuntimeMethod_var);
		NullCheck(L_2);
		NtpPacket_set_DestinationTimestamp_mEB812B1CB03367217CEAAB05A74EFE67048B7D55_inline(L_2, L_4, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::ValidateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mode != NtpMode.Client)
		int32_t L_0 = NtpPacket_get_Mode_m83260B4551719C2E26B301A785458303C90E0B62(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a request SNTP packet.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral6BBAA1BBA484ECCC0E35DDAE6315B2026C7D718F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_RuntimeMethod_var);
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2 = NtpPacket_get_VersionNumber_m0E9B9F71185354D4A79CEB7DCACE7B34CFC327BC(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the request is not specified.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralC90D97635A9ACB40B4C37E4204A8F550634C0157, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_RuntimeMethod_var);
	}

IL_0027:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_4 = NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// throw new InvalidOperationException("TransmitTimestamp must be set in request packet.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteralAC491BDBF2803F27BAFCB4BDFA41E6EE4F72C268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NtpPacket_ValidateRequest_mD7964E2D2EE94812966BF7D5D5CE6F23FE952ECB_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::ValidateReply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mode != NtpMode.Server)
		int32_t L_0 = NtpPacket_get_Mode_m83260B4551719C2E26B301A785458303C90E0B62(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a reply SNTP packet.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralB71AB05F53873E98D8C2CC78915593F372104374, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_RuntimeMethod_var);
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2 = NtpPacket_get_VersionNumber_m0E9B9F71185354D4A79CEB7DCACE7B34CFC327BC(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the reply is not specified.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral88D63D9E0146031E488351C04AD8B4297C319234, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_RuntimeMethod_var);
	}

IL_0027:
	{
		// if (Stratum == 0)
		int32_t L_4 = NtpPacket_get_Stratum_m0BDE07AA166FECBC8824FD10F7CDE764E50A47FE(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException(string.Format("Received Kiss-o'-Death SNTP packet with code 0x{0:x}.", ReferenceId));
		uint32_t L_5 = NtpPacket_get_ReferenceId_mBE0FDBBC5F0EB059794E66A383853E59141B1A16(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral196C188C4E87B47A04E2363059BDA1369EB368E8, L_7, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_9 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_RuntimeMethod_var);
	}

IL_004a:
	{
		// if (LeapIndicator == NtpLeapIndicator.AlarmCondition)
		int32_t L_10 = NtpPacket_get_LeapIndicator_m613DA80E804FA95D01C5EA5E26DD8CA128A759E2(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_005e;
		}
	}
	{
		// throw new InvalidOperationException("SNTP server has unsynchronized clock.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_11 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_11, _stringLiteral43A3B6BFF94AB402F6B73BFBA919201D8A31753A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NtpPacket_ValidateReply_mA85E62D51B5A5452BD7315222C751DA2BD43D1CC_RuntimeMethod_var);
	}

IL_005e:
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OriginTimestamp == null)
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = NtpPacket_get_OriginTimestamp_mC39E7284F03BF0F61AF363AA5BC92DC255138B7D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new InvalidOperationException("Origin timestamp is missing.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteral35D259F4A3AED347786EC8A977BF9007A0905B45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_RuntimeMethod_var);
	}

IL_001b:
	{
		// if (ReceiveTimestamp == null)
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_3 = NtpPacket_get_ReceiveTimestamp_m1343DE6E50F8921B9D2E11F1053334C8FFBE83C7(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		// throw new InvalidOperationException("Receive timestamp is missing.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, _stringLiteral15675654491E47FC17E7C5AF18F84926AAC46D12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_RuntimeMethod_var);
	}

IL_0036:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_6 = NtpPacket_get_TransmitTimestamp_m0A17F44421A5B157CE2F003C83D981DD46DA7B8C(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		// throw new InvalidOperationException("Transmit timestamp is missing.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_8 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_8, _stringLiteral9EDED2F538E1851E05EC5B50E39EDC51C8E7A28B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_RuntimeMethod_var);
	}

IL_0051:
	{
		// if (DestinationTimestamp == null)
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_9 = NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF_inline(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		// throw new InvalidOperationException("Destination timestamp is missing.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_11 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_11, _stringLiteral53E50CCE363FA9AFC6A4555D8F103AB456986542, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NtpPacket_CheckTimestamps_m6515E80C657452D330FE85CF88A01E9244F38BDD_RuntimeMethod_var);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Nullable`1<System.DateTime> LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_GetDateTime64_m29D5E24404DF7A35809124BD45D04DFCF7F3EC18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var field = GetUInt64BE(offset);
		int32_t L_0 = ___offset0;
		uint64_t L_1 = NtpPacket_GetUInt64BE_m59EE60347AD103051DB2530CF022A8E813582F03(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (field == 0)
		uint64_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 ));
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_3 = V_1;
		return L_3;
	}

IL_0015:
	{
		// return new DateTime(Epoch.Ticks + Convert.ToInt64(field * (1.0 / (1L << 32) * 10000000.0)));
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = ((NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var))->get_Epoch_0();
		V_2 = L_4;
		int64_t L_5 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), /*hidden argument*/NULL);
		uint64_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_7 = Convert_ToInt64_m64CA1F639893BC431286C0AE8266AA46E38FB57D(((double)il2cpp_codegen_multiply((double)(((double)((double)(((double)((uint64_t)L_6)))))), (double)(0.0023283064365386963))), /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8;
		memset((&L_8), 0, sizeof(L_8));
		DateTime__ctor_m027A935E14EB81BCC0739BD56AE60CDE3387990C((&L_8), ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)L_7)), /*hidden argument*/NULL);
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m7E9B3FFE71C892509ED512721692C9C7A242C607_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_mF0484961537FA06BF6D482C0BD8E15D002BDADFA (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_SetDateTime64_mF0484961537FA06BF6D482C0BD8E15D002BDADFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * G_B1_1 = NULL;
	uint64_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * G_B3_2 = NULL;
	{
		// SetUInt64BE(offset, value == null ? 0 : Convert.ToUInt64((value.Value.Ticks - Epoch.Ticks) * (0.0000001 * (1L << 32))));
		int32_t L_0 = ___offset0;
		bool L_1 = Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_inline((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&___value1), /*hidden argument*/Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_RuntimeMethod_var);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_003a;
		}
	}
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF((Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 *)(&___value1), /*hidden argument*/Nullable_1_get_Value_mEDE2905DE625E657FC6F81D832F28CCF407638FF_RuntimeMethod_var);
		V_0 = L_2;
		int64_t L_3 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = ((NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var))->get_Epoch_0();
		V_0 = L_4;
		int64_t L_5 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_6 = Convert_ToUInt64_mA246C8DD45C3EA0EFB21E3ED8B6EE6FAAE119232(((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5))))), (double)(429.4967296))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003c;
	}

IL_003a:
	{
		G_B3_0 = ((uint64_t)((((int64_t)((int64_t)0)))));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003c:
	{
		NullCheck(G_B3_2);
		NtpPacket_SetUInt64BE_mDF706E48236A2746A84B925FA6CCF779CF2C3462(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.TimeSpan LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_GetTimeSpan32_m79FE835D60DC5323FA1FB529E70BF8AD602FF09D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromSeconds(GetInt32BE(offset) / (double)(1 << 16));
		int32_t L_0 = ___offset0;
		int32_t L_1 = NtpPacket_GetInt32BE_m29B21B8289E48FCCDDFE33EADC48A6F660D45B71(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_2 = TimeSpan_FromSeconds_mB18CB94089B3DA3B1B059BBE90367A9928AEE5CA(((double)((double)(((double)((double)L_1)))/(double)(65536.0))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt64 LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m59EE60347AD103051DB2530CF022A8E813582F03 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_GetUInt64BE_m59EE60347AD103051DB2530CF022A8E813582F03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt64(Bytes, offset));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint64_t L_2 = BitConverter_ToUInt64_m2AB7FBC373C5A2DEB276DDF00289A69C80A84451(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		uint64_t L_3 = NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_mDF706E48236A2746A84B925FA6CCF779CF2C3462 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, uint64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_SetUInt64BE_mDF706E48236A2746A84B925FA6CCF779CF2C3462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FastBitConverter.GetBytes(Bytes, offset, SwapEndianness(value));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		uint64_t L_2 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		uint64_t L_3 = NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5(L_2, /*hidden argument*/NULL);
		FastBitConverter_GetBytes_m320B345B14CEB8FAAE5249B294DE65C4D60321A6_inline(L_0, L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m29B21B8289E48FCCDDFE33EADC48A6F660D45B71 (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// return (int)GetUInt32BE(offset);
		int32_t L_0 = ___offset0;
		uint32_t L_1 = NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_GetUInt32BE_m54E3934A14A9C2760DB34E8BF4A0D4BD2A5E4B7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt32(Bytes, offset));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		uint32_t L_2 = BitConverter_ToUInt32_mD6A3C2F4BA020691B99FABF863F6FFF6A456FF59(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		uint32_t L_3 = NtpPacket_SwapEndianness_mFB0C52851FE6D006403B8B944E98391CF9A347ED(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_mFB0C52851FE6D006403B8B944E98391CF9A347ED (uint32_t ___x0, const RuntimeMethod* method)
{
	{
		// return ((x & 0xff) << 24) | ((x & 0xff00) << 8) | ((x & 0xff0000) >> 8) | ((x & 0xff000000) >> 24);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))<<(int32_t)8))))|(int32_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)16711680)))>>8))))|(int32_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-16777216)))>>((int32_t)24)))));
	}
}
// System.UInt64 LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5 (uint64_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket_SwapEndianness_m44C2B56A48810A6D2931F094272F720D5B7DC3C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((ulong)SwapEndianness((uint)x) << 32) | SwapEndianness((uint)(x >> 32));
		uint64_t L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NtpPacket_SwapEndianness_mFB0C52851FE6D006403B8B944E98391CF9A347ED((((int32_t)((uint32_t)L_0))), /*hidden argument*/NULL);
		uint64_t L_2 = ___x0;
		uint32_t L_3 = NtpPacket_SwapEndianness_mFB0C52851FE6D006403B8B944E98391CF9A347ED((((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))))), /*hidden argument*/NULL);
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_1)))<<(int32_t)((int32_t)32)))|(int64_t)(((int64_t)((uint64_t)L_3)))));
	}
}
// System.Void LiteNetLib.Utils.NtpPacket::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__cctor_m2445C55AA39431304103E334806A6AFC0D7C762C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpPacket__cctor_m2445C55AA39431304103E334806A6AFC0D7C762C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime Epoch = new DateTime(1900, 1, 1);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mF4506D7FF3B64F7EC739A36667DC8BC089A6539A((&L_0), ((int32_t)1900), 1, 1, /*hidden argument*/NULL);
		((NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var))->set_Epoch_0(L_0);
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
// System.Void LiteNetLib.Utils.NtpRequest::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpRequest__ctor_m8759AF91984D71936CC29AE5F69E2CE45C977A24 (NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65 * __this, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endPoint0, const RuntimeMethod* method)
{
	{
		// private int _resendTime = ResendTimer;
		__this->set__resendTime_4(((int32_t)1000));
		// public NtpRequest(IPEndPoint endPoint)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _ntpEndPoint = endPoint;
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_0 = ___endPoint0;
		__this->set__ntpEndPoint_3(L_0);
		// }
		return;
	}
}
// System.Boolean LiteNetLib.Utils.NtpRequest::get_NeedToKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_get_NeedToKill_mEBCAF7DB63C32D78522F1793045E29866C98A552 (NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65 * __this, const RuntimeMethod* method)
{
	{
		// public bool NeedToKill => _killTime >= KillTimer;
		int32_t L_0 = __this->get__killTime_5();
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)10000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LiteNetLib.Utils.NtpRequest::Send(LiteNetLib.NetSocket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_Send_m55ED5761087C8F066C276D6DAD4762D0A03B21FA (NtpRequest_tD2F6DAFAB986194554B35D9DBCFD462B1C3EDF65 * __this, NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * ___socket0, int32_t ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NtpRequest_Send_m55ED5761087C8F066C276D6DAD4762D0A03B21FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// _resendTime += time;
		int32_t L_0 = __this->get__resendTime_4();
		int32_t L_1 = ___time1;
		__this->set__resendTime_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// _killTime += time;
		int32_t L_2 = __this->get__killTime_5();
		int32_t L_3 = ___time1;
		__this->set__killTime_5(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// if (_resendTime < ResendTimer)
		int32_t L_4 = __this->get__resendTime_4();
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// SocketError errorCode = 0;
		V_0 = 0;
		// var packet = new NtpPacket();
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_5 = (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A *)il2cpp_codegen_object_new(NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A_il2cpp_TypeInfo_var);
		NtpPacket__ctor_m217CD9BBBF915C0C7A42A9EA83A522888AA367FE(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		// var sendCount = socket.SendTo(packet.Bytes, 0, packet.Bytes.Length, _ntpEndPoint, ref errorCode);
		NetSocket_tC711176ECB5EA9B3BE96E71C12B5F45AD5B770B6 * L_6 = ___socket0;
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(L_7, /*hidden argument*/NULL);
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_11 = __this->get__ntpEndPoint_3();
		NullCheck(L_6);
		int32_t L_12 = NetSocket_SendTo_mCE76360F88C3CA41AC70351B20C93CD4B9010399(L_6, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))), L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_12;
		// return errorCode == 0 && sendCount == packet.Bytes.Length;
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_2;
		NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * L_15 = V_1;
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		return (bool)((((int32_t)L_14) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
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
// System.Void LiteNetLib.Utils.ParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseException__ctor_mCD80CC1955B6150C00FBFE276B3E02C26865A033 (ParseException_t1C5AB4DE6202DB75E5B7CE3AD2CE06756FCE3824 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParseException__ctor_mCD80CC1955B6150C00FBFE276B3E02C26865A033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ParseException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		// public ParseException(string message) : base(message) { }
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mAE29B8A7648C0D1A49FDAB274F6621DA2C4ABA2B (EmbeddedAttribute_t8F5F55754A95DD80E678E5BA98A8813EDCC0E90E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m184726C45CFC3A889945DBBC4F2D8A6517C8BD49 (IsReadOnlyAttribute_tDE9D724636528CC6E8F3E38F06595A0D22EB3539 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m1389B50527A092DD6562BCBDE1B04ABDBA5320CF (IsUnmanagedAttribute_t3DDD412D7E0DACD1F2C3D5E6F462A7D19E370DB5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, uint64_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		uint64_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		uint64_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_5>>8))))));
		// buffer[offset + 2] = (byte)(data >> 16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		uint64_t L_8 = ___data2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_8>>((int32_t)16)))))));
		// buffer[offset + 3] = (byte)(data >> 24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		uint64_t L_11 = ___data2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_11>>((int32_t)24)))))));
		// buffer[offset + 4] = (byte)(data >> 32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___buffer0;
		int32_t L_13 = ___offset1;
		uint64_t L_14 = ___data2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)4))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)32)))))));
		// buffer[offset + 5] = (byte)(data >> 40);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___buffer0;
		int32_t L_16 = ___offset1;
		uint64_t L_17 = ___data2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)5))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_17>>((int32_t)40)))))));
		// buffer[offset + 6] = (byte)(data >> 48);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___buffer0;
		int32_t L_19 = ___offset1;
		uint64_t L_20 = ___data2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)6))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_20>>((int32_t)48)))))));
		// buffer[offset + 7] = (byte)(data >> 56);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = ___buffer0;
		int32_t L_22 = ___offset1;
		uint64_t L_23 = ___data2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)7))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_23>>((int32_t)56)))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		// buffer[offset + 2] = (byte)(data >> 16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___data2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_8>>(int32_t)((int32_t)16)))))));
		// buffer[offset + 3] = (byte)(data >> 24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___data2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)24)))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int16_t ___data2, const RuntimeMethod* method)
{
	{
		// buffer[offset] = (byte)(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int16_t L_2 = ___data2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		// buffer[offset + 1] = (byte)(data >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int16_t L_5 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NetDataWriter_get_Data_m1B1AEDC5A64866EF1B3A982E9FF456FA6D8CF474_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Data => _data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m34BF31EBBB9C13B12DEA9A734E9DCF347FDD10AE_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, const RuntimeMethod* method)
{
	{
		// public int Length => _position;
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NetDataWriter_ResizeIfNeed_m365701F251BB5154370C1AC1EFE861EC87C7CA3A_inline (NetDataWriter_t647F15C3C7CCFD1F1461132B586CC3BE52D07035 * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	{
		// if (_data.Length < newSize)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_0();
		NullCheck(L_0);
		int32_t L_1 = ___newSize0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// Resize(newSize);
		int32_t L_2 = ___newSize0;
		NetDataWriter_Resize_m48A99F1FF0BEBFFF99DB8296D75DD6B425AC3E79(__this, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mEA7D975896611B7B59A6085067D1FA3AC4B08FF9_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, float ___value2, const RuntimeMethod* method)
{
	ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ConverterHelperFloat ch = new ConverterHelperFloat { Afloat = value };
		il2cpp_codegen_initobj((&V_1), sizeof(ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB ));
		float L_0 = ___value2;
		(&V_1)->set_Afloat_1(L_0);
		ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  L_1 = V_1;
		V_0 = L_1;
		// WriteLittleEndian(bytes, startIndex, ch.Aint);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		int32_t L_3 = ___startIndex1;
		ConverterHelperFloat_t41C423E6633C13AFBAA921CED8C44B2AA73B06FB  L_4 = V_0;
		int32_t L_5 = L_4.get_Aint_0();
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_2, L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m3EA4F6C713D98E8D7E27201DAFE082408FC3851F_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, double ___value2, const RuntimeMethod* method)
{
	ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ConverterHelperDouble ch = new ConverterHelperDouble { Adouble = value };
		il2cpp_codegen_initobj((&V_1), sizeof(ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D ));
		double L_0 = ___value2;
		(&V_1)->set_Adouble_1(L_0);
		ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  L_1 = V_1;
		V_0 = L_1;
		// WriteLittleEndian(bytes, startIndex, ch.Along);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		int32_t L_3 = ___startIndex1;
		ConverterHelperDouble_t68D2B68133DFA2B296163F8A13065FA2CF00484D  L_4 = V_0;
		uint64_t L_5 = L_4.get_Along_0();
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_2, L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m90BA22BC0DA39EA23D73B9FD8B44EAD0D229B6A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int64_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (ulong)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int64_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m320B345B14CEB8FAAE5249B294DE65C4D60321A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint64_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m8F65B086240CD37A9038ECC4E711DECF2C57A4DB_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m9EC83255D547B7CEF036942757A57C788EA01179_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int32_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m45072F0240AE2CAF78622185C7951A7A88136435_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (int)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint32_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m4DF21FFFBC6F88C56A713A3E05A6F2426673E4C5_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mB26E77ED3F0C24BEBF968E7322228791A2A810A6_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, (short)value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		uint16_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline(L_0, L_1, (((int16_t)((int16_t)L_2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mDD16F270163CE144F47EBE4FABE8146141257E5F_inline (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___startIndex1, int16_t ___value2, const RuntimeMethod* method)
{
	{
		// WriteLittleEndian(bytes, startIndex, value);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		int32_t L_1 = ___startIndex1;
		int16_t L_2 = ___value2;
		FastBitConverter_WriteLittleEndian_m1C6ED6724C3EC9DE45CD1D5DB73DD37EAE49ED51_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_3();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NtpPacket_get_Bytes_mDA70F118CBB23352130899985231BDAB04133B54_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public byte[] Bytes { get; }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_U3CBytesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  NtpPacket_get_DestinationTimestamp_m3A1153361A73358D687C683D222FC2667CAFABCF_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = __this->get_U3CDestinationTimestampU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mEB812B1CB03367217CEAAB05A74EFE67048B7D55_inline (NtpPacket_t69661CD1C82FB3ECBBCFCF550DA517AAA0D0A72A * __this, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_0 = ___value0;
		__this->set_U3CDestinationTimestampU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB231DEE33107C7E966680F0404FFDD7939B24625_gshared_inline (Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
