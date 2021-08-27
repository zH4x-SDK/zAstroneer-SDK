
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

// Function Conduit_Indicator.Conduit_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConduit_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Indicator.Conduit_Indicator_C.UserConstructionScript");

	AConduit_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Indicator.Conduit_Indicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Indicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Indicator.Conduit_Indicator_C.ReceiveTick");

	AConduit_Indicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Indicator.Conduit_Indicator_C.OnSpawn
// (Event, Public, BlueprintEvent)

void AConduit_Indicator_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Indicator.Conduit_Indicator_C.OnSpawn");

	AConduit_Indicator_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Indicator.Conduit_Indicator_C.ExecuteUbergraph_Conduit_Indicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Indicator_C::ExecuteUbergraph_Conduit_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Indicator.Conduit_Indicator_C.ExecuteUbergraph_Conduit_Indicator");

	AConduit_Indicator_C_ExecuteUbergraph_Conduit_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
