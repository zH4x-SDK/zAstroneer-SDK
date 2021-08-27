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

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.HandleDeformationEvent
struct AHazard_BT_Parent_C_HandleDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Death and Seed
struct AHazard_BT_Parent_C_Death_and_Seed_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Check Plucked
struct AHazard_BT_Parent_C_Check_Plucked_Params
{
	bool                                               Play_Sound;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.OnRep_Plucked
struct AHazard_BT_Parent_C_OnRep_Plucked_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.UserConstructionScript
struct AHazard_BT_Parent_C_UserConstructionScript_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.ReceiveBeginPlay
struct AHazard_BT_Parent_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AHazard_BT_Parent_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Destroy Particle
struct AHazard_BT_Parent_C_Destroy_Particle_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.DestroyFinished
struct AHazard_BT_Parent_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.MULTI Seed Spawn SFX
struct AHazard_BT_Parent_C_MULTI_Seed_Spawn_SFX_Params
{
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature
struct AHazard_BT_Parent_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.ExecuteUbergraph_Hazard_BT_Parent
struct AHazard_BT_Parent_C_ExecuteUbergraph_Hazard_BT_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
