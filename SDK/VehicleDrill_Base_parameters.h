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

// Function VehicleDrill_Base.VehicleDrill_Base_C.GetSubtractParticleEffect
struct AVehicleDrill_Base_C_GetSubtractParticleEffect_Params
{
	int                                                HardnessDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.UpdateBurnoffParticleEffects
struct AVehicleDrill_Base_C_UpdateBurnoffParticleEffects_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.GetBodySlotLegacy
struct AVehicleDrill_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.UserConstructionScript
struct AVehicleDrill_Base_C_UserConstructionScript_Params
{
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.ReceiveBeginPlay
struct AVehicleDrill_Base_C_ReceiveBeginPlay_Params
{
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent
struct AVehicleDrill_Base_C_CustomEvent_Params
{
	int                                                AudioEventIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent_2
struct AVehicleDrill_Base_C_CustomEvent_2_Params
{
	int                                                AudioEventIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.CHILD_UpdateToolVisualState
struct AVehicleDrill_Base_C_CHILD_UpdateToolVisualState_Params
{
};

// Function VehicleDrill_Base.VehicleDrill_Base_C.ExecuteUbergraph_VehicleDrill_Base
struct AVehicleDrill_Base_C_ExecuteUbergraph_VehicleDrill_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
