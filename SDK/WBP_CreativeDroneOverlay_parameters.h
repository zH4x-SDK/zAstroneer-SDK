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

// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.Construct
struct UWBP_CreativeDroneOverlay_C_Construct_Params
{
};

// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.HandleCreativeFlightModeChanged
struct UWBP_CreativeDroneOverlay_C_HandleCreativeFlightModeChanged_Params
{
	EDroneFlightState                                  flightState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreativeDroneOverlay.WBP_CreativeDroneOverlay_C.ExecuteUbergraph_WBP_CreativeDroneOverlay
struct UWBP_CreativeDroneOverlay_C_ExecuteUbergraph_WBP_CreativeDroneOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
