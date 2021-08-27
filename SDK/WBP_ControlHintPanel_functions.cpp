
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

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.UpdateVisibilityBasedOnInputDevice
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ControlHintPanel_C::UpdateVisibilityBasedOnInputDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.UpdateVisibilityBasedOnInputDevice");

	UWBP_ControlHintPanel_C_UpdateVisibilityBasedOnInputDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ControlHintPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.Construct");

	UWBP_ControlHintPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControlHintPanel_C::HandleInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleInputDeviceChanged");

	UWBP_ControlHintPanel_C_HandleInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleCreativeFlightModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDroneFlightState              flightState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControlHintPanel_C::HandleCreativeFlightModeChanged(EDroneFlightState flightState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleCreativeFlightModeChanged");

	UWBP_ControlHintPanel_C_HandleCreativeFlightModeChanged_Params params;
	params.flightState = flightState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.ExecuteUbergraph_WBP_ControlHintPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControlHintPanel_C::ExecuteUbergraph_WBP_ControlHintPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.ExecuteUbergraph_WBP_ControlHintPanel");

	UWBP_ControlHintPanel_C_ExecuteUbergraph_WBP_ControlHintPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
