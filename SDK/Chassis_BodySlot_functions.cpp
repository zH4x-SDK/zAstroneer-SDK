
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

// Function Chassis_BodySlot.Chassis_BodySlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassis_BodySlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chassis_BodySlot.Chassis_BodySlot_C.UserConstructionScript");

	AChassis_BodySlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chassis_BodySlot.Chassis_BodySlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChassis_BodySlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chassis_BodySlot.Chassis_BodySlot_C.ReceiveBeginPlay");

	AChassis_BodySlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chassis_BodySlot.Chassis_BodySlot_C.ExecuteUbergraph_Chassis_BodySlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassis_BodySlot_C::ExecuteUbergraph_Chassis_BodySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chassis_BodySlot.Chassis_BodySlot_C.ExecuteUbergraph_Chassis_BodySlot");

	AChassis_BodySlot_C_ExecuteUbergraph_Chassis_BodySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
