
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

// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CreativeDroneOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.Construct");

	UWBP_CreativeDroneOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.HandleCreativeFlightModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDroneFlightState              flightState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreativeDroneOverlay_C::HandleCreativeFlightModeChanged(EDroneFlightState flightState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.HandleCreativeFlightModeChanged");

	UWBP_CreativeDroneOverlay_C_HandleCreativeFlightModeChanged_Params params;
	params.flightState = flightState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.ExecuteUbergraph_WBP_CreativeDroneOverlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreativeDroneOverlay_C::ExecuteUbergraph_WBP_CreativeDroneOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.ExecuteUbergraph_WBP_CreativeDroneOverlay");

	UWBP_CreativeDroneOverlay_C_ExecuteUbergraph_WBP_CreativeDroneOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
