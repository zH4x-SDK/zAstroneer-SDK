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

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.DisableRailLighting
struct APlatform_Net_T2x6_T1x1_P4_BP_C_DisableRailLighting_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.UpdateRailLighting
struct APlatform_Net_T2x6_T1x1_P4_BP_C_UpdateRailLighting_Params
{
	float                                              SequencePercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.PlayNetTriggerEffects
struct APlatform_Net_T2x6_T1x1_P4_BP_C_PlayNetTriggerEffects_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.UserConstructionScript
struct APlatform_Net_T2x6_T1x1_P4_BP_C_UserConstructionScript_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.NetTriggerLightSequence__FinishedFunc
struct APlatform_Net_T2x6_T1x1_P4_BP_C_NetTriggerLightSequence__FinishedFunc_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.NetTriggerLightSequence__UpdateFunc
struct APlatform_Net_T2x6_T1x1_P4_BP_C_NetTriggerLightSequence__UpdateFunc_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.ReceiveBeginPlay
struct APlatform_Net_T2x6_T1x1_P4_BP_C_ReceiveBeginPlay_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.SetupCableSlots
struct APlatform_Net_T2x6_T1x1_P4_BP_C_SetupCableSlots_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.SetupSecondarySlots
struct APlatform_Net_T2x6_T1x1_P4_BP_C_SetupSecondarySlots_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.SetupPrimarySlots
struct APlatform_Net_T2x6_T1x1_P4_BP_C_SetupPrimarySlots_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.OnObjectEnterNet
struct APlatform_Net_T2x6_T1x1_P4_BP_C_OnObjectEnterNet_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.Multicast_PlayNetTriggerEffect
struct APlatform_Net_T2x6_T1x1_P4_BP_C_Multicast_PlayNetTriggerEffect_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.ResetNetTriggerCooldown
struct APlatform_Net_T2x6_T1x1_P4_BP_C_ResetNetTriggerCooldown_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.DroppedInWorld
struct APlatform_Net_T2x6_T1x1_P4_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.PickedUpFromWorld
struct APlatform_Net_T2x6_T1x1_P4_BP_C_PickedUpFromWorld_Params
{
};

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.ReceiveHit
struct APlatform_Net_T2x6_T1x1_P4_BP_C_ReceiveHit_Params
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

// Function Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C.ExecuteUbergraph_Platform_Net_T2x6_T1x1_P4_BP
struct APlatform_Net_T2x6_T1x1_P4_BP_C_ExecuteUbergraph_Platform_Net_T2x6_T1x1_P4_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
