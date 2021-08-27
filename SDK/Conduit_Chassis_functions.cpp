
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

// Function Conduit_Chassis.Conduit_Chassis_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConduit_Chassis_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis.Conduit_Chassis_C.UserConstructionScript");

	AConduit_Chassis_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis.Conduit_Chassis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConduit_Chassis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis.Conduit_Chassis_C.ReceiveBeginPlay");

	AConduit_Chassis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis.Conduit_Chassis_C.ExecuteUbergraph_Conduit_Chassis
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Chassis_C::ExecuteUbergraph_Conduit_Chassis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis.Conduit_Chassis_C.ExecuteUbergraph_Conduit_Chassis");

	AConduit_Chassis_C_ExecuteUbergraph_Conduit_Chassis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
