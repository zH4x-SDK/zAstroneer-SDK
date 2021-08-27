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

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.HandleOnDeformationEvent
struct AHazard_Popper_Proximity_01_C_HandleOnDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ResearchSpawnChance
struct AHazard_Popper_Proximity_01_C_ResearchSpawnChance_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.OnRep_REP Enabled
struct AHazard_Popper_Proximity_01_C_OnRep_REP_Enabled_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.UserConstructionScript
struct AHazard_Popper_Proximity_01_C_UserConstructionScript_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveTick
struct AHazard_Popper_Proximity_01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AHazard_Popper_Proximity_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveBeginPlay
struct AHazard_Popper_Proximity_01_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AHazard_Popper_Proximity_01_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.DestroyFinished
struct AHazard_Popper_Proximity_01_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.Destroy Particle
struct AHazard_Popper_Proximity_01_C_Destroy_Particle_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature
struct AHazard_Popper_Proximity_01_C_BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AHazard_Popper_Proximity_01_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature
struct AHazard_Popper_Proximity_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.PlayDamageSFXMultiCast
struct AHazard_Popper_Proximity_01_C_PlayDamageSFXMultiCast_Params
{
	struct FTransform                                  xform;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ExecuteUbergraph_Hazard_Popper_Proximity_01
struct AHazard_Popper_Proximity_01_C_ExecuteUbergraph_Hazard_Popper_Proximity_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
