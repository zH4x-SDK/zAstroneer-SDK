#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.UpdateVisibilityBasedOnInputDevice
struct UWBP_ControlHintPanel_C_UpdateVisibilityBasedOnInputDevice_Params
{
};

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.Construct
struct UWBP_ControlHintPanel_C_Construct_Params
{
};

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleInputDeviceChanged
struct UWBP_ControlHintPanel_C_HandleInputDeviceChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.HandleCreativeFlightModeChanged
struct UWBP_ControlHintPanel_C_HandleCreativeFlightModeChanged_Params
{
	EDroneFlightState                                  flightState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlHintPanel.WBP_ControlHintPanel_C.ExecuteUbergraph_WBP_ControlHintPanel
struct UWBP_ControlHintPanel_C_ExecuteUbergraph_WBP_ControlHintPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
