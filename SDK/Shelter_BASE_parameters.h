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

// Function Shelter_BASE.Shelter_BASE_C.ApplyFullPlatform
struct AShelter_BASE_C_ApplyFullPlatform_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.UpdatePlatformAnimation
struct AShelter_BASE_C_UpdatePlatformAnimation_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.CalculatePlatformRadiusStepDelta
struct AShelter_BASE_C_CalculatePlatformRadiusStepDelta_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlotMaterials
struct AShelter_BASE_C_CHILD_SetupCableSlotMaterials_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimUnpackedState
struct AShelter_BASE_C_CHILD_SetAnimUnpackedState_Params
{
	bool                                               IsPreUnpacked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_GetTetherCircularAttachPoints
struct AShelter_BASE_C_CHILD_GetTetherCircularAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shelter_BASE.Shelter_BASE_C.PopExitTooltip
struct AShelter_BASE_C_PopExitTooltip_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.PushExitTooltip
struct AShelter_BASE_C_PushExitTooltip_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleStartSetupAnimationSequence
struct AShelter_BASE_C_CHILD_HandleStartSetupAnimationSequence_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleCompleteSetupAnimationSequence
struct AShelter_BASE_C_CHILD_HandleCompleteSetupAnimationSequence_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CompleteSetupAnimationSequence
struct AShelter_BASE_C_CompleteSetupAnimationSequence_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayPowerSoundLoop
struct AShelter_BASE_C_CHILD_PlayPowerSoundLoop_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayOxygenSoundLoop
struct AShelter_BASE_C_CHILD_PlayOxygenSoundLoop_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.StartSetupAnimationSequence
struct AShelter_BASE_C_StartSetupAnimationSequence_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.InitializeUnpacked
struct AShelter_BASE_C_InitializeUnpacked_Params
{
	bool                                               IsPreUnpacked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupAnimRef
struct AShelter_BASE_C_CHILD_SetupAnimRef_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimDoorOpen
struct AShelter_BASE_C_CHILD_SetAnimDoorOpen_Params
{
	bool                                               IsDoorOpen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.SERVER_UpdateUseSuppression
struct AShelter_BASE_C_SERVER_UpdateUseSuppression_Params
{
	bool                                               canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.SERVER_SetPlayerOnDoorstep
struct AShelter_BASE_C_SERVER_SetPlayerOnDoorstep_Params
{
	bool                                               PlayerOnDoorstep;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.SERVER_SetCanEnter
struct AShelter_BASE_C_SERVER_SetCanEnter_Params
{
	bool                                               CanEnter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.UpdateUseContext
struct AShelter_BASE_C_UpdateUseContext_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.SetLightsEnabled
struct AShelter_BASE_C_SetLightsEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.ProvideRespawnPoint
struct AShelter_BASE_C_ProvideRespawnPoint_Params
{
	class USceneComponent*                             RespawnPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlots
struct AShelter_BASE_C_CHILD_SetupCableSlots_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.OnRep_REP_DoorOpen
struct AShelter_BASE_C_OnRep_REP_DoorOpen_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.GetBodySlotLegacy
struct AShelter_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.SetupSpawnPoint
struct AShelter_BASE_C_SetupSpawnPoint_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.UserConstructionScript
struct AShelter_BASE_C_UserConstructionScript_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AShelter_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Shelter_BASE.Shelter_BASE_C.ReceiveBeginPlay
struct AShelter_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct AShelter_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AShelter_BASE_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct AShelter_BASE_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
struct AShelter_BASE_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_BASE.Shelter_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AShelter_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Shelter_BASE.Shelter_BASE_C.ExecuteUbergraph_Shelter_BASE
struct AShelter_BASE_C_ExecuteUbergraph_Shelter_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
