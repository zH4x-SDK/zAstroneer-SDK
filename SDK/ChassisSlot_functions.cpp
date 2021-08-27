
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

// Function ChassisSlot.ChassisSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassisSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot.ChassisSlot_C.UserConstructionScript");

	AChassisSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisSlot.ChassisSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChassisSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot.ChassisSlot_C.ReceiveBeginPlay");

	AChassisSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisSlot.ChassisSlot_C.ExecuteUbergraph_ChassisSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisSlot_C::ExecuteUbergraph_ChassisSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot.ChassisSlot_C.ExecuteUbergraph_ChassisSlot");

	AChassisSlot_C_ExecuteUbergraph_ChassisSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
