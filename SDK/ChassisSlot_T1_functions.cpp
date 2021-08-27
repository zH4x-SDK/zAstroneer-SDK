
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

// Function ChassisSlot_T1.ChassisSlot_T1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassisSlot_T1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot_T1.ChassisSlot_T1_C.UserConstructionScript");

	AChassisSlot_T1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisSlot_T1.ChassisSlot_T1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChassisSlot_T1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot_T1.ChassisSlot_T1_C.ReceiveBeginPlay");

	AChassisSlot_T1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisSlot_T1.ChassisSlot_T1_C.ExecuteUbergraph_ChassisSlot_T1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisSlot_T1_C::ExecuteUbergraph_ChassisSlot_T1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisSlot_T1.ChassisSlot_T1_C.ExecuteUbergraph_ChassisSlot_T1");

	AChassisSlot_T1_C_ExecuteUbergraph_ChassisSlot_T1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
