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

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.HandleOnDeformationEvent
struct AHazard_Gasbag_v1_BASE_C_HandleOnDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.SpawnResearchable
struct AHazard_Gasbag_v1_BASE_C_SpawnResearchable_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Check Plucked
struct AHazard_Gasbag_v1_BASE_C_Check_Plucked_Params
{
	bool                                               Play_Sound;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.OnRep_Plucked
struct AHazard_Gasbag_v1_BASE_C_OnRep_Plucked_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Spawn Gas
struct AHazard_Gasbag_v1_BASE_C_Spawn_Gas_Params
{
	class AActor*                                      Follow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Hazard Tick
struct AHazard_Gasbag_v1_BASE_C_Hazard_Tick_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.UserConstructionScript
struct AHazard_Gasbag_v1_BASE_C_UserConstructionScript_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveBeginPlay
struct AHazard_Gasbag_v1_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature
struct AHazard_Gasbag_v1_BASE_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveTick
struct AHazard_Gasbag_v1_BASE_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.MULTI Spawn Gas Effects
struct AHazard_Gasbag_v1_BASE_C_MULTI_Spawn_Gas_Effects_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Destroy Particle
struct AHazard_Gasbag_v1_BASE_C_Destroy_Particle_Params
{
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.DestroyFinished
struct AHazard_Gasbag_v1_BASE_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature
struct AHazard_Gasbag_v1_BASE_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ExecuteUbergraph_Hazard_Gasbag_v1_BASE
struct AHazard_Gasbag_v1_BASE_C_ExecuteUbergraph_Hazard_Gasbag_v1_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
