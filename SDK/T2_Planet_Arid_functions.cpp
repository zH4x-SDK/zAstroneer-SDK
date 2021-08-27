
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function T2_Planet_Arid.T2_Planet_Arid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AT2_Planet_Arid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Planet_Arid.T2_Planet_Arid_C.UserConstructionScript");

	AT2_Planet_Arid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T2_Planet_Arid.T2_Planet_Arid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AT2_Planet_Arid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Planet_Arid.T2_Planet_Arid_C.ReceiveBeginPlay");

	AT2_Planet_Arid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T2_Planet_Arid.T2_Planet_Arid_C.ExecuteUbergraph_T2_Planet_Arid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AT2_Planet_Arid_C::ExecuteUbergraph_T2_Planet_Arid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Planet_Arid.T2_Planet_Arid_C.ExecuteUbergraph_T2_Planet_Arid");

	AT2_Planet_Arid_C_ExecuteUbergraph_T2_Planet_Arid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
