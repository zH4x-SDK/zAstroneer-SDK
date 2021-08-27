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

// Function Hazard_Popper_01.Hazard_Popper_01_C.HandleOnDeformationEvent
struct AHazard_Popper_01_C_HandleOnDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.UserConstructionScript
struct AHazard_Popper_01_C_UserConstructionScript_Params
{
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveBeginPlay
struct AHazard_Popper_01_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature
struct AHazard_Popper_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature_Params
{
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyParticle
struct AHazard_Popper_01_C_DestroyParticle_Params
{
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyFinished
struct AHazard_Popper_01_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveEndPlay
struct AHazard_Popper_01_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.MULTI Seed Spawn SFX
struct AHazard_Popper_01_C_MULTI_Seed_Spawn_SFX_Params
{
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature
struct AHazard_Popper_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hazard_Popper_01.Hazard_Popper_01_C.ExecuteUbergraph_Hazard_Popper_01
struct AHazard_Popper_01_C_ExecuteUbergraph_Hazard_Popper_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
