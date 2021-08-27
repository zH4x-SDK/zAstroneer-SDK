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

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateConeMesh
struct AThruster_Medium_Consumable_C_UpdateConeMesh_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.OnRep_REP_ThrusterUsed
struct AThruster_Medium_Consumable_C_OnRep_REP_ThrusterUsed_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.SwapToThrusterDebris
struct AThruster_Medium_Consumable_C_SwapToThrusterDebris_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateThrusterVisuals
struct AThruster_Medium_Consumable_C_UpdateThrusterVisuals_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.TakeFuelAmount_Internal
struct AThruster_Medium_Consumable_C_TakeFuelAmount_Internal_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.Take Fuel_Internal
struct AThruster_Medium_Consumable_C_Take_Fuel_Internal_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.GetAvailableFuel_Internal
struct AThruster_Medium_Consumable_C_GetAvailableFuel_Internal_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UserConstructionScript
struct AThruster_Medium_Consumable_C_UserConstructionScript_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ReceiveBeginPlay
struct AThruster_Medium_Consumable_C_ReceiveBeginPlay_Params
{
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.FuelDrained
struct AThruster_Medium_Consumable_C_FuelDrained_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ThrusterDebrisItemSwapped
struct AThruster_Medium_Consumable_C_ThrusterDebrisItemSwapped_Params
{
	class APhysicalItem*                               DebrisItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ExecuteUbergraph_Thruster_Medium_Consumable
struct AThruster_Medium_Consumable_C_ExecuteUbergraph_Thruster_Medium_Consumable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
