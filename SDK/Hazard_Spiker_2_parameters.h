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

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.HandleOnDeformationEvent
struct AHazard_Spiker_1_C_HandleOnDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.UserConstructionScript
struct AHazard_Spiker_1_C_UserConstructionScript_Params
{
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveTick
struct AHazard_Spiker_1_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature
struct AHazard_Spiker_1_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature
struct AHazard_Spiker_1_C_BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AHazard_Spiker_1_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveBeginPlay
struct AHazard_Spiker_1_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.MULTI Spawn Seeds
struct AHazard_Spiker_1_C_MULTI_Spawn_Seeds_Params
{
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveEndPlay
struct AHazard_Spiker_1_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.DestroyFinished
struct AHazard_Spiker_1_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.Destroy Particle
struct AHazard_Spiker_1_C_Destroy_Particle_Params
{
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature
struct AHazard_Spiker_1_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ExecuteUbergraph_Hazard_Spiker_2
struct AHazard_Spiker_1_C_ExecuteUbergraph_Hazard_Spiker_2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
