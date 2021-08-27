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

// Function Thruster_Medium.Thruster_Medium_C.GetAvailableFuel_Internal
struct AThruster_Medium_C_GetAvailableFuel_Internal_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium.Thruster_Medium_C.TakeFuelAmount_Internal
struct AThruster_Medium_C_TakeFuelAmount_Internal_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium.Thruster_Medium_C.GetHasFuel_Internal
struct AThruster_Medium_C_GetHasFuel_Internal_Params
{
	bool                                               HasFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium.Thruster_Medium_C.Take Fuel_Internal
struct AThruster_Medium_C_Take_Fuel_Internal_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium.Thruster_Medium_C.UserConstructionScript
struct AThruster_Medium_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
