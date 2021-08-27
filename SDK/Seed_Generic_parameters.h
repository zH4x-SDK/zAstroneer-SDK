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

// Function Seed_Generic.Seed_Generic_C.Replace Seed
struct ASeed_Generic_C_Replace_Seed_Params
{
};

// Function Seed_Generic.Seed_Generic_C.Check_Uprooted
struct ASeed_Generic_C_Check_Uprooted_Params
{
};

// Function Seed_Generic.Seed_Generic_C.OnRep_Uprooted
struct ASeed_Generic_C_OnRep_Uprooted_Params
{
};

// Function Seed_Generic.Seed_Generic_C.GetSpawnedPlantTransform
struct ASeed_Generic_C_GetSpawnedPlantTransform_Params
{
	struct FTransform                                  SpawnedPlantTransform;                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.Apply Planted Tooltip
struct ASeed_Generic_C_Apply_Planted_Tooltip_Params
{
};

// Function Seed_Generic.Seed_Generic_C.OnRep_SERVER Growing
struct ASeed_Generic_C_OnRep_SERVER_Growing_Params
{
};

// Function Seed_Generic.Seed_Generic_C.SERVER_UpdateUseSuppression
struct ASeed_Generic_C_SERVER_UpdateUseSuppression_Params
{
};

// Function Seed_Generic.Seed_Generic_C.GetSeedFamilyItemType
struct ASeed_Generic_C_GetSeedFamilyItemType_Params
{
	class UClass*                                      SeedFamily;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.SERVER_RecordPlantedTelemetryAndAchievements
struct ASeed_Generic_C_SERVER_RecordPlantedTelemetryAndAchievements_Params
{
};

// Function Seed_Generic.Seed_Generic_C.SERVER Replace Seed W Plant
struct ASeed_Generic_C_SERVER_Replace_Seed_W_Plant_Params
{
};

// Function Seed_Generic.Seed_Generic_C.OnRep_REP Movable
struct ASeed_Generic_C_OnRep_REP_Movable_Params
{
};

// Function Seed_Generic.Seed_Generic_C.OnRep_REP Growth
struct ASeed_Generic_C_OnRep_REP_Growth_Params
{
};

// Function Seed_Generic.Seed_Generic_C.Update View
struct ASeed_Generic_C_Update_View_Params
{
};

// Function Seed_Generic.Seed_Generic_C.GetBodySlotLegacy
struct ASeed_Generic_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.UserConstructionScript
struct ASeed_Generic_C_UserConstructionScript_Params
{
};

// Function Seed_Generic.Seed_Generic_C.GrowthAnim__FinishedFunc
struct ASeed_Generic_C_GrowthAnim__FinishedFunc_Params
{
};

// Function Seed_Generic.Seed_Generic_C.GrowthAnim__UpdateFunc
struct ASeed_Generic_C_GrowthAnim__UpdateFunc_Params
{
};

// Function Seed_Generic.Seed_Generic_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ASeed_Generic_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Seed_Generic.Seed_Generic_C.DroppedInWorld
struct ASeed_Generic_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.Spawn Plant
struct ASeed_Generic_C_Spawn_Plant_Params
{
};

// Function Seed_Generic.Seed_Generic_C.PickedUpFromWorld
struct ASeed_Generic_C_PickedUpFromWorld_Params
{
};

// Function Seed_Generic.Seed_Generic_C.ReceiveBeginPlay
struct ASeed_Generic_C_ReceiveBeginPlay_Params
{
};

// Function Seed_Generic.Seed_Generic_C.Initial Kill
struct ASeed_Generic_C_Initial_Kill_Params
{
};

// Function Seed_Generic.Seed_Generic_C.PlacedInSlot
struct ASeed_Generic_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.ResumeSeedGrowth
struct ASeed_Generic_C_ResumeSeedGrowth_Params
{
};

// Function Seed_Generic.Seed_Generic_C.ReceiveHit
struct ASeed_Generic_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.Play BuryEffect
struct ASeed_Generic_C_Play_BuryEffect_Params
{
};

// Function Seed_Generic.Seed_Generic_C.DestroyFinished
struct ASeed_Generic_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seed_Generic.Seed_Generic_C.Destroy Particle
struct ASeed_Generic_C_Destroy_Particle_Params
{
};

// Function Seed_Generic.Seed_Generic_C.MULTI Seed Spawn SFX
struct ASeed_Generic_C_MULTI_Seed_Spawn_SFX_Params
{
};

// Function Seed_Generic.Seed_Generic_C.BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ASeed_Generic_C_BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Seed_Generic.Seed_Generic_C.Multicast Plant Failure FX
struct ASeed_Generic_C_Multicast_Plant_Failure_FX_Params
{
};

// Function Seed_Generic.Seed_Generic_C.ExecuteUbergraph_Seed_Generic
struct ASeed_Generic_C_ExecuteUbergraph_Seed_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
