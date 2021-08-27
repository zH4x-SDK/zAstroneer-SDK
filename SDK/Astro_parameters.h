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

// Function Astro.Activation.Update
struct UActivation_Update_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Activation.UnbindTo
struct UActivation_UnbindTo_Params
{
	class UActivation*                                 Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Activation.Toggle
struct UActivation_Toggle_Params
{
};

// Function Astro.Activation.IsActive
struct UActivation_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Activation.Deactivate
struct UActivation_Deactivate_Params
{
};

// Function Astro.Activation.BindTo
struct UActivation_BindTo_Params
{
	class UActivation*                                 Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Activation.Activate
struct UActivation_Activate_Params
{
};

// Function Astro.ActorAttachmentsComponent.TogglePlayerAttachedStorage
struct UActorAttachmentsComponent_TogglePlayerAttachedStorage_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    storage;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Toggled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.ToggleClickPlayerAttached
struct UActorAttachmentsComponent_ToggleClickPlayerAttached_Params
{
	bool                                               Toggled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.ToggleAttached
struct UActorAttachmentsComponent_ToggleAttached_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Toggled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               setViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.SaveGameSerializeCustom
struct UActorAttachmentsComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.PushExitSuppression
struct UActorAttachmentsComponent_PushExitSuppression_Params
{
};

// Function Astro.ActorAttachmentsComponent.PopExitSuppression
struct UActorAttachmentsComponent_PopExitSuppression_Params
{
};

// Function Astro.ActorAttachmentsComponent.OnRep_Attachments
struct UActorAttachmentsComponent_OnRep_Attachments_Params
{
};

// Function Astro.ActorAttachmentsComponent.OnAttachedActorDestroyed
struct UActorAttachmentsComponent_OnAttachedActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.HasPlayer
struct UActorAttachmentsComponent_HasPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.HasController
struct UActorAttachmentsComponent_HasController_Params
{
	class APlayController*                             Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.HasClickPlayer
struct UActorAttachmentsComponent_HasClickPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.HasActor
struct UActorAttachmentsComponent_HasActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.GetFirstAttachedActor
struct UActorAttachmentsComponent_GetFirstAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.GetDetachTransform
struct UActorAttachmentsComponent_GetDetachTransform_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.GetAttachTransform
struct UActorAttachmentsComponent_GetAttachTransform_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.FinishExiting
struct UActorAttachmentsComponent_FinishExiting_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.DetachAll
struct UActorAttachmentsComponent_DetachAll_Params
{
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.CanExit
struct UActorAttachmentsComponent_CanExit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.AttachedArrayPlayers
struct UActorAttachmentsComponent_AttachedArrayPlayers_Params
{
	TArray<class UActorAttachmentsComponent*>          Attachments;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APlayController*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.ActorAttachmentsComponent.AttachedArrayHasPlayer
struct UActorAttachmentsComponent_AttachedArrayHasPlayer_Params
{
	TArray<class UActorAttachmentsComponent*>          Attachments;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.AttachedArrayHasActor
struct UActorAttachmentsComponent_AttachedArrayHasActor_Params
{
	TArray<class UActorAttachmentsComponent*>          Attachments;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UActorAttachmentsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.AttachedArrayAvailable
struct UActorAttachmentsComponent_AttachedArrayAvailable_Params
{
	TArray<class UActorAttachmentsComponent*>          Attachments;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ActorAttachmentsComponent.ActorActorAttachmentsComponent
struct UActorAttachmentsComponent_ActorActorAttachmentsComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorAttachmentsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ActorEntityLinkComponent.IsSpawnedFromEntity
struct UActorEntityLinkComponent_IsSpawnedFromEntity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorEntityLinkComponent.GetEntityDatumRef
struct UActorEntityLinkComponent_GetEntityDatumRef_Params
{
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroDatumRef                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ActorGateObjectComponent.OnRep_ReplicationData
struct UActorGateObjectComponent_OnRep_ReplicationData_Params
{
};

// Function Astro.ActorGateObjectComponent.OnPlayerProximitySphereEndOverlap
struct UActorGateObjectComponent_OnPlayerProximitySphereEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorGateObjectComponent.OnPlayerProximitySphereBeginOverlap
struct UActorGateObjectComponent_OnPlayerProximitySphereBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ActorGateObjectComponent.OnOutroCinematicStarted
struct UActorGateObjectComponent_OnOutroCinematicStarted_Params
{
};

// Function Astro.ActorGateObjectComponent.OnOutroCinematicCompleted
struct UActorGateObjectComponent_OnOutroCinematicCompleted_Params
{
};

// Function Astro.ActorItemConverterComponent.OnReplicationDataChanged
struct UActorItemConverterComponent_OnReplicationDataChanged_Params
{
};

// Function Astro.ActorItemConverterComponent.OnAuthorityRemovedActiveItemConversion
struct UActorItemConverterComponent_OnAuthorityRemovedActiveItemConversion_Params
{
	struct FActiveItemConversion                       activeConversion;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorItemConverterComponent.OnAuthorityAddedActiveItemConversion
struct UActorItemConverterComponent_OnAuthorityAddedActiveItemConversion_Params
{
	struct FActiveItemConversion                       activeConversion;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorItemConverterComponent.IsItemConversionRecipeInputStatusValid
struct UActorItemConverterComponent_IsItemConversionRecipeInputStatusValid_Params
{
	struct FItemConversionRecipeInputStatus            ItemConversionRecipeInputStatus;                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.IsItemConversionInputItemStatusValid
struct UActorItemConverterComponent_IsItemConversionInputItemStatusValid_Params
{
	struct FItemConversionInputItemStatus              ItemConversionIngredientStatus;                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.HandleItemChangedInExternalResourceSlot
struct UActorItemConverterComponent_HandleItemChangedInExternalResourceSlot_Params
{
	class APhysicalItem*                               changedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.GetSelectedOutputRecipe
struct UActorItemConverterComponent_GetSelectedOutputRecipe_Params
{
	struct FRecipe                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ActorItemConverterComponent.GetSelectedOutputItemType
struct UActorItemConverterComponent_GetSelectedOutputItemType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.GetConversionRecipeInputStatus
struct UActorItemConverterComponent_GetConversionRecipeInputStatus_Params
{
	struct FRecipe                                     Recipe;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FItemConversionRecipeInputStatus            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ActorItemConverterComponent.AuthoritySetSelectedOutputItemTypeIndex
struct UActorItemConverterComponent_AuthoritySetSelectedOutputItemTypeIndex_Params
{
	int                                                newIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthoritySetExternalResourceProviderSlotsForPlayer
struct UActorItemConverterComponent_AuthoritySetExternalResourceProviderSlotsForPlayer_Params
{
	class AAstroCharacter*                             controllingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthoritySetConverterWantsToBeActive
struct UActorItemConverterComponent_AuthoritySetConverterWantsToBeActive_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthorityIncrementSelectedOutputItemTypeIndex
struct UActorItemConverterComponent_AuthorityIncrementSelectedOutputItemTypeIndex_Params
{
	bool                                               AllowIndexWrapping;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthorityHandleItemComponentChanged
struct UActorItemConverterComponent_AuthorityHandleItemComponentChanged_Params
{
};

// Function Astro.ActorItemConverterComponent.AuthorityGetItemConverterState
struct UActorItemConverterComponent_AuthorityGetItemConverterState_Params
{
	EItemConverterState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthorityDecrementSelectedOutputItemTypeIndex
struct UActorItemConverterComponent_AuthorityDecrementSelectedOutputItemTypeIndex_Params
{
	bool                                               AllowIndexWrapping;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorItemConverterComponent.AuthorityCancelActiveConversions
struct UActorItemConverterComponent_AuthorityCancelActiveConversions_Params
{
};

// Function Astro.ActorLockableComponent.OnAuthorityLockedStateChanged
struct UActorLockableComponent_OnAuthorityLockedStateChanged_Params
{
	struct FAstroDatumRef                              lockableComponentRef;                                     // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorLockComponent.OnAuthorityLockingMechanismStateChanged
struct UActorLockComponent_OnAuthorityLockingMechanismStateChanged_Params
{
	class ULockingMechanism*                           changedLockingMechanism;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorLockComponent.OnAuthorityLockedStateChanged
struct UActorLockComponent_OnAuthorityLockedStateChanged_Params
{
	struct FAstroDatumRef                              lockComponentRef;                                         // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorResearchComponent.OnRep_ResearchData
struct UActorResearchComponent_OnRep_ResearchData_Params
{
};

// Function Astro.ActorResearchComponent.AuthorityStartOrInterruptResearch
struct UActorResearchComponent_AuthorityStartOrInterruptResearch_Params
{
	class APlayController*                             InstigatingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ActorResearchComponent.AuthorityChangedActiveResearchSubjects
struct UActorResearchComponent_AuthorityChangedActiveResearchSubjects_Params
{
	struct FAstroDatumRef                              ResearchComponentRef;                                     // (Parm)
	TArray<struct FAttachedResearchSubject>            ActiveResearchSubjects;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.ActorResearchComponent.AuthorityActiveResearchSubjectExpired
struct UActorResearchComponent_AuthorityActiveResearchSubjectExpired_Params
{
	struct FAstroDatumRef                              ResearchComponentRef;                                     // (Parm)
	struct FAttachedResearchSubject                    ExpiredAttachedResearchSubject;                           // (Parm)
};

// Function Astro.SingleUseConsumableComponent.OnRep_HasBeenConsumed
struct USingleUseConsumableComponent_OnRep_HasBeenConsumed_Params
{
	bool                                               bWasConsumed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorSolarPowerGeneratorComponent.OnSpawnedInSlot
struct UActorSolarPowerGeneratorComponent_OnSpawnedInSlot_Params
{
};

// Function Astro.ActorSolarPowerGeneratorComponent.OnReleasedFromSlot
struct UActorSolarPowerGeneratorComponent_OnReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorSolarPowerGeneratorComponent.OnPlacedInSlot
struct UActorSolarPowerGeneratorComponent_OnPlacedInSlot_Params
{
};

// Function Astro.ActorSolarPowerGeneratorComponent.HandleStoppedGeneratingPower
struct UActorSolarPowerGeneratorComponent_HandleStoppedGeneratingPower_Params
{
};

// Function Astro.ActorSolarPowerGeneratorComponent.HandleStartedGeneratingPower
struct UActorSolarPowerGeneratorComponent_HandleStartedGeneratingPower_Params
{
};

// Function Astro.ActorSolarPowerGeneratorComponent.HandlePickedUpFromWorld
struct UActorSolarPowerGeneratorComponent_HandlePickedUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorSolarPowerGeneratorComponent.HandleDroppedInWorld
struct UActorSolarPowerGeneratorComponent_HandleDroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Astro.ActorStreamingPowerCableComponent.UpdateStreamingPowerCableVisualizationData__DelegateSignature
struct UActorStreamingPowerCableComponent_UpdateStreamingPowerCableVisualizationData__DelegateSignature_Params
{
	struct FStreamingPowerCableVisualizationData       PowerCableVisualizationData;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorStreamingPowerCableComponent.SetDirectionalConnectionSplitRatio
struct UActorStreamingPowerCableComponent_SetDirectionalConnectionSplitRatio_Params
{
	float                                              ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorStreamingPowerCableComponent.OnSelfDestroyed
struct UActorStreamingPowerCableComponent_OnSelfDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorStreamingPowerCableComponent.OnRep_VisualizationData
struct UActorStreamingPowerCableComponent_OnRep_VisualizationData_Params
{
};

// Function Astro.ActorStreamingPowerCableComponent.MakeSlotConnection
struct UActorStreamingPowerCableComponent_MakeSlotConnection_Params
{
	struct FSlotReference                              From;                                                     // (Parm)
	struct FSlotReference                              To;                                                       // (Parm)
};

// Function Astro.ActorStreamingPowerCableComponent.Disconnect
struct UActorStreamingPowerCableComponent_Disconnect_Params
{
};

// DelegateFunction Astro.ActorStreamingPowerNodeComponent.UpdateStreamingNodePowerVisualization__DelegateSignature
struct UActorStreamingPowerNodeComponent_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ActorStreamingPowerNodeComponent.OnRep_VisualizationData
struct UActorStreamingPowerNodeComponent_OnRep_VisualizationData_Params
{
};

// DelegateFunction Astro.ActorWindPowerGeneratorComponent.OnWindPowerAnimationDataChanged__DelegateSignature
struct UActorWindPowerGeneratorComponent_OnWindPowerAnimationDataChanged__DelegateSignature_Params
{
	struct FVector                                     WindNormal;                                               // (Parm, IsPlainOldData)
	float                                              WindSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ActorWindPowerGeneratorComponent.OnRep_AnimatedWindVec
struct UActorWindPowerGeneratorComponent_OnRep_AnimatedWindVec_Params
{
};

// Function Astro.ActuatorComponent.MulticastOnActuate
struct UActuatorComponent_MulticastOnActuate_Params
{
};

// Function Astro.ActuatorComponent.AuthorityScheduleActuation
struct UActuatorComponent_AuthorityScheduleActuation_Params
{
	class APlayController*                             Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.IncrementAchievementProgressForAllPlayers
struct UAstroAchievements_IncrementAchievementProgressForAllPlayers_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.IncrementAchievementProgress
struct UAstroAchievements_IncrementAchievementProgress_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.IncrementAchievementFloatProgressForAllPlayers
struct UAstroAchievements_IncrementAchievementFloatProgressForAllPlayers_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.IncrementAchievementFloatProgress
struct UAstroAchievements_IncrementAchievementFloatProgress_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.AwardAchievementForAllPlayers
struct UAstroAchievements_AwardAchievementForAllPlayers_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.AwardAchievement
struct UAstroAchievements_AwardAchievement_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.AddAchievementCollectionItemForAllPlayers
struct UAstroAchievements_AddAchievementCollectionItemForAllPlayers_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAchievements.AddAchievementCollectionItem
struct UAstroAchievements_AddAchievementCollectionItem_Params
{
	EAstroAchievementKeys                              Achievement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroActionComponent.StartActionInstance
struct UAstroActionComponent_StartActionInstance_Params
{
	class UAstroAction*                                Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroActionComponent.StartAction
struct UAstroActionComponent_StartAction_Params
{
	class UClass*                                      ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroActionComponent.ServerRequestStartAction
struct UAstroActionComponent_ServerRequestStartAction_Params
{
	struct FAstroActionRequestPayload                  payload;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroActionComponent.ServerRequestInterruptAction
struct UAstroActionComponent_ServerRequestInterruptAction_Params
{
	struct FAstroActionIdentifier                      actionToInterruptIdentifier;                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroActionComponent.OnActionEnded
struct UAstroActionComponent_OnActionEnded_Params
{
	class UAstroAction*                                EndedAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroActionComponent.MulticastStartAction
struct UAstroActionComponent_MulticastStartAction_Params
{
	struct FAstroActionRequestPayload                  payload;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroActionComponent.MulticastInterruptAction
struct UAstroActionComponent_MulticastInterruptAction_Params
{
	struct FAstroActionIdentifier                      interruptedActionIdentifier;                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroActionComponent.CreateAction
struct UAstroActionComponent_CreateAction_Params
{
	class UClass*                                      ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroAction*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroActionComponent.ClientDenyStartActionRequest
struct UAstroActionComponent_ClientDenyStartActionRequest_Params
{
	struct FAstroActionIdentifier                      deniedActionIdentifier;                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventWithAttributes
struct UAstroAnalytics_RecordEventWithAttributes_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventWithAttribute
struct UAstroAnalytics_RecordEventWithAttribute_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventResourceCollected
struct UAstroAnalytics_RecordEventResourceCollected_Params
{
	struct FString                                     ResourceName;                                             // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventPlanetfall
struct UAstroAnalytics_RecordEventPlanetfall_Params
{
	struct FString                                     Planet;                                                   // (Parm, ZeroConstructor)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventItemUnlocked
struct UAstroAnalytics_RecordEventItemUnlocked_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventItemCrafted
struct UAstroAnalytics_RecordEventItemCrafted_Params
{
	struct FString                                     ItemType;                                                 // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEventCustomization
struct UAstroAnalytics_RecordEventCustomization_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.RecordEvent
struct UAstroAnalytics_RecordEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAnalytics.AccumulateCounter
struct UAstroAnalytics_AccumulateCounter_Params
{
	EAstroTelemetryCounter                             counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroApplyTransformTask.SetTargetRelativeTransform
struct UAstroApplyTransformTask_SetTargetRelativeTransform_Params
{
	struct FTransform                                  targetRelativeTransform;                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UCurveFloat*                                 relativeTransformProgressCurve;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroApplyTransformTask.CreateAstroApplyTransformTask
struct UAstroApplyTransformTask_CreateAstroApplyTransformTask_Params
{
	class UAstroAction*                                OwningAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LocationCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ScaleCurve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroApplyTransformTask*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.SetSwitch
struct UAstroAudioStatics_SetSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.SetState
struct UAstroAudioStatics_SetState_Params
{
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.SetRTPCValue
struct UAstroAudioStatics_SetRTPCValue_Params
{
	struct FName                                       RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.PostEventAttached
struct UAstroAudioStatics_PostEventAttached_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.PostEventAtLocation
struct UAstroAudioStatics_PostEventAtLocation_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroAudioStatics.PostEvent
struct UAstroAudioStatics_PostEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.UpdateSpawnPreviewIndicator
struct AAstroCharacter_UpdateSpawnPreviewIndicator_Params
{
};

// Function Astro.AstroCharacter.UpdatePlayerIndex
struct AAstroCharacter_UpdatePlayerIndex_Params
{
};

// Function Astro.AstroCharacter.UpdateHeldItem
struct AAstroCharacter_UpdateHeldItem_Params
{
};

// Function Astro.AstroCharacter.ToggleDeformTool
struct AAstroCharacter_ToggleDeformTool_Params
{
};

// Function Astro.AstroCharacter.SlotIndicatorClickedView
struct AAstroCharacter_SlotIndicatorClickedView_Params
{
};

// Function Astro.AstroCharacter.SlotIndicatorClicked
struct AAstroCharacter_SlotIndicatorClicked_Params
{
	struct FSlotReference                              Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.SetSprinting
struct AAstroCharacter_SetSprinting_Params
{
	bool                                               Sprint;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.SetPlayerIndex
struct AAstroCharacter_SetPlayerIndex_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.SetHoverDown
struct AAstroCharacter_SetHoverDown_Params
{
	bool                                               hover;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.SetFreeOxygen
struct AAstroCharacter_SetFreeOxygen_Params
{
	bool                                               bNewFreeOxygen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.SetBackpackChildActorComponent
struct AAstroCharacter_SetBackpackChildActorComponent_Params
{
	class UChildActorComponent*                        backpackChildActorComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroCharacter.ServerSetCreativeDroneDeployed
struct AAstroCharacter_ServerSetCreativeDroneDeployed_Params
{
	bool                                               IsDeployed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.ServerDropHeavyCarriedItems
struct AAstroCharacter_ServerDropHeavyCarriedItems_Params
{
};

// Function Astro.AstroCharacter.ReapplySavedCharacterCustomization
struct AAstroCharacter_ReapplySavedCharacterCustomization_Params
{
};

// Function Astro.AstroCharacter.QuickItemClickView
struct AAstroCharacter_QuickItemClickView_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.QuickItemClick
struct AAstroCharacter_QuickItemClick_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.PointItem
struct AAstroCharacter_PointItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PingSymbol;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.PlayDamageSound
struct AAstroCharacter_PlayDamageSound_Params
{
};

// Function Astro.AstroCharacter.PlaceTetherFromBackpack
struct AAstroCharacter_PlaceTetherFromBackpack_Params
{
};

// Function Astro.AstroCharacter.OnRep_LocalSolarBody
struct AAstroCharacter_OnRep_LocalSolarBody_Params
{
	class ASolarBody*                                  oldSolarBody;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.OnRep_IsPowered
struct AAstroCharacter_OnRep_IsPowered_Params
{
};

// Function Astro.AstroCharacter.OnRep_Health
struct AAstroCharacter_OnRep_Health_Params
{
};

// Function Astro.AstroCharacter.OnRep_FreeOxygen
struct AAstroCharacter_OnRep_FreeOxygen_Params
{
};

// Function Astro.AstroCharacter.OnRep_CharacterCustomization
struct AAstroCharacter_OnRep_CharacterCustomization_Params
{
};

// Function Astro.AstroCharacter.OnParentAttach
struct AAstroCharacter_OnParentAttach_Params
{
	class AActor*                                      Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Entering;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.OnGameplayStarted
struct AAstroCharacter_OnGameplayStarted_Params
{
};

// Function Astro.AstroCharacter.OnBrushColorChanged
struct AAstroCharacter_OnBrushColorChanged_Params
{
	struct FTerrainMaterial                            TerrainMaterial;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroCharacter.NotifyPlayerDeathBegin
struct AAstroCharacter_NotifyPlayerDeathBegin_Params
{
};

// Function Astro.AstroCharacter.MulticastPointItem
struct AAstroCharacter_MulticastPointItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PingSymbol;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroCharacter.HandleOnGameplayStartedEvent
struct AAstroCharacter_HandleOnGameplayStartedEvent_Params
{
	bool                                               StartedInExistingSavedGame;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetSprinting
struct AAstroCharacter_GetSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetSpawnPreviewTransform
struct AAstroCharacter_GetSpawnPreviewTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetPlayController
struct AAstroCharacter_GetPlayController_Params
{
	class APlayController*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetOnlinePlayerName
struct AAstroCharacter_GetOnlinePlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroCharacter.GetLocalSolarBody
struct AAstroCharacter_GetLocalSolarBody_Params
{
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetLocalPlanet
struct AAstroCharacter_GetLocalPlanet_Params
{
	class AAstroPlanet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetHoverDown
struct AAstroCharacter_GetHoverDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetHeadLocation
struct AAstroCharacter_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetDroneControlState
struct AAstroCharacter_GetDroneControlState_Params
{
	EDroneControlState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetDeformTool
struct AAstroCharacter_GetDeformTool_Params
{
	class ADeformTool*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetCreativeDrone
struct AAstroCharacter_GetCreativeDrone_Params
{
	class ADroneBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetCharacterVisorMaterial
struct AAstroCharacter_GetCharacterVisorMaterial_Params
{
	class UAstroVisorMaterial*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetCharacterSuit
struct AAstroCharacter_GetCharacterSuit_Params
{
	class UAstroCharacterSuit*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetCharacterPalette
struct AAstroCharacter_GetCharacterPalette_Params
{
	class UAstroCharacterPalette*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetCharacterHat
struct AAstroCharacter_GetCharacterHat_Params
{
	ECharacterHatCategory                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterHat*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.GetBackpack
struct AAstroCharacter_GetBackpack_Params
{
	class ABackpack*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.Focus
struct AAstroCharacter_Focus_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               rotationOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.EndFocus
struct AAstroCharacter_EndFocus_Params
{
};

// Function Astro.AstroCharacter.DoJump
struct AAstroCharacter_DoJump_Params
{
};

// Function Astro.AstroCharacter.DetachFromSeat
struct AAstroCharacter_DetachFromSeat_Params
{
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.CanSprint
struct AAstroCharacter_CanSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.CancelIdle
struct AAstroCharacter_CancelIdle_Params
{
};

// Function Astro.AstroCharacter.AuthoritySetLocalSolarBody
struct AAstroCharacter_AuthoritySetLocalSolarBody_Params
{
	class ASolarBody*                                  SolarBody;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterVisorMaterial
struct AAstroCharacter_AuthoritySetCharacterVisorMaterial_Params
{
	class UAstroVisorMaterial*                         visorColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterSuit
struct AAstroCharacter_AuthoritySetCharacterSuit_Params
{
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterPalette
struct AAstroCharacter_AuthoritySetCharacterPalette_Params
{
	class UAstroCharacterPalette*                      Palette;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterOverlayPattern
struct AAstroCharacter_AuthoritySetCharacterOverlayPattern_Params
{
	class UAstroCharacterOverlayPattern*               OverlayPattern;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterHat
struct AAstroCharacter_AuthoritySetCharacterHat_Params
{
	class UAstroCharacterHat*                          Hat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterHatCategory                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthoritySetCharacterCustomization
struct AAstroCharacter_AuthoritySetCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                Customization;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.AuthorityForceKillAstro
struct AAstroCharacter_AuthorityForceKillAstro_Params
{
};

// Function Astro.AstroCharacter.ApplyPowerExternal
struct AAstroCharacter_ApplyPowerExternal_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.ApplyOxygenExternal
struct AAstroCharacter_ApplyOxygenExternal_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacter.ApplyCharacterCustomization
struct AAstroCharacter_ApplyCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                Customization;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.SetUpdatedComponent
struct UAstroCharacterMovementComponent_SetUpdatedComponent_Params
{
	class UPrimitiveComponent*                         NewUpdatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.SetCreativeModeFlightSpeedScalarNormalized
struct UAstroCharacterMovementComponent_SetCreativeModeFlightSpeedScalarNormalized_Params
{
	float                                              NormalizedCreativeModeFlightSpeedScalar;                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.ServerMoveOld
struct UAstroCharacterMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       OldInputAccel;                                            // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterEncumbrance                  Encumbrance;                                              // (ConstParm, Parm, ReferenceParm)
	struct FAstroCharacterActiveOverrides              Overrides;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroCharacterMovementComponent.ServerMoveFocus
struct UAstroCharacterMovementComponent_ServerMoveFocus_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      clientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      FocusLoc;                                                 // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterEncumbrance                  Encumbrance;                                              // (ConstParm, Parm, ReferenceParm)
	struct FAstroCharacterActiveOverrides              Overrides;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroCharacterMovementComponent.ServerMoveDual
struct UAstroCharacterMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterEncumbrance                  Encumbrance0;                                             // (ConstParm, Parm, ReferenceParm)
	struct FAstroCharacterActiveOverrides              Overrides0;                                               // (ConstParm, Parm, ReferenceParm)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      clientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           clientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterEncumbrance                  Encumbrance;                                              // (ConstParm, Parm, ReferenceParm)
	struct FAstroCharacterActiveOverrides              Overrides;                                                // (ConstParm, Parm, ReferenceParm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.ServerMove
struct UAstroCharacterMovementComponent_ServerMove_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      clientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           clientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterEncumbrance                  Encumbrance;                                              // (ConstParm, Parm, ReferenceParm)
	struct FAstroCharacterActiveOverrides              Overrides;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroCharacterMovementComponent.GetCreativeModeFlightSpeedScalarNormalized
struct UAstroCharacterMovementComponent_GetCreativeModeFlightSpeedScalarNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.GetCharacterOwner
struct UAstroCharacterMovementComponent_GetCharacterOwner_Params
{
	class AAstroCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.ConsumeInputVector
struct UAstroCharacterMovementComponent_ConsumeInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.ClientVeryShortAdjustPosition
struct UAstroCharacterMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovementOverrideCorrection>         OverrideCorrections;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroCharacterMovementComponent.ClientBumpVelocity
struct UAstroCharacterMovementComponent_ClientBumpVelocity_Params
{
	struct FVector                                     velocityBump;                                             // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.ClientAdjustPosition
struct UAstroCharacterMovementComponent_ClientAdjustPosition_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovementOverrideCorrection>         OverrideCorrections;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroCharacterMovementComponent.ClientAckGoodMove
struct UAstroCharacterMovementComponent_ClientAckGoodMove_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.CleanupMovementOverridesOnDriving
struct UAstroCharacterMovementComponent_CleanupMovementOverridesOnDriving_Params
{
};

// Function Astro.AstroCharacterMovementComponent.AddMovementOverride
struct UAstroCharacterMovementComponent_AddMovementOverride_Params
{
	class UAstroCharacterMovementOverrideComponent*    movementOverride;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.AddInstantaneousVelocity
struct UAstroCharacterMovementComponent_AddInstantaneousVelocity_Params
{
	struct FVector                                     velocityImpulse;                                          // (Parm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.AddImpulse
struct UAstroCharacterMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.AddForce
struct UAstroCharacterMovementComponent_AddForce_Params
{
	struct FVector                                     force;                                                    // (Parm, IsPlainOldData)
};

// Function Astro.AstroCharacterMovementComponent.AddAcceleration
struct UAstroCharacterMovementComponent_AddAcceleration_Params
{
	struct FVector                                     Acceleration;                                             // (Parm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.WouldCompleteCollection_RespondToServer
struct AAstroPlayerController_WouldCompleteCollection_RespondToServer_Params
{
	bool                                               response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.WouldCompleteCollection_RequestFromClient
struct AAstroPlayerController_WouldCompleteCollection_RequestFromClient_Params
{
	EAstroAchievementKeys                              collectionAchievement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      newCollectionItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.TravelToDedicatedServerByURL
struct AAstroPlayerController_TravelToDedicatedServerByURL_Params
{
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             TravelInitiated;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.TrackFireworkLaunchedForAchievementProgress
struct AAstroPlayerController_TrackFireworkLaunchedForAchievementProgress_Params
{
};

// Function Astro.AstroPlayerController.ToggleProxyVisibility
struct AAstroPlayerController_ToggleProxyVisibility_Params
{
};

// Function Astro.AstroPlayerController.ToggleEscapeMenu
struct AAstroPlayerController_ToggleEscapeMenu_Params
{
};

// Function Astro.AstroPlayerController.ToggleAstropediaMenu
struct AAstroPlayerController_ToggleAstropediaMenu_Params
{
};

// Function Astro.AstroPlayerController.TestSwitchProfilesPopup
struct AAstroPlayerController_TestSwitchProfilesPopup_Params
{
};

// Function Astro.AstroPlayerController.TestPurchase
struct AAstroPlayerController_TestPurchase_Params
{
};

// Function Astro.AstroPlayerController.TestMountEncryptedPak
struct AAstroPlayerController_TestMountEncryptedPak_Params
{
};

// Function Astro.AstroPlayerController.TestListStoreItems
struct AAstroPlayerController_TestListStoreItems_Params
{
};

// Function Astro.AstroPlayerController.TestListCatalogItems
struct AAstroPlayerController_TestListCatalogItems_Params
{
};

// Function Astro.AstroPlayerController.T2Raycast
struct AAstroPlayerController_T2Raycast_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.StartNetworkSession
struct AAstroPlayerController_StartNetworkSession_Params
{
};

// Function Astro.AstroPlayerController.SetSolarTime
struct AAstroPlayerController_SetSolarTime_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.SetMotionBlurEnabled
struct AAstroPlayerController_SetMotionBlurEnabled_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.SetItemForInitialSelection
struct AAstroPlayerController_SetItemForInitialSelection_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerUseActor
struct AAstroPlayerController_ServerUseActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EUseType                                           useType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerStartPrint
struct AAstroPlayerController_ServerStartPrint_Params
{
	class UPrinterComponent*                           Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerSetSolarTimeScaleMultiplierCreative
struct AAstroPlayerController_ServerSetSolarTimeScaleMultiplierCreative_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerSetNormalizedTimeOfDayCreative
struct AAstroPlayerController_ServerSetNormalizedTimeOfDayCreative_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerSetNormalizedSunOrbitCreative
struct AAstroPlayerController_ServerSetNormalizedSunOrbitCreative_Params
{
	float                                              normalizedSunOrbit;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerSetCharacterCustomization
struct AAstroPlayerController_ServerSetCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                Customization;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerResetGameStateAchievementProgress
struct AAstroPlayerController_ServerResetGameStateAchievementProgress_Params
{
};

// Function Astro.AstroPlayerController.ServerRequestUnlockItem
struct AAstroPlayerController_ServerRequestUnlockItem_Params
{
	class UClass*                                      ItemTypeToUnlock;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerRequestTerrainCorrection
struct AAstroPlayerController_ServerRequestTerrainCorrection_Params
{
	class UVoxelVolumeComponent*                       voxelVolume;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<uint64_t>                                   Nodes;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ServerRequestFoliageDestruction
struct AAstroPlayerController_ServerRequestFoliageDestruction_Params
{
	class AActor*                                      DestructionInstigator;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // (Parm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MassThreshold;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCollectResourceNuggets;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerRemote
struct AAstroPlayerController_ServerRemote_Params
{
	struct FString                                     consoleCommand;                                           // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerRedeemPlayerTicket
struct AAstroPlayerController_ServerRedeemPlayerTicket_Params
{
	struct FString                                     Ticket;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerPointItem
struct AAstroPlayerController_ServerPointItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PingSymbol;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ServerNotifyJoinMenuComplete
struct AAstroPlayerController_ServerNotifyJoinMenuComplete_Params
{
};

// Function Astro.AstroPlayerController.ServerNotifyClientFullyJoined
struct AAstroPlayerController_ServerNotifyClientFullyJoined_Params
{
};

// Function Astro.AstroPlayerController.ServerNakDataChunk
struct AAstroPlayerController_ServerNakDataChunk_Params
{
	uint32_t                                           transmissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           missingChunkStart;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           missingChunkCount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerIncrementBlueprint
struct AAstroPlayerController_ServerIncrementBlueprint_Params
{
	class UPrinterComponent*                           Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerGetServerStatistics
struct AAstroPlayerController_ServerGetServerStatistics_Params
{
};

// Function Astro.AstroPlayerController.ServerFlushPendingUnlocks
struct AAstroPlayerController_ServerFlushPendingUnlocks_Params
{
};

// Function Astro.AstroPlayerController.ServerFlushPendingAchievements
struct AAstroPlayerController_ServerFlushPendingAchievements_Params
{
};

// Function Astro.AstroPlayerController.ServerDoDeformation
struct AAstroPlayerController_ServerDoDeformation_Params
{
	struct FDeformationParams                          params;                                                   // (Parm)
};

// Function Astro.AstroPlayerController.ServerDoControlSystemInput
struct AAstroPlayerController_ServerDoControlSystemInput_Params
{
	struct FVector_NetQuantize10                       Input;                                                    // (Parm)
	struct FVector_NetQuantizeNormal                   cameraForward;                                            // (Parm)
};

// Function Astro.AstroPlayerController.ServerClickSlotIndicator
struct AAstroPlayerController_ServerClickSlotIndicator_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerClickSlot
struct AAstroPlayerController_ServerClickSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.AstroPlayerController.ServerClickActor
struct AAstroPlayerController_ServerClickActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // (Parm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerClick
struct AAstroPlayerController_ServerClick_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // (Parm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerCancelPrint
struct AAstroPlayerController_ServerCancelPrint_Params
{
	class UPrinterComponent*                           Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAuxOverrideUseItem
struct AAstroPlayerController_ServerAuxOverrideUseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetSaveGameInterval
struct AAstroPlayerController_ServerAdminSetSaveGameInterval_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminSetProperties
struct AAstroPlayerController_ServerAdminSetProperties_Params
{
	uint64_t                                           PlayerGuid;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroClientProperties                      clientCapabilities;                                       // (ConstParm, Parm, ReferenceParm)
	struct FAstroClientProperties                      Mask;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ServerAdminSetPassword
struct AAstroPlayerController_ServerAdminSetPassword_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminSetOxygenFreeCreative
struct AAstroPlayerController_ServerAdminSetOxygenFreeCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetInvisibleToHazardsCreative
struct AAstroPlayerController_ServerAdminSetInvisibleToHazardsCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetInvincibleCreative
struct AAstroPlayerController_ServerAdminSetInvincibleCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetFuelFreeCreative
struct AAstroPlayerController_ServerAdminSetFuelFreeCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetDenyUnlisted
struct AAstroPlayerController_ServerAdminSetDenyUnlisted_Params
{
	struct FString                                     Enable;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminSetCategoryForPlayerName
struct AAstroPlayerController_ServerAdminSetCategoryForPlayerName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	EPlayerCategory                                    PlayerCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetBackupSaveGamesInterval
struct AAstroPlayerController_ServerAdminSetBackupSaveGamesInterval_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminSetBackpackPowerUnlimitedCreative
struct AAstroPlayerController_ServerAdminSetBackpackPowerUnlimitedCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminSetActivityTimeout
struct AAstroPlayerController_ServerAdminSetActivityTimeout_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminServerShutdown
struct AAstroPlayerController_ServerAdminServerShutdown_Params
{
};

// Function Astro.AstroPlayerController.ServerAdminSaveGame
struct AAstroPlayerController_ServerAdminSaveGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminRenameGame
struct AAstroPlayerController_ServerAdminRenameGame_Params
{
	struct FString                                     fromName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     toName;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminNewGame
struct AAstroPlayerController_ServerAdminNewGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminLoadGame
struct AAstroPlayerController_ServerAdminLoadGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminListPlayers
struct AAstroPlayerController_ServerAdminListPlayers_Params
{
};

// Function Astro.AstroPlayerController.ServerAdminListGames
struct AAstroPlayerController_ServerAdminListGames_Params
{
};

// Function Astro.AstroPlayerController.ServerAdminKickPlayer
struct AAstroPlayerController_ServerAdminKickPlayer_Params
{
	uint64_t                                           PlayerGuid;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminGetProperties
struct AAstroPlayerController_ServerAdminGetProperties_Params
{
};

// Function Astro.AstroPlayerController.ServerAdminDeleteGame
struct AAstroPlayerController_ServerAdminDeleteGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ServerAdminCreativeMode
struct AAstroPlayerController_ServerAdminCreativeMode_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAdminBackupSaveGames
struct AAstroPlayerController_ServerAdminBackupSaveGames_Params
{
};

// Function Astro.AstroPlayerController.ServerActuatorOverrideUseItem
struct AAstroPlayerController_ServerActuatorOverrideUseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ServerAckChunkedDataFinished
struct AAstroPlayerController_ServerAckChunkedDataFinished_Params
{
	uint32_t                                           transmissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.SaveGame
struct AAstroPlayerController_SaveGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ResetPersistentLocalPlayerData
struct AAstroPlayerController_ResetPersistentLocalPlayerData_Params
{
};

// Function Astro.AstroPlayerController.ResetInactivePlayerTimeout
struct AAstroPlayerController_ResetInactivePlayerTimeout_Params
{
};

// Function Astro.AstroPlayerController.ResetAllUnlocks
struct AAstroPlayerController_ResetAllUnlocks_Params
{
};

// Function Astro.AstroPlayerController.ResetAllAchievements
struct AAstroPlayerController_ResetAllAchievements_Params
{
};

// Function Astro.AstroPlayerController.ReportAchievementProgress
struct AAstroPlayerController_ReportAchievementProgress_Params
{
	EAstroAchievementKeys                              AchievementKey;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NeededCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.RebuildNodeWithLogging
struct AAstroPlayerController_RebuildNodeWithLogging_Params
{
	struct FString                                     locationCode;                                             // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.PersistCharacterCustomization
struct AAstroPlayerController_PersistCharacterCustomization_Params
{
};

// Function Astro.AstroPlayerController.OnRep_AchievementProgress
struct AAstroPlayerController_OnRep_AchievementProgress_Params
{
};

// Function Astro.AstroPlayerController.OnPersistentLocalPlayerDataSaveCooldownExpired
struct AAstroPlayerController_OnPersistentLocalPlayerDataSaveCooldownExpired_Params
{
};

// Function Astro.AstroPlayerController.OnPersistentLocalPlayerDataDirtied
struct AAstroPlayerController_OnPersistentLocalPlayerDataDirtied_Params
{
};

// Function Astro.AstroPlayerController.OnInactivePlayerTimeout
struct AAstroPlayerController_OnInactivePlayerTimeout_Params
{
};

// Function Astro.AstroPlayerController.OnClientTitleMenuComplete
struct AAstroPlayerController_OnClientTitleMenuComplete_Params
{
};

// Function Astro.AstroPlayerController.OnClientLoadingScreenComplete
struct AAstroPlayerController_OnClientLoadingScreenComplete_Params
{
};

// Function Astro.AstroPlayerController.LogTerrainDataForNode
struct AAstroPlayerController_LogTerrainDataForNode_Params
{
	struct FString                                     locationCode;                                             // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.LoadSeamless
struct AAstroPlayerController_LoadSeamless_Params
{
	struct FString                                     FURL;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.LoadGame
struct AAstroPlayerController_LoadGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.IsMainController
struct AAstroPlayerController_IsMainController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IsHelpMenuVisible
struct AAstroPlayerController_IsHelpMenuVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IsEscapeMenuVisible
struct AAstroPlayerController_IsEscapeMenuVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IsControllerJoined
struct AAstroPlayerController_IsControllerJoined_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IsConnectionClosing
struct AAstroPlayerController_IsConnectionClosing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IncrementAchievementProgress
struct AAstroPlayerController_IncrementAchievementProgress_Params
{
	struct FCountAchievement                           AchievementDef;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.IncrementAchievementFloatProgress
struct AAstroPlayerController_IncrementAchievementFloatProgress_Params
{
	struct FFloatCountAchievement                      AchievementDef;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              AddedProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.HidePlayerNames
struct AAstroPlayerController_HidePlayerNames_Params
{
	bool                                               hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.HideBeacons
struct AAstroPlayerController_HideBeacons_Params
{
	bool                                               hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.HasAdminAccess
struct AAstroPlayerController_HasAdminAccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.GrantAllUnlocks
struct AAstroPlayerController_GrantAllUnlocks_Params
{
};

// Function Astro.AstroPlayerController.GrantAchievement
struct AAstroPlayerController_GrantAchievement_Params
{
	struct FString                                     achievementName;                                          // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.GameFullyLoaded
struct AAstroPlayerController_GameFullyLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ForceStartGame
struct AAstroPlayerController_ForceStartGame_Params
{
};

// Function Astro.AstroPlayerController.ForceCrash
struct AAstroPlayerController_ForceCrash_Params
{
};

// Function Astro.AstroPlayerController.FlushPendingAchievementsAndUnlocks
struct AAstroPlayerController_FlushPendingAchievementsAndUnlocks_Params
{
};

// Function Astro.AstroPlayerController.EndNetworkSession
struct AAstroPlayerController_EndNetworkSession_Params
{
};

// Function Astro.AstroPlayerController.DumpTerrainDataAroundPoint
struct AAstroPlayerController_DumpTerrainDataAroundPoint_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               modifiedOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.DumpTerrainData
struct AAstroPlayerController_DumpTerrainData_Params
{
	bool                                               modifiedOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.DumpActorDataTXT
struct AAstroPlayerController_DumpActorDataTXT_Params
{
};

// Function Astro.AstroPlayerController.DumpActorDataCSV
struct AAstroPlayerController_DumpActorDataCSV_Params
{
};

// Function Astro.AstroPlayerController.DropNextNetDeformations
struct AAstroPlayerController_DropNextNetDeformations_Params
{
	uint32_t                                           Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.DeleteSaveGame
struct AAstroPlayerController_DeleteSaveGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.DeleteAllAutoSaves
struct AAstroPlayerController_DeleteAllAutoSaves_Params
{
};

// Function Astro.AstroPlayerController.DeferredDisableEscapeMenu
struct AAstroPlayerController_DeferredDisableEscapeMenu_Params
{
};

// Function Astro.AstroPlayerController.ClientVoxelJIPComplete
struct AAstroPlayerController_ClientVoxelJIPComplete_Params
{
};

// Function Astro.AstroPlayerController.ClientUnPossess
struct AAstroPlayerController_ClientUnPossess_Params
{
	class AAstroCharacter*                             oldCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientTerrainValidateChecksumsT2
struct AAstroPlayerController_ClientTerrainValidateChecksumsT2_Params
{
	class UVoxelVolumeComponent*                       voxelVolume;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTerrainNodeNetChecksum>             checksums;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientStartChunkedTransmission
struct AAstroPlayerController_ClientStartChunkedTransmission_Params
{
	uint32_t                                           transmissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      dataType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           chunkCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           uncompressedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     keyObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetSaveGameIntervalResponse
struct AAstroPlayerController_ClientSetSaveGameIntervalResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientSetPropertiesResponse
struct AAstroPlayerController_ClientSetPropertiesResponse_Params
{
	struct FAstroClientProperties                      clientCapabilities;                                       // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientSetPasswordResponse
struct AAstroPlayerController_ClientSetPasswordResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetOxygenFreeCreativeResponse
struct AAstroPlayerController_ClientSetOxygenFreeCreativeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetInvisibleToHazardsCreativeResponse
struct AAstroPlayerController_ClientSetInvisibleToHazardsCreativeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetInvincibleCreativeResponse
struct AAstroPlayerController_ClientSetInvincibleCreativeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetFuelFreeCreativeResponse
struct AAstroPlayerController_ClientSetFuelFreeCreativeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetDenyUnlistedResponse
struct AAstroPlayerController_ClientSetDenyUnlistedResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientSetBackupSaveGamesIntervalResponse
struct AAstroPlayerController_ClientSetBackupSaveGamesIntervalResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientSetBackpackPowerUnlimitedCreativeResponse
struct AAstroPlayerController_ClientSetBackpackPowerUnlimitedCreativeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetAstroViewTarget
struct AAstroPlayerController_ClientSetAstroViewTarget_Params
{
	class AActor*                                      ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientSetActivityTimeoutResponse
struct AAstroPlayerController_ClientSetActivityTimeoutResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientServerStatisticsResponse
struct AAstroPlayerController_ClientServerStatisticsResponse_Params
{
	struct FServerStatistics                           ServerStatistics;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientSaveGameResponse
struct AAstroPlayerController_ClientSaveGameResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientRequestFoliageDestruction
struct AAstroPlayerController_ClientRequestFoliageDestruction_Params
{
	class AActor*                                      DestructionInstigator;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // (Parm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MassThreshold;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCollectResourceNuggets;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientRenameGameResponse
struct AAstroPlayerController_ClientRenameGameResponse_Params
{
	bool                                               copySuccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removeSuccess;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     fromName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     toName;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientRecvPlayerState
struct AAstroPlayerController_ClientRecvPlayerState_Params
{
	struct FInitialClientStateParams                   params;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientRecvPlanetSeeds
struct AAstroPlayerController_ClientRecvPlanetSeeds_Params
{
	TArray<class AAstroPlanet*>                        planets;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        seeds;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Offsets;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientRecvPlanetMaterials
struct AAstroPlayerController_ClientRecvPlanetMaterials_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPackedVoxelMaterialInfo>            Materials;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientRecvChunkedDataCompletionSignal
struct AAstroPlayerController_ClientRecvChunkedDataCompletionSignal_Params
{
	uint32_t                                           transmissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientRecvChunkedData
struct AAstroPlayerController_ClientRecvChunkedData_Params
{
	uint32_t                                           transmissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                chunkIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int8_t>                                     Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class UObject*                                     keyObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientRecordPlayerEventWithCallback
struct AAstroPlayerController_ClientRecordPlayerEventWithCallback_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientRecordPlayerEvent
struct AAstroPlayerController_ClientRecordPlayerEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientNoInitialPlanetSignal
struct AAstroPlayerController_ClientNoInitialPlanetSignal_Params
{
};

// Function Astro.AstroPlayerController.ClientNewGameResponse
struct AAstroPlayerController_ClientNewGameResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientLoadGameResponse
struct AAstroPlayerController_ClientLoadGameResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientListPlayersResponse
struct AAstroPlayerController_ClientListPlayersResponse_Params
{
	struct FPlayerList                                 PlayerList;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientListGamesResponse
struct AAstroPlayerController_ClientListGamesResponse_Params
{
	struct FGameList                                   GameList;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientKickPlayerResponse
struct AAstroPlayerController_ClientKickPlayerResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientGrantItems
struct AAstroPlayerController_ClientGrantItems_Params
{
	TArray<struct FString>                             ItemIds;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientGetPropertiesResponse
struct AAstroPlayerController_ClientGetPropertiesResponse_Params
{
	struct FAstroClientProperties                      clientCapabilities;                                       // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientFlushPendingUnlocks
struct AAstroPlayerController_ClientFlushPendingUnlocks_Params
{
	TArray<struct FString>                             serverPendingUnlocks;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientEnqueueNotification
struct AAstroPlayerController_ClientEnqueueNotification_Params
{
	struct FAstroNotificationTagAuthoringData          AuthoringData;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.AstroPlayerController.ClientDoDeformation
struct AAstroPlayerController_ClientDoDeformation_Params
{
	struct FDeformationParams                          params;                                                   // (Parm)
};

// Function Astro.AstroPlayerController.ClientDeleteGameResponse
struct AAstroPlayerController_ClientDeleteGameResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientCreativeModeResponse
struct AAstroPlayerController_ClientCreativeModeResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientCreateProxySession
struct AAstroPlayerController_ClientCreateProxySession_Params
{
	struct FGuid                                       sessionGUID;                                              // (Parm, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientBeginAuthHandshake
struct AAstroPlayerController_ClientBeginAuthHandshake_Params
{
	struct FString                                     LobbyId;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.ClientBackupSaveGamesResponse
struct AAstroPlayerController_ClientBackupSaveGamesResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientAwardAchievement
struct AAstroPlayerController_ClientAwardAchievement_Params
{
	EAstroAchievementKeys                              AchievementKey;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.ClientAuthComplete
struct AAstroPlayerController_ClientAuthComplete_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerController.AdminSetPropertiesForPlayer
struct AAstroPlayerController_AdminSetPropertiesForPlayer_Params
{
	struct FString                                     PlayerGuid;                                               // (Parm, ZeroConstructor)
	struct FAstroClientProperties                      clientCapabilities;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroPlayerController.AdminKickPlayer
struct AAstroPlayerController_AdminKickPlayer_Params
{
	struct FString                                     PlayerGuid;                                               // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayerController.AddAchievementCollectionItem
struct AAstroPlayerController_AddAchievementCollectionItem_Params
{
	struct FItemCollectionAchievement                  AchievementDef;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.UpdateEmoteSelection
struct APlayController_UpdateEmoteSelection_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroEmoteDefinition*                       Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.UpdateClickableIndicators
struct APlayController_UpdateClickableIndicators_Params
{
};

// Function Astro.PlayController.UpdateBiomeAmbienceLocal
struct APlayController_UpdateBiomeAmbienceLocal_Params
{
	class UBiomeSamplerComponent*                      biomeSampler;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayController.TransferCurrentQuickItemIntoHandForHolding
struct APlayController_TransferCurrentQuickItemIntoHandForHolding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.TraceCursorSpoofAtPlayerFeet
struct APlayController_TraceCursorSpoofAtPlayerFeet_Params
{
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     collisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     traceOffset;                                              // (Parm, IsPlainOldData)
	class AActor*                                      actorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.TraceCursor
struct APlayController_TraceCursor_Params
{
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     collisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      actorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.ToggleCreativeModeDeformMenu
struct APlayController_ToggleCreativeModeDeformMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.TertiaryAction
struct APlayController_TertiaryAction_Params
{
};

// Function Astro.PlayController.TeleportToCursor
struct APlayController_TeleportToCursor_Params
{
};

// Function Astro.PlayController.TargetHasAttachParent
struct APlayController_TargetHasAttachParent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.TargetAllowFreeCam
struct APlayController_TargetAllowFreeCam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.StopJump
struct APlayController_StopJump_Params
{
};

// Function Astro.PlayController.SpawnActorAndAttemptPackage
struct APlayController_SpawnActorAndAttemptPackage_Params
{
	class UClass*                                      objClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CreativeMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               autoGrab;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.ShouldShowCreativeDroneUI
struct APlayController_ShouldShowCreativeDroneUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.SetUsingGamepad
struct APlayController_SetUsingGamepad_Params
{
	bool                                               IsUsingGamepad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetTerrainBrushLightActive
struct APlayController_SetTerrainBrushLightActive_Params
{
	bool                                               TerrainBrushLightActive;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetSuitServer
struct APlayController_SetSuitServer_Params
{
	class UAstroCharacterSuit*                         NewSuit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetShowCreativeDoneUI
struct APlayController_SetShowCreativeDoneUI_Params
{
	bool                                               shouldShowDroneUI;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetSelectionIndicators
struct APlayController_SetSelectionIndicators_Params
{
};

// Function Astro.PlayController.SetMousePosition
struct APlayController_SetMousePosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetGamepadLock
struct APlayController_SetGamepadLock_Params
{
	bool                                               gamepadModeLocked;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCurrentSpawnPoint
struct APlayController_SetCurrentSpawnPoint_Params
{
	class AActor*                                      Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCreativeShowLODAnchorRangeVisualizationEnabled
struct APlayController_SetCreativeShowLODAnchorRangeVisualizationEnabled_Params
{
	bool                                               ShowLODAnchorRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCreativeRemoveDecoratorsWhilePaintingEnabled
struct APlayController_SetCreativeRemoveDecoratorsWhilePaintingEnabled_Params
{
	bool                                               RemoveDecoratorsWhilePainting;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCreativeCollectResourcesWhileDeformingDisabled
struct APlayController_SetCreativeCollectResourcesWhileDeformingDisabled_Params
{
	bool                                               DisableCollectResourcesWhileDeforming;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCharacterVisorServer
struct APlayController_SetCharacterVisorServer_Params
{
	class UAstroVisorMaterial*                         NewVisorMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCharacterPaletteServer
struct APlayController_SetCharacterPaletteServer_Params
{
	class UAstroCharacterPalette*                      NewPalette;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCharacterHatServer
struct APlayController_SetCharacterHatServer_Params
{
	class UAstroCharacterHat*                          NewHat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterHatCategory                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SetCameraZoom
struct APlayController_SetCameraZoom_Params
{
	float                                              zoom;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.ServerSpawnResourceNuggetDebug
struct APlayController_ServerSpawnResourceNuggetDebug_Params
{
	class UClass*                                      objClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.ServerSpawnActorDebug
struct APlayController_ServerSpawnActorDebug_Params
{
	class UClass*                                      objClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.ServerSpawnActorAndAttemptPackage
struct APlayController_ServerSpawnActorAndAttemptPackage_Params
{
	class UClass*                                      objClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CreativeMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               autoGrab;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.ServerSpawnActor
struct APlayController_ServerSpawnActor_Params
{
	class UClass*                                      objClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
};

// Function Astro.PlayController.ServerSetToolLocation
struct APlayController_ServerSetToolLocation_Params
{
	class UControlComponent*                           ControlComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
};

// Function Astro.PlayController.ServerPlayerCharacterSelectionLaunch
struct APlayController_ServerPlayerCharacterSelectionLaunch_Params
{
};

// Function Astro.PlayController.ServerAddUnclaimedItemDrivePhysicalItemReward
struct APlayController_ServerAddUnclaimedItemDrivePhysicalItemReward_Params
{
	struct FPendingInGameItemRewards                   PendingReward;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.PlayController.ServerAddToCheatPlinthSelectionIndex
struct APlayController_ServerAddToCheatPlinthSelectionIndex_Params
{
	class ACheatPlinthBase*                            CheatPlinth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.SaveGameFixup
struct APlayController_SaveGameFixup_Params
{
};

// Function Astro.PlayController.RunScript
struct APlayController_RunScript_Params
{
	struct FString                                     script;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.PlayController.RestoreAudioListener
struct APlayController_RestoreAudioListener_Params
{
};

// Function Astro.PlayController.ResetPlayControllerStateForRespawn
struct APlayController_ResetPlayControllerStateForRespawn_Params
{
};

// Function Astro.PlayController.ResetInputMode
struct APlayController_ResetInputMode_Params
{
};

// Function Astro.PlayController.ReapplySavedCharacterCustomization
struct APlayController_ReapplySavedCharacterCustomization_Params
{
};

// Function Astro.PlayController.PreviewCharacterCustomization
struct APlayController_PreviewCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                customizationToPreview;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.PlayController.Ping
struct APlayController_Ping_Params
{
};

// Function Astro.PlayController.OnReceiveUsePressed
struct APlayController_OnReceiveUsePressed_Params
{
};

// Function Astro.PlayController.OnReceiveToggleDeformMenuPressed
struct APlayController_OnReceiveToggleDeformMenuPressed_Params
{
};

// Function Astro.PlayController.OnReceivePlaceTetherRepeat
struct APlayController_OnReceivePlaceTetherRepeat_Params
{
};

// Function Astro.PlayController.OnReceivePlaceTetherPressed
struct APlayController_OnReceivePlaceTetherPressed_Params
{
};

// Function Astro.PlayController.OnReceiveDeployCreativeDronePressed
struct APlayController_OnReceiveDeployCreativeDronePressed_Params
{
};

// Function Astro.PlayController.OnReceiveChangeDeformBrushStrengthModifierReleased
struct APlayController_OnReceiveChangeDeformBrushStrengthModifierReleased_Params
{
};

// Function Astro.PlayController.OnReceiveChangeDeformBrushStrengthModifierPressed
struct APlayController_OnReceiveChangeDeformBrushStrengthModifierPressed_Params
{
};

// Function Astro.PlayController.OnReceiveChangeDeformBrushSizeModifierReleased
struct APlayController_OnReceiveChangeDeformBrushSizeModifierReleased_Params
{
};

// Function Astro.PlayController.OnReceiveChangeDeformBrushSizeModifierPressed
struct APlayController_OnReceiveChangeDeformBrushSizeModifierPressed_Params
{
};

// Function Astro.PlayController.OnReceiveBackpackToggleInput
struct APlayController_OnReceiveBackpackToggleInput_Params
{
};

// Function Astro.PlayController.OnLoadScreenComplete
struct APlayController_OnLoadScreenComplete_Params
{
};

// Function Astro.PlayController.OnIncrementCreativeBrushSizeControllerRepeat
struct APlayController_OnIncrementCreativeBrushSizeControllerRepeat_Params
{
};

// Function Astro.PlayController.OnIncrementCreativeBrushIntensityControllerRepeat
struct APlayController_OnIncrementCreativeBrushIntensityControllerRepeat_Params
{
};

// Function Astro.PlayController.OnDepartedPlanet
struct APlayController_OnDepartedPlanet_Params
{
};

// Function Astro.PlayController.OnDecrementCreativeBrushIntensityControllerRepeat
struct APlayController_OnDecrementCreativeBrushIntensityControllerRepeat_Params
{
};

// Function Astro.PlayController.OnCharacterLocalSolarBodyChanged
struct APlayController_OnCharacterLocalSolarBodyChanged_Params
{
	class ASolarBody*                                  newLocalSolarBody;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.OnArrivedPlanet
struct APlayController_OnArrivedPlanet_Params
{
};

// Function Astro.PlayController.MouseWheelUp
struct APlayController_MouseWheelUp_Params
{
};

// Function Astro.PlayController.MouseWheelDown
struct APlayController_MouseWheelDown_Params
{
};

// Function Astro.PlayController.MouseWheel
struct APlayController_MouseWheel_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.KillAstroForEmergencyRespawn
struct APlayController_KillAstroForEmergencyRespawn_Params
{
};

// Function Astro.PlayController.Jump
struct APlayController_Jump_Params
{
};

// Function Astro.PlayController.IsUsingActiveGrabGamepad
struct APlayController_IsUsingActiveGrabGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.IsTerrainBrushLightActive
struct APlayController_IsTerrainBrushLightActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.IsCreativeShowLODAnchorRangeVisualizationEnabled
struct APlayController_IsCreativeShowLODAnchorRangeVisualizationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.IsCreativeRemoveDecoratorsWhilePaintingEnabled
struct APlayController_IsCreativeRemoveDecoratorsWhilePaintingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.IsCreativeModeDeformMenuActive
struct APlayController_IsCreativeModeDeformMenuActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.IsCreativeCollectResourcesWhileDeformingDisabled
struct APlayController_IsCreativeCollectResourcesWhileDeformingDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.InitializeSpawnPointsForPlayer
struct APlayController_InitializeSpawnPointsForPlayer_Params
{
};

// Function Astro.PlayController.IncrementHoldCounter
struct APlayController_IncrementHoldCounter_Params
{
};

// Function Astro.PlayController.HandleKeyboardMouseKeyJustPressed
struct APlayController_HandleKeyboardMouseKeyJustPressed_Params
{
};

// Function Astro.PlayController.HandleGamepadKeyJustPressed
struct APlayController_HandleGamepadKeyJustPressed_Params
{
};

// Function Astro.PlayController.HandleGameMenuPopoutCameraContext
struct APlayController_HandleGameMenuPopoutCameraContext_Params
{
	bool                                               GameMenuPopoutEnabled;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.HandleCreativeModeEnabledChanged
struct APlayController_HandleCreativeModeEnabledChanged_Params
{
	bool                                               CreativeModeEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.HandleBackpackCameraContext
struct APlayController_HandleBackpackCameraContext_Params
{
	bool                                               BackpackEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.GetWindIntensity
struct APlayController_GetWindIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetWindDirection
struct APlayController_GetWindDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetTracedActor
struct APlayController_GetTracedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetTertiaryActor
struct APlayController_GetTertiaryActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetSpawnLocation
struct APlayController_GetSpawnLocation_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayController.GetSecondaryViewActor
struct APlayController_GetSecondaryViewActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetSecondaryBehavior
struct APlayController_GetSecondaryBehavior_Params
{
	EClickBehavior                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetSecondaryActor
struct APlayController_GetSecondaryActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetPrimaryViewIndicatorScale
struct APlayController_GetPrimaryViewIndicatorScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetPrimaryViewComponent
struct APlayController_GetPrimaryViewComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayController.GetPrimaryViewActor
struct APlayController_GetPrimaryViewActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetPrimaryBehavior
struct APlayController_GetPrimaryBehavior_Params
{
	EClickBehavior                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetPrimaryActor
struct APlayController_GetPrimaryActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetMultitool
struct APlayController_GetMultitool_Params
{
	class UMultiTool*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayController.GetLocalSolarBody
struct APlayController_GetLocalSolarBody_Params
{
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetHoldCounter
struct APlayController_GetHoldCounter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetCursorVector
struct APlayController_GetCursorVector_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetCameraRotation
struct APlayController_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetCameraLocation
struct APlayController_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetCameraInput
struct APlayController_GetCameraInput_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.GetCamera
struct APlayController_GetCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayController.GetAstroCharacter
struct APlayController_GetAstroCharacter_Params
{
	class AAstroCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.EngageUseModifier
struct APlayController_EngageUseModifier_Params
{
};

// Function Astro.PlayController.EngageQuickSelectModifier
struct APlayController_EngageQuickSelectModifier_Params
{
};

// Function Astro.PlayController.EnableVirtualCursor
struct APlayController_EnableVirtualCursor_Params
{
	bool                                               CenterCursor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.EnablePlanetSelection
struct APlayController_EnablePlanetSelection_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  NewHomeBody;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              planetSelectionDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.EnableLandSelection
struct APlayController_EnableLandSelection_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayController.EmoteTwo
struct APlayController_EmoteTwo_Params
{
};

// Function Astro.PlayController.EmoteThree
struct APlayController_EmoteThree_Params
{
};

// Function Astro.PlayController.EmoteOne
struct APlayController_EmoteOne_Params
{
};

// Function Astro.PlayController.EmoteFour
struct APlayController_EmoteFour_Params
{
};

// Function Astro.PlayController.DropHeldItem
struct APlayController_DropHeldItem_Params
{
};

// Function Astro.PlayController.DisengageUseModifier
struct APlayController_DisengageUseModifier_Params
{
};

// Function Astro.PlayController.DisengageQuickSelectModifier
struct APlayController_DisengageQuickSelectModifier_Params
{
};

// Function Astro.PlayController.DisengageInteractionModifiers
struct APlayController_DisengageInteractionModifiers_Params
{
};

// Function Astro.PlayController.DisableVirtualCursor
struct APlayController_DisableVirtualCursor_Params
{
};

// Function Astro.PlayController.DebugFOVUp
struct APlayController_DebugFOVUp_Params
{
};

// Function Astro.PlayController.DebugFOVDown
struct APlayController_DebugFOVDown_Params
{
};

// Function Astro.PlayController.CycleCameraMode
struct APlayController_CycleCameraMode_Params
{
};

// Function Astro.PlayController.ContextRightReleased
struct APlayController_ContextRightReleased_Params
{
};

// Function Astro.PlayController.ContextRightPressed
struct APlayController_ContextRightPressed_Params
{
};

// Function Astro.PlayController.ContextLeftReleased
struct APlayController_ContextLeftReleased_Params
{
};

// Function Astro.PlayController.ContextLeftPressed
struct APlayController_ContextLeftPressed_Params
{
};

// Function Astro.PlayController.ClientPresentUnlockNotification
struct APlayController_ClientPresentUnlockNotification_Params
{
	struct FAstroNotificationUnlockAuthoringData       AuthoringData;                                            // (Parm)
};

// Function Astro.PlayController.ClientNotifyPlayerRespawned
struct APlayController_ClientNotifyPlayerRespawned_Params
{
};

// Function Astro.PlayController.ClientNotifyPlayerDeathBegin
struct APlayController_ClientNotifyPlayerDeathBegin_Params
{
};

// Function Astro.PlayController.ClearSaveFailedErrorData
struct APlayController_ClearSaveFailedErrorData_Params
{
};

// Function Astro.PlayController.AttemptToPlaceArbitaryItemInHandForHolding
struct APlayController_AttemptToPlaceArbitaryItemInHandForHolding_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlayController.AttemptToDecrementCreativeBrushSizeController
struct APlayController_AttemptToDecrementCreativeBrushSizeController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCheatManager.ToggleStreamingPowerDebugVis
struct UAstroCheatManager_ToggleStreamingPowerDebugVis_Params
{
};

// Function Astro.AstroCheatManager.ToggleSelectionOutline
struct UAstroCheatManager_ToggleSelectionOutline_Params
{
};

// Function Astro.AstroCheatManager.ToggleDrillUI
struct UAstroCheatManager_ToggleDrillUI_Params
{
};

// Function Astro.AstroCheatManager.ServerRevealGateStation
struct UAstroCheatManager_ServerRevealGateStation_Params
{
};

// Function Astro.AstroCheatManager.ServerPlayOutroCinematic
struct UAstroCheatManager_ServerPlayOutroCinematic_Params
{
};

// Function Astro.AstroCheatManager.ServerGrantResearchPoints
struct UAstroCheatManager_ServerGrantResearchPoints_Params
{
	int                                                numResearchPoints;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCheatManager.AstroToggleWorldUI
struct UAstroCheatManager_AstroToggleWorldUI_Params
{
};

// Function Astro.AstroCheatManager.AstroToggleHUD
struct UAstroCheatManager_AstroToggleHUD_Params
{
};

// Function Astro.AstroCheatManager.AstroToggle2DUI
struct UAstroCheatManager_AstroToggle2DUI_Params
{
};

// Function Astro.AstroCheatManager.AstroRevealGateStation
struct UAstroCheatManager_AstroRevealGateStation_Params
{
};

// Function Astro.AstroCheatManager.AstroResetNumTimesCreativeTutorialShown
struct UAstroCheatManager_AstroResetNumTimesCreativeTutorialShown_Params
{
};

// Function Astro.AstroCheatManager.AstroResetEarnedItemDrivePhysicalRewards
struct UAstroCheatManager_AstroResetEarnedItemDrivePhysicalRewards_Params
{
};

// Function Astro.AstroCheatManager.AstroPlayOutroCinematic
struct UAstroCheatManager_AstroPlayOutroCinematic_Params
{
};

// Function Astro.AstroCheatManager.AstroGrantResearchPoints
struct UAstroCheatManager_AstroGrantResearchPoints_Params
{
	int                                                numResearchPoints;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroCheatManager.AstroFindVintageProbe
struct UAstroCheatManager_AstroFindVintageProbe_Params
{
};

// Function Astro.AstroCheatManager.AstroDebugFakeDeadlockAndCrash
struct UAstroCheatManager_AstroDebugFakeDeadlockAndCrash_Params
{
};

// Function Astro.AstroCheatManager.AstroAllProbesSpawnWandererRealityTear
struct UAstroCheatManager_AstroAllProbesSpawnWandererRealityTear_Params
{
	bool                                               bAlwaysSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Vehicles_ShowDrillDebugVis
struct UAstroChickenBitsControls_GetCvar_Vehicles_ShowDrillDebugVis_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Vehicles_ApplyDrillDeformations
struct UAstroChickenBitsControls_GetCvar_Vehicles_ApplyDrillDeformations_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Vehicles_AllowConstraintConnections
struct UAstroChickenBitsControls_GetCvar_Vehicles_AllowConstraintConnections_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Menu_AlwaysPlayIntroCutscene
struct UAstroChickenBitsControls_GetCvar_Menu_AlwaysPlayIntroCutscene_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Menu_AllowSaveFileRenaming
struct UAstroChickenBitsControls_GetCvar_Menu_AllowSaveFileRenaming_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Menu_AllowSaveFileDuplication
struct UAstroChickenBitsControls_GetCvar_Menu_AllowSaveFileDuplication_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Controls_UseItemMoveTierRestrictions
struct UAstroChickenBitsControls_GetCvar_Controls_UseItemMoveTierRestrictions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Controls_UseActiveGrab
struct UAstroChickenBitsControls_GetCvar_Controls_UseActiveGrab_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsControls.GetCvar_Controls_EnableCreativeDrone
struct UAstroChickenBitsControls_GetCvar_Controls_EnableCreativeDrone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsPower.GetCvar_Power_VisualizeWindPowerGenerators
struct UAstroChickenBitsPower_GetCvar_Power_VisualizeWindPowerGenerators_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsPower.GetCvar_Power_UseStreamingPowerDebugVisualization
struct UAstroChickenBitsPower_GetCvar_Power_UseStreamingPowerDebugVisualization_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroChickenBitsPower.GetCvar_Power_UseStreamingPower
struct UAstroChickenBitsPower_GetCvar_Power_UseStreamingPower_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroDatumContainer.MakeDatumRef_DO_NOT_USE_FROM_CPP
struct UAstroDatumContainer_MakeDatumRef_DO_NOT_USE_FROM_CPP_Params
{
	struct FAstroDatum                                 Datum;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAstroDatumRef                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroDatumContainer.IsDatumRefValid_DO_NOT_USE_FROM_CPP
struct UAstroDatumContainer_IsDatumRefValid_DO_NOT_USE_FROM_CPP_Params
{
	struct FAstroDatumRef                              DatumRef;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroEntityComponentContainer.GetEntityComponent
struct UAstroEntityComponentContainer_GetEntityComponent_Params
{
	struct FAstroDatumRef                              ComponentRef;                                             // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroEntityComponent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroEntitySceneComponentContainer.GetEntitySceneComponent
struct UAstroEntitySceneComponentContainer_GetEntitySceneComponent_Params
{
	struct FAstroDatumRef                              SceneComponentRef;                                        // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroEntitySceneComponent                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroEntityWorld.SaveGameSerializeCustom
struct UAstroEntityWorld_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroEntityWorld.GetOwnerEntity
struct UAstroEntityWorld_GetOwnerEntity_Params
{
	struct FAstroDatumRef                              EntityComponentRef;                                       // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroDatumRef                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroEntityWorld.GetEntityRootComponentRef
struct UAstroEntityWorld_GetEntityRootComponentRef_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroDatumRef                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroEntityWorld.GetEntityComponentRefByName
struct UAstroEntityWorld_GetEntityComponentRefByName_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	struct FName                                       ComponentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroDatumRef                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroEntityWorld.GetEntityComponentDatumRefs
struct UAstroEntityWorld_GetEntityComponentDatumRefs_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroDatumRef>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameInstance.NotifyWaitForInputScreenComplete
struct UAstroGameInstance_NotifyWaitForInputScreenComplete_Params
{
};

// Function Astro.AstroGameInstance.NotifyTutorialStartSelected
struct UAstroGameInstance_NotifyTutorialStartSelected_Params
{
};

// Function Astro.AstroGameInstance.NotifyStartingGameDropshipSpawned
struct UAstroGameInstance_NotifyStartingGameDropshipSpawned_Params
{
};

// Function Astro.AstroGameInstance.NotifyPlayerRespondedToWaitForInputScreen
struct UAstroGameInstance_NotifyPlayerRespondedToWaitForInputScreen_Params
{
	int                                                playerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.NotifyPlayerExitedStartingDropship
struct UAstroGameInstance_NotifyPlayerExitedStartingDropship_Params
{
};

// Function Astro.AstroGameInstance.NotifyPlayerConfirmedChangeUsers
struct UAstroGameInstance_NotifyPlayerConfirmedChangeUsers_Params
{
};

// Function Astro.AstroGameInstance.NotifyPlayerCancelledChangeUsers
struct UAstroGameInstance_NotifyPlayerCancelledChangeUsers_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationUnlockTooltipInvalidated
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationUnlockTooltipInvalidated_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationStarted
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationStarted_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationFinalizationStarted
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationFinalizationStarted_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationFinalizationCanceled
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationFinalizationCanceled_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationCommitted
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationCommitted_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnTitleScreenCharacterCustomizationCanceled
struct UAstroGameInstance_NotifyOnTitleScreenCharacterCustomizationCanceled_Params
{
};

// Function Astro.AstroGameInstance.NotifyOnEmotePreviewRequested
struct UAstroGameInstance_NotifyOnEmotePreviewRequested_Params
{
	class UAstroEmoteDefinition*                       emoteDefinition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isLocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   lockedTooltipDisplayData;                                 // (Parm)
};

// Function Astro.AstroGameInstance.NotifyOnCharacterCustomizationPreviewRequested
struct UAstroGameInstance_NotifyOnCharacterCustomizationPreviewRequested_Params
{
	struct FAstroCharacterCustomization                customizationToPreview;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               isLocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   lockedTooltipDisplayData;                                 // (Parm)
};

// Function Astro.AstroGameInstance.NotifyNewGameSetupComplete
struct UAstroGameInstance_NotifyNewGameSetupComplete_Params
{
};

// Function Astro.AstroGameInstance.NotifyLoadScreenFadeoutComplete
struct UAstroGameInstance_NotifyLoadScreenFadeoutComplete_Params
{
};

// Function Astro.AstroGameInstance.NotifyLoadScreenComplete
struct UAstroGameInstance_NotifyLoadScreenComplete_Params
{
	bool                                               RemoveFromViewport;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.NotifyIntroCinematicComplete
struct UAstroGameInstance_NotifyIntroCinematicComplete_Params
{
};

// DelegateFunction Astro.AstroGameInstance.MessageOfTheDayUpdated__DelegateSignature
struct UAstroGameInstance_MessageOfTheDayUpdated__DelegateSignature_Params
{
	class UMessageOfTheDay*                            InMessageOfTheDay;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.IsPlayTogetherSessionPending
struct UAstroGameInstance_IsPlayTogetherSessionPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.IsLoadingScreenActive
struct UAstroGameInstance_IsLoadingScreenActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.IsGameLicenseValid
struct UAstroGameInstance_IsGameLicenseValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.IsGameInTrialMode
struct UAstroGameInstance_IsGameInTrialMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.HasIntroCinematicCompleted
struct UAstroGameInstance_HasIntroCinematicCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.HasGameSessionStarted
struct UAstroGameInstance_HasGameSessionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.HandleServerListCacheUpdated
struct UAstroGameInstance_HandleServerListCacheUpdated_Params
{
};

// Function Astro.AstroGameInstance.HandleFriendsListCacheUpdated
struct UAstroGameInstance_HandleFriendsListCacheUpdated_Params
{
};

// Function Astro.AstroGameInstance.HandleFriendJoinRequestSucceeded
struct UAstroGameInstance_HandleFriendJoinRequestSucceeded_Params
{
	struct FFriendJoinRequestSucceededPayload          joinRequestSucceededPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroGameInstance.HandleFriendJoinRequestFailed
struct UAstroGameInstance_HandleFriendJoinRequestFailed_Params
{
	EAstroFriendJoinRequestFailure                     JoinFailureReason;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.GetTitleData
struct UAstroGameInstance_GetTitleData_Params
{
	struct FAstroPlayFabTitleData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameInstance.GetPlayFabTxnManager
struct UAstroGameInstance_GetPlayFabTxnManager_Params
{
	class UAstroPlayFabTxnManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.GetMicroTxnStoreData
struct UAstroGameInstance_GetMicroTxnStoreData_Params
{
	struct FAstroPlayFabMicroTxnStoreData              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameInstance.GetEstimatedLoadPercentage
struct UAstroGameInstance_GetEstimatedLoadPercentage_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameInstance.DisplayLoadScreenWidget
struct UAstroGameInstance_DisplayLoadScreenWidget_Params
{
	class UClass*                                      overrideWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.DisplayConfirmChangeUsersPopup
struct UAstroGameInstance_DisplayConfirmChangeUsersPopup_Params
{
};

// Function Astro.AstroGameInstance.DebugLicenseOverride
struct UAstroGameInstance_DebugLicenseOverride_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameInstance.DebugExpirationOverride
struct UAstroGameInstance_DebugExpirationOverride_Params
{
};

// Function Astro.AstroGameInstance.AllowLoadingScreenDismiss
struct UAstroGameInstance_AllowLoadingScreenDismiss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.UserWidgetBlueprintDesignable.SetupStylingData
struct UUserWidgetBlueprintDesignable_SetupStylingData_Params
{
};

// Function Astro.UserWidgetBlueprintDesignable.PostLayoutWidget
struct UUserWidgetBlueprintDesignable_PostLayoutWidget_Params
{
};

// Function Astro.UserWidgetBlueprintDesignable.OnSynchronizeProperties
struct UUserWidgetBlueprintDesignable_OnSynchronizeProperties_Params
{
};

// Function Astro.UserWidgetBlueprintDesignable.LayoutWidget
struct UUserWidgetBlueprintDesignable_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.UserWidgetBlueprintDesignable.GetStylingDataSetupComplete
struct UUserWidgetBlueprintDesignable_GetStylingDataSetupComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateVisorSelectionOption
struct UAstroGameMenuCustomizationSubsection_UpdateVisorSelectionOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateUnlockSelectionsFromPlayfabData
struct UAstroGameMenuCustomizationSubsection_UpdateUnlockSelectionsFromPlayfabData_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateSuitSelectionOption
struct UAstroGameMenuCustomizationSubsection_UpdateSuitSelectionOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdatePaletteSelectionOption
struct UAstroGameMenuCustomizationSubsection_UpdatePaletteSelectionOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateMaskSelectionOption
struct UAstroGameMenuCustomizationSubsection_UpdateMaskSelectionOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateHatSelectionOption
struct UAstroGameMenuCustomizationSubsection_UpdateHatSelectionOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.UpdateEmoteSlots
struct UAstroGameMenuCustomizationSubsection_UpdateEmoteSlots_Params
{
	bool                                               WithLayout;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.SetupEmoteSlots
struct UAstroGameMenuCustomizationSubsection_SetupEmoteSlots_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.SetCurrentlyCommittedCharacterCustomizationOptions
struct UAstroGameMenuCustomizationSubsection_SetCurrentlyCommittedCharacterCustomizationOptions_Params
{
	struct FAstroCharacterCustomization                CharacterCustomization;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuCustomizationSubsection.OnSubsectionClosed
struct UAstroGameMenuCustomizationSubsection_OnSubsectionClosed_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.NotifySubsectionClosed
struct UAstroGameMenuCustomizationSubsection_NotifySubsectionClosed_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.MakeVisorSelectionOptions
struct UAstroGameMenuCustomizationSubsection_MakeVisorSelectionOptions_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.MakeSuitSelectionOptions
struct UAstroGameMenuCustomizationSubsection_MakeSuitSelectionOptions_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.MakePaletteSelectionOptions
struct UAstroGameMenuCustomizationSubsection_MakePaletteSelectionOptions_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.MakeMaskSelectionOptions
struct UAstroGameMenuCustomizationSubsection_MakeMaskSelectionOptions_Params
{
};

// Function Astro.AstroGameMenuCustomizationSubsection.MakeHatSelectionOptions
struct UAstroGameMenuCustomizationSubsection_MakeHatSelectionOptions_Params
{
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.RemoveMouseFocusSuppression
struct UAstroGameMenuFocusItemContainerWidget_RemoveMouseFocusSuppression_Params
{
	EMouseFocusChangeSuppressionSource                 MouseSuppression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.OnFocusIndexChanged
struct UAstroGameMenuFocusItemContainerWidget_OnFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.IsMouseFocusSuppressed
struct UAstroGameMenuFocusItemContainerWidget_IsMouseFocusSuppressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.HandleLastUsedItemChanged
struct UAstroGameMenuFocusItemContainerWidget_HandleLastUsedItemChanged_Params
{
	bool                                               IsLastUsedItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               LastUsedWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.HandleFocusedItemChanged
struct UAstroGameMenuFocusItemContainerWidget_HandleFocusedItemChanged_Params
{
	bool                                               IsFocused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.GetCurrentFocusItem
struct UAstroGameMenuFocusItemContainerWidget_GetCurrentFocusItem_Params
{
	class UAstroGameMenuFocusItemWidget*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToUseFocusedItemViaMouse
struct UAstroGameMenuFocusItemContainerWidget_AttemptToUseFocusedItemViaMouse_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToToggleEditFocusedItem
struct UAstroGameMenuFocusItemContainerWidget_AttemptToToggleEditFocusedItem_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToStartDragEditFocusedItem
struct UAstroGameMenuFocusItemContainerWidget_AttemptToStartDragEditFocusedItem_Params
{
	struct FVector2D                                   MousePos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToIncrementCurrentlyEditedItem
struct UAstroGameMenuFocusItemContainerWidget_AttemptToIncrementCurrentlyEditedItem_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToDecrementCurrentlyEditedItem
struct UAstroGameMenuFocusItemContainerWidget_AttemptToDecrementCurrentlyEditedItem_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AttemptToCancelDragOrEditFocusItem
struct UAstroGameMenuFocusItemContainerWidget_AttemptToCancelDragOrEditFocusItem_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuFocusItemContainerWidget.AddMouseFocusSuppression
struct UAstroGameMenuFocusItemContainerWidget_AddMouseFocusSuppression_Params
{
	EMouseFocusChangeSuppressionSource                 MouseSuppression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.SetInteractionBlocked
struct UAstroGameMenuFocusItemWidget_SetInteractionBlocked_Params
{
	bool                                               IsInteractionBlocked;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.IsInteractionBlocked
struct UAstroGameMenuFocusItemWidget_IsInteractionBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.GetMenuFocusWidgetSize
struct UAstroGameMenuFocusItemWidget_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.GetIsBeingDragged
struct UAstroGameMenuFocusItemWidget_GetIsBeingDragged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.GetIsBeingDiscretelyEdited
struct UAstroGameMenuFocusItemWidget_GetIsBeingDiscretelyEdited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuFocusItemWidget.ForceCommitDiscreteEditing
struct UAstroGameMenuFocusItemWidget_ForceCommitDiscreteEditing_Params
{
};

// Function Astro.AstroGameMenuFocusItemWidget.AttemptToCommitDiscreteEdit
struct UAstroGameMenuFocusItemWidget_AttemptToCommitDiscreteEdit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuSpatialWindow.GetUnboundedDimensionOfSubPane
struct UAstroGameMenuSpatialWindow_GetUnboundedDimensionOfSubPane_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuSpatialWindow.GetTotalHeightOfSubPaneFocusItemWidgets
struct UAstroGameMenuSpatialWindow_GetTotalHeightOfSubPaneFocusItemWidgets_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuSpatialWindow.GetMaxWidthOfSubPaneFocusItemWidgets
struct UAstroGameMenuSpatialWindow_GetMaxWidthOfSubPaneFocusItemWidgets_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuSpatialWindow.GetLocalPositionOfFocusItemWidget
struct UAstroGameMenuSpatialWindow_GetLocalPositionOfFocusItemWidget_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuPopoutWidget.GetPopoutPanelWrapper
struct UAstroGameMenuPopoutWidget_GetPopoutPanelWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuPopoutWidget.GetPopoutOutermostContainer
struct UAstroGameMenuPopoutWidget_GetPopoutOutermostContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuPopoutWidget.GetPopoutContentsWrapper
struct UAstroGameMenuPopoutWidget_GetPopoutContentsWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuPopoutWidgetContentsBase.HandleWrapperFocusIndexChanged
struct UAstroGameMenuPopoutWidgetContentsBase_HandleWrapperFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuPopoutWidgetContentsBase.HandleNavigationBackRequest
struct UAstroGameMenuPopoutWidgetContentsBase_HandleNavigationBackRequest_Params
{
};

// Function Astro.AstroGameMenuScrollBarBase.SetScrollBarHandlePositionNormalized
struct UAstroGameMenuScrollBarBase_SetScrollBarHandlePositionNormalized_Params
{
	float                                              NormalizedPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.SetScrollBarHandlePosition
struct UAstroGameMenuScrollBarBase_SetScrollBarHandlePosition_Params
{
	float                                              Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.IsScrollBarActive
struct UAstroGameMenuScrollBarBase_IsScrollBarActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.HandleTargetFocusItemChanged
struct UAstroGameMenuScrollBarBase_HandleTargetFocusItemChanged_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.GetScrollBarWidth
struct UAstroGameMenuScrollBarBase_GetScrollBarWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.GetScrollBarHandlePositionNormalized
struct UAstroGameMenuScrollBarBase_GetScrollBarHandlePositionNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.GetScrollBarHandlePosition
struct UAstroGameMenuScrollBarBase_GetScrollBarHandlePosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.DeactivateScrollBar
struct UAstroGameMenuScrollBarBase_DeactivateScrollBar_Params
{
};

// Function Astro.AstroGameMenuScrollBarBase.AddScrollDelta
struct UAstroGameMenuScrollBarBase_AddScrollDelta_Params
{
	float                                              ScrollDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuScrollBarBase.ActivateScrollBar
struct UAstroGameMenuScrollBarBase_ActivateScrollBar_Params
{
	float                                              NewViewableHeightOfScrollTargetContainer;                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalPaddingOfScrollTargetContainer;                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuSubPaneWidget*                 NewScrollBarTarget;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.TryGetCurrentGameMenuContext
struct UAstroGameMenuStatics_TryGetCurrentGameMenuContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAstroGameMenuContext                              OutCurrentMenuContext;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.SetIsPreviewingCharacterCustomizationFromTitleScreen
struct UAstroGameMenuStatics_SetIsPreviewingCharacterCustomizationFromTitleScreen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreviewing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.RestoreKeyboardFocusToGameMenu
struct UAstroGameMenuStatics_RestoreKeyboardFocusToGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.ResizeCurrentPopout
struct UAstroGameMenuStatics_ResizeCurrentPopout_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.RemoveMouseFocusSuppressionFromCurrentSubPane
struct UAstroGameMenuStatics_RemoveMouseFocusSuppressionFromCurrentSubPane_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EMouseFocusChangeSuppressionSource                 MouseSuppression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.PushNavigationStackCoordinates
struct UAstroGameMenuStatics_PushNavigationStackCoordinates_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroGameMenuNavigationCoordinates         NavCoordinates;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroGameMenuStatics.PresentTitleGameMenu
struct UAstroGameMenuStatics_PresentTitleGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.PresentGameMenuPopoutWidgetPreconstructed
struct UAstroGameMenuStatics_PresentGameMenuPopoutWidgetPreconstructed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               OwningFocusItem;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroGameMenuPopoutWidgetContentsBase*      PopoutContents;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroGameMenuPopoutWidget*                  PopoutWrapper;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroGameMenuPopoutWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.PresentGameMenuPopoutWidget
struct UAstroGameMenuStatics_PresentGameMenuPopoutWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               OwningFocusItem;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroGameMenuPopoutWidgetContentsBase*      PopoutContents;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      OptionalCustomPopoutWrapper;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuPopoutWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.PopNavigationStack
struct UAstroGameMenuStatics_PopNavigationStack_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.LockGameMenuControls
struct UAstroGameMenuStatics_LockGameMenuControls_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isLocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.LayoutGameMenuActiveSubPane
struct UAstroGameMenuStatics_LayoutGameMenuActiveSubPane_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.LayoutGameMenu
struct UAstroGameMenuStatics_LayoutGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.IsPreviewingCharacterCustomizationFromTitleScreen
struct UAstroGameMenuStatics_IsPreviewingCharacterCustomizationFromTitleScreen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.IsMenuEntryBeingEditedOrDragged
struct UAstroGameMenuStatics_IsMenuEntryBeingEditedOrDragged_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.IsGameMenuTabBarAuthoringDataValid
struct UAstroGameMenuStatics_IsGameMenuTabBarAuthoringDataValid_Params
{
	struct FAstroGameMenuTabBarAuthoringData           tabBarData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetTutorialSlideDeck
struct UAstroGameMenuStatics_GetTutorialSlideDeck_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAstroGameMenuTutorialSlideDeckKey                 TutorialSlideDeckKey;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroGameMenuTutorialSlideDeck             OutTutorialSlideDeckData;                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetTutorialSlideCard
struct UAstroGameMenuStatics_GetTutorialSlideCard_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAstroGameMenuTutoriaSlideCardKey                  TutorialSlideCardKey;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroGameMenuTutorialSlide                 OutTutorialSlideCardData;                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetOriginOfActiveSubPaneContentsRegion
struct UAstroGameMenuStatics_GetOriginOfActiveSubPaneContentsRegion_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetMOTDWidget
struct UAstroGameMenuStatics_GetMOTDWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetKeybindingForDiscreteInputMapping
struct UAstroGameMenuStatics_GetKeybindingForDiscreteInputMapping_Params
{
	struct FAstroDiscreteInputDefinition               DiscreteInputDefinition;                                  // (Parm)
	struct FKey                                        OutKey;                                                   // (Parm, OutParm)
	bool                                               OutIsAxis;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetCachedSizeOfGameMenu
struct UAstroGameMenuStatics_GetCachedSizeOfGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeScrollBarSize;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GetAchievementProgressionWarningWidget
struct UAstroGameMenuStatics_GetAchievementProgressionWarningWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.GameMenuTryToSaveAndQuitGame
struct UAstroGameMenuStatics_GameMenuTryToSaveAndQuitGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnToTitleScreen;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnFailedToSaveGame;                                       // (Parm, ZeroConstructor)
};

// Function Astro.AstroGameMenuStatics.GameMenuForceQuitGame
struct UAstroGameMenuStatics_GameMenuForceQuitGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnToTitleScreen;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttemptToSave;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.DismissTitleGameMenu
struct UAstroGameMenuStatics_DismissTitleGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.DismissGameMenu
struct UAstroGameMenuStatics_DismissGameMenu_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.DismissCurrentGameMenuPopoutWidget
struct UAstroGameMenuStatics_DismissCurrentGameMenuPopoutWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.ClearGameMenuSelection
struct UAstroGameMenuStatics_ClearGameMenuSelection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.ChangeSubPaneOnTopOfNavigationStack
struct UAstroGameMenuStatics_ChangeSubPaneOnTopOfNavigationStack_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewSubPane;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.ChangeMenuContext
struct UAstroGameMenuStatics_ChangeMenuContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAstroGameMenuContext                              NewMenuContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.AreGameMenuTabBarAuthoringDataEqual
struct UAstroGameMenuStatics_AreGameMenuTabBarAuthoringDataEqual_Params
{
	struct FAstroGameMenuTabBarAuthoringData           tabBarDataA;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAstroGameMenuTabBarAuthoringData           tabBarDataB;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.AreGameMenuControlsLocked
struct UAstroGameMenuStatics_AreGameMenuControlsLocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuStatics.AddMouseFocusSuppressionToCurrentSubPane
struct UAstroGameMenuStatics_AddMouseFocusSuppressionToCurrentSubPane_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EMouseFocusChangeSuppressionSource                 MouseSuppression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuSubPaneWidget.NavigatedAwayFrom
struct UAstroGameMenuSubPaneWidget_NavigatedAwayFrom_Params
{
	bool                                               isNavigateBack;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuSubPaneWidget.MenuBeingClosed
struct UAstroGameMenuSubPaneWidget_MenuBeingClosed_Params
{
};

// Function Astro.AstroGameMenuSubPaneWidget.AttemptToUseFocusedItemViaMouse
struct UAstroGameMenuSubPaneWidget_AttemptToUseFocusedItemViaMouse_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameMenuTabBarWidget.GetHeightOfTabBar
struct UAstroGameMenuTabBarWidget_GetHeightOfTabBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Astro.AstroGameMenuWidget.OnMenuOpenClose__DelegateSignature
struct UAstroGameMenuWidget_OnMenuOpenClose__DelegateSignature_Params
{
	EAstroGameMenuContext                              GameMenuContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.LockControls
struct UAstroGameMenuWidget_LockControls_Params
{
	bool                                               bLockControls;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.HandleDebugMenuVisbilityChanged
struct UAstroGameMenuWidget_HandleDebugMenuVisbilityChanged_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetVerticalPaddingForContentSubPaneRegion
struct UAstroGameMenuWidget_GetVerticalPaddingForContentSubPaneRegion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetTabBarWidget
struct UAstroGameMenuWidget_GetTabBarWidget_Params
{
	class UAstroGameMenuTabBarWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetSubPaneWrapper
struct UAstroGameMenuWidget_GetSubPaneWrapper_Params
{
	class UBorder*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetPopoutWrapper
struct UAstroGameMenuWidget_GetPopoutWrapper_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetOriginOfActiveSubPaneContentsRegion
struct UAstroGameMenuWidget_GetOriginOfActiveSubPaneContentsRegion_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetMOTDWidget
struct UAstroGameMenuWidget_GetMOTDWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetMenuContentsWrapper
struct UAstroGameMenuWidget_GetMenuContentsWrapper_Params
{
	class UVerticalBox*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetMaxHeightOfContentSubPaneRegion
struct UAstroGameMenuWidget_GetMaxHeightOfContentSubPaneRegion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetLowerBoundOfMenu
struct UAstroGameMenuWidget_GetLowerBoundOfMenu_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetBoundedSizeOfMenu
struct UAstroGameMenuWidget_GetBoundedSizeOfMenu_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.GetAchievementProgressionWarningWidget
struct UAstroGameMenuWidget_GetAchievementProgressionWarningWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMenuWidget.BackToMainMenuHack
struct UAstroGameMenuWidget_BackToMainMenuHack_Params
{
};

// Function Astro.AstroGameMode.UnregisterSpawnPointActorAttachmentsComponent
struct AAstroGameMode_UnregisterSpawnPointActorAttachmentsComponent_Params
{
	class UStorageChassisComponent*                    spawnPoint;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMode.SwitchLifecycleState
struct AAstroGameMode_SwitchLifecycleState_Params
{
	EGameLifecycleState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroGameMode.SpawnPlayerFromHistory
struct AAstroGameMode_SpawnPlayerFromHistory_Params
{
	int64_t                                            NetworkUuid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMode.SetMultiplayerEnabled
struct AAstroGameMode_SetMultiplayerEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMode.ServerSaveGameName
struct AAstroGameMode_ServerSaveGameName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroGameMode.ServerSaveGameAndQuit
struct AAstroGameMode_ServerSaveGameAndQuit_Params
{
};

// Function Astro.AstroGameMode.ServerSaveGame
struct AAstroGameMode_ServerSaveGame_Params
{
};

// Function Astro.AstroGameMode.ServerNewGame
struct AAstroGameMode_ServerNewGame_Params
{
};

// Function Astro.AstroGameMode.ServerLoadGameName
struct AAstroGameMode_ServerLoadGameName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMode.RespawnPlayer
struct AAstroGameMode_RespawnPlayer_Params
{
	class APlayController*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     locationOnDeath;                                          // (Parm, IsPlainOldData)
};

// Function Astro.AstroGameMode.RegisterSpawnPointActorAttachmentsComponent
struct AAstroGameMode_RegisterSpawnPointActorAttachmentsComponent_Params
{
	class UStorageChassisComponent*                    spawnPoint;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMode.OnOutroCinematicComplete
struct AAstroGameMode_OnOutroCinematicComplete_Params
{
};

// Function Astro.AstroGameMode.OnNewGameInitiated
struct AAstroGameMode_OnNewGameInitiated_Params
{
};

// Function Astro.AstroGameMode.OnIntroCinematicFinished
struct AAstroGameMode_OnIntroCinematicFinished_Params
{
};

// Function Astro.AstroGameMode.OnIntroCinematicComplete
struct AAstroGameMode_OnIntroCinematicComplete_Params
{
};

// Function Astro.AstroGameMode.OnFullLicenseDetected
struct AAstroGameMode_OnFullLicenseDetected_Params
{
};

// Function Astro.AstroGameMode.IsPackagedBuild
struct AAstroGameMode_IsPackagedBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMode.InitializeForSolarSystem
struct AAstroGameMode_InitializeForSolarSystem_Params
{
	class USolarSystem*                                SolarSystem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMode.HandleControllingLocalPlayerLoggedOut
struct AAstroGameMode_HandleControllingLocalPlayerLoggedOut_Params
{
};

// Function Astro.AstroGameMode.GetDefaultSpawnPoint
struct AAstroGameMode_GetDefaultSpawnPoint_Params
{
	class UStorageChassisComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroGameMode.GetCurrentLifecycleState
struct AAstroGameMode_GetCurrentLifecycleState_Params
{
	EGameLifecycleState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMode.ClearCinematicTerrainPoints
struct AAstroGameMode_ClearCinematicTerrainPoints_Params
{
};

// Function Astro.AstroGameMode.AuthoritySetDefaultSpawnLocation
struct AAstroGameMode_AuthoritySetDefaultSpawnLocation_Params
{
	struct FVector                                     spawnLocation;                                            // (Parm, IsPlainOldData)
};

// Function Astro.AstroGameMode.AuthoritySelectStartingPointFromCandiates
struct AAstroGameMode_AuthoritySelectStartingPointFromCandiates_Params
{
	struct FVector                                     outStartingLocation;                                      // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    outStartingRotation;                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameMode.AuthorityAddStartingPointCandiateActor
struct AAstroGameMode_AuthorityAddStartingPointCandiateActor_Params
{
	class AActor*                                      candidateActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameMode.AddTerrainResolutionPoint
struct AAstroGameMode_AddTerrainResolutionPoint_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameSingleton.GetAstroGameSingleton
struct UAstroGameSingleton_GetAstroGameSingleton_Params
{
	class UAstroGameSingleton*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.UnregisterSpawnedStartingItem
struct AAstroGameState_UnregisterSpawnedStartingItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetOxygenFreeCreative
struct AAstroGameState_SetOxygenFreeCreative_Params
{
	bool                                               OxygenFree;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetInvisibleToHazardsCreative
struct AAstroGameState_SetInvisibleToHazardsCreative_Params
{
	bool                                               InvisibleToHazards;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetInvincibleCreative
struct AAstroGameState_SetInvincibleCreative_Params
{
	bool                                               Invincible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetFuelFreeCreative
struct AAstroGameState_SetFuelFreeCreative_Params
{
	bool                                               FreeFuelEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetCurrentObjective
struct AAstroGameState_SetCurrentObjective_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetCreativeModeActive
struct AAstroGameState_SetCreativeModeActive_Params
{
	bool                                               CreativeMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetCatalogUnlockedCreative
struct AAstroGameState_SetCatalogUnlockedCreative_Params
{
	bool                                               CatalogUnlocked;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetBackpackPowerUnlimitedCreative
struct AAstroGameState_SetBackpackPowerUnlimitedCreative_Params
{
	bool                                               BackpackPowerUnlimited;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SetAchievementProgressionDisabledCreative
struct AAstroGameState_SetAchievementProgressionDisabledCreative_Params
{
	bool                                               AchievementProgressionDisabled;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.SaveGameSerializeCustom
struct AAstroGameState_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.RemoveNewPlayerSpawnLocation
struct AAstroGameState_RemoveNewPlayerSpawnLocation_Params
{
	class AActor*                                      Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.RegisterSpawnedStartingItem
struct AAstroGameState_RegisterSpawnedStartingItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.OnRep_CreativeModeSettings
struct AAstroGameState_OnRep_CreativeModeSettings_Params
{
};

// Function Astro.AstroGameState.OnAuthorityUnlockedItemsChanged
struct AAstroGameState_OnAuthorityUnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItems;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroGameState.OnAuthorityResearchPointBalanceChanged
struct AAstroGameState_OnAuthorityResearchPointBalanceChanged_Params
{
	float                                              NewPointBalance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.OnAuthorityKnownItemsChanged
struct AAstroGameState_OnAuthorityKnownItemsChanged_Params
{
	TArray<class UClass*>                              newKnownItems;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroGameState.NotifyTutorial
struct AAstroGameState_NotifyTutorial_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowText;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.NotifyOutroCinematicCompleted
struct AAstroGameState_NotifyOutroCinematicCompleted_Params
{
};

// Function Astro.AstroGameState.MultiSoundFX
struct AAstroGameState_MultiSoundFX_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.MulticastNewMaterialPalette
struct AAstroGameState_MulticastNewMaterialPalette_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPackedVoxelMaterialInfo>            dynamicMaterials;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroGameState.MulticastNewCreativeMaterialPalette
struct AAstroGameState_MulticastNewCreativeMaterialPalette_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPackedVoxelMaterialInfo>            dynamicMaterials;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FCreativePaintMaterialMapping>       creativePaintData;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroGameState.MulticastExplosionEffects
struct AAstroGameState_MulticastExplosionEffects_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       surfTypeSwitchName;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             AudioEffects;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<class UParticleSystem*>                     ParticleEffects;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.MulticastDisplayResearchPointChange
struct AAstroGameState_MulticastDisplayResearchPointChange_Params
{
	int                                                researchPointDelta;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.MulticastDisplayGrantDurableMessage
struct AAstroGameState_MulticastDisplayGrantDurableMessage_Params
{
	class UClass*                                      itemToUnlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.MulticastAudioEventAndVFXWithTint
struct AAstroGameState_MulticastAudioEventAndVFXWithTint_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FString                                     AudioEvent;                                               // (Parm, ZeroConstructor)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function Astro.AstroGameState.MulticastAudioEventAndVFX
struct AAstroGameState_MulticastAudioEventAndVFX_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FString                                     AudioEvent;                                               // (Parm, ZeroConstructor)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.IsProbeUnlocked
struct AAstroGameState_IsProbeUnlocked_Params
{
	class AAstroCharacter*                             Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProbeName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsOxygenFreeCreative
struct AAstroGameState_IsOxygenFreeCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsInvisibleToHazardsCreative
struct AAstroGameState_IsInvisibleToHazardsCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsInvincibleCreative
struct AAstroGameState_IsInvincibleCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsGravitySimulationEnabled
struct AAstroGameState_IsGravitySimulationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsFuelFreeCreative
struct AAstroGameState_IsFuelFreeCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsCreativeModeActive
struct AAstroGameState_IsCreativeModeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsCatalogUnlockedCreative
struct AAstroGameState_IsCatalogUnlockedCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsBackpackPowerUnlimitedCreative
struct AAstroGameState_IsBackpackPowerUnlimitedCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.IsAchievementProgressionDisabled
struct AAstroGameState_IsAchievementProgressionDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.HasSaveGameCacheBeenEnumerated
struct AAstroGameState_HasSaveGameCacheBeenEnumerated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.HasEverBeenIndividualDedicatedServerGame
struct AAstroGameState_HasEverBeenIndividualDedicatedServerGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.HasEverBeenCreativeGame
struct AAstroGameState_HasEverBeenCreativeGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.GetStartingItemArrayRef
struct AAstroGameState_GetStartingItemArrayRef_Params
{
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Astro.AstroGameState.GetRewardSystem
struct AAstroGameState_GetRewardSystem_Params
{
	class URewardSystem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.GetRewardState
struct AAstroGameState_GetRewardState_Params
{
	class URewardState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.GetNearestRelevantScannable
struct AAstroGameState_GetNearestRelevantScannable_Params
{
	class AAstroCharacter*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScannableStatus                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroGameState.GetActuatorQueue
struct AAstroGameState_GetActuatorQueue_Params
{
	class UActuatorQueue*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.GetAchievementProgressionState
struct AAstroGameState_GetAchievementProgressionState_Params
{
	EAchievementProgressionState                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.DoDeformation
struct AAstroGameState_DoDeformation_Params
{
	struct FDeformationParams                          params;                                                   // (Parm)
	bool                                               shouldThrottle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.DisplayDiscoverItemTypeMessage
struct AAstroGameState_DisplayDiscoverItemTypeMessage_Params
{
	class UClass*                                      itemTypeDiscovered;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.DestroyAllSpawnedStartingItems
struct AAstroGameState_DestroyAllSpawnedStartingItems_Params
{
};

// Function Astro.AstroGameState.BroadcastUnlockedVintageProbesChanged
struct AAstroGameState_BroadcastUnlockedVintageProbesChanged_Params
{
};

// Function Astro.AstroGameState.BroadcastUnlockedItemsChanged
struct AAstroGameState_BroadcastUnlockedItemsChanged_Params
{
};

// Function Astro.AstroGameState.BroadcastResearchPointBalanceChanged
struct AAstroGameState_BroadcastResearchPointBalanceChanged_Params
{
};

// Function Astro.AstroGameState.BroadcastOnCreativeModeCatalogUnlockedChanged
struct AAstroGameState_BroadcastOnCreativeModeCatalogUnlockedChanged_Params
{
};

// Function Astro.AstroGameState.BroadcastKnownItemsChanged
struct AAstroGameState_BroadcastKnownItemsChanged_Params
{
};

// Function Astro.AstroGameState.AuthoritySetWandererRealityTearOpenState
struct AAstroGameState_AuthoritySetWandererRealityTearOpenState_Params
{
	EWandererRealityTearOpenState                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameState.AuthorityGetWandererRealityTearOpenState
struct AAstroGameState_AuthorityGetWandererRealityTearOpenState_Params
{
	EWandererRealityTearOpenState                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.ArePlayerNamesVisible
struct AAstroGameState_ArePlayerNamesVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.AreBeaconsVisible
struct AAstroGameState_AreBeaconsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameState.AddAndPrioritizeNewPlayerSpawnLocation
struct AAstroGameState_AddAndPrioritizeNewPlayerSpawnLocation_Params
{
	class AActor*                                      Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetWindowMode
struct UAstroGameUserSettings_SetWindowMode_Params
{
	TEnumAsByte<EWindowMode>                           InWindowMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetVSync
struct UAstroGameUserSettings_SetVSync_Params
{
	bool                                               InbVSync;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetVoiceVolume
struct UAstroGameUserSettings_SetVoiceVolume_Params
{
	float                                              InVoiceVolume;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetVehiclesUseYawAirControls
struct UAstroGameUserSettings_SetVehiclesUseYawAirControls_Params
{
	bool                                               InUseYawAirControls;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetVehiclesUseAbsoluteSteering
struct UAstroGameUserSettings_SetVehiclesUseAbsoluteSteering_Params
{
	bool                                               InUseAbsSteering;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetupInputMappings
struct UAstroGameUserSettings_SetupInputMappings_Params
{
	class APlayerController*                           PlayController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetToDefaults
struct UAstroGameUserSettings_SetToDefaults_Params
{
};

// Function Astro.AstroGameUserSettings.SetSfxVolume
struct UAstroGameUserSettings_SetSfxVolume_Params
{
	float                                              InSfxVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetRebindableInputActions
struct UAstroGameUserSettings_SetRebindableInputActions_Params
{
	TArray<EAstroDiscreteInputOptionPlayerFacing>      PlayerFacingRebindableInputActions;                       // (Parm, ZeroConstructor)
};

// Function Astro.AstroGameUserSettings.SetMusicVolume
struct UAstroGameUserSettings_SetMusicVolume_Params
{
	float                                              InMusicVolume;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetMouseSensitivity
struct UAstroGameUserSettings_SetMouseSensitivity_Params
{
	int                                                InMouseSensitivity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetMaxPlayers
struct UAstroGameUserSettings_SetMaxPlayers_Params
{
	int                                                InMaxPlayers;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetMasterVolume
struct UAstroGameUserSettings_SetMasterVolume_Params
{
	float                                              InMasterVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetLanguage
struct UAstroGameUserSettings_SetLanguage_Params
{
	struct FString                                     InLanguage;                                               // (Parm, ZeroConstructor)
};

// Function Astro.AstroGameUserSettings.SetInvertedCameraYAxisMouse
struct UAstroGameUserSettings_SetInvertedCameraYAxisMouse_Params
{
	bool                                               InInvertedCameraYAxixMouse;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetInvertedCameraYAxisGamepad
struct UAstroGameUserSettings_SetInvertedCameraYAxisGamepad_Params
{
	bool                                               InInvertedCameraYAxisGamepad;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetHoldToSprintMouse
struct UAstroGameUserSettings_SetHoldToSprintMouse_Params
{
	bool                                               InHoldToSprint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetHoldToSprintGamepad
struct UAstroGameUserSettings_SetHoldToSprintGamepad_Params
{
	bool                                               InHoldToSprint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetFpsLimit
struct UAstroGameUserSettings_SetFpsLimit_Params
{
	float                                              InFpsLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetCloudQuality
struct UAstroGameUserSettings_SetCloudQuality_Params
{
	int                                                InCloudQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetBrightness
struct UAstroGameUserSettings_SetBrightness_Params
{
	int                                                InBrightness;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetAstroWindowMode
struct UAstroGameUserSettings_SetAstroWindowMode_Params
{
	EAstroWindowMode                                   InAstroWindowMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetAmbientVolume
struct UAstroGameUserSettings_SetAmbientVolume_Params
{
	float                                              InAmbientVolume;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.SetAllowInitialPlanetSelection
struct UAstroGameUserSettings_SetAllowInitialPlanetSelection_Params
{
	bool                                               InAllowInitialPlanetSelection;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.RestoreInputDefaults
struct UAstroGameUserSettings_RestoreInputDefaults_Params
{
	class APlayerController*                           PlayController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.ResetNumTimesCreativeTutorialShown
struct UAstroGameUserSettings_ResetNumTimesCreativeTutorialShown_Params
{
};

// Function Astro.AstroGameUserSettings.RemoveInputAxisMapping
struct UAstroGameUserSettings_RemoveInputAxisMapping_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.RemoveInputActionMapping
struct UAstroGameUserSettings_RemoveInputActionMapping_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.PreviewAudioSettings
struct UAstroGameUserSettings_PreviewAudioSettings_Params
{
	float                                              MusicVol;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sfxVol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VoiceVol;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmbientVol;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.LoadSettings
struct UAstroGameUserSettings_LoadSettings_Params
{
	bool                                               bForceReload;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.IncrementNumTimesCreativeTutorialShown
struct UAstroGameUserSettings_IncrementNumTimesCreativeTutorialShown_Params
{
};

// Function Astro.AstroGameUserSettings.GetWindowMode
struct UAstroGameUserSettings_GetWindowMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetVSync
struct UAstroGameUserSettings_GetVSync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetVoiceVolume
struct UAstroGameUserSettings_GetVoiceVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetVehiclesUseYawAirControls
struct UAstroGameUserSettings_GetVehiclesUseYawAirControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetVehiclesUseAbsoluteSteering
struct UAstroGameUserSettings_GetVehiclesUseAbsoluteSteering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetSfxVolume
struct UAstroGameUserSettings_GetSfxVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetNumTimesCreativeTutorialShown
struct UAstroGameUserSettings_GetNumTimesCreativeTutorialShown_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetMusicVolume
struct UAstroGameUserSettings_GetMusicVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetMouseSensitivity
struct UAstroGameUserSettings_GetMouseSensitivity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetMaxPlayers
struct UAstroGameUserSettings_GetMaxPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetMasterVolume
struct UAstroGameUserSettings_GetMasterVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetLanguage
struct UAstroGameUserSettings_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameUserSettings.GetInvertedCameraYAxisMouse
struct UAstroGameUserSettings_GetInvertedCameraYAxisMouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetInvertedCameraYAxisGamepad
struct UAstroGameUserSettings_GetInvertedCameraYAxisGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetInputAxisMappings
struct UAstroGameUserSettings_GetInputAxisMappings_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameUserSettings.GetInputAxisMappingKeys
struct UAstroGameUserSettings_GetInputAxisMappingKeys_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameUserSettings.GetInputActionMappingNames
struct UAstroGameUserSettings_GetInputActionMappingNames_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameUserSettings.GetInputActionMappingKeys
struct UAstroGameUserSettings_GetInputActionMappingKeys_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroGameUserSettings.GetHoldToSprintMouse
struct UAstroGameUserSettings_GetHoldToSprintMouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetHoldToSprintGamepad
struct UAstroGameUserSettings_GetHoldToSprintGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetFpsLimit
struct UAstroGameUserSettings_GetFpsLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetCloudQuality
struct UAstroGameUserSettings_GetCloudQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetBrightness
struct UAstroGameUserSettings_GetBrightness_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetAstroGameUserSettings
struct UAstroGameUserSettings_GetAstroGameUserSettings_Params
{
	class UAstroGameUserSettings*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetAmbientVolume
struct UAstroGameUserSettings_GetAmbientVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.GetAllowInitialPlanetSelection
struct UAstroGameUserSettings_GetAllowInitialPlanetSelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.DoesKeyMatchActionMapping
struct UAstroGameUserSettings_DoesKeyMatchActionMapping_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.BrightnessToGamma
struct UAstroGameUserSettings_BrightnessToGamma_Params
{
	int                                                InBrightness;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.AttemptRebindInput
struct UAstroGameUserSettings_AttemptRebindInput_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        newKey;                                                   // (Parm)
	struct FKey                                        oldKey;                                                   // (Parm)
	struct FName                                       InputName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.AssignInputAxisMapping
struct UAstroGameUserSettings_AssignInputAxisMapping_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTryToAddCustomInputMapping;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.AssignInputActionMapping
struct UAstroGameUserSettings_AssignInputActionMapping_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTryToAddCustomInputMapping;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.ApplySettings
struct UAstroGameUserSettings_ApplySettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.ApplySensitivitySettings
struct UAstroGameUserSettings_ApplySensitivitySettings_Params
{
	class APlayerController*                           PlayController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroGameUserSettings.ApplyNonResolutionSettings
struct UAstroGameUserSettings_ApplyNonResolutionSettings_Params
{
};

// Function Astro.AstroGameUserSettings.ApplyAudioSettings
struct UAstroGameUserSettings_ApplyAudioSettings_Params
{
};

// Function Astro.AstroHUD.IsStoreActive
struct AAstroHUD_IsStoreActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroHUD.HandleOnCreativeShowCreativeDroneUIChanged
struct AAstroHUD_HandleOnCreativeShowCreativeDroneUIChanged_Params
{
	bool                                               ShowUI;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroHUD.DestroyStoreWidget
struct AAstroHUD_DestroyStoreWidget_Params
{
};

// Function Astro.AstroHUD.CreateStoreWidget
struct AAstroHUD_CreateStoreWidget_Params
{
};

// Function Astro.AstroIgnoreInputTask.CreateAstroIgnoreInputTask
struct UAstroIgnoreInputTask_CreateAstroIgnoreInputTask_Params
{
	class UAstroAction*                                OwningAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreMoveInput;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreLookInput;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroIgnoreInputTask*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroInterpolateItemTask.OnTargetItemMotionStateChanged
struct UAstroInterpolateItemTask_OnTargetItemMotionStateChanged_Params
{
};

// Function Astro.AstroInterpolateItemTask.CreateAstroInterpolateItemTask
struct UAstroInterpolateItemTask_CreateAstroInterpolateItemTask_Params
{
	class UAstroAction*                                OwningAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ItemToInterpolate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (Parm, IsPlainOldData)
	float                                              InterpolationDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainAttachmentDuringMovement;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OptionalInterpolationProgressCurve;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroInterpolateItemTask*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroMaterialStatics.ToggleBitfieldParameterBits
struct UAstroMaterialStatics_ToggleBitfieldParameterBits_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BitIndices;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroMaterialStatics.ToggleBitfieldParameterBit
struct UAstroMaterialStatics_ToggleBitfieldParameterBit_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroMaterialStatics.SetPackedParameterValues
struct UAstroMaterialStatics_SetPackedParameterValues_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PackedValueBitSize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPackedParameterValue>               PackedParameterValues;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroMaterialStatics.SetPackedParameterValue
struct UAstroMaterialStatics_SetPackedParameterValue_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PackedSlotIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PackedValueBitSize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PackedValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroMaterialStatics.SetBitfieldParamterBits
struct UAstroMaterialStatics_SetBitfieldParamterBits_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBitfieldBitValue>                   BitValues;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroMaterialStatics.SetBitfieldParameterBit
struct UAstroMaterialStatics_SetBitfieldParameterBit_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BitValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroMaterialStatics.GetBitfieldParameterBit
struct UAstroMaterialStatics_GetBitfieldParameterBit_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroMicroTxnBlueprintLibrary.IsStoreUIActive
struct UAstroMicroTxnBlueprintLibrary_IsStoreUIActive_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroMicroTxnBlueprintLibrary.GetVirtualCurrencyAmount
struct UAstroMicroTxnBlueprintLibrary_GetVirtualCurrencyAmount_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrencyName;                                             // (Parm, ZeroConstructor)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Currency;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.PresentUnlockNotification
struct UAstroNotificationStatics_PresentUnlockNotification_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationUnlockAuthoringData       AuthoringData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroNotificationStatics.PresentResearchPointGrantNotificationData
struct UAstroNotificationStatics_PresentResearchPointGrantNotificationData_Params
{
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResearchPoints;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.PresentCatalogItemUnlockNotification
struct UAstroNotificationStatics_PresentCatalogItemUnlockNotification_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.ImmediatelyPresentNotificationWidget
struct UAstroNotificationStatics_ImmediatelyPresentNotificationWidget_Params
{
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          AuthoringData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             OverrideAnchorReference;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.GetAstroNotificationDatabase
struct UAstroNotificationStatics_GetAstroNotificationDatabase_Params
{
	class UAstroNotificationDatabase*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.EnqueueNotificationWidget
struct UAstroNotificationStatics_EnqueueNotificationWidget_Params
{
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          AuthoringData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             OverrideAnchorReference;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AllowDuplicateEnqueue;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroNotificationStatics.CreateNotificationTagDataForItemPing
struct UAstroNotificationStatics_CreateNotificationTagDataForItemPing_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.InputRespondingWidgetBase.InputStarted
struct UInputRespondingWidgetBase_InputStarted_Params
{
	struct FName                                       ActionOrAxisName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.InputRespondingWidgetBase.InputComplete
struct UInputRespondingWidgetBase_InputComplete_Params
{
	struct FName                                       ActionOrAxisName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputSucceeded;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroUICardWidget.GetUICardScreenPosOffset
struct UAstroUICardWidget_GetUICardScreenPosOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroUICardWidget.GetUICardRenderSize
struct UAstroUICardWidget_GetUICardRenderSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroNotificationTagWidget.UpdateAnimationVisuals
struct UAstroNotificationTagWidget_UpdateAnimationVisuals_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroNotificationUnlockWidget.MarkNotificationForDestruction
struct UAstroNotificationUnlockWidget_MarkNotificationForDestruction_Params
{
};

// Function Astro.AstroPlayMontageAction.SetMontage
struct UAstroPlayMontageAction_SetMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayMontageAction.OnSingleAnimCustomNotify
struct UAstroPlayMontageAction_OnSingleAnimCustomNotify_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayMontageAction.OnMontageTaskInterrupted
struct UAstroPlayMontageAction_OnMontageTaskInterrupted_Params
{
};

// Function Astro.AstroPlayMontageAction.OnMontageTaskFailedToStart
struct UAstroPlayMontageAction_OnMontageTaskFailedToStart_Params
{
};

// Function Astro.AstroPlayMontageAction.OnMontageTaskCompleted
struct UAstroPlayMontageAction_OnMontageTaskCompleted_Params
{
};

// Function Astro.SolarBody.SetOrbitAxisRotation
struct ASolarBody_SetOrbitAxisRotation_Params
{
	float                                              rads;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.SetNormalizedDayTime
struct ASolarBody_SetNormalizedDayTime_Params
{
	float                                              dayTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.SetDayLength
struct ASolarBody_SetDayLength_Params
{
	float                                              newDayLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.SetBodyTransform
struct ASolarBody_SetBodyTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.SolarBody.SaveGameSerializeCustom
struct ASolarBody_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.OnRep_OrbitAxis
struct ASolarBody_OnRep_OrbitAxis_Params
{
};

// DelegateFunction Astro.SolarBody.OnOrbitAxisUpdated__DelegateSignature
struct ASolarBody_OnOrbitAxisUpdated__DelegateSignature_Params
{
	struct FVector                                     NewOrbitAxis;                                             // (Parm, IsPlainOldData)
};

// Function Astro.SolarBody.OnLocalPlayerPlanetSelectionEnd
struct ASolarBody_OnLocalPlayerPlanetSelectionEnd_Params
{
};

// Function Astro.SolarBody.OnLocalPlayerPlanetSelectionBegin
struct ASolarBody_OnLocalPlayerPlanetSelectionBegin_Params
{
	class ASolarBody*                                  homeSolarBody;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.OnLocalPlayerLocalSolarBodyChanged
struct ASolarBody_OnLocalPlayerLocalSolarBodyChanged_Params
{
	class ASolarBody*                                  newLocalSolarBody;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.OnCreativeModeEnabledChanged
struct ASolarBody_OnCreativeModeEnabledChanged_Params
{
	bool                                               CreativeModeEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarBody.GetProxyComponent
struct ASolarBody_GetProxyComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SolarBody.GetProxyCenter
struct ASolarBody_GetProxyCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetOrbitAxis
struct ASolarBody_GetOrbitAxis_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetNormalizedDayTime
struct ASolarBody_GetNormalizedDayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetLastOrbitAxisRotation
struct ASolarBody_GetLastOrbitAxisRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetDayRotationOffset
struct ASolarBody_GetDayRotationOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetCenterComponent
struct ASolarBody_GetCenterComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SolarBody.GetCenter
struct ASolarBody_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.GetBodyTransform
struct ASolarBody_GetBodyTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SolarBody.CanBeVisitedByPlayer
struct ASolarBody_CanBeVisitedByPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.SaveGameSerializeCustom
struct AAstroPlanet_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlanet.SampleFog
struct AAstroPlanet_SampleFog_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Ray;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.OnRep_CustomMaterials
struct AAstroPlanet_OnRep_CustomMaterials_Params
{
};

// Function Astro.AstroPlanet.OnNonResolutionMenuSettingsChanged
struct AAstroPlanet_OnNonResolutionMenuSettingsChanged_Params
{
};

// Function Astro.AstroPlanet.OnDeformationComplete
struct AAstroPlanet_OnDeformationComplete_Params
{
	struct FDeformationParamsT2                        params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroPlanet.LocationInAtmosphere
struct AAstroPlanet_LocationInAtmosphere_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetWindDirectionAt
struct AAstroPlanet_GetWindDirectionAt_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetTerrainNormal
struct AAstroPlanet_GetTerrainNormal_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetTerrainMaterial
struct AAstroPlanet_GetTerrainMaterial_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTerrainMaterial                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroPlanet.GetTerrainDensity
struct AAstroPlanet_GetTerrainDensity_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetTerrainBlock
struct AAstroPlanet_GetTerrainBlock_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetRadius
struct AAstroPlanet_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetProxy
struct AAstroPlanet_GetProxy_Params
{
	class APlanetProxyActor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetPlanetTransform
struct AAstroPlanet_GetPlanetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetPlanetToProxyTransform
struct AAstroPlanet_GetPlanetToProxyTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetNorthVector
struct AAstroPlanet_GetNorthVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetHazardArray
struct AAstroPlanet_GetHazardArray_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class UBiomeHazards*>                       Biomes;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.AstroPlanet.GetDayNightActor
struct AAstroPlanet_GetDayNightActor_Params
{
	class ADayNight*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlanet.GetBiomeArray
struct AAstroPlanet_GetBiomeArray_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class UTerrainBiomeProperties*>             Biomes;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.AstroPlayerCameraManager.PopAllCameraContexts
struct AAstroPlayerCameraManager_PopAllCameraContexts_Params
{
	class UCameraContext*                              Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerState.ShouldUseClientTitleMenu
struct AAstroPlayerState_ShouldUseClientTitleMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerState.SetHelpMenuState
struct AAstroPlayerState_SetHelpMenuState_Params
{
	bool                                               HelpMenuOpen;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerState.OnRep_PlayerName
struct AAstroPlayerState_OnRep_PlayerName_Params
{
};

// Function Astro.AstroPlayerState.OnAuthorityUnlockedItemsChanged
struct AAstroPlayerState_OnAuthorityUnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItemTypes;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerState.OnAuthorityResearchPointBalanceChanged
struct AAstroPlayerState_OnAuthorityResearchPointBalanceChanged_Params
{
	float                                              NewPointBalance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerState.OnAuthorityKnownItemsChanged
struct AAstroPlayerState_OnAuthorityKnownItemsChanged_Params
{
	TArray<class UClass*>                              newKnownItemTypes;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.AstroPlayerState.IsPlayerOffworld
struct AAstroPlayerState_IsPlayerOffworld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Astro.AstroPlayerState.HelpMenuStateUpdate__DelegateSignature
struct AAstroPlayerState_HelpMenuStateUpdate__DelegateSignature_Params
{
	bool                                               HelpMenuViewState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayerState.GetPlayerPlatform
struct AAstroPlayerState_GetPlayerPlatform_Params
{
	EPlayerPlatform                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerState.GetIsReturningPlayer
struct AAstroPlayerState_GetIsReturningPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerState.GetHelpMenuWasViewed
struct AAstroPlayerState_GetHelpMenuWasViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayerState.BroadcastUnlockedItemTypesChanged
struct AAstroPlayerState_BroadcastUnlockedItemTypesChanged_Params
{
};

// Function Astro.AstroPlayerState.BroadcastResearchPointBalanceChanged
struct AAstroPlayerState_BroadcastResearchPointBalanceChanged_Params
{
};

// Function Astro.AstroPlayerState.BroadcastKnownItemTypesChanged
struct AAstroPlayerState_BroadcastKnownItemTypesChanged_Params
{
};

// Function Astro.AstroPlayerState.AuthorityNotifyAcquiredTerrainTool
struct AAstroPlayerState_AuthorityNotifyAcquiredTerrainTool_Params
{
};

// Function Astro.AstroPlayFabTxnManager.PurchaseItem
struct UAstroPlayFabTxnManager_PurchaseItem_Params
{
	struct FAstroMicroTxnStoreItem                     ItemId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     CurrencyString;                                           // (Parm, ZeroConstructor)
};

// Function Astro.AstroPlayMontageTask.RouteSingleAnimCustomNotify
struct UAstroPlayMontageTask_RouteSingleAnimCustomNotify_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayMontageTask.OnMontageEnded
struct UAstroPlayMontageTask_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayMontageTask.CreateAstroPlayMontageTask
struct UAstroPlayMontageTask_CreateAstroPlayMontageTask_Params
{
	class UAstroAction*                                OwningAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroPlayMontageTask*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.WeldToPreserveContraints
struct UAstroPlayStatics_WeldToPreserveContraints_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.WeldChildActor
struct UAstroPlayStatics_WeldChildActor_Params
{
	class UChildActorComponent*                        Slot;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.ServerClickActor
struct UAstroPlayStatics_ServerClickActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.ServerClick
struct UAstroPlayStatics_ServerClick_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.RestoreInputModeToGameFromUI
struct UAstroPlayStatics_RestoreInputModeToGameFromUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.RaycastVoxels
struct UAstroPlayStatics_RaycastVoxels_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RayStart;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RayEnd;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	float                                              accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.PlaySurfaceFoley
struct UAstroPlayStatics_PlaySurfaceFoley_Params
{
	struct FString                                     SoundEvent;                                               // (Parm, ZeroConstructor)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.MoveToSafety
struct UAstroPlayStatics_MoveToSafety_Params
{
	class AActor*                                      actorToMove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         actorCollisionComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     testConstellationUpVector;                                // (Parm, IsPlainOldData)
	float                                              testGrowthIncrement;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.LocalClick
struct UAstroPlayStatics_LocalClick_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetTradeOutputAmount
struct UAstroPlayStatics_GetTradeOutputAmount_Params
{
	class UClass*                                      OutputItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ExchangeRateMultiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetTopmostParentActor
struct UAstroPlayStatics_GetTopmostParentActor_Params
{
	class AActor*                                      Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetSimulatingParent
struct UAstroPlayStatics_GetSimulatingParent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetSimulatingAttachParent
struct UAstroPlayStatics_GetSimulatingAttachParent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetRopeInterpNormal
struct UAstroPlayStatics_GetRopeInterpNormal_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              NormalScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetRopeInterpLocation
struct UAstroPlayStatics_GetRopeInterpLocation_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              NormalScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetPlayController
struct UAstroPlayStatics_GetPlayController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayController*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetMoveDirection3D
struct UAstroPlayStatics_GetMoveDirection3D_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ControlDirection;                                         // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetMoveDirection
struct UAstroPlayStatics_GetMoveDirection_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ControlDirection;                                         // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetMinimumDiscreteTradeRatioBetweenItems
struct UAstroPlayStatics_GetMinimumDiscreteTradeRatioBetweenItems_Params
{
	class UClass*                                      InputItemType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutputItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExchangeRateMultiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutDiscreteInputRatioTerm;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutDiscreteOutputRatioTerm;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetLocalPlayController
struct UAstroPlayStatics_GetLocalPlayController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayController*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetItemTypeDefault
struct UAstroPlayStatics_GetItemTypeDefault_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetDisplayedEmoteViaIndex
struct UAstroPlayStatics_GetDisplayedEmoteViaIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAstroEmoteDefinition*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetDefaultEmoteActionType
struct UAstroPlayStatics_GetDefaultEmoteActionType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetCurrentInputController
struct UAstroPlayStatics_GetCurrentInputController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetControlSymbolDefault
struct UAstroPlayStatics_GetControlSymbolDefault_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbol*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.GetConsumedInputItemsForTradeOutput
struct UAstroPlayStatics_GetConsumedInputItemsForTradeOutput_Params
{
	class UClass*                                      OutputItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetOutputAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       InputItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ExchangeRateMultiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroPlayStatics.GetAllPlayControllers
struct UAstroPlayStatics_GetAllPlayControllers_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayController*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroPlayStatics.GetAllEmoteDefinitions
struct UAstroPlayStatics_GetAllEmoteDefinitions_Params
{
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UAstroEmoteDefinition*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroPlayStatics.DowncastTerrainMaterial
struct UAstroPlayStatics_DowncastTerrainMaterial_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTerrainMaterial                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroPlayStatics.ClickActor
struct UAstroPlayStatics_ClickActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.Click
struct UAstroPlayStatics_Click_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroPlayStatics.AddComponentForceAtLocation
struct UAstroPlayStatics_AddComponentForceAtLocation_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     force;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroPopupBadgeWidget.UpdateDisplayData
struct UAstroPopupBadgeWidget_UpdateDisplayData_Params
{
	struct FAstroPopupBadgeWidgetDisplayData           NewDisplayData;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroPopupBadgeWidget.GetPivotForUserWidget
struct UAstroPopupBadgeWidget_GetPivotForUserWidget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroPopupBadgeWidget.GetDrawSizeForUserWidget
struct UAstroPopupBadgeWidget_GetDrawSizeForUserWidget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroRepackAction.OnSingleAnimCustomNotify
struct UAstroRepackAction_OnSingleAnimCustomNotify_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroRepackAction.OnInterpolationToTopOfTargetFinished
struct UAstroRepackAction_OnInterpolationToTopOfTargetFinished_Params
{
};

// Function Astro.AstroServerCommExecutor.DSTravelURL
struct UAstroServerCommExecutor_DSTravelURL_Params
{
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Index;                                                    // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSTravelPass
struct UAstroServerCommExecutor_DSTravelPass_Params
{
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Index;                                                    // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSTravelName
struct UAstroServerCommExecutor_DSTravelName_Params
{
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Index;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSTravelFriend
struct UAstroServerCommExecutor_DSTravelFriend_Params
{
	struct FString                                     friendName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Index;                                                    // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSTravel
struct UAstroServerCommExecutor_DSTravel_Params
{
	int                                                serverIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetSaveGameInterval
struct UAstroServerCommExecutor_DSSetSaveGameInterval_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetPlayerCategoryIdx
struct UAstroServerCommExecutor_DSSetPlayerCategoryIdx_Params
{
	uint32_t                                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetPlayerCategoryGuid
struct UAstroServerCommExecutor_DSSetPlayerCategoryGuid_Params
{
	uint64_t                                           PlayerGuid;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetPlayerCategoryForPlayerName
struct UAstroServerCommExecutor_DSSetPlayerCategoryForPlayerName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetPlayerCategory
struct UAstroServerCommExecutor_DSSetPlayerCategory_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Index;                                                    // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetPassword
struct UAstroServerCommExecutor_DSSetPassword_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetOxygenFreeCreative
struct UAstroServerCommExecutor_DSSetOxygenFreeCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSSetInvisibleToHazardsCreative
struct UAstroServerCommExecutor_DSSetInvisibleToHazardsCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSSetInvincibleCreative
struct UAstroServerCommExecutor_DSSetInvincibleCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSSetFuelFreeCreative
struct UAstroServerCommExecutor_DSSetFuelFreeCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSSetDenyUnlisted
struct UAstroServerCommExecutor_DSSetDenyUnlisted_Params
{
	struct FString                                     Enable;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetBackupSaveGamesInterval
struct UAstroServerCommExecutor_DSSetBackupSaveGamesInterval_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSSetBackpackPowerUnlimitedCreative
struct UAstroServerCommExecutor_DSSetBackpackPowerUnlimitedCreative_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSSetActivityTimeout
struct UAstroServerCommExecutor_DSSetActivityTimeout_Params
{
	struct FString                                     Seconds;                                                  // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSServerStatistics
struct UAstroServerCommExecutor_DSServerStatistics_Params
{
};

// Function Astro.AstroServerCommExecutor.DSServerShutdown
struct UAstroServerCommExecutor_DSServerShutdown_Params
{
};

// Function Astro.AstroServerCommExecutor.DSSaveGame
struct UAstroServerCommExecutor_DSSaveGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSRenameGame
struct UAstroServerCommExecutor_DSRenameGame_Params
{
	struct FString                                     fromName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     toName;                                                   // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSRemoveFavorite
struct UAstroServerCommExecutor_DSRemoveFavorite_Params
{
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSRemote
struct UAstroServerCommExecutor_DSRemote_Params
{
	struct FString                                     consoleCommand;                                           // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSNewGame
struct UAstroServerCommExecutor_DSNewGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSLoadGame
struct UAstroServerCommExecutor_DSLoadGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSListPlayers
struct UAstroServerCommExecutor_DSListPlayers_Params
{
};

// Function Astro.AstroServerCommExecutor.DSListGames
struct UAstroServerCommExecutor_DSListGames_Params
{
};

// Function Astro.AstroServerCommExecutor.DSKickPlayerGuid
struct UAstroServerCommExecutor_DSKickPlayerGuid_Params
{
	uint64_t                                           PlayerGuid;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSKickPlayer
struct UAstroServerCommExecutor_DSKickPlayer_Params
{
	int                                                playerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSGetServerList
struct UAstroServerCommExecutor_DSGetServerList_Params
{
};

// Function Astro.AstroServerCommExecutor.DSGetRecentsList
struct UAstroServerCommExecutor_DSGetRecentsList_Params
{
};

// Function Astro.AstroServerCommExecutor.DSGetProperties
struct UAstroServerCommExecutor_DSGetProperties_Params
{
};

// Function Astro.AstroServerCommExecutor.DSGetFavoritesList
struct UAstroServerCommExecutor_DSGetFavoritesList_Params
{
};

// Function Astro.AstroServerCommExecutor.DSDeleteGame
struct UAstroServerCommExecutor_DSDeleteGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Astro.AstroServerCommExecutor.DSCreativeMode
struct UAstroServerCommExecutor_DSCreativeMode_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroServerCommExecutor.DSClearRecentsList
struct UAstroServerCommExecutor_DSClearRecentsList_Params
{
};

// Function Astro.AstroServerCommExecutor.DSClearFavoritesList
struct UAstroServerCommExecutor_DSClearFavoritesList_Params
{
};

// Function Astro.AstroServerCommExecutor.DSBackupSaveGames
struct UAstroServerCommExecutor_DSBackupSaveGames_Params
{
};

// Function Astro.AstroServerCommExecutor.DSAddFavorite
struct UAstroServerCommExecutor_DSAddFavorite_Params
{
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     NickName;                                                 // (Parm, ZeroConstructor)
};

// DelegateFunction Astro.AstroSettings.OnFreePowerChanged__DelegateSignature
struct AAstroSettings_OnFreePowerChanged__DelegateSignature_Params
{
	bool                                               FreePowerEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroSettings.GetAstroSettings
struct AAstroSettings_GetAstroSettings_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AAstroSettings*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroSlateFocusWidget.GrantFocus
struct UAstroSlateFocusWidget_GrantFocus_Params
{
};

// Function Astro.AstroSlateFocusWidget.DisableChildWidgetFocusHighlight
struct UAstroSlateFocusWidget_DisableChildWidgetFocusHighlight_Params
{
};

// Function Astro.AstroStatics.WorldLocationToScreenLocationOffset
struct UAstroStatics_WorldLocationToScreenLocationOffset_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.WorldLocationToScreenLocation
struct UAstroStatics_WorldLocationToScreenLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.WasThereAnErrorTryingToSaveTheGame
struct UAstroStatics_WasThereAnErrorTryingToSaveTheGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     outSaveName;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                outSaveSize;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESaveGameErrorType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.VInterpCombo
struct UAstroStatics_VInterpCombo_Params
{
	struct FVector                                     Current;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ConstantSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.VelocityAtWorldLocation
struct UAstroStatics_VelocityAtWorldLocation_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.UpdatePhysicsConstraintFrames
struct UAstroStatics_UpdatePhysicsConstraintFrames_Params
{
	class UPhysicsConstraintComponent*                 Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.TryGetCreativeModeData
struct UAstroStatics_TryGetCreativeModeData_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeData*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ToggleUMGHidden
struct UAstroStatics_ToggleUMGHidden_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   VisibleState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.ToggleCreativeModeLodAnchorPreview
struct UAstroStatics_ToggleCreativeModeLodAnchorPreview_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SweepPrimitiveComponentByProfile
struct UAstroStatics_SweepPrimitiveComponentByProfile_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FName                                       Profile;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SweepPrimitiveComponent
struct UAstroStatics_SweepPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.StringChecksum
struct UAstroStatics_StringChecksum_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	int                                                Hash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.Sinusoid
struct UAstroStatics_Sinusoid_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ShowLodAnchorBeacons
struct UAstroStatics_ShowLodAnchorBeacons_Params
{
	bool                                               doShow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetWeldedComponentLocation
struct UAstroStatics_SetWeldedComponentLocation_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetUIEnabled
struct UAstroStatics_SetUIEnabled_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetTraceEnabled
struct UAstroStatics_SetTraceEnabled_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetTraceAndCollisionEnabled
struct UAstroStatics_SetTraceAndCollisionEnabled_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetTimerFromFunctionWithDelay
struct UAstroStatics_SetTimerFromFunctionWithDelay_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.SetStateFirstAvailableSaveSlot
struct UAstroStatics_SetStateFirstAvailableSaveSlot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetSkeletalMeshPlaybackRatio
struct UAstroStatics_SetSkeletalMeshPlaybackRatio_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlaybackRatio;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireNotifies;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetPostProcessVignetting
struct UAstroStatics_SetPostProcessVignetting_Params
{
	struct FPostProcessSettings                        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPostProcessSettings                        OutSettings;                                              // (Parm, OutParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetPostProcessLensFlare
struct UAstroStatics_SetPostProcessLensFlare_Params
{
	struct FPostProcessSettings                        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPostProcessSettings                        OutSettings;                                              // (Parm, OutParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetNearClippingPlane
struct UAstroStatics_SetNearClippingPlane_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetCuePlaying
struct UAstroStatics_SetCuePlaying_Params
{
	class UAudioComponent*                             Sound;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Play;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fade;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetCreativeModeTerrainColorIndex
struct UAstroStatics_SetCreativeModeTerrainColorIndex_Params
{
	int                                                colorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPaintIndexType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetCollisionEnabled
struct UAstroStatics_SetCollisionEnabled_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetChildActorPhysics
struct UAstroStatics_SetChildActorPhysics_Params
{
	class UChildActorComponent*                        ChildActor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Physics;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Collision;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetBitValue
struct UAstroStatics_SetBitValue_Params
{
	int                                                BitMask;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BitValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetAllVectorParameterValue
struct UAstroStatics_SetAllVectorParameterValue_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicInstances;                                         // (Parm, ZeroConstructor)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetAllScalarParameterValue
struct UAstroStatics_SetAllScalarParameterValue_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicInstances;                                         // (Parm, ZeroConstructor)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetAllMaterial
struct UAstroStatics_SetAllMaterial_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetAllComponentMaterial
struct UAstroStatics_SetAllComponentMaterial_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorUp
struct UAstroStatics_SetActorUp_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorTraceEnabled
struct UAstroStatics_SetActorTraceEnabled_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorSimulatePhysics
struct UAstroStatics_SetActorSimulatePhysics_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Simulate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorRight
struct UAstroStatics_SetActorRight_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorForward
struct UAstroStatics_SetActorForward_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.AstroStatics.SetActorCollisionEnabled
struct UAstroStatics_SetActorCollisionEnabled_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.SaveGameNoCloudSave
struct UAstroStatics_SaveGameNoCloudSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCompletedDelegate;                                      // (Parm, ZeroConstructor)
};

// Function Astro.AstroStatics.SaveGameAuto
struct UAstroStatics_SaveGameAuto_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnCompletedDelegate;                                      // (Parm, ZeroConstructor)
};

// Function Astro.AstroStatics.SaveGame
struct UAstroStatics_SaveGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCompletedDelegate;                                      // (Parm, ZeroConstructor)
};

// Function Astro.AstroStatics.SanitizeSaveFileDescriptiveName
struct UAstroStatics_SanitizeSaveFileDescriptiveName_Params
{
	struct FString                                     SaveFileDescriptiveName;                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.RollIntegerIncrement
struct UAstroStatics_RollIntegerIncrement_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.RollIntegerDecrement
struct UAstroStatics_RollIntegerDecrement_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ReturnToTitleScreen
struct UAstroStatics_ReturnToTitleScreen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.RenameSaveFile
struct UAstroStatics_RenameSaveFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrSaveName;                                             // (Parm, ZeroConstructor)
	struct FString                                     newDescriptiveSaveName;                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCompletedDelegate;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ReinterpretIntToFloat
struct UAstroStatics_ReinterpretIntToFloat_Params
{
	int                                                Int;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ReinterpretFloatToInt
struct UAstroStatics_ReinterpretFloatToInt_Params
{
	float                                              Float;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.PreviewEmoteLocally
struct UAstroStatics_PreviewEmoteLocally_Params
{
	class USkeletalMeshComponent*                      targetMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroEmoteDefinition*                       emoteDefinition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.PredictIfActiveSaveFileIsTooLargeToSave
struct UAstroStatics_PredictIfActiveSaveFileIsTooLargeToSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     outSaveName;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                outSaveSize;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.PopulateSpawnableObjects
struct UAstroStatics_PopulateSpawnableObjects_Params
{
	class UPanelWidget*                                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     nameFilter;                                               // (Parm, ZeroConstructor)
};

// Function Astro.AstroStatics.PopulateSaveGames
struct UAstroStatics_PopulateSaveGames_Params
{
	class UPanelWidget*                                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.PopulateResourceTypes
struct UAstroStatics_PopulateResourceTypes_Params
{
	class UPanelWidget*                                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.PopulateLoadablePresets
struct UAstroStatics_PopulateLoadablePresets_Params
{
	class UPanelWidget*                                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.PlaySound
struct UAstroStatics_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.PhysicsConstrain
struct UAstroStatics_PhysicsConstrain_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.NullInspectObject
struct UAstroStatics_NullInspectObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.MarkPrimitiveRenderStateDirty
struct UAstroStatics_MarkPrimitiveRenderStateDirty_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.MakeVectorQuantizeNormal
struct UAstroStatics_MakeVectorQuantizeNormal_Params
{
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.MakeVectorQuantize100
struct UAstroStatics_MakeVectorQuantize100_Params
{
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantize100                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.MakeInert
struct UAstroStatics_MakeInert_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.LogInt
struct UAstroStatics_LogInt_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.LoadMapSeamless
struct UAstroStatics_LoadMapSeamless_Params
{
	struct FName                                       MapName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.LoadGame
struct UAstroStatics_LoadGame_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.LerpToRange
struct UAstroStatics_LerpToRange_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetLerp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.JoinToURL
struct UAstroStatics_JoinToURL_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.IsWorldGameWorld
struct UAstroStatics_IsWorldGameWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsValidAstroLinearColor
struct UAstroStatics_IsValidAstroLinearColor_Params
{
	struct FLinearColor                                ColorToTest;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsTrailerBuild
struct UAstroStatics_IsTrailerBuild_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsStoreUIEnabled
struct UAstroStatics_IsStoreUIEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsShippingBuild
struct UAstroStatics_IsShippingBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsSaveRestoreInProgress
struct UAstroStatics_IsSaveRestoreInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsSavePermittedOverrideEnabled
struct UAstroStatics_IsSavePermittedOverrideEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsSaveFileDescriptiveNameTheActiveSaveFile
struct UAstroStatics_IsSaveFileDescriptiveNameTheActiveSaveFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DescriptiveName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsReleaseBuild
struct UAstroStatics_IsReleaseBuild_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsPlatformUWPOrXbox
struct UAstroStatics_IsPlatformUWPOrXbox_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsPlatformPS4
struct UAstroStatics_IsPlatformPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsPlatformGameConsole
struct UAstroStatics_IsPlatformGameConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsLocalControlledPawn
struct UAstroStatics_IsLocalControlledPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsLanMatch
struct UAstroStatics_IsLanMatch_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsDedicatedServerUIEnabled
struct UAstroStatics_IsDedicatedServerUIEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsDedicatedServer
struct UAstroStatics_IsDedicatedServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsCreativeMode
struct UAstroStatics_IsCreativeMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsAsyncSaveInProgress
struct UAstroStatics_IsAsyncSaveInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IsAnalyticsEnabled
struct UAstroStatics_IsAnalyticsEnabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.InterpToRange
struct UAstroStatics_InterpToRange_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetLerp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.IdentityTransform
struct UAstroStatics_IdentityTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HitLocation
struct UAstroStatics_HitLocation_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HitImpactPoint
struct UAstroStatics_HitImpactPoint_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HitImpactNormal
struct UAstroStatics_HitImpactNormal_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HitImpactComponent
struct UAstroStatics_HitImpactComponent_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.HitImpactActor
struct UAstroStatics_HitImpactActor_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HasEventualParentActorOfType
struct UAstroStatics_HasEventualParentActorOfType_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.HasComponentOfType
struct UAstroStatics_HasComponentOfType_Params
{
	class UClass*                                      ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetWidgetOuterCanvasPosition
struct UAstroStatics_GetWidgetOuterCanvasPosition_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetUseSplitscreen
struct UAstroStatics_GetUseSplitscreen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetTotalSizeOfAllCachedSaveFiles
struct UAstroStatics_GetTotalSizeOfAllCachedSaveFiles_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetTextBoundsForFont
struct UAstroStatics_GetTextBoundsForFont_Params
{
	struct FText                                       Text;                                                     // (Parm)
	struct FSlateFontInfo                              FontInfo;                                                 // (Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetSkeletalMeshPlaybackRatio
struct UAstroStatics_GetSkeletalMeshPlaybackRatio_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetScreenResolution
struct UAstroStatics_GetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetPostProcessVignetting
struct UAstroStatics_GetPostProcessVignetting_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetPostProcessLensFlare
struct UAstroStatics_GetPostProcessLensFlare_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetPlatformSaveStorageLimit
struct UAstroStatics_GetPlatformSaveStorageLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetPlatformLowFreeStorageSpaceThreshold
struct UAstroStatics_GetPlatformLowFreeStorageSpaceThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetOwnerPlayerControllerForActor
struct UAstroStatics_GetOwnerPlayerControllerForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetOwnerPlayerController
struct UAstroStatics_GetOwnerPlayerController_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetOwnerPawnForActor
struct UAstroStatics_GetOwnerPawnForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetOwnerPawn
struct UAstroStatics_GetOwnerPawn_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetOutermostActor
struct UAstroStatics_GetOutermostActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetNumberOfPlayersInMultiplayerSession
struct UAstroStatics_GetNumberOfPlayersInMultiplayerSession_Params
{
	int                                                outNumPlayersInSession;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetNicknamesOfPlayersInMultiplayerSession
struct UAstroStatics_GetNicknamesOfPlayersInMultiplayerSession_Params
{
	bool                                               bExcludeLocalControllingPlayer;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetNewestSaves
struct UAstroStatics_GetNewestSaves_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroSaveFileInformation>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetNewestSave
struct UAstroStatics_GetNewestSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroSaveFileInformation                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.GetMultiplayerSessionLeaderName
struct UAstroStatics_GetMultiplayerSessionLeaderName_Params
{
	struct FString                                     OutSessionLeaderName;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetLocalPawn
struct UAstroStatics_GetLocalPawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetKeyImageForKey
struct UAstroStatics_GetKeyImageForKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetKeyImageForInteractionPrompt
struct UAstroStatics_GetKeyImageForInteractionPrompt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionPromptEntryData                 PromptData;                                               // (Parm)
	EGameControllerType                                GameControllerType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceKeyboardImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetKeyImageForGamepadInput
struct UAstroStatics_GetKeyImageForGamepadInput_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetInputNameFromInputMapping
struct UAstroStatics_GetInputNameFromInputMapping_Params
{
	EAstroInputBindingNameMappings                     ActionMapping;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetGameState
struct UAstroStatics_GetGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAstroGameState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetGamePlatform
struct UAstroStatics_GetGamePlatform_Params
{
	EGamePlatform                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetGameMode
struct UAstroStatics_GetGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAstroGameMode*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetGameInstance
struct UAstroStatics_GetGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameInstance*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetFullscreenMode
struct UAstroStatics_GetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetDiscreteAstroInputDefinition
struct UAstroStatics_GetDiscreteAstroInputDefinition_Params
{
	EAstroDiscreteInputOptionPlayerFacing              DiscretePlayerFacingInputOption;                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroDiscreteInputDefinition               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.GetDedicatedServerUrl
struct UAstroStatics_GetDedicatedServerUrl_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetDedicatedServerSearchName
struct UAstroStatics_GetDedicatedServerSearchName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetCVar_Integer
struct UAstroStatics_GetCVar_Integer_Params
{
	struct FString                                     cvarName;                                                 // (Parm, ZeroConstructor)
	int                                                outInteger;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCvar_EnableBackpackTrickleCharge
struct UAstroStatics_GetCvar_EnableBackpackTrickleCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCvar_DeformTool_UseTerrainResource
struct UAstroStatics_GetCvar_DeformTool_UseTerrainResource_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCvar_DeformTool_UsePowerDraw
struct UAstroStatics_GetCvar_DeformTool_UsePowerDraw_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCreativeModeTerrainColors
struct UAstroStatics_GetCreativeModeTerrainColors_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OutMaterials;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<struct FLinearColor>                        OutTerrainColors;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.AstroStatics.GetCreativeModeTerrainColorAtIndex
struct UAstroStatics_GetCreativeModeTerrainColorAtIndex_Params
{
	int                                                colorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPaintIndexType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCreativeModeTerrainColor
struct UAstroStatics_GetCreativeModeTerrainColor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCreativeModeTerrainButtonColor
struct UAstroStatics_GetCreativeModeTerrainButtonColor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCreativeModeSpecialColors
struct UAstroStatics_GetCreativeModeSpecialColors_Params
{
	TArray<struct FLinearColor>                        OutPlanetColors;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  OutMaterials;                                             // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.GetCreativeModePlanetColors
struct UAstroStatics_GetCreativeModePlanetColors_Params
{
	class AActor*                                      forActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        OutPlanetColors;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  OutMaterials;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.AstroStatics.GetCreativeModeData
struct UAstroStatics_GetCreativeModeData_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeData*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetControllingPlayerNickname
struct UAstroStatics_GetControllingPlayerNickname_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetComponentsInChildren
struct UAstroStatics_GetComponentsInChildren_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.AstroStatics.GetComponentParentHierarchy
struct UAstroStatics_GetComponentParentHierarchy_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Inclusive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetChildrenRecursive
struct UAstroStatics_GetChildrenRecursive_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               Inclusive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.GetBuildVersionWithFlavor
struct UAstroStatics_GetBuildVersionWithFlavor_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetBuildVersionDate
struct UAstroStatics_GetBuildVersionDate_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.GetBuildVersion
struct UAstroStatics_GetBuildVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.GetBitValue
struct UAstroStatics_GetBitValue_Params
{
	int                                                BitMask;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetAttachParentActor
struct UAstroStatics_GetAttachParentActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetAstroColorAsSlateColor
struct UAstroStatics_GetAstroColorAsSlateColor_Params
{
	EAstroColor                                        AstroColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroStatics.GetAstroColor
struct UAstroStatics_GetAstroColor_Params
{
	EAstroColor                                        AstroColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.GetActorParentHierarchy
struct UAstroStatics_GetActorParentHierarchy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Inclusive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.FromToRotation
struct UAstroStatics_FromToRotation_Params
{
	struct FVector                                     From;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     To;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.FInterpCombo
struct UAstroStatics_FInterpCombo_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConstantSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.FindComponentByName
struct UAstroStatics_FindComponentByName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroStatics.FindBetween
struct UAstroStatics_FindBetween_Params
{
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.EnqueueSkeletalMeshPlayRate
struct UAstroStatics_EnqueueSkeletalMeshPlayRate_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.DuplicateSaveFile
struct UAstroStatics_DuplicateSaveFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrSaveName;                                             // (Parm, ZeroConstructor)
	struct FString                                     newDescriptiveSaveName;                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCompletedDelegate;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.DoesSaveFileDescriptiveNameCollideWithExistingSaves
struct UAstroStatics_DoesSaveFileDescriptiveNameCollideWithExistingSaves_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     newDescriptiveSaveName;                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.DoesKeyMatchInputBinding
struct UAstroStatics_DoesKeyMatchInputBinding_Params
{
	EAstroInputBindingNameMappings                     InputBinding;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.DisplayLoadingUMG
struct UAstroStatics_DisplayLoadingUMG_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LoadingWidgetOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.DestroyChildActors
struct UAstroStatics_DestroyChildActors_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.DestroyActorHierarchy
struct UAstroStatics_DestroyActorHierarchy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.DeleteSaveGame
struct UAstroStatics_DeleteSaveGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroSaveFileInformation                   SaveDisplayInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.DeleteAllSaves
struct UAstroStatics_DeleteAllSaves_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.DateTimeToString
struct UAstroStatics_DateTimeToString_Params
{
	struct FDateTime                                   DateTime;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.CreatePostprocessMaterialDynamic
struct UAstroStatics_CreatePostprocessMaterialDynamic_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.CreateAllDynamicMaterialInstances
struct UAstroStatics_CreateAllDynamicMaterialInstances_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.CreateAllComponentDynamicMaterialInstances
struct UAstroStatics_CreateAllComponentDynamicMaterialInstances_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroStatics.CreateAllComponentDynamicMaterialInstance
struct UAstroStatics_CreateAllComponentDynamicMaterialInstance_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ConvertToRelativeTransform
struct UAstroStatics_ConvertToRelativeTransform_Params
{
	struct FTransform                                  ParentTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ClosestPointOnLine
struct UAstroStatics_ClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              T;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.CastPhysicalSurfaceToInteger
struct UAstroStatics_CastPhysicalSurfaceToInteger_Params
{
	TEnumAsByte<EPhysicalSurface>                      surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.CanGetSavedGames
struct UAstroStatics_CanGetSavedGames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.AddPostProcessBlendableMaterial
struct UAstroStatics_AddPostProcessBlendableMaterial_Params
{
	struct FPostProcessSettings                        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPostProcessSettings                        OutSettings;                                              // (Parm, OutParm)
	class UMaterial*                                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroStatics.ActorSimulatingPhysics
struct UAstroStatics_ActorSimulatingPhysics_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ActorOnClickedBound
struct UAstroStatics_ActorOnClickedBound_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroStatics.ActorCallOnClicked
struct UAstroStatics_ActorCallOnClicked_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroTakePictureAction.SetInstigator
struct UAstroTakePictureAction_SetInstigator_Params
{
	class APlayerController*                           Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroTakePictureAction.OnTakePictureTaskCompleted
struct UAstroTakePictureAction_OnTakePictureTaskCompleted_Params
{
};

// Function Astro.AstroTakePictureAction.OnPictureImageCaptureDelayComplete
struct UAstroTakePictureAction_OnPictureImageCaptureDelayComplete_Params
{
};

// Function Astro.AstroTakePictureAction.OnPhotoWidgetDisplayDelayComplete
struct UAstroTakePictureAction_OnPhotoWidgetDisplayDelayComplete_Params
{
};

// Function Astro.AstroTakePictureAction.BroadcastTakePictureCountdownPing
struct UAstroTakePictureAction_BroadcastTakePictureCountdownPing_Params
{
};

// Function Astro.AstroTakePictureEmoteAction.OnTakePictureTaskCompleted
struct UAstroTakePictureEmoteAction_OnTakePictureTaskCompleted_Params
{
};

// Function Astro.AstroTakePictureEmoteAction.OnSingleAnimCustomNotify
struct UAstroTakePictureEmoteAction_OnSingleAnimCustomNotify_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroTakePictureEmoteAction.OnMontageTaskInterrupted
struct UAstroTakePictureEmoteAction_OnMontageTaskInterrupted_Params
{
};

// Function Astro.AstroTakePictureEmoteAction.OnMontageTaskCompleted
struct UAstroTakePictureEmoteAction_OnMontageTaskCompleted_Params
{
};

// Function Astro.AstroTakePictureTask.OnPhotoWidgetClosed
struct UAstroTakePictureTask_OnPhotoWidgetClosed_Params
{
};

// Function Astro.AstroTakePictureTask.DisplayPhotoWidget
struct UAstroTakePictureTask_DisplayPhotoWidget_Params
{
};

// Function Astro.AstroTooltipWidget.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout
struct UAstroTooltipWidget_UpdateTooltipDataForInteractionPromptsWithoutChangingLayout_Params
{
	struct FTooltipWidgetDisplayData                   NewTooltipWidgetDisplayData;                              // (Parm)
};

// Function Astro.AstroTooltipWidget.UpdateTooltipAnimation
struct UAstroTooltipWidget_UpdateTooltipAnimation_Params
{
};

// Function Astro.AstroTooltipWidget.OnTextContentChanged
struct UAstroTooltipWidget_OnTextContentChanged_Params
{
};

// Function Astro.AstroTooltipWidget.OnStateChanged
struct UAstroTooltipWidget_OnStateChanged_Params
{
};

// Function Astro.AstroTooltipWidget.OnAnimationChanged
struct UAstroTooltipWidget_OnAnimationChanged_Params
{
};

// Function Astro.AstroTooltipWidget.HasValidInteractionPromptInArray
struct UAstroTooltipWidget_HasValidInteractionPromptInArray_Params
{
	TArray<struct FInteractionPromptEntryData>         InteractionPromptData;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroTooltipWidget.HasBadge
struct UAstroTooltipWidget_HasBadge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SlateBrushWithNewSlateColor
struct UAstroUIStatics_SlateBrushWithNewSlateColor_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (Parm)
	struct FSlateColor                                 SlateColor;                                               // (Parm)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroUIStatics.SlateBrushWithNewColor
struct UAstroUIStatics_SlateBrushWithNewColor_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (Parm)
	struct FLinearColor                                LinearColor;                                              // (Parm, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroUIStatics.SetImageBrushSlateColor
struct UAstroUIStatics_SetImageBrushSlateColor_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlateColor                                 BrushColor;                                               // (Parm)
};

// Function Astro.AstroUIStatics.SetImageBrushSize
struct UAstroUIStatics_SetImageBrushSize_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   NewSize;                                                  // (Parm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SetImageBrushImage
struct UAstroUIStatics_SetImageBrushImage_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ImageResource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SetImageBrushColor
struct UAstroUIStatics_SetImageBrushColor_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                BrushColor;                                               // (Parm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SetBorderBrushSlateColor
struct UAstroUIStatics_SetBorderBrushSlateColor_Params
{
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm)
};

// Function Astro.AstroUIStatics.SetBorderBrushImage
struct UAstroUIStatics_SetBorderBrushImage_Params
{
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ImageResource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SetBorderBrushDrawAs
struct UAstroUIStatics_SetBorderBrushDrawAs_Params
{
	class UBorder*                                     Border;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAsType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroUIStatics.SetAllUserFocus
struct UAstroUIStatics_SetAllUserFocus_Params
{
	class UWidget*                                     WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.AstroUIStatics.GetAstroUIStylingDatabase
struct UAstroUIStatics_GetAstroUIStylingDatabase_Params
{
	class UAstroUIStylingDatabase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.GetAstroUIAudioEvent
struct UAstroUIStatics_GetAstroUIAudioEvent_Params
{
	EAstroUIAudioEventKey                              AudioEventKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.AstroUIStatics.GetAstroPopupBadgeDatabase
struct UAstroUIStatics_GetAstroPopupBadgeDatabase_Params
{
	class UAstroPopupBadgeDatabase*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.GetAnimationDuration
struct UAstroUIStatics_GetAnimationDuration_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroUIStatics.DisplayPopupBadgeForItemPing
struct UAstroUIStatics_DisplayPopupBadgeForItemPing_Params
{
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroUIStatics.DisplayPopupBadge
struct UAstroUIStatics_DisplayPopupBadge_Params
{
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroPopupBadgeAuthoringData               AuthoringData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.AstroUIStatics.ClearAllUserFocus
struct UAstroUIStatics_ClearAllUserFocus_Params
{
};

// Function Astro.AstroUnlockNotificationManager.HandleNotificationSpawnTimerTick
struct UAstroUnlockNotificationManager_HandleNotificationSpawnTimerTick_Params
{
};

// Function Astro.AstroUnpackAction.SetDeployableItem
struct UAstroUnpackAction_SetDeployableItem_Params
{
	class UDeployableItemPackageComponent*             DeployableItemPackageComponent;                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.PhysicalItem.StartItemInWorld
struct APhysicalItem_StartItemInWorld_Params
{
};

// Function Astro.PhysicalItem.StartInWorld
struct APhysicalItem_StartInWorld_Params
{
};

// Function Astro.PhysicalItem.ShouldPickUp
struct APhysicalItem_ShouldPickUp_Params
{
	class UPrimitiveComponent*                         PrimComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.SetWorldPhysics
struct APhysicalItem_SetWorldPhysics_Params
{
};

// Function Astro.PhysicalItem.SetPuppetPhysics
struct APhysicalItem_SetPuppetPhysics_Params
{
};

// Function Astro.PhysicalItem.SetPhysicsState
struct APhysicalItem_SetPhysicsState_Params
{
	EPhysicalItemMotionState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               weld;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.SetNonSimulatingPhysics
struct APhysicalItem_SetNonSimulatingPhysics_Params
{
};

// Function Astro.PhysicalItem.SetIndicatorPhysics
struct APhysicalItem_SetIndicatorPhysics_Params
{
};

// Function Astro.PhysicalItem.SetAttachPhysics
struct APhysicalItem_SetAttachPhysics_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               DeWeld;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerTakePossession
struct APhysicalItem_ServerTakePossession_Params
{
	class APawn*                                       controllingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PartOfSwap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerSlotSetItem
struct APhysicalItem_ServerSlotSetItem_Params
{
	struct FSlotReference                              ItemSlot;                                                 // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              sourceTransitionSlot;                                     // (Parm)
	bool                                               useSourceTransform;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PartOfSwap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerSlotReleaseItem
struct APhysicalItem_ServerSlotReleaseItem_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PartOfSwap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerSlotEmplaceItem
struct APhysicalItem_ServerSlotEmplaceItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SnapTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               weld;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerSetSlotCardinalDirection
struct APhysicalItem_ServerSetSlotCardinalDirection_Params
{
	unsigned char                                      Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ServerReleasePossession
struct APhysicalItem_ServerReleasePossession_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               terrainComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // (Parm)
};

// Function Astro.PhysicalItem.ServerMove
struct APhysicalItem_ServerMove_Params
{
	struct FVector_NetQuantize100                      clientLoc;                                                // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           clientRot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      clientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.ReleasedFromSlot
struct APhysicalItem_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.PlacementTransform
struct APhysicalItem_PlacementTransform_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.PlacedInSlot
struct APhysicalItem_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.PickUpFromWorld
struct APhysicalItem_PickUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.PickedUpFromWorld
struct APhysicalItem_PickedUpFromWorld_Params
{
};

// Function Astro.PhysicalItem.OnRep_ItemState
struct APhysicalItem_OnRep_ItemState_Params
{
};

// Function Astro.PhysicalItem.OnRep_EmplacementData
struct APhysicalItem_OnRep_EmplacementData_Params
{
};

// Function Astro.PhysicalItem.MulticastSetFullyEmplaced
struct APhysicalItem_MulticastSetFullyEmplaced_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.MulticastReleasedFromSlot
struct APhysicalItem_MulticastReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.MulticastPickedUpFromWorld
struct APhysicalItem_MulticastPickedUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItem.MulticastDroppedInWorld
struct APhysicalItem_MulticastDroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               terrainComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.Movable
struct APhysicalItem_Movable_Params
{
	int                                                ToolTier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.IsLarge
struct APhysicalItem_IsLarge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetSubSlotIndex
struct APhysicalItem_GetSubSlotIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetStoredSubItemTypeClass
struct APhysicalItem_GetStoredSubItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetStoredSubItemTypeCDO
struct APhysicalItem_GetStoredSubItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetPrinterHeight
struct APhysicalItem_GetPrinterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetPickupToolTier
struct APhysicalItem_GetPickupToolTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetPickupItemDefault
struct APhysicalItem_GetPickupItemDefault_Params
{
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetMotionState
struct APhysicalItem_GetMotionState_Params
{
	EPhysicalItemMotionState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetLiteralItemTypeClass
struct APhysicalItem_GetLiteralItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetLiteralItemTypeCDO
struct APhysicalItem_GetLiteralItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetItemTypeDefaultScale
struct APhysicalItem_GetItemTypeDefaultScale_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetItemName
struct APhysicalItem_GetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.PhysicalItem.GetGravity
struct APhysicalItem_GetGravity_Params
{
	class UWorldGravity*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetFunctionalItemTypeClass
struct APhysicalItem_GetFunctionalItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetFunctionalItemTypeCDO
struct APhysicalItem_GetFunctionalItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetBodySlotLegacy
struct APhysicalItem_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PhysicalItem.GetBodySlot
struct APhysicalItem_GetBodySlot_Params
{
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.PhysicalItem.GetBaseLocation
struct APhysicalItem_GetBaseLocation_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.DroppedInWorld
struct APhysicalItem_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               terrainComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.DropInWorld
struct APhysicalItem_DropInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               terrainComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.PhysicalItem.CanNeverBeSlotted
struct APhysicalItem_CanNeverBeSlotted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AtmosphericCondenserBase.OnReplicationDataChanged
struct AAtmosphericCondenserBase_OnReplicationDataChanged_Params
{
};

// Function Astro.AtmosphericCondenserBase.GetEffectiveProductionDuration
struct AAtmosphericCondenserBase_GetEffectiveProductionDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AtmosphericCondenserBase.AuthoritySetOuputResourceIndex
struct AAtmosphericCondenserBase_AuthoritySetOuputResourceIndex_Params
{
	int                                                NewSelectedOutputResourceIndex;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AtmosphericCondenserBase.AuthorityIncrementOuputResourceIndex
struct AAtmosphericCondenserBase_AuthorityIncrementOuputResourceIndex_Params
{
};

// Function Astro.AtmosphericCondenserBase.AuthorityDecrementOuputResourceIndex
struct AAtmosphericCondenserBase_AuthorityDecrementOuputResourceIndex_Params
{
};

// Function Astro.AtmosphericCondenserBase.AuthorityAttemptToToggleProduction
struct AAtmosphericCondenserBase_AuthorityAttemptToToggleProduction_Params
{
};

// Function Astro.AugmentComponent.UnblockReactivation
struct UAugmentComponent_UnblockReactivation_Params
{
};

// Function Astro.AugmentComponent.SetPowerDrawEnabled
struct UAugmentComponent_SetPowerDrawEnabled_Params
{
	bool                                               drawEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AugmentComponent.SetAugmentEquipped
struct UAugmentComponent_SetAugmentEquipped_Params
{
	bool                                               equipped;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AugmentComponent.SetAugmentEnabled
struct UAugmentComponent_SetAugmentEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AugmentComponent.SetAugmentActive
struct UAugmentComponent_SetAugmentActive_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AugmentComponent.PhysicalItemUnslotted
struct UAugmentComponent_PhysicalItemUnslotted_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AugmentComponent.OnReplicated_AugmentEquipped
struct UAugmentComponent_OnReplicated_AugmentEquipped_Params
{
};

// Function Astro.AugmentComponent.OnReplicated_AugmentEnabled
struct UAugmentComponent_OnReplicated_AugmentEnabled_Params
{
};

// Function Astro.AugmentComponent.OnReplicated_AugmentActive
struct UAugmentComponent_OnReplicated_AugmentActive_Params
{
};

// Function Astro.AugmentComponent.AugmentUnequipped
struct UAugmentComponent_AugmentUnequipped_Params
{
};

// Function Astro.AugmentComponent.AugmentEquipped
struct UAugmentComponent_AugmentEquipped_Params
{
};

// Function Astro.AugmentComponent.AugmentEnabled
struct UAugmentComponent_AugmentEnabled_Params
{
};

// Function Astro.AugmentComponent.AugmentDisabled
struct UAugmentComponent_AugmentDisabled_Params
{
};

// Function Astro.AugmentComponent.AugmentDeactivated
struct UAugmentComponent_AugmentDeactivated_Params
{
};

// Function Astro.AugmentComponent.AugmentActivated
struct UAugmentComponent_AugmentActivated_Params
{
};

// Function Astro.AutoCrane.OnRep_TransferProgress
struct AAutoCrane_OnRep_TransferProgress_Params
{
};

// Function Astro.AutoCrane.OnRep_CraneState
struct AAutoCrane_OnRep_CraneState_Params
{
};

// Function Astro.AutoCrane.HandleOnSetItem
struct AAutoCrane_HandleOnSetItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCrane.HandleOnReleaseItem
struct AAutoCrane_HandleOnReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCrane.HandleOnReleasedFromSlot
struct AAutoCrane_HandleOnReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCrane.HandleOnPlacedInSlot
struct AAutoCrane_HandleOnPlacedInSlot_Params
{
};

// Function Astro.AutoCrane.HandleOnMotionStateChanged
struct AAutoCrane_HandleOnMotionStateChanged_Params
{
};

// Function Astro.AutoCrane.HandleOnHasPowerAvailableChanged
struct AAutoCrane_HandleOnHasPowerAvailableChanged_Params
{
	bool                                               HasAvailablePower;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCrane.HandleOnFullyEmplaced
struct AAutoCrane_HandleOnFullyEmplaced_Params
{
};

// Function Astro.AutoCrane.HandleOnFilterSlotChanged
struct AAutoCrane_HandleOnFilterSlotChanged_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCrane.HandleChassisSlotEvent
struct AAutoCrane_HandleChassisSlotEvent_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnTransferItemSet
struct UAutoCraneManager_OnTransferItemSet_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnTransferItemReleased
struct UAutoCraneManager_OnTransferItemReleased_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnTransferItemMotionStateChanged
struct UAutoCraneManager_OnTransferItemMotionStateChanged_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnTransferItemFullyEmplaced
struct UAutoCraneManager_OnTransferItemFullyEmplaced_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnLocalSolarBodyChanged
struct UAutoCraneManager_OnLocalSolarBodyChanged_Params
{
	class ASolarBody*                                  newBody;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnCraneReleasedFromSlot
struct UAutoCraneManager_OnCraneReleasedFromSlot_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnCranePowerChanged
struct UAutoCraneManager_OnCranePowerChanged_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnCranePlacedInSlot
struct UAutoCraneManager_OnCranePlacedInSlot_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnCraneInputUse
struct UAutoCraneManager_OnCraneInputUse_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnClientTransferProgressChanged
struct UAutoCraneManager_OnClientTransferProgressChanged_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AutoCraneManager.OnClientCraneStateChanged
struct UAutoCraneManager_OnClientCraneStateChanged_Params
{
	class AAutoCrane*                                  Crane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.ToggleOpen
struct ABackpack_ToggleOpen_Params
{
};

// Function Astro.Backpack.SetOpen
struct ABackpack_SetOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.SetCatalog
struct ABackpack_SetCatalog_Params
{
	class UChildActorComponent*                        Catalog;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        catalogCreative;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.Backpack.OnRightAuxReleased
struct ABackpack_OnRightAuxReleased_Params
{
};

// Function Astro.Backpack.OnRightAuxPressed
struct ABackpack_OnRightAuxPressed_Params
{
};

// Function Astro.Backpack.OnRep_Catalog
struct ABackpack_OnRep_Catalog_Params
{
};

// Function Astro.Backpack.OnOxygenTankPropertiesChanged
struct ABackpack_OnOxygenTankPropertiesChanged_Params
{
};

// Function Astro.Backpack.OnLeftAuxReleased
struct ABackpack_OnLeftAuxReleased_Params
{
};

// Function Astro.Backpack.OnLeftAuxPressed
struct ABackpack_OnLeftAuxPressed_Params
{
};

// Function Astro.Backpack.OnItemInSlotChanged
struct ABackpack_OnItemInSlotChanged_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.OnDeformToolEquippedStateChanged
struct ABackpack_OnDeformToolEquippedStateChanged_Params
{
	bool                                               equipped;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.OnCreativeModeEnabledChanged
struct ABackpack_OnCreativeModeEnabledChanged_Params
{
	bool                                               bIsCreativeModeEnabled;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.OnCatalogCrackedChanged
struct ABackpack_OnCatalogCrackedChanged_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               cracked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Backpack.OnCancel
struct ABackpack_OnCancel_Params
{
};

// Function Astro.Backpack.GetUnbundleOriginFromAuxSlot
struct ABackpack_GetUnbundleOriginFromAuxSlot_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (Parm)
	struct FVector                                     OutUnbundleOrigin;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Backpack.GetRightAuxSlotUnbundleItemCastOrigin
struct ABackpack_GetRightAuxSlotUnbundleItemCastOrigin_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.Backpack.GetOxygenTankProperties
struct ABackpack_GetOxygenTankProperties_Params
{
	struct FBackpackOxygenTankProperties               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.Backpack.GetOpen
struct ABackpack_GetOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Backpack.GetLeftAuxSlotUnbundleItemCastOrigin
struct ABackpack_GetLeftAuxSlotUnbundleItemCastOrigin_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.Backpack.GetInactiveChildCatalog
struct ABackpack_GetInactiveChildCatalog_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Backpack.GetChildCatalog
struct ABackpack_GetChildCatalog_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Backpack.AuthorityRemoveOxygenTankPropertiesOverride
struct ABackpack_AuthorityRemoveOxygenTankPropertiesOverride_Params
{
};

// Function Astro.Backpack.AuthorityApplyOxygenTankPropertiesOverride
struct ABackpack_AuthorityApplyOxygenTankPropertiesOverride_Params
{
	struct FBackpackOxygenTankProperties               OverrideProperties;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.BeaconManager.OnLocalSolarBodyChanged
struct UBeaconManager_OnLocalSolarBodyChanged_Params
{
	class ASolarBody*                                  newBody;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroSlateFocusWidgetContainer.RestoreLastFocus
struct UAstroSlateFocusWidgetContainer_RestoreLastFocus_Params
{
};

// Function Astro.AstroSlateFocusWidgetContainer.ChildWidgetFocusHighlightChanged
struct UAstroSlateFocusWidgetContainer_ChildWidgetFocusHighlightChanged_Params
{
	class UAstroSlateFocusWidget*                      FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotOrganizationRule.SetEnabled
struct USlotOrganizationRule_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BlueprintableSlotOrganizationRule.AuthorityGetWantedItems_Blueprint
struct UBlueprintableSlotOrganizationRule_AuthorityGetWantedItems_Blueprint_Params
{
	TArray<class APhysicalItem*>                       availableItems;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.BlueprintableSlotOrganizationRule.AuthorityGetUnwantedItemsInManagedSlots_Blueprint
struct UBlueprintableSlotOrganizationRule_AuthorityGetUnwantedItemsInManagedSlots_Blueprint_Params
{
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.BlueprintableSlotOrganizationRule.AuthorityGetDesiredIndicators_Blueprint
struct UBlueprintableSlotOrganizationRule_AuthorityGetDesiredIndicators_Blueprint_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.BodySlotComponent.StartInWorld
struct UBodySlotComponent_StartInWorld_Params
{
};

// Function Astro.BreadboardPlatformComponent.OnRep_LockdownEnabledChanged
struct UBreadboardPlatformComponent_OnRep_LockdownEnabledChanged_Params
{
};

// Function Astro.BreadboardPlatformComponent.CheckCables
struct UBreadboardPlatformComponent_CheckCables_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.ValidatePackageableItemsInRange
struct UBreadboardPrinterComponent_ValidatePackageableItemsInRange_Params
{
};

// Function Astro.BreadboardPrinterComponent.UpdateBreadboardPrinter
struct UBreadboardPrinterComponent_UpdateBreadboardPrinter_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.SetRepackageModeEnabled
struct UBreadboardPrinterComponent_SetRepackageModeEnabled_Params
{
	bool                                               modeEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.SaveGameSerializeCustom
struct UBreadboardPrinterComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.OnRep_OutputSlotTransform
struct UBreadboardPrinterComponent_OnRep_OutputSlotTransform_Params
{
};

// Function Astro.BreadboardPrinterComponent.OnRep_AnimationStateChange
struct UBreadboardPrinterComponent_OnRep_AnimationStateChange_Params
{
};

// Function Astro.BreadboardPrinterComponent.OnPrintAreaOverlapEnd
struct UBreadboardPrinterComponent_OnPrintAreaOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.OnPrintAreaOverlapBegin
struct UBreadboardPrinterComponent_OnPrintAreaOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.GetSlotForItemTier
struct UBreadboardPrinterComponent_GetSlotForItemTier_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APhysicalItem*                               itemCDO;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               neededSlotTierCanBeOccupied;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.BreadboardPrinterComponent.GetSelectionEnabled
struct UBreadboardPrinterComponent_GetSelectionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.GetPrintheadHeight
struct UBreadboardPrinterComponent_GetPrintheadHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.GetPrintheadExtension
struct UBreadboardPrinterComponent_GetPrintheadExtension_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.GetPrinterAvailable
struct UBreadboardPrinterComponent_GetPrinterAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.GetPreviewEnabled
struct UBreadboardPrinterComponent_GetPreviewEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.BreadboardPrinterComponent.CheckPrinterDeployed
struct UBreadboardPrinterComponent_CheckPrinterDeployed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ButtonComponent.SetShellComponent
struct UButtonComponent_SetShellComponent_Params
{
	class UPrimitiveComponent*                         shellComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ButtonComponent.SetFlashing
struct UButtonComponent_SetFlashing_Params
{
	bool                                               Flashing;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonComponent.SetCollisionComponent
struct UButtonComponent_SetCollisionComponent_Params
{
	class UPrimitiveComponent*                         collisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ButtonComponent.SetAllShellMaterials
struct UButtonComponent_SetAllShellMaterials_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonComponent.OnShellReleased
struct UButtonComponent_OnShellReleased_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.ButtonComponent.OnShellClick
struct UButtonComponent_OnShellClick_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.ButtonComponent.OnEndHover
struct UButtonComponent_OnEndHover_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ButtonComponent.OnClick
struct UButtonComponent_OnClick_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.ButtonComponent.OnBeginHover
struct UButtonComponent_OnBeginHover_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ButtonComponent.IsEnabled
struct UButtonComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ButtonComponent.Enable
struct UButtonComponent_Enable_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonComponent.CreateShellDynamicMaterialInstance
struct UButtonComponent_CreateShellDynamicMaterialInstance_Params
{
	int                                                MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ButtonInputManagerComponent.PushInputFocus
struct UButtonInputManagerComponent_PushInputFocus_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonInputManagerComponent.PopInputFocus
struct UButtonInputManagerComponent_PopInputFocus_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonInputManagerComponent.Confirm
struct UButtonInputManagerComponent_Confirm_Params
{
};

// Function Astro.ButtonInputManagerComponent.Cancel
struct UButtonInputManagerComponent_Cancel_Params
{
};

// Function Astro.ButtonInputManagerComponent.AddButton
struct UButtonInputManagerComponent_AddButton_Params
{
	class UButtonComponent*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EButtonInput>                          InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.SetSelectedGridCell
struct UButtonNavigationGridComponent_SetSelectedGridCell_Params
{
	int                                                row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.SetSelectedButton
struct UButtonNavigationGridComponent_SetSelectedButton_Params
{
	class UButtonComponent*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.ResetGrid
struct UButtonNavigationGridComponent_ResetGrid_Params
{
	int                                                rows;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                columns;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.PushInputFocus
struct UButtonNavigationGridComponent_PushInputFocus_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.PopInputFocus
struct UButtonNavigationGridComponent_PopInputFocus_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.NavigateUp
struct UButtonNavigationGridComponent_NavigateUp_Params
{
};

// Function Astro.ButtonNavigationGridComponent.NavigateRight
struct UButtonNavigationGridComponent_NavigateRight_Params
{
};

// Function Astro.ButtonNavigationGridComponent.NavigateLeft
struct UButtonNavigationGridComponent_NavigateLeft_Params
{
};

// Function Astro.ButtonNavigationGridComponent.NavigateDown
struct UButtonNavigationGridComponent_NavigateDown_Params
{
};

// Function Astro.ButtonNavigationGridComponent.Confirm
struct UButtonNavigationGridComponent_Confirm_Params
{
};

// Function Astro.ButtonNavigationGridComponent.AnalogVertical
struct UButtonNavigationGridComponent_AnalogVertical_Params
{
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.AnalogHorizontal
struct UButtonNavigationGridComponent_AnalogHorizontal_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ButtonNavigationGridComponent.AddButton
struct UButtonNavigationGridComponent_AddButton_Params
{
	class UButtonComponent*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.StopTutorial
struct UCableExtenderTutorialComponent_StopTutorial_Params
{
};

// Function Astro.CableExtenderTutorialComponent.SetupTutorial
struct UCableExtenderTutorialComponent_SetupTutorial_Params
{
};

// Function Astro.CableExtenderTutorialComponent.SetExtenderTutorialKey
struct UCableExtenderTutorialComponent_SetExtenderTutorialKey_Params
{
	struct FName                                       tutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnOverlapEnd
struct UCableExtenderTutorialComponent_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnOverlapBegin
struct UCableExtenderTutorialComponent_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnCableTargetReleased
struct UCableExtenderTutorialComponent_OnCableTargetReleased_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnCablePulled
struct UCableExtenderTutorialComponent_OnCablePulled_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnCableDestroyed
struct UCableExtenderTutorialComponent_OnCableDestroyed_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableExtenderTutorialComponent.OnCableConnected
struct UCableExtenderTutorialComponent_OnCableConnected_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.CableExtenderTutorialComponent.CableReleasedEvent__DelegateSignature
struct UCableExtenderTutorialComponent_CableReleasedEvent__DelegateSignature_Params
{
};

// DelegateFunction Astro.CableExtenderTutorialComponent.CableExtenderTutorialCompleteEvent__DelegateSignature
struct UCableExtenderTutorialComponent_CableExtenderTutorialCompleteEvent__DelegateSignature_Params
{
};

// DelegateFunction Astro.CableExtenderTutorialComponent.CableExtendedEvent__DelegateSignature
struct UCableExtenderTutorialComponent_CableExtendedEvent__DelegateSignature_Params
{
};

// Function Astro.CableTutorialComponent.StopCableTutorial
struct UCableTutorialComponent_StopCableTutorial_Params
{
};

// Function Astro.CableTutorialComponent.SetupCableTutorial
struct UCableTutorialComponent_SetupCableTutorial_Params
{
	class APhysicalItem*                               receiverItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               providerItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               completeIfReceiverAlreadyPowered;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.CableTutorialComponent.PushCableSlotTooltip__DelegateSignature
struct UCableTutorialComponent_PushCableSlotTooltip__DelegateSignature_Params
{
	class UTooltipComponent*                           TooltipComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECableTutorialStep                                 InteractionStep;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.CableTutorialComponent.PopCableSlotTooltip__DelegateSignature
struct UCableTutorialComponent_PopCableSlotTooltip__DelegateSignature_Params
{
	class UTooltipComponent*                           TooltipComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnReceiverItemSlotted
struct UCableTutorialComponent_OnReceiverItemSlotted_Params
{
};

// Function Astro.CableTutorialComponent.OnReceiverItemPickedUp
struct UCableTutorialComponent_OnReceiverItemPickedUp_Params
{
	bool                                               physicalMovementOrNewOwner;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnReceiverItemPadSpawned
struct UCableTutorialComponent_OnReceiverItemPadSpawned_Params
{
};

// Function Astro.CableTutorialComponent.OnReceiverItemDropped
struct UCableTutorialComponent_OnReceiverItemDropped_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnProviderItemSlotted
struct UCableTutorialComponent_OnProviderItemSlotted_Params
{
};

// Function Astro.CableTutorialComponent.OnProviderItemPickedUp
struct UCableTutorialComponent_OnProviderItemPickedUp_Params
{
	bool                                               physicalMovementOrNewOwner;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnProviderItemPadSpawned
struct UCableTutorialComponent_OnProviderItemPadSpawned_Params
{
};

// Function Astro.CableTutorialComponent.OnProviderItemDropped
struct UCableTutorialComponent_OnProviderItemDropped_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnCablePulled
struct UCableTutorialComponent_OnCablePulled_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnCableDestroyed
struct UCableTutorialComponent_OnCableDestroyed_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CableTutorialComponent.OnCableConnected
struct UCableTutorialComponent_OnCableConnected_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnRep_ControlledActor
struct AControlPanel_OnRep_ControlledActor_Params
{
};

// Function Astro.ControlPanel.OnOwnerItemPickedUpOrUnslotted
struct AControlPanel_OnOwnerItemPickedUpOrUnslotted_Params
{
	bool                                               bUnused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigationComponentClicked
struct AControlPanel_OnNavigationComponentClicked_Params
{
	class UPrimitiveComponent*                         navigationComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.ControlPanel.OnNavigateUpRepeat
struct AControlPanel_OnNavigateUpRepeat_Params
{
};

// Function Astro.ControlPanel.OnNavigateUpDown
struct AControlPanel_OnNavigateUpDown_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateUpBP
struct AControlPanel_OnNavigateUpBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateUp
struct AControlPanel_OnNavigateUp_Params
{
};

// Function Astro.ControlPanel.OnNavigateRightRepeat
struct AControlPanel_OnNavigateRightRepeat_Params
{
};

// Function Astro.ControlPanel.OnNavigateRightBP
struct AControlPanel_OnNavigateRightBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateRight
struct AControlPanel_OnNavigateRight_Params
{
};

// Function Astro.ControlPanel.OnNavigateLeftRight
struct AControlPanel_OnNavigateLeftRight_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateLeftRepeat
struct AControlPanel_OnNavigateLeftRepeat_Params
{
};

// Function Astro.ControlPanel.OnNavigateLeftBP
struct AControlPanel_OnNavigateLeftBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateLeft
struct AControlPanel_OnNavigateLeft_Params
{
};

// Function Astro.ControlPanel.OnNavigateDownRepeat
struct AControlPanel_OnNavigateDownRepeat_Params
{
};

// Function Astro.ControlPanel.OnNavigateDownBP
struct AControlPanel_OnNavigateDownBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.OnNavigateDown
struct AControlPanel_OnNavigateDown_Params
{
};

// Function Astro.ControlPanel.OnCrackableActorComponentExaminableChanged
struct AControlPanel_OnCrackableActorComponentExaminableChanged_Params
{
};

// Function Astro.ControlPanel.OnControlledActorSet
struct AControlPanel_OnControlledActorSet_Params
{
};

// Function Astro.ControlPanel.OnConfirmBP
struct AControlPanel_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanel.OnConfirm
struct AControlPanel_OnConfirm_Params
{
};

// Function Astro.ControlPanel.OnCancelBP
struct AControlPanel_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanel.OnCancel
struct AControlPanel_OnCancel_Params
{
};

// Function Astro.ControlPanel.IsLocallyControlled
struct AControlPanel_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanel.GetCracked
struct AControlPanel_GetCracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanel.FullyCrackedOrClosed
struct AControlPanel_FullyCrackedOrClosed_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanel.CrackedChanged
struct AControlPanel_CrackedChanged_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.UnlockedItemsChanged
struct ACatalogModule_UnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItems;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.CatalogModule.TrySelectItemType
struct ACatalogModule_TrySelectItemType_Params
{
	class UClass*                                      ItemTypeToSelect;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CatalogModule.SetCategoryScrollList
struct ACatalogModule_SetCategoryScrollList_Params
{
	TArray<class UItemCatalogCategoryDefinition*>      categoryList;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.CatalogModule.SetActiveCatalogCategory
struct ACatalogModule_SetActiveCatalogCategory_Params
{
	class UItemCatalogCategoryDefinition*              CategoryDefinition;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CatalogModule.ScrollVariants
struct ACatalogModule_ScrollVariants_Params
{
	int                                                NumVariantsToScroll;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.ScrollToVariant
struct ACatalogModule_ScrollToVariant_Params
{
	int                                                VariantIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   VariantType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.ScrollEntries
struct ACatalogModule_ScrollEntries_Params
{
	int                                                NumEntriesToScroll;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.ResearchPointBalanceChanged
struct ACatalogModule_ResearchPointBalanceChanged_Params
{
	float                                              NewResearchPointBalance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.OnUnlockedItemsChanged
struct ACatalogModule_OnUnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItems;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.CatalogModule.OnSelectedItemTypeChanged
struct ACatalogModule_OnSelectedItemTypeChanged_Params
{
	class UItemType*                                   selectedItemType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.OnResearchPointBalanceChanged
struct ACatalogModule_OnResearchPointBalanceChanged_Params
{
	float                                              NewResearchPointBalance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CatalogModule.OnCreativeModeCatalogUnlockedChanged
struct ACatalogModule_OnCreativeModeCatalogUnlockedChanged_Params
{
};

// Function Astro.CatalogModule.OnCategoryRight
struct ACatalogModule_OnCategoryRight_Params
{
};

// Function Astro.CatalogModule.OnCategoryLeft
struct ACatalogModule_OnCategoryLeft_Params
{
};

// Function Astro.CatalogModule.KnownItemsChanged
struct ACatalogModule_KnownItemsChanged_Params
{
	TArray<class UClass*>                              newKnownItems;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.CatalogModule.GetSelectedItemUnlockState
struct ACatalogModule_GetSelectedItemUnlockState_Params
{
	ESelectedItemUnlockState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CatalogModule.GetSelectedItemType
struct ACatalogModule_GetSelectedItemType_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CatalogModule.GetSelectedItemPickupClass
struct ACatalogModule_GetSelectedItemPickupClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CatalogModule.ApplyPendingDisplayChanges
struct ACatalogModule_ApplyPendingDisplayChanges_Params
{
};

// Function Astro.CameraRigActor.OnSetView
struct ACameraRigActor_OnSetView_Params
{
};

// Function Astro.CameraRigActor.OnRemoveView
struct ACameraRigActor_OnRemoveView_Params
{
};

// Function Astro.CameraRigActor.GetViewTargetUp
struct ACameraRigActor_GetViewTargetUp_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.CameraRigActor.GetViewTargetLocation
struct ACameraRigActor_GetViewTargetLocation_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.CameraRigActor.GetViewInfo
struct ACameraRigActor_GetViewInfo_Params
{
	struct FMinimalViewInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.CameraRigActor.GetTarget
struct ACameraRigActor_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCustomizationBPL.LoadCustomizationItemFromPath
struct UAstroCustomizationBPL_LoadCustomizationItemFromPath_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // (ConstParm, Parm, ZeroConstructor)
	class UAstroCustomizationItem*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacterHat.GetHatModifierForSuit
struct UAstroCharacterHat_GetHatModifierForSuit_Params
{
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowSuitSpecificOverrides;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterHatPerSuitModifiers               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroCharacterHat.ApplyToMesh
struct UAstroCharacterHat_ApplyToMesh_Params
{
	class UStaticMeshComponent*                        targetMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterHat*                          hatDef;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterPalette*                      Palette;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.AstroVisorMaterial.GetMaterialInstanceForSuit
struct UAstroVisorMaterial_GetMaterialInstanceForSuit_Params
{
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ChargeUseComponent.UseCharge
struct UChargeUseComponent_UseCharge_Params
{
};

// Function Astro.ChargeUseComponent.UpdateCanUse
struct UChargeUseComponent_UpdateCanUse_Params
{
};

// Function Astro.ChargeUseComponent.SetUsable
struct UChargeUseComponent_SetUsable_Params
{
	bool                                               newUsable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ChargeUseComponent.OnRep_State
struct UChargeUseComponent_OnRep_State_Params
{
};

// Function Astro.CheatPlinthBase.OnRep_SelectionIndex
struct ACheatPlinthBase_OnRep_SelectionIndex_Params
{
};

// Function Astro.CheatPlinthBase.IncrementSelectionIndex
struct ACheatPlinthBase_IncrementSelectionIndex_Params
{
};

// Function Astro.CheatPlinthBase.GetCurrentlySelectedItemType
struct ACheatPlinthBase_GetCurrentlySelectedItemType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CheatPlinthBase.DecrementSelectionIndex
struct ACheatPlinthBase_DecrementSelectionIndex_Params
{
};

// Function Astro.ChildBiomeComponent.GetChildBiome
struct UChildBiomeComponent_GetChildBiome_Params
{
	class ABiomeActor*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ChildPhysicalItemComponent.GetChildPhysicalItem
struct UChildPhysicalItemComponent_GetChildPhysicalItem_Params
{
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ChildSlotComponent.SetChildSlotClass
struct UChildSlotComponent_SetChildSlotClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ChildSlotComponent.MakeReference
struct UChildSlotComponent_MakeReference_Params
{
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ClickableComponent.SetInteractionRedirectActor
struct UClickableComponent_SetInteractionRedirectActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PivotComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickableComponent.SetActiveUseContext
struct UClickableComponent_SetActiveUseContext_Params
{
	EUseContext                                        NewUseContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickableComponent.PushUseSuppression_AuthorityOnly
struct UClickableComponent_PushUseSuppression_AuthorityOnly_Params
{
	struct FName                                       SuppressionId;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EUseType                                           useTypeFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickableComponent.PushOrPopUseSuppression_AuthorityOnly
struct UClickableComponent_PushOrPopUseSuppression_AuthorityOnly_Params
{
	struct FName                                       SuppressionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldSuppress;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EUseType                                           useTypeFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickableComponent.PopUseSuppression_AuthorityOnly
struct UClickableComponent_PopUseSuppression_AuthorityOnly_Params
{
	struct FName                                       SuppressionId;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickableComponent.OnRep_UseSuppressionState
struct UClickableComponent_OnRep_UseSuppressionState_Params
{
};

// Function Astro.ClickableComponent.HasInteractionRedirect
struct UClickableComponent_HasInteractionRedirect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetUseCapability
struct UClickableComponent_GetUseCapability_Params
{
	EUseType                                           useType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetUseAvailability
struct UClickableComponent_GetUseAvailability_Params
{
	class APlayerController*                           Instigator;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EUseType                                           useType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetPositionComponent
struct UClickableComponent_GetPositionComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetActorClickableOrRoot
struct UClickableComponent_GetActorClickableOrRoot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetActorClickableOrDefault
struct UClickableComponent_GetActorClickableOrDefault_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickableComponent.GetActiveUseContext
struct UClickableComponent_GetActiveUseContext_Params
{
	EUseContext                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickableComponent.ActorClickable
struct UClickableComponent_ActorClickable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultTertiary
struct UClickQuery_SetResultTertiary_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     Behavior;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultStorage
struct UClickQuery_SetResultStorage_Params
{
	class UStorageChassisComponent*                    storage;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotReference                              PrimarySlot;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultSlotPrimaryAsConnectionOnly
struct UClickQuery_SetResultSlotPrimaryAsConnectionOnly_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultSlotPrimary
struct UClickQuery_SetResultSlotPrimary_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               Replace;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultSecondary
struct UClickQuery_SetResultSecondary_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     Behavior;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultPrimary
struct UClickQuery_SetResultPrimary_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     Behavior;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickQuery.SetResultComponentPrimary
struct UClickQuery_SetResultComponentPrimary_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickQuery.ResetPrimaryClickResult
struct UClickQuery_ResetPrimaryClickResult_Params
{
};

// Function Astro.ClickQuery.ResetClickResultExceptForSecondary
struct UClickQuery_ResetClickResultExceptForSecondary_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ClickQuery.ResetClickResultExceptForHoverComponent
struct UClickQuery_ResetClickResultExceptForHoverComponent_Params
{
};

// Function Astro.ClickQuery.ResetClickResult
struct UClickQuery_ResetClickResult_Params
{
};

// Function Astro.ClickQuery.QueryCameraFacingSlotFromArray
struct UClickQuery_QueryCameraFacingSlotFromArray_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ClickQuery.HavePrimaryResult
struct UClickQuery_HavePrimaryResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetSecondaryActor
struct UClickQuery_GetSecondaryActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetPrimarySlot
struct UClickQuery_GetPrimarySlot_Params
{
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ClickQuery.GetPrimaryComponent
struct UClickQuery_GetPrimaryComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickQuery.GetPrimaryActor
struct UClickQuery_GetPrimaryActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetInteractingActor
struct UClickQuery_GetInteractingActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetHitComponent
struct UClickQuery_GetHitComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ClickQuery.GetHitActor
struct UClickQuery_GetHitActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetController
struct UClickQuery_GetController_Params
{
	class APlayController*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.GetClickActor
struct UClickQuery_GetClickActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ClickQuery.ClickQuery
struct UClickQuery_ClickQuery_Params
{
	class UClickQuery*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ComponentDelegateWrapper.OnComponentHit
struct UComponentDelegateWrapper_OnComponentHit_Params
{
	class UPrimitiveComponent*                         ThisComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ComponentDelegateWrapper.OnActorClick
struct UComponentDelegateWrapper_OnActorClick_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.ControlActivatorComponent.OnRep_ControlledToolActor
struct UControlActivatorComponent_OnRep_ControlledToolActor_Params
{
	class AActor*                                      oldActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.SetMoveInputs
struct UControlComponent_SetMoveInputs_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ControlComponent.SetControlOwner
struct UControlComponent_SetControlOwner_Params
{
	class UControlComponent*                           controlOwner;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ControlComponent.PingSymbol
struct UControlComponent_PingSymbol_Params
{
	class UClass*                                      Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.PingObjectSymbolAtLocation
struct UControlComponent_PingObjectSymbolAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbol*                              Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  symbolTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ControlComponent.PingObjectSymbol
struct UControlComponent_PingObjectSymbol_Params
{
	class UControlSymbol*                              Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.OnChildToolSlotRelease
struct UControlComponent_OnChildToolSlotRelease_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.OnChildToolSlotAdd
struct UControlComponent_OnChildToolSlotAdd_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.OnActivateChange
struct UControlComponent_OnActivateChange_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.IsPlayerActivated
struct UControlComponent_IsPlayerActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlComponent.IsActivated
struct UControlComponent_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlComponent.GetObjectControlSymbolEvents
struct UControlComponent_GetObjectControlSymbolEvents_Params
{
	class UControlSymbol*                              Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbolEvents*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlComponent.GetMovementTarget
struct UControlComponent_GetMovementTarget_Params
{
	class UControlComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ControlComponent.GetControlSymbolEvents
struct UControlComponent_GetControlSymbolEvents_Params
{
	class UClass*                                      Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbolEvents*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlComponent.GetActorControlComponent
struct UControlComponent_GetActorControlComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ControlComponent.GetActiveControl
struct UControlComponent_GetActiveControl_Params
{
	class UControlComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ControlComponent.FireSymbolEvent
struct UControlComponent_FireSymbolEvent_Params
{
	class UClass*                                      Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.FireObjectSymbolEvent
struct UControlComponent_FireObjectSymbolEvent_Params
{
	class UControlSymbol*                              Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlComponent.EnableObjectControlSymbol
struct UControlComponent_EnableObjectControlSymbol_Params
{
	class UControlSymbol*                              Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbolEvents*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlComponent.EnableControlSymbol
struct UControlComponent_EnableControlSymbol_Params
{
	class UClass*                                      Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UControlSymbolEvents*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlledVehicleMovement.SetControlled
struct UControlledVehicleMovement_SetControlled_Params
{
	bool                                               IsControlled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlledVehicleMovement.SetAuthorityControlled
struct UControlledVehicleMovement_SetAuthorityControlled_Params
{
	bool                                               IsControlled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlledVehicleMovement.OnUnmanned
struct UControlledVehicleMovement_OnUnmanned_Params
{
};

// Function Astro.ControlledVehicleMovement.OnMove
struct UControlledVehicleMovement_OnMove_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ControlPanelButton.SetButtonEnabled
struct AControlPanelButton_SetButtonEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanelButton.SetButtonArmed
struct AControlPanelButton_SetButtonArmed_Params
{
	bool                                               Armed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanelButton.GetButtonEnabled
struct AControlPanelButton_GetButtonEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanelButton.GetButtonArmed
struct AControlPanelButton_GetButtonArmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanelButton.DoUnHoverButton
struct AControlPanelButton_DoUnHoverButton_Params
{
};

// Function Astro.ControlPanelButton.DoHoverButton
struct AControlPanelButton_DoHoverButton_Params
{
};

// Function Astro.ControlPanelButton.DoButtonPress
struct AControlPanelButton_DoButtonPress_Params
{
};

// Function Astro.ControlPanelButtonChildActorComponent.SpoofButtonPress
struct UControlPanelButtonChildActorComponent_SpoofButtonPress_Params
{
};

// Function Astro.ControlPanelButtonChildActorComponent.SetEnabled
struct UControlPanelButtonChildActorComponent_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanelButtonChildActorComponent.RerouteOnPressed
struct UControlPanelButtonChildActorComponent_RerouteOnPressed_Params
{
};

// Function Astro.ControlPanelButtonChildActorComponent.RerouteOnArmedChanged
struct UControlPanelButtonChildActorComponent_RerouteOnArmedChanged_Params
{
	bool                                               IsArmed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlPanelButtonChildActorComponent.GetEnabled
struct UControlPanelButtonChildActorComponent_GetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlPanelButtonChildActorComponent.GetArmed
struct UControlPanelButtonChildActorComponent_GetArmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemSlot.OnItemSet
struct AItemSlot_OnItemSet_Params
{
	class APhysicalItem*                               LastItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemSlot.OnItemReleased
struct AItemSlot_OnItemReleased_Params
{
	class APhysicalItem*                               LastItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemSlot.OnConnectionDestroyed
struct AItemSlot_OnConnectionDestroyed_Params
{
	class UChildSlotComponent*                         Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemSlot.OnConnectionBuilt
struct AItemSlot_OnConnectionBuilt_Params
{
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemSlot.OnBuildingConnection
struct AItemSlot_OnBuildingConnection_Params
{
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemSlot.AcceptsItem
struct AItemSlot_AcceptsItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlSwitchComponent.SetControlledSlot
struct UControlSwitchComponent_SetControlledSlot_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlSwitchComponent.OnSwitchClicked
struct UControlSwitchComponent_OnSwitchClicked_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ControlSymbol.GetControlSymbolClassIconMesh
struct UControlSymbol_GetControlSymbolClassIconMesh_Params
{
	class UClass*                                      Symbol;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ControlSymbol.ApplyToIconActor
struct UControlSymbol_ApplyToIconActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlSymbolEvents.DoFiredFromClick
struct UControlSymbolEvents_DoFiredFromClick_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.ControlSymbolEvents.DoFired
struct UControlSymbolEvents_DoFired_Params
{
	class UControlSymbol*                              FiredSymbol;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ControlSymbolEvents.BindPrimitiveClicked
struct UControlSymbolEvents_BindPrimitiveClicked_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.Crackable.ToggleCracked
struct UCrackable_ToggleCracked_Params
{
};

// Function Astro.Crackable.SetCracked
struct UCrackable_SetCracked_Params
{
	bool                                               cracked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Crackable.OnMoved
struct UCrackable_OnMoved_Params
{
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Crackable.OnComponentClicked
struct UCrackable_OnComponentClicked_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.Crackable.OnClickUnhandled
struct UCrackable_OnClickUnhandled_Params
{
};

// Function Astro.Crackable.AddChildActor
struct UCrackable_AddChildActor_Params
{
	class UChildActorComponent*                        ChildActor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.Crackable.AddChild
struct UCrackable_AddChild_Params
{
	class UCrackable*                                  Child;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.SetCracked
struct UCrackableActorComponent_SetCracked_Params
{
	bool                                               cracked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.SetClosedRelativeTransform
struct UCrackableActorComponent_SetClosedRelativeTransform_Params
{
	struct FTransform                                  ClosedRelativeTransform;                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.OnRep_StartingRelativeTransform
struct UCrackableActorComponent_OnRep_StartingRelativeTransform_Params
{
};

// Function Astro.CrackableActorComponent.OnRep_Cracked
struct UCrackableActorComponent_OnRep_Cracked_Params
{
};

// Function Astro.CrackableActorComponent.OnParentCrackedChanged
struct UCrackableActorComponent_OnParentCrackedChanged_Params
{
	class UCrackableActorComponent*                    parentCrackableActorComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bParentCracked;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.OnClickUnhandled
struct UCrackableActorComponent_OnClickUnhandled_Params
{
};

// Function Astro.CrackableActorComponent.IsExaminable
struct UCrackableActorComponent_IsExaminable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.GetFullyOpen
struct UCrackableActorComponent_GetFullyOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.GetFullyClosed
struct UCrackableActorComponent_GetFullyClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.GetCracked
struct UCrackableActorComponent_GetCracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.GetClosedRelativeTransform
struct UCrackableActorComponent_GetClosedRelativeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.CracksOnlyOnExamine
struct UCrackableActorComponent_CracksOnlyOnExamine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackableActorComponent.CanClickToClose
struct UCrackableActorComponent_CanClickToClose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CrackedActivationComponent.OnCracked
struct UCrackedActivationComponent_OnCracked_Params
{
};

// Function Astro.CrackedActivationComponent.OnClosed
struct UCrackedActivationComponent_OnClosed_Params
{
};

// Function Astro.CrackedActivationComponent.ActorCrackedActivationComponent
struct UCrackedActivationComponent_ActorCrackedActivationComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCrackedActivationComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.CreativeModeData.GetTerrainPaintStatus
struct UCreativeModeData_GetTerrainPaintStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.CrystalRefineryModuleComponent.UpdateIndicators
struct UCrystalRefineryModuleComponent_UpdateIndicators_Params
{
};

// Function Astro.CrystalRefineryModuleComponent.CanPerformConversion
struct UCrystalRefineryModuleComponent_CanPerformConversion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CustomCameraRigComponent.SetMode
struct UCustomCameraRigComponent_SetMode_Params
{
	struct FName                                       Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewTargetTransitionParams                 params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.CustomCameraRigComponent.GetCameraRigForMode
struct UCustomCameraRigComponent_GetCameraRigForMode_Params
{
	struct FName                                       Mode;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ACameraRigActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.CustomCameraRigComponent.ActorCustomCameraRig
struct UCustomCameraRigComponent_ActorCustomCameraRig_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.CustomGravityVolumeComponent.OnComponentExitedCustomGravityVolume
struct UCustomGravityVolumeComponent_OnComponentExitedCustomGravityVolume_Params
{
	class UPrimitiveComponent*                         volumeComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.CustomGravityVolumeComponent.OnComponentEnteredCustomGravityVolume
struct UCustomGravityVolumeComponent_OnComponentEnteredCustomGravityVolume_Params
{
	class UPrimitiveComponent*                         volumeComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.DamageComponent.Kill
struct UDamageComponent_Kill_Params
{
	bool                                               ignoreIndestructible;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DamageComponent.DealDamage
struct UDamageComponent_DealDamage_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DamageComponent.ActorDamageComponent
struct UDamageComponent_ActorDamageComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.DayNight.SaveGameSerializeCustom
struct ADayNight_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformEventReceiver.ActorDeformEventReceiver
struct UDeformEventReceiver_ActorDeformEventReceiver_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDeformEventReceiver*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.DeformTargetComponent.GetDeformTarget
struct UDeformTargetComponent_GetDeformTarget_Params
{
	struct FVector                                     sourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTierZoneComponent.SetZoneEnabled
struct UDeformTierZoneComponent_SetZoneEnabled_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTierZoneComponent.OnDeformEnable
struct UDeformTierZoneComponent_OnDeformEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.UpdateTerrainSample
struct ADeformTool_UpdateTerrainSample_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.UpdateAugmentModifiedProperties
struct ADeformTool_UpdateAugmentModifiedProperties_Params
{
};

// Function Astro.DeformTool.TryEquipAugment
struct ADeformTool_TryEquipAugment_Params
{
	class UAugmentComponent*                           augment;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAugmentProperty                                   augmentProperty;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.ToolClickQuery
struct ADeformTool_ToolClickQuery_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.TakeTerrainResource
struct ADeformTool_TakeTerrainResource_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.SetSuspendBrushPositionUpdate
struct ADeformTool_SetSuspendBrushPositionUpdate_Params
{
	bool                                               doSuspend;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.SetCreativeToolRange
struct ADeformTool_SetCreativeToolRange_Params
{
	float                                              NewVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.SetCreativeBaseDeformationScale
struct ADeformTool_SetCreativeBaseDeformationScale_Params
{
	float                                              NewVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.SetCreativeBaseDeformationIntensity
struct ADeformTool_SetCreativeBaseDeformationIntensity_Params
{
	float                                              NewVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.ServerSetIsIgnoringTerrainHardnessCreative
struct ADeformTool_ServerSetIsIgnoringTerrainHardnessCreative_Params
{
	bool                                               IgnoreTerrainHardness;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.ServerSendSampledTerrainUpdate
struct ADeformTool_ServerSendSampledTerrainUpdate_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.DeformTool.ServerSendBrushUpdates
struct ADeformTool_ServerSendBrushUpdates_Params
{
	struct FReplicatedBrushState                       repState;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Astro.DeformTool.ServerRequestNewMaterialWithTerrainProperties
struct ADeformTool_ServerRequestNewMaterialWithTerrainProperties_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTerrainProperties                          TerrainProperties;                                        // (ConstParm, Parm, ReferenceParm)
	class UMaterialInterface*                          CustomMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                creativeModePaintMaterialIndex;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.ServerEndDeforming
struct ADeformTool_ServerEndDeforming_Params
{
};

// Function Astro.DeformTool.ServerDoDeformTarget
struct ADeformTool_ServerDoDeformTarget_Params
{
	class UDeformTargetComponent*                      deformTarget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.DeformTool.ServerCreativeModeColorPick
struct ADeformTool_ServerCreativeModeColorPick_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Astro.DeformTool.ServerCreativeModeColorChange
struct ADeformTool_ServerCreativeModeColorChange_Params
{
	struct FTerrainProperties                          properties;                                               // (ConstParm, Parm, ReferenceParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class UMaterialInterface*                          CustomMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                creativeModePaintMaterialIndex;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.ServerBeginDeforming
struct ADeformTool_ServerBeginDeforming_Params
{
};

// Function Astro.DeformTool.PhysicalItemUnslotted
struct ADeformTool_PhysicalItemUnslotted_Params
{
	class APhysicalItem*                               ItemOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.PhysicalItemSlotted
struct ADeformTool_PhysicalItemSlotted_Params
{
	class APhysicalItem*                               ItemOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.OnReplicated_TerrainSample
struct ADeformTool_OnReplicated_TerrainSample_Params
{
};

// Function Astro.DeformTool.OnReplicated_ColorPickState
struct ADeformTool_OnReplicated_ColorPickState_Params
{
};

// Function Astro.DeformTool.OnInteraction
struct ADeformTool_OnInteraction_Params
{
	struct FClickResult                                Click;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.DeformTool.OnDeformBegin
struct ADeformTool_OnDeformBegin_Params
{
};

// Function Astro.DeformTool.OnCreativeModeActiveStateChanged
struct ADeformTool_OnCreativeModeActiveStateChanged_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.OnBrushSpawn
struct ADeformTool_OnBrushSpawn_Params
{
};

// Function Astro.DeformTool.OnAttemptedToPickColor
struct ADeformTool_OnAttemptedToPickColor_Params
{
};

// Function Astro.DeformTool.IsToolDeployed
struct ADeformTool_IsToolDeployed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.InteractActorTick
struct ADeformTool_InteractActorTick_Params
{
	class AActor*                                      interactActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.IncrementCreativeBaseDeformationIntensity
struct ADeformTool_IncrementCreativeBaseDeformationIntensity_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.IncrementCreativeBaseBrushDeformationScale
struct ADeformTool_IncrementCreativeBaseBrushDeformationScale_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.HasTankReservesNecessaryToAdditivelyDeform
struct ADeformTool_HasTankReservesNecessaryToAdditivelyDeform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.HasSpaceLeftInTanks
struct ADeformTool_HasSpaceLeftInTanks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.HandleTerrainTool
struct ADeformTool_HandleTerrainTool_Params
{
	class APlayController*                             Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  toolHit;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FClickResult                                ClickResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               startedInteraction;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isUsingTool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               justActivated;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.GetSedimentFlowRate
struct ADeformTool_GetSedimentFlowRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetSedimentDeformationDelta
struct ADeformTool_GetSedimentDeformationDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetSedimentAvailable
struct ADeformTool_GetSedimentAvailable_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetPowerLevelInhibitedFromAugment
struct ADeformTool_GetPowerLevelInhibitedFromAugment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetOwnerBackpackRasied
struct ADeformTool_GetOwnerBackpackRasied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetMaterialFromAugment
struct ADeformTool_GetMaterialFromAugment_Params
{
	struct FTerrainMaterial                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.DeformTool.GetIsIgnoringTerrainHardnessCreative
struct ADeformTool_GetIsIgnoringTerrainHardnessCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetIsDeforming
struct ADeformTool_GetIsDeforming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetIsActive
struct ADeformTool_GetIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetFixedAlignmentFromAugment
struct ADeformTool_GetFixedAlignmentFromAugment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetEffectiveIndicatorScale
struct ADeformTool_GetEffectiveIndicatorScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetEffectiveDeformationIntensity
struct ADeformTool_GetEffectiveDeformationIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetEffectiveBrushScale
struct ADeformTool_GetEffectiveBrushScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetDeformTier
struct ADeformTool_GetDeformTier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetDeformLocation
struct ADeformTool_GetDeformLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetDeformationIsActive
struct ADeformTool_GetDeformationIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetDeformationIntensityModifierFromAugment
struct ADeformTool_GetDeformationIntensityModifierFromAugment_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetCreativeToolRange
struct ADeformTool_GetCreativeToolRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetCreativeDeformationIntensityNormalized
struct ADeformTool_GetCreativeDeformationIntensityNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetCreativeBaseDeformationIntensity
struct ADeformTool_GetCreativeBaseDeformationIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetCreativeBaseBrushDeformationScale
struct ADeformTool_GetCreativeBaseBrushDeformationScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetBrushSizeModifierFromAugment
struct ADeformTool_GetBrushSizeModifierFromAugment_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.GetAugmentedTerrainHardness
struct ADeformTool_GetAugmentedTerrainHardness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.DetermineSedimentTankAmount
struct ADeformTool_DetermineSedimentTankAmount_Params
{
};

// Function Astro.DeformTool.Deactivated
struct ADeformTool_Deactivated_Params
{
};

// Function Astro.DeformTool.CycleModeRight
struct ADeformTool_CycleModeRight_Params
{
};

// Function Astro.DeformTool.CycleModeLeft
struct ADeformTool_CycleModeLeft_Params
{
};

// Function Astro.DeformTool.CheckForOrphanedTool
struct ADeformTool_CheckForOrphanedTool_Params
{
};

// Function Astro.DeformTool.CheckAugmentsHavePower
struct ADeformTool_CheckAugmentsHavePower_Params
{
};

// Function Astro.DeformTool.ChangeInAttachedAugments
struct ADeformTool_ChangeInAttachedAugments_Params
{
};

// Function Astro.DeformTool.AuthorityGetEffectiveHardnessTier
struct ADeformTool_AuthorityGetEffectiveHardnessTier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DeformTool.AdjustSedimentTankAmountFromDeformationDelta
struct ADeformTool_AdjustSedimentTankAmountFromDeformationDelta_Params
{
	float                                              deformationDelta;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeformTool.Activated
struct ADeformTool_Activated_Params
{
};

// Function Astro.DeployableItemPackageComponent.SetupPackagedItem
struct UDeployableItemPackageComponent_SetupPackagedItem_Params
{
	class UClass*                                      ItemTypeToDeploy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.SetupHideIndicatorTimer
struct UDeployableItemPackageComponent_SetupHideIndicatorTimer_Params
{
};

// Function Astro.DeployableItemPackageComponent.SetCrateMaterialInstance
struct UDeployableItemPackageComponent_SetCrateMaterialInstance_Params
{
	class UTexture*                                    OverlayTexture;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.PreDeployPackagedItem
struct UDeployableItemPackageComponent_PreDeployPackagedItem_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.PackageUnemplacedFromSlot
struct UDeployableItemPackageComponent_PackageUnemplacedFromSlot_Params
{
};

// Function Astro.DeployableItemPackageComponent.PackageSetCardinalDirection
struct UDeployableItemPackageComponent_PackageSetCardinalDirection_Params
{
};

// Function Astro.DeployableItemPackageComponent.PackageReleasedFromSlot
struct UDeployableItemPackageComponent_PackageReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.DeployableItemPackageComponent.PackageReadyEvent__DelegateSignature
struct UDeployableItemPackageComponent_PackageReadyEvent__DelegateSignature_Params
{
	bool                                               DeployReady;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.PackagePlacedInSlot
struct UDeployableItemPackageComponent_PackagePlacedInSlot_Params
{
};

// DelegateFunction Astro.DeployableItemPackageComponent.PackageIndicatorEvent__DelegateSignature
struct UDeployableItemPackageComponent_PackageIndicatorEvent__DelegateSignature_Params
{
	bool                                               IndicatorVisible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.PackageEmplacedInSlot
struct UDeployableItemPackageComponent_PackageEmplacedInSlot_Params
{
};

// DelegateFunction Astro.DeployableItemPackageComponent.PackagedItemDeployedEvent__DelegateSignature
struct UDeployableItemPackageComponent_PackagedItemDeployedEvent__DelegateSignature_Params
{
	class APhysicalItem*                               DeployedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.OnItemComponentChanged
struct UDeployableItemPackageComponent_OnItemComponentChanged_Params
{
};

// Function Astro.DeployableItemPackageComponent.Moved
struct UDeployableItemPackageComponent_Moved_Params
{
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.HideIndicator
struct UDeployableItemPackageComponent_HideIndicator_Params
{
};

// Function Astro.DeployableItemPackageComponent.GeneralSlotEvent
struct UDeployableItemPackageComponent_GeneralSlotEvent_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.EndCursorOver
struct UDeployableItemPackageComponent_EndCursorOver_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.DropInWorld
struct UDeployableItemPackageComponent_DropInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.DeployableItemPackageComponent.DeployPackagedItem
struct UDeployableItemPackageComponent_DeployPackagedItem_Params
{
};

// Function Astro.DeployableItemPackageComponent.ClearHideIndicatorTimer
struct UDeployableItemPackageComponent_ClearHideIndicatorTimer_Params
{
};

// Function Astro.DeployableItemPackageComponent.BeginCursorOver
struct UDeployableItemPackageComponent_BeginCursorOver_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.DeployableItemPackageComponent.AssignMaterialEvent__DelegateSignature
struct UDeployableItemPackageComponent_AssignMaterialEvent__DelegateSignature_Params
{
	class UMaterialInterface*                          PackageMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployRetractComponent.OnRep_PendingDeployed
struct UDeployRetractComponent_OnRep_PendingDeployed_Params
{
};

// Function Astro.DeployRetractComponent.OnRep_IsDeployed
struct UDeployRetractComponent_OnRep_IsDeployed_Params
{
};

// Function Astro.DeployRetractComponent.OnDeployRetractMontageActionEnded
struct UDeployRetractComponent_OnDeployRetractMontageActionEnded_Params
{
	class UAstroAction*                                montageAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DeployRetractComponent.AuthorityRetract
struct UDeployRetractComponent_AuthorityRetract_Params
{
};

// Function Astro.DeployRetractComponent.AuthorityDeploy
struct UDeployRetractComponent_AuthorityDeploy_Params
{
};

// Function Astro.DestroyAfterComponent.StartTimer
struct UDestroyAfterComponent_StartTimer_Params
{
};

// Function Astro.DestroyAfterComponent.PlayDestroyParticlesAndDelete
struct UDestroyAfterComponent_PlayDestroyParticlesAndDelete_Params
{
	class UParticleSystemComponent*                    particles;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              playParticlesAfter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              destroyAfter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DistanceLightFaderComponent.UpdateLightFadeWithVisibility
struct UDistanceLightFaderComponent_UpdateLightFadeWithVisibility_Params
{
	struct FVector                                     OtherObjectLocation;                                      // (Parm, IsPlainOldData)
	bool                                               setVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DistanceLightFaderComponent.UpdateLightFade
struct UDistanceLightFaderComponent_UpdateLightFade_Params
{
	struct FVector                                     OtherObjectLocation;                                      // (Parm, IsPlainOldData)
};

// Function Astro.DroneBase.ZoomOut
struct ADroneBase_ZoomOut_Params
{
};

// Function Astro.DroneBase.ZoomIn
struct ADroneBase_ZoomIn_Params
{
};

// Function Astro.DroneBase.TakePhoto
struct ADroneBase_TakePhoto_Params
{
};

// Function Astro.DroneBase.SetRiseInputInactive
struct ADroneBase_SetRiseInputInactive_Params
{
};

// Function Astro.DroneBase.SetRiseInputActive
struct ADroneBase_SetRiseInputActive_Params
{
};

// Function Astro.DroneBase.ServerSetFlightState
struct ADroneBase_ServerSetFlightState_Params
{
	EDroneFlightState                                  NewFlightState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DroneBase.OnRep_FlightState
struct ADroneBase_OnRep_FlightState_Params
{
};

// Function Astro.DroneBase.NudgeFlightSpeedSlower
struct ADroneBase_NudgeFlightSpeedSlower_Params
{
};

// Function Astro.DroneBase.NudgeFlightSpeedFaster
struct ADroneBase_NudgeFlightSpeedFaster_Params
{
};

// Function Astro.DroneBase.IsLocallyControlled
struct ADroneBase_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DroneBase.GetLocalSolarBody
struct ADroneBase_GetLocalSolarBody_Params
{
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DroneBase.GetCurrentFOV
struct ADroneBase_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.DroneBase.AuthorityRecallDrone
struct ADroneBase_AuthorityRecallDrone_Params
{
};

// Function Astro.DroneBase.AuthorityLaunchDrone
struct ADroneBase_AuthorityLaunchDrone_Params
{
	class APlayController*                             OwningController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.DroneBase.AuthorityEmergencyRecallDrone
struct ADroneBase_AuthorityEmergencyRecallDrone_Params
{
};

// Function Astro.Examinable.ValidateWithinExamineRange
struct UExaminable_ValidateWithinExamineRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ExoRequestModuleBase.UpdateScore
struct AExoRequestModuleBase_UpdateScore_Params
{
};

// Function Astro.ExoRequestModuleBase.UpdateRewardData
struct AExoRequestModuleBase_UpdateRewardData_Params
{
};

// Function Astro.ExoRequestModuleBase.UpdateProgressBar
struct AExoRequestModuleBase_UpdateProgressBar_Params
{
};

// Function Astro.ExoRequestModuleBase.UpdateModuleState
struct AExoRequestModuleBase_UpdateModuleState_Params
{
};

// Function Astro.ExoRequestModuleBase.UpdateEventIcon
struct AExoRequestModuleBase_UpdateEventIcon_Params
{
};

// Function Astro.ExoRequestModuleBase.UpdateActiveEvent
struct AExoRequestModuleBase_UpdateActiveEvent_Params
{
};

// Function Astro.ExoRequestModuleBase.OnRep_ExoRequestModuleData
struct AExoRequestModuleBase_OnRep_ExoRequestModuleData_Params
{
};

// Function Astro.ExoRequestModuleBase.IsEventActive
struct AExoRequestModuleBase_IsEventActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ExoRequestModuleBase.HasUnclaimedPhysicalItemRewards
struct AExoRequestModuleBase_HasUnclaimedPhysicalItemRewards_Params
{
	class APlayController*                             PlayController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ExoRequestModuleBase.GetEventInputIcon
struct AExoRequestModuleBase_GetEventInputIcon_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ExoRequestModuleBase.AuthoritySetShipAttachedToDock
struct AExoRequestModuleBase_AuthoritySetShipAttachedToDock_Params
{
	bool                                               IsAttached;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExoRequestModuleBase.AuthorityDeliverItems
struct AExoRequestModuleBase_AuthorityDeliverItems_Params
{
};

// Function Astro.ExoRequestModuleBase.ActivatedThroughControlPanel
struct AExoRequestModuleBase_ActivatedThroughControlPanel_Params
{
	class APlayController*                             ClickingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.SetDetonationTimerPaused
struct UExplosiveComponent_SetDetonationTimerPaused_Params
{
	bool                                               bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.SetDetonationTimer
struct UExplosiveComponent_SetDetonationTimer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.MulticastWreckageDestroyAudio
struct UExplosiveComponent_MulticastWreckageDestroyAudio_Params
{
	struct FTransform                                  xform;                                                    // (Parm, IsPlainOldData)
	class UObject*                                     contextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.ExplosiveDestroyActor
struct UExplosiveComponent_ExplosiveDestroyActor_Params
{
	class AActor*                                      ToDestroy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.DoExplosionDeformation
struct UExplosiveComponent_DoExplosionDeformation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.DoBlastDamage
struct UExplosiveComponent_DoBlastDamage_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.Detonate
struct UExplosiveComponent_Detonate_Params
{
};

// Function Astro.ExplosiveComponent.DamageActor
struct UExplosiveComponent_DamageActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ExplosiveComponent.CancelDetonationTimer
struct UExplosiveComponent_CancelDetonationTimer_Params
{
};

// Function Astro.FlyingDroneMovementComponent.SetCreativeModeFlightSpeedScalarNormalized
struct UFlyingDroneMovementComponent_SetCreativeModeFlightSpeedScalarNormalized_Params
{
	float                                              NormalizedCreativeModeFlightSpeedScalar;                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.FlyingDroneMovementComponent.ServerUpdateClientMovementInputVector
struct UFlyingDroneMovementComponent_ServerUpdateClientMovementInputVector_Params
{
	struct FVector_NetQuantizeNormal                   ClientMovementInput;                                      // (Parm)
};

// Function Astro.FlyingDroneMovementComponent.GetCreativeModeFlightSpeedScalarNormalized
struct UFlyingDroneMovementComponent_GetCreativeModeFlightSpeedScalarNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.FollowComponent.SetFollowComponent
struct UFollowComponent_SetFollowComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.FollowComponent.AddActorFollowComponent
struct UFollowComponent_AddActorFollowComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFollowComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.FuelConsumerComponent.OnItemSlotted
struct UFuelConsumerComponent_OnItemSlotted_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.FuelConsumerComponent.OnItemRemoved
struct UFuelConsumerComponent_OnItemRemoved_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.FuelConsumerComponent.OnItemAmountChanged
struct UFuelConsumerComponent_OnItemAmountChanged_Params
{
};

// Function Astro.GameSettingsDataStatics.GetGraphicsOptions
struct UGameSettingsDataStatics_GetGraphicsOptions_Params
{
	struct FGameSettingsGraphicsOptions                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.GameSettingsDataStatics.GetDisplayOptions
struct UGameSettingsDataStatics_GetDisplayOptions_Params
{
	struct FGameSettingsDisplayOptions                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.GameSettingsDataStatics.GetControlsOptions
struct UGameSettingsDataStatics_GetControlsOptions_Params
{
	struct FGameSettingsControlsOptions                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.GameSettingsDataStatics.GetAudioOptions
struct UGameSettingsDataStatics_GetAudioOptions_Params
{
	struct FGameSettingsAudioOptions                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.GateObject.OnSolarSystemInitialized
struct AGateObject_OnSolarSystemInitialized_Params
{
	class USolarSystem*                                SolarSystem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObject.OnLocalPlayerChangedLocalSolarBody
struct AGateObject_OnLocalPlayerChangedLocalSolarBody_Params
{
	class ASolarBody*                                  playerLocalSolarBody;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectEventListener.OnPlayerCharacterInProximityDestroyed
struct UGateObjectEventListener_OnPlayerCharacterInProximityDestroyed_Params
{
	class AActor*                                      playerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectComponentContainer.GetGateObjectComponent
struct UGateObjectComponentContainer_GetGateObjectComponent_Params
{
	struct FAstroDatumRef                              GateObjectComponentRef;                                   // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGateObjectComponent                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.GateObjectComponentContainer.FindGateObjectComponent
struct UGateObjectComponentContainer_FindGateObjectComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGateObjectComponent                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.GateObjectControlPanel.SetContext
struct AGateObjectControlPanel_SetContext_Params
{
	EGateObjectControlPanelContext                     newContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.SelectControlNode
struct AGateObjectControlPanel_SelectControlNode_Params
{
	int                                                controlNodeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.OnSolarSystemInitialized
struct AGateObjectControlPanel_OnSolarSystemInitialized_Params
{
	class USolarSystem*                                SolarSystem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.OnSelectedControlNodeGateObjectActivated
struct AGateObjectControlPanel_OnSelectedControlNodeGateObjectActivated_Params
{
};

// Function Astro.GateObjectControlPanel.OnSelectedControlNodeChanged
struct AGateObjectControlPanel_OnSelectedControlNodeChanged_Params
{
};

// Function Astro.GateObjectControlPanel.OnRep_CurrentLocationControlNodeIndex
struct AGateObjectControlPanel_OnRep_CurrentLocationControlNodeIndex_Params
{
};

// Function Astro.GateObjectControlPanel.OnGateStationSpawned
struct AGateObjectControlPanel_OnGateStationSpawned_Params
{
};

// Function Astro.GateObjectControlPanel.OnGateObjectActivated
struct AGateObjectControlPanel_OnGateObjectActivated_Params
{
	struct FGateObjectReference                        ActivatedGateObjectRef;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.GateObjectControlPanel.OnControlNodeEndCursorOver
struct AGateObjectControlPanel_OnControlNodeEndCursorOver_Params
{
	class UPrimitiveComponent*                         hoveredControlNodeMesh;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.OnControlNodeClicked
struct AGateObjectControlPanel_OnControlNodeClicked_Params
{
	class UPrimitiveComponent*                         clickedControlNodeMesh;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.GateObjectControlPanel.OnControlNodeCenteringInterpolationFinished
struct AGateObjectControlPanel_OnControlNodeCenteringInterpolationFinished_Params
{
};

// Function Astro.GateObjectControlPanel.OnControlNodeBeginCursorOver
struct AGateObjectControlPanel_OnControlNodeBeginCursorOver_Params
{
	class UPrimitiveComponent*                         hoveredControlNodeMesh;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.IsControlNodeGateObjectActivated
struct AGateObjectControlPanel_IsControlNodeGateObjectActivated_Params
{
	int                                                controlNodeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.GateObjectControlPanel.HandleControlNodeEndHover
struct AGateObjectControlPanel_HandleControlNodeEndHover_Params
{
	struct FGateObjectControlNode                      hoveredControlNode;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.GateObjectControlPanel.HandleControlNodeClick
struct AGateObjectControlPanel_HandleControlNodeClick_Params
{
	struct FGateObjectControlNode                      clickedControlNode;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.GateObjectControlPanel.HandleControlNodeBeginHover
struct AGateObjectControlPanel_HandleControlNodeBeginHover_Params
{
	struct FGateObjectControlNode                      hoveredControlNode;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.GateObjectControlPanel.CenterControlNodeInView
struct AGateObjectControlPanel_CenterControlNodeInView_Params
{
	int                                                controlNodeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GateObjectSystem.BP_TryActivateGateObject
struct UGateObjectSystem_BP_TryActivateGateObject_Params
{
	class AActor*                                      gateObjectActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.GateObjectSystem.BP_SetGateObjectCanBeActivated
struct UGateObjectSystem_BP_SetGateObjectCanBeActivated_Params
{
	class AActor*                                      gateObjectActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeActivated;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GatesGameMode.TryGetGateStationActor
struct AGatesGameMode_TryGetGateStationActor_Params
{
	class AGateStation*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.GatesGameMode.TryGetGateEngineActor
struct AGatesGameMode_TryGetGateEngineActor_Params
{
	class AAstroPlanet*                                enginePlanet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGateEngine*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.GatesGameMode.TryGetGateChamberActor
struct AGatesGameMode_TryGetGateChamberActor_Params
{
	class AAstroPlanet*                                chamberPlanet;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChamberCoordinateIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGateChamber*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.GatesGameMode.StationSpawned
struct AGatesGameMode_StationSpawned_Params
{
};

// Function Astro.GatesGameMode.StationActivated
struct AGatesGameMode_StationActivated_Params
{
};

// Function Astro.GatesGameMode.OnStationSpawned
struct AGatesGameMode_OnStationSpawned_Params
{
};

// Function Astro.GatesGameMode.OnStationActivated
struct AGatesGameMode_OnStationActivated_Params
{
	struct FAstroDatumRef                              stationEntityRef;                                         // (Parm)
};

// Function Astro.GatesGameMode.OnEngineActivated
struct AGatesGameMode_OnEngineActivated_Params
{
	struct FAstroDatumRef                              engineEntityRef;                                          // (Parm)
};

// Function Astro.GatesGameMode.OnChamberActivated
struct AGatesGameMode_OnChamberActivated_Params
{
	struct FAstroDatumRef                              chamberEntityRef;                                         // (Parm)
};

// Function Astro.GatesGameMode.InitializeForSolarSystem
struct AGatesGameMode_InitializeForSolarSystem_Params
{
	class USolarSystem*                                SolarSystem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GatesGameMode.EngineActivated
struct AGatesGameMode_EngineActivated_Params
{
	class AAstroPlanet*                                enginePlanet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GatesGameMode.ChamberActivated
struct AGatesGameMode_ChamberActivated_Params
{
	class AAstroPlanet*                                chamberPlanet;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.GatesGameState.OnReplicationDataReceived
struct AGatesGameState_OnReplicationDataReceived_Params
{
};

// Function Astro.GateStation.OnClickedInSolarView
struct AGateStation_OnClickedInSolarView_Params
{
	class AActor*                                      TouchedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.GateStation.InitializeLandingZones
struct AGateStation_InitializeLandingZones_Params
{
};

// Function Astro.UnlockBehavior.RespondToLockedStateChanged
struct UUnlockBehavior_RespondToLockedStateChanged_Params
{
	struct FAstroDatumRef                              changedLockableComponent;                                 // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.GrantAchievementUnlockBehavior.RespondToLockedStateChanged
struct UGrantAchievementUnlockBehavior_RespondToLockedStateChanged_Params
{
	struct FAstroDatumRef                              changedLockableComponent;                                 // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.HangingSlotComponent.PositionConnection
struct UHangingSlotComponent_PositionConnection_Params
{
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayController*                             Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     outNormal;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Astro.HangingSlotComponent.ConnectAndTargetSlot
struct UHangingSlotComponent_ConnectAndTargetSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.HangingSlotComponent.ConnectAndTarget
struct UHangingSlotComponent_ConnectAndTarget_Params
{
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.HarvestableComponentEventListener.OnSecondaryHarvestableItemReleased
struct UHarvestableComponentEventListener_OnSecondaryHarvestableItemReleased_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.HarvestableComponentEventListener.OnPrimaryHarvestableItemReleased
struct UHarvestableComponentEventListener_OnPrimaryHarvestableItemReleased_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.HarvestableComponentEventListener.OnHarvestableUprooted
struct UHarvestableComponentEventListener_OnHarvestableUprooted_Params
{
};

// Function Astro.HarvestableComponentEventListener.OnHarvestableBuried
struct UHarvestableComponentEventListener_OnHarvestableBuried_Params
{
};

// Function Astro.HarvestableComponentContainer.GetHarvestableComponent
struct UHarvestableComponentContainer_GetHarvestableComponent_Params
{
	struct FAstroDatumRef                              HarvestableComponentRef;                                  // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHarvestableComponent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.HarvestableComponentContainer.FindHarvestableComponent
struct UHarvestableComponentContainer_FindHarvestableComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHarvestableComponent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.HazardActor.OnSpawn
struct AHazardActor_OnSpawn_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.HornComponent.OneOffSoundPlayed
struct UHornComponent_OneOffSoundPlayed_Params
{
};

// Function Astro.HornComponent.OneOffSoundCompleted
struct UHornComponent_OneOffSoundCompleted_Params
{
};

// Function Astro.HornComponent.LoopSoundStopped
struct UHornComponent_LoopSoundStopped_Params
{
};

// Function Astro.HornComponent.LoopSoundStarted
struct UHornComponent_LoopSoundStarted_Params
{
};

// Function Astro.HoverDelayComponent.OnTimerEnd
struct UHoverDelayComponent_OnTimerEnd_Params
{
};

// Function Astro.HoverDelayComponent.OnHoverEnd
struct UHoverDelayComponent_OnHoverEnd_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.HoverDelayComponent.OnHoverBegin
struct UHoverDelayComponent_OnHoverBegin_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.IconRigNative.DoTeriaryIcons
struct AIconRigNative_DoTeriaryIcons_Params
{
	bool                                               astroVisible;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               backpackVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               astroSeated;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemCatalogEntryDisplay.K2_SetVisible
struct UItemCatalogEntryDisplay_K2_SetVisible_Params
{
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemCatalogEntrySpindleDisplay.SetItemIconMeshComponents
struct UItemCatalogEntrySpindleDisplay_SetItemIconMeshComponents_Params
{
	class UMeshComponent*                              newItemIconMeshParent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                newItemIconMeshComponents;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.ItemCatalogEntrySpindleDisplay.ItemIconMeshClicked
struct UItemCatalogEntrySpindleDisplay_ItemIconMeshClicked_Params
{
	class UPrimitiveComponent*                         clickedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Astro.ItemCatalogEntrySpindleDisplay.ContinuousIndexToItemIconMeshIndex
struct UItemCatalogEntrySpindleDisplay_ContinuousIndexToItemIconMeshIndex_Params
{
	int                                                continuousIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.TakeItemRateDelta
struct UItemComponent_TakeItemRateDelta_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.TakeItemRate
struct UItemComponent_TakeItemRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.TakeItem
struct UItemComponent_TakeItem_Params
{
	int                                                TakeAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.SetItemUsingFullness
struct UItemComponent_SetItemUsingFullness_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fullness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               suppressItemDrainedFillChangeEventBroadcast;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemComponent.SetItem
struct UItemComponent_SetItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               suppressItemDrainedFillChangeEventBroadcast;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemComponent.SetAmountUsingFullness
struct UItemComponent_SetAmountUsingFullness_Params
{
	float                                              newFullness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               suppressItemDrainedFillChangeEventBroadcast;              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.SetAmount
struct UItemComponent_SetAmount_Params
{
	int                                                NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               suppressItemDrainedFillChangeEventBroadcast;              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.SaveGameSerializeCustom
struct UItemComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemComponent.OnRep
struct UItemComponent_OnRep_Params
{
};

// Function Astro.ItemComponent.IsFull
struct UItemComponent_IsFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.IsEmptyContainer
struct UItemComponent_IsEmptyContainer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.IsEmpty
struct UItemComponent_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.IsContainer
struct UItemComponent_IsContainer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.HaveItem
struct UItemComponent_HaveItem_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.HasStoredItem
struct UItemComponent_HasStoredItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetStoredSubItemTypeClass
struct UItemComponent_GetStoredSubItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetStoredSubItemTypeCDO
struct UItemComponent_GetStoredSubItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetRecipeAmount
struct UItemComponent_GetRecipeAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetLiteralItemTypeClass
struct UItemComponent_GetLiteralItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetLiteralItemTypeCDO
struct UItemComponent_GetLiteralItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetInstanceCount
struct UItemComponent_GetInstanceCount_Params
{
	int                                                maxNumInstances;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetFunctionalItemTypeClass
struct UItemComponent_GetFunctionalItemTypeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetFunctionalItemTypeCDO
struct UItemComponent_GetFunctionalItemTypeCDO_Params
{
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetFullness
struct UItemComponent_GetFullness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetAmount
struct UItemComponent_GetAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.GetActorItemComponent
struct UItemComponent_GetActorItemComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ItemComponent.ForceChangePrimaryItemTypeAndStoredSubItemTypeWithAmount
struct UItemComponent_ForceChangePrimaryItemTypeAndStoredSubItemTypeWithAmount_Params
{
	class UClass*                                      primaryItemType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      storedSubItemType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               suppressItemDrainedFillChangeEventBroadcast;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemComponent.ClearContainer
struct UItemComponent_ClearContainer_Params
{
};

// Function Astro.ItemComponent.AddItemRateDelta
struct UItemComponent_AddItemRateDelta_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.AddItemRate
struct UItemComponent_AddItemRate_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.AddItem
struct UItemComponent_AddItem_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Actual;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemComponent.AcceptsChangeInAmountForItemType
struct UItemComponent_AcceptsChangeInAmountForItemType_Params
{
	class UClass*                                      itemTypeForChange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               changeIsPositive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemConverterComponentEventListener.OnItemStateChangedInExternalResourceSlot
struct UItemConverterComponentEventListener_OnItemStateChangedInExternalResourceSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemConverterComponentEventListener.OnItemSetInInputSlot
struct UItemConverterComponentEventListener_OnItemSetInInputSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemConverterComponentEventListener.OnItemReleasedFromOutputSlot
struct UItemConverterComponentEventListener_OnItemReleasedFromOutputSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemConverterComponentEventListener.OnItemReleasedFromInputSlot
struct UItemConverterComponentEventListener_OnItemReleasedFromInputSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemConverterComponentEventListener.OnItemDestroyedInInputSlot
struct UItemConverterComponentEventListener_OnItemDestroyedInInputSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemConverterComponentContainer.GetItemConverterComponent
struct UItemConverterComponentContainer_GetItemConverterComponent_Params
{
	struct FAstroDatumRef                              ItemConverterComponentRef;                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FItemConverterComponent                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemConverterComponentContainer.FindItemConverterComponent
struct UItemConverterComponentContainer_FindItemConverterComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FItemConverterComponent                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemDriveComponent.OnRep_UnclaimedPhysicalItemRewards
struct UItemDriveComponent_OnRep_UnclaimedPhysicalItemRewards_Params
{
};

// Function Astro.ItemDriveComponent.OnRep_PredictedProgress
struct UItemDriveComponent_OnRep_PredictedProgress_Params
{
};

// Function Astro.ItemDriveComponent.HandlePlayerEventSent
struct UItemDriveComponent_HandlePlayerEventSent_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                eventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemDriveComponent.HandlePlayerEventResponse
struct UItemDriveComponent_HandlePlayerEventResponse_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                eventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemDriveComponent.GetItemValue
struct UItemDriveComponent_GetItemValue_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemDriveComponent.GetEventDisplayName
struct UItemDriveComponent_GetEventDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemDriveComponent.GetEventDisplayDescription
struct UItemDriveComponent_GetEventDisplayDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemDriveComponent.AuthorityDisplayDeliveryNotification
struct UItemDriveComponent_AuthorityDisplayDeliveryNotification_Params
{
	struct FText                                       Message;                                                  // (Parm)
	class UTexture*                                    badge;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemDriveComponent.AuthorityAddItemsInSlotsToSendCache
struct UItemDriveComponent_AuthorityAddItemsInSlotsToSendCache_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemListWeighted.PickItem
struct UItemListWeighted_PickItem_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemListWeighted.ItemSpawnListDefault
struct UItemListWeighted_ItemSpawnListDefault_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemListWeighted*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemPad.StartInWorld
struct UItemPad_StartInWorld_Params
{
};

// Function Astro.ItemPad.SpawnPad
struct UItemPad_SpawnPad_Params
{
	bool                                               withTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ItemPad.SaveGameSerializeCustom
struct UItemPad_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemPad.ReleaseFromSlot
struct UItemPad_ReleaseFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemPad.PlaceInSlot
struct UItemPad_PlaceInSlot_Params
{
};

// Function Astro.ItemPad.PickUpFromWorld
struct UItemPad_PickUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemPad.OnRep_Pad
struct UItemPad_OnRep_Pad_Params
{
};

// Function Astro.ItemPad.MotionStateChanged
struct UItemPad_MotionStateChanged_Params
{
};

// Function Astro.ItemPad.EmplaceInSlot
struct UItemPad_EmplaceInSlot_Params
{
};

// Function Astro.ItemPad.DropInWorld
struct UItemPad_DropInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ItemPad.ActorItemPad
struct UItemPad_ActorItemPad_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.ItemPadActor.ShouldDestroyOnPickup
struct AItemPadActor_ShouldDestroyOnPickup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemPadActor.OnSpawn
struct AItemPadActor_OnSpawn_Params
{
	bool                                               withTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ItemPadActor.OnOwnerDestroyed
struct AItemPadActor_OnOwnerDestroyed_Params
{
	class AActor*                                      deletingOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemStatics.WillCraftItem
struct UItemStatics_WillCraftItem_Params
{
	TArray<struct FSlotReference>                      InputSlots;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              outputSlot;                                               // (Parm)
	TArray<class UClass*>                              ItemTypes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.TryCraftItemDelta
struct UItemStatics_TryCraftItemDelta_Params
{
	TArray<struct FSlotReference>                      InputSlots;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              outputSlot;                                               // (Parm)
	TArray<class UClass*>                              ItemTypes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.TryCraftItem
struct UItemStatics_TryCraftItem_Params
{
	TArray<struct FSlotReference>                      InputSlots;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              outputSlot;                                               // (Parm)
	TArray<class UClass*>                              ItemTypes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.SpawnDeployablePackagedItem
struct UItemStatics_SpawnDeployablePackagedItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PhysicalItemClassPackagedItemWillContain;                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.SmallItemAmountDelta
struct UItemStatics_SmallItemAmountDelta_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.ResourcePassesFiltrationList
struct UItemStatics_ResourcePassesFiltrationList_Params
{
	class UClass*                                      ItemToTest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FiltrationList;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ESlottableItemsFiltrationListBehavior              FiltrationBehavior;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.RemoveItemFromBundleAndPlaceOnGroundNearby
struct UItemStatics_RemoveItemFromBundleAndPlaceOnGroundNearby_Params
{
	class APhysicalItem*                               BundledItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetForGroundUnbundling;                                // (Parm, IsPlainOldData)
	bool                                               bPretendAsIfInAuxSlot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.RecipeFromAmount
struct UItemStatics_RecipeFromAmount_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.PhysicalItemTypeCDO
struct UItemStatics_PhysicalItemTypeCDO_Params
{
	class UClass*                                      PhysicalItemClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.PhysicalItemResetItemStartingAmountAndCapacityToClassDefaults
struct UItemStatics_PhysicalItemResetItemStartingAmountAndCapacityToClassDefaults_Params
{
	class APhysicalItem*                               PhysicalItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.PhysicalItemGetDefaultLiteralItemTypeClass
struct UItemStatics_PhysicalItemGetDefaultLiteralItemTypeClass_Params
{
	class UClass*                                      PhysicalItemClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.PhysicalItemDefault
struct UItemStatics_PhysicalItemDefault_Params
{
	class UClass*                                      PhysicalItemClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.MakeItemRecipeFromSlots
struct UItemStatics_MakeItemRecipeFromSlots_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRecipe                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemStatics.MakeItemRecipe
struct UItemStatics_MakeItemRecipe_Params
{
	TArray<class UClass*>                              ItemTypes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRecipe                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemStatics.ItemUnitAmount
struct UItemStatics_ItemUnitAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsStoredSubItemType
struct UItemStatics_IsStoredSubItemType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsScannableStatusValid
struct UItemStatics_IsScannableStatusValid_Params
{
	struct FScannableStatus                            Status;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsRecipeValid
struct UItemStatics_IsRecipeValid_Params
{
	struct FRecipe                                     Recipe;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsPackageableItemType
struct UItemStatics_IsPackageableItemType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsItemPartOfRecipe
struct UItemStatics_IsItemPartOfRecipe_Params
{
	struct FRecipe                                     Recipe;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsDeployablePackageItemType
struct UItemStatics_IsDeployablePackageItemType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.IsContainerItemType
struct UItemStatics_IsContainerItemType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.GetUseContextVerb
struct UItemStatics_GetUseContextVerb_Params
{
	EUseContext                                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemStatics.GetPackageTypeForItem
struct UItemStatics_GetPackageTypeForItem_Params
{
	class APhysicalItem*                               ItemToPackage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.GetExamineVerb
struct UItemStatics_GetExamineVerb_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemStatics.GetCraftingSourcesTooltipDescription
struct UItemStatics_GetCraftingSourcesTooltipDescription_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ItemStatics.FindRecipeTarget
struct UItemStatics_FindRecipeTarget_Params
{
	struct FRecipe                                     Recipe;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                              ItemTypes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.DestroyItemAndAllSlottedItemsRecursively
struct UItemStatics_DestroyItemAndAllSlottedItemsRecursively_Params
{
	class APhysicalItem*                               ItemToDestroy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ItemStatics.ConvertDeformationDeltaToSedimentAmount
struct UItemStatics_ConvertDeformationDeltaToSedimentAmount_Params
{
	float                                              deformationDelta;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SedimentDeformationRatio;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.CanSwapHeldItemWithSlottedItem
struct UItemStatics_CanSwapHeldItemWithSlottedItem_Params
{
	class APhysicalItem*                               HeldItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               SlottedItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.CanHeldItemInteractWithTargetItem
struct UItemStatics_CanHeldItemInteractWithTargetItem_Params
{
	class APhysicalItem*                               HeldItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               hitItem;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.AmountFromRecipe
struct UItemStatics_AmountFromRecipe_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemStatics.AmountFromRate
struct UItemStatics_AmountFromRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ItemType.GetConstructionRecipe
struct UItemType_GetConstructionRecipe_Params
{
	struct FRecipe                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.JetpackItem.SendStateTelemetry
struct AJetpackItem_SendStateTelemetry_Params
{
};

// Function Astro.JetpackItem.SendPostRateLimitTelemetry
struct AJetpackItem_SendPostRateLimitTelemetry_Params
{
};

// Function Astro.JetpackItem.OnUpdateNozzleDirection
struct AJetpackItem_OnUpdateNozzleDirection_Params
{
	struct FVector                                     NewNozzleDirection;                                       // (Parm, IsPlainOldData)
};

// Function Astro.JetpackItem.OnSlottedItemsChanged
struct AJetpackItem_OnSlottedItemsChanged_Params
{
};

// Function Astro.JetpackItem.OnRep_RemainingFuelState
struct AJetpackItem_OnRep_RemainingFuelState_Params
{
};

// Function Astro.JetpackItem.OnRep_NozzleDirection
struct AJetpackItem_OnRep_NozzleDirection_Params
{
};

// Function Astro.JetpackItem.OnRep_JetpackActive
struct AJetpackItem_OnRep_JetpackActive_Params
{
};

// Function Astro.JetpackItem.OnRep_FuelPortionAmount
struct AJetpackItem_OnRep_FuelPortionAmount_Params
{
};

// Function Astro.JetpackItem.OnPortionDepleted
struct AJetpackItem_OnPortionDepleted_Params
{
};

// Function Astro.JetpackItem.OnPortionChanged
struct AJetpackItem_OnPortionChanged_Params
{
	float                                              portionUsed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnMovementOverrideTick
struct AJetpackItem_OnMovementOverrideTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnLanded
struct AJetpackItem_OnLanded_Params
{
	TEnumAsByte<EPhysicalSurface>                      GroundSurface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnJumpStopped
struct AJetpackItem_OnJumpStopped_Params
{
};

// Function Astro.JetpackItem.OnJumpStarted
struct AJetpackItem_OnJumpStarted_Params
{
};

// Function Astro.JetpackItem.OnJumpingTick
struct AJetpackItem_OnJumpingTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnJetpackStowed
struct AJetpackItem_OnJetpackStowed_Params
{
};

// Function Astro.JetpackItem.OnJetpackDeployed
struct AJetpackItem_OnJetpackDeployed_Params
{
	struct FVector                                     NeutralPosition;                                          // (Parm, IsPlainOldData)
	bool                                               bMirrored;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnJetpackActived
struct AJetpackItem_OnJetpackActived_Params
{
	bool                                               Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnItemSelectionChanged
struct AJetpackItem_OnItemSelectionChanged_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnItemDrained
struct AJetpackItem_OnItemDrained_Params
{
};

// Function Astro.JetpackItem.OnFuelRecipeAmountChanged
struct AJetpackItem_OnFuelRecipeAmountChanged_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnFuelIsLow
struct AJetpackItem_OnFuelIsLow_Params
{
	bool                                               bIsLow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnEndOperation
struct AJetpackItem_OnEndOperation_Params
{
};

// Function Astro.JetpackItem.OnCreativeFreeFuelChanged
struct AJetpackItem_OnCreativeFreeFuelChanged_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.OnClientActionReleased
struct AJetpackItem_OnClientActionReleased_Params
{
};

// Function Astro.JetpackItem.OnClientActionPressed
struct AJetpackItem_OnClientActionPressed_Params
{
};

// Function Astro.JetpackItem.OnBackpackCracked
struct AJetpackItem_OnBackpackCracked_Params
{
};

// Function Astro.JetpackItem.OnAuthorityOverrideRemoved
struct AJetpackItem_OnAuthorityOverrideRemoved_Params
{
};

// Function Astro.JetpackItem.OnAuthorityOverrideAdded
struct AJetpackItem_OnAuthorityOverrideAdded_Params
{
};

// Function Astro.JetpackItem.OnAttemptedActivationNoFuel
struct AJetpackItem_OnAttemptedActivationNoFuel_Params
{
};

// Function Astro.JetpackItem.OnAllFuelDepleted
struct AJetpackItem_OnAllFuelDepleted_Params
{
};

// Function Astro.JetpackItem.HandleRemovedFromSlot
struct AJetpackItem_HandleRemovedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.JetpackItem.HandlePlacedInSlot
struct AJetpackItem_HandlePlacedInSlot_Params
{
};

// Function Astro.JetpackItem.HandleOnSpawnedInSlot
struct AJetpackItem_HandleOnSpawnedInSlot_Params
{
};

// Function Astro.JetpackItem.HandleFullyEmplaced
struct AJetpackItem_HandleFullyEmplaced_Params
{
};

// Function Astro.LandingPadComponent.OnOwnerItemMotionStateChanged
struct ULandingPadComponent_OnOwnerItemMotionStateChanged_Params
{
};

// Function Astro.LandingPadComponent.OnItemSetInLandingPadSlot
struct ULandingPadComponent_OnItemSetInLandingPadSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LandingPadComponent.OnItemRemovedFromLandingPadSlot
struct ULandingPadComponent_OnItemRemovedFromLandingPadSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LandingPadComponent.IsOccupied
struct ULandingPadComponent_IsOccupied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LandingPadComponent.CanDeploy
struct ULandingPadComponent_CanDeploy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LandingPadComponent.CanCheckObstruction
struct ULandingPadComponent_CanCheckObstruction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LandingPadComponent.AuthorityTeardownLandingPad
struct ULandingPadComponent_AuthorityTeardownLandingPad_Params
{
};

// Function Astro.LandingPadComponent.AuthorityDeployLandingPad
struct ULandingPadComponent_AuthorityDeployLandingPad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LevelingBlockComponent.SetPreviewVisibility
struct ULevelingBlockComponent_SetPreviewVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ELevelingBlockVizSource                            sourceId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LevelingBlockComponent.OnReplicated_VisibilitySourceMask
struct ULevelingBlockComponent_OnReplicated_VisibilitySourceMask_Params
{
};

// Function Astro.LevelingBlockComponent.MulticastStartLeveling
struct ULevelingBlockComponent_MulticastStartLeveling_Params
{
};

// Function Astro.LevelingBlockComponent.MulticastPlayOrStopFX
struct ULevelingBlockComponent_MulticastPlayOrStopFX_Params
{
	bool                                               bPlayParticles;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               playRespawnSound;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LevelingBlockComponent.CancelOperation
struct ULevelingBlockComponent_CancelOperation_Params
{
	bool                                               forceStopParticles;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LevelingBlockComponent.AddTrueFlatStump
struct ULevelingBlockComponent_AddTrueFlatStump_Params
{
};

// Function Astro.LockEventListener.OnLockLockedStateChanged
struct ULockEventListener_OnLockLockedStateChanged_Params
{
	struct FAstroDatumRef                              lockRef;                                                  // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.LockableComponentContainer.GetLockableComponent
struct ULockableComponentContainer_GetLockableComponent_Params
{
	struct FAstroDatumRef                              lockableComponentRef;                                     // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLockableComponent                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.LockableComponentContainer.FindLockableComponent
struct ULockableComponentContainer_FindLockableComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLockableComponent                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.LockingMechanismEventListener.OnLockingMechanismOpenStateChanged
struct ULockingMechanismEventListener_OnLockingMechanismOpenStateChanged_Params
{
	class ULockingMechanism*                           changedLockingMechanism;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.LockComponentContainer.GetLockComponent
struct ULockComponentContainer_GetLockComponent_Params
{
	struct FAstroDatumRef                              lockComponentRef;                                         // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLockComponent                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.LockComponentContainer.FindLockComponent
struct ULockComponentContainer_FindLockComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLockComponent                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.LockingMechanism.IsOpen
struct ULockingMechanism_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LockingMechanismView.OnRep_IsOpen
struct ULockingMechanismView_OnRep_IsOpen_Params
{
};

// Function Astro.LockingMechanismView.OnOpenStateChanged
struct ULockingMechanismView_OnOpenStateChanged_Params
{
	class ULockingMechanism*                           LockingMechanism;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.LodAnchorComponent.UpdateInternal
struct ULodAnchorComponent_UpdateInternal_Params
{
	struct FVector                                     NewPosition;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.LodAnchorComponent.ToggleActivated
struct ULodAnchorComponent_ToggleActivated_Params
{
};

// Function Astro.LodAnchorComponent.ShowPreviz
struct ULodAnchorComponent_ShowPreviz_Params
{
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LodAnchorComponent.SetBeaconVisibility
struct ULodAnchorComponent_SetBeaconVisibility_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LodAnchorComponent.SetActivated
struct ULodAnchorComponent_SetActivated_Params
{
	bool                                               makeActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LodAnchorComponent.ServerChangeActivated
struct ULodAnchorComponent_ServerChangeActivated_Params
{
	bool                                               makeActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.LodAnchorComponent.OnReplicated_IsAnchored
struct ULodAnchorComponent_OnReplicated_IsAnchored_Params
{
};

// Function Astro.LodAnchorComponent.HandleDeformed
struct ULodAnchorComponent_HandleDeformed_Params
{
	struct FDeformationParams                          params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.MediumBattery.OnRep
struct AMediumBattery_OnRep_Params
{
};

// Function Astro.MediumBattery.OnChargeLevelChangedEvent
struct AMediumBattery_OnChargeLevelChangedEvent_Params
{
	float                                              NewCharge;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.TryToggleActorCracked
struct UMultiTool_TryToggleActorCracked_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClickInteraction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.MultiTool.StowDeformTool
struct UMultiTool_StowDeformTool_Params
{
};

// Function Astro.MultiTool.ServerTraceForSlotConnection
struct UMultiTool_ServerTraceForSlotConnection_Params
{
	class APlayController*                             Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ASlotConnection*                             SlotConnection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     traceDirection;                                           // (Parm, IsPlainOldData)
};

// Function Astro.MultiTool.ServerSwapItem
struct UMultiTool_ServerSwapItem_Params
{
	class APhysicalItem*                               ItemInSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               CurrentlyHeldItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTerrainComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // (Parm)
};

// Function Astro.MultiTool.ServerSlotItem
struct UMultiTool_ServerSlotItem_Params
{
	class APhysicalItem*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerSelectItem
struct UMultiTool_ServerSelectItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPartOfSwap;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerSelectionDuplicate
struct UMultiTool_ServerSelectionDuplicate_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerSelectionDelete
struct UMultiTool_ServerSelectionDelete_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerQuickClick
struct UMultiTool_ServerQuickClick_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerMakeSlotConnection
struct UMultiTool_ServerMakeSlotConnection_Params
{
	class ASlotConnection*                             Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         hitPrimitive;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // (Parm)
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.MultiTool.ServerEmplaceInSlot
struct UMultiTool_ServerEmplaceInSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Slot;                                                     // (ConstParm, Parm, ReferenceParm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerDropItem
struct UMultiTool_ServerDropItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               terrainComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // (Parm)
};

// Function Astro.MultiTool.ServerCrackCrackableActorComponent
struct UMultiTool_ServerCrackCrackableActorComponent_Params
{
	class UCrackableActorComponent*                    crackedCrackableActorComponent;                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.MultiTool.ServerCloseCrackableActorComponent
struct UMultiTool_ServerCloseCrackableActorComponent_Params
{
	class UCrackableActorComponent*                    closedCrackableActorComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsClickInteraction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.ServerClearSlotEmplacement
struct UMultiTool_ServerClearSlotEmplacement_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.RouteWidgetUseUnhandled
struct UMultiTool_RouteWidgetUseUnhandled_Params
{
	TEnumAsByte<EInputEvent>                           InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.RouteInteractionWidgetUseRepeat
struct UMultiTool_RouteInteractionWidgetUseRepeat_Params
{
};

// Function Astro.MultiTool.RouteInteractionWidgetUseRelease
struct UMultiTool_RouteInteractionWidgetUseRelease_Params
{
};

// Function Astro.MultiTool.RouteInteractionWidgetUsePress
struct UMultiTool_RouteInteractionWidgetUsePress_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingUseRelease
struct UMultiTool_RouteInteractionDrivingUseRelease_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingUsePress
struct UMultiTool_RouteInteractionDrivingUsePress_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingAux2Release
struct UMultiTool_RouteInteractionDrivingAux2Release_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingAux2Press
struct UMultiTool_RouteInteractionDrivingAux2Press_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingAux1Release
struct UMultiTool_RouteInteractionDrivingAux1Release_Params
{
};

// Function Astro.MultiTool.RouteInteractionDrivingAux1Press
struct UMultiTool_RouteInteractionDrivingAux1Press_Params
{
};

// Function Astro.MultiTool.RouteInteractionCatalogActivated
struct UMultiTool_RouteInteractionCatalogActivated_Params
{
};

// Function Astro.MultiTool.RouteFocusedTooltipInteractionActivated
struct UMultiTool_RouteFocusedTooltipInteractionActivated_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.RouteFocusedTooltipInputUnhandled
struct UMultiTool_RouteFocusedTooltipInputUnhandled_Params
{
	TEnumAsByte<EInputEvent>                           InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.RouteDrivingUseInteraction
struct UMultiTool_RouteDrivingUseInteraction_Params
{
};

// Function Astro.MultiTool.RouteDrivingTooltipInteractionActivated
struct UMultiTool_RouteDrivingTooltipInteractionActivated_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.RouteDrivingTooltipInputUnhandled
struct UMultiTool_RouteDrivingTooltipInputUnhandled_Params
{
	TEnumAsByte<EInputEvent>                           InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.PushInteractionOverride
struct UMultiTool_PushInteractionOverride_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PivotComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.MultiTool.PopInteractionOverride
struct UMultiTool_PopInteractionOverride_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.OnTooltipWantsFocusChange
struct UMultiTool_OnTooltipWantsFocusChange_Params
{
	class UTooltipComponent*                           TooltipComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WantsFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.OnSelectionQuickUse
struct UMultiTool_OnSelectionQuickUse_Params
{
};

// Function Astro.MultiTool.OnSelectionDuplicate
struct UMultiTool_OnSelectionDuplicate_Params
{
};

// Function Astro.MultiTool.OnSelectionDelete
struct UMultiTool_OnSelectionDelete_Params
{
};

// Function Astro.MultiTool.OnRep_CurrentSelection
struct UMultiTool_OnRep_CurrentSelection_Params
{
};

// Function Astro.MultiTool.OnPlayerDeathBegin
struct UMultiTool_OnPlayerDeathBegin_Params
{
};

// Function Astro.MultiTool.OnItemReplicationDataChanged
struct UMultiTool_OnItemReplicationDataChanged_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.OnInitializeComponent
struct UMultiTool_OnInitializeComponent_Params
{
};

// Function Astro.MultiTool.OnFocusedTooltipActorDestroyed
struct UMultiTool_OnFocusedTooltipActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.OnCrackedCrackableActorComponentCrackedChanged
struct UMultiTool_OnCrackedCrackableActorComponentCrackedChanged_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.MouseDownPickupItem
struct UMultiTool_MouseDownPickupItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               snapToCursor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.MultiTool.IsHoldingItem
struct UMultiTool_IsHoldingItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.MultiTool.GetCatalogActor
struct UMultiTool_GetCatalogActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.MultiTool.DropItem
struct UMultiTool_DropItem_Params
{
};

// Function Astro.MultiTool.DoSecondaryInteraction
struct UMultiTool_DoSecondaryInteraction_Params
{
};

// Function Astro.MultiTool.DidInteractionEndThisFrame
struct UMultiTool_DidInteractionEndThisFrame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.MultiTool.CursorControlActive
struct UMultiTool_CursorControlActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.MultiTool.CloseAllOpenCrackables
struct UMultiTool_CloseAllOpenCrackables_Params
{
};

// Function Astro.MultiTool.ClientSwapHeldItemDropped
struct UMultiTool_ClientSwapHeldItemDropped_Params
{
};

// Function Astro.MultiTool.ClientSwapFinished
struct UMultiTool_ClientSwapFinished_Params
{
};

// Function Astro.MultiTool.ClientDenyCrackCrackableActorComponent
struct UMultiTool_ClientDenyCrackCrackableActorComponent_Params
{
	class UCrackableActorComponent*                    crackedCrackableActorComponent;                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.SetPlanetSelection
struct UOrbitalNavigationComponent_SetPlanetSelection_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.SetActiveLaunchLength
struct UOrbitalNavigationComponent_SetActiveLaunchLength_Params
{
	float                                              newLaunchLength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.PerformLaunch
struct UOrbitalNavigationComponent_PerformLaunch_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.OnStorageAttachmentsChanged
struct UOrbitalNavigationComponent_OnStorageAttachmentsChanged_Params
{
	bool                                               Entered;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.OnSolarBodyClick
struct UOrbitalNavigationComponent_OnSolarBodyClick_Params
{
	class ASolarBody*                                  SolarBody;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.OnRep_ReplicatedTimeData
struct UOrbitalNavigationComponent_OnRep_ReplicatedTimeData_Params
{
};

// Function Astro.OrbitalNavigationComponent.OnRep_ReplicatedData
struct UOrbitalNavigationComponent_OnRep_ReplicatedData_Params
{
};

// Function Astro.OrbitalNavigationComponent.OnLandClick
struct UOrbitalNavigationComponent_OnLandClick_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.LocalPlayerOnBoard
struct UOrbitalNavigationComponent_LocalPlayerOnBoard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetTargetOrbitingBody
struct UOrbitalNavigationComponent_GetTargetOrbitingBody_Params
{
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetLaunchTime
struct UOrbitalNavigationComponent_GetLaunchTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetLaunched
struct UOrbitalNavigationComponent_GetLaunched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetLanding
struct UOrbitalNavigationComponent_GetLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetLanded
struct UOrbitalNavigationComponent_GetLanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetCanLaunch
struct UOrbitalNavigationComponent_GetCanLaunch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.GetCameraUpVector
struct UOrbitalNavigationComponent_GetCameraUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.AuthoritySnapToTarget
struct UOrbitalNavigationComponent_AuthoritySnapToTarget_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.AuthoritySetInterplanetaryTravelRangeMultiplier
struct UOrbitalNavigationComponent_AuthoritySetInterplanetaryTravelRangeMultiplier_Params
{
	float                                              rangeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OrbitalNavigationComponent.ActorOrbitalNavigationComponent
struct UOrbitalNavigationComponent_ActorOrbitalNavigationComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UOrbitalNavigationComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.OxygenatorComponent.OnRep_IsSupplyingOxygen
struct UOxygenatorComponent_OnRep_IsSupplyingOxygen_Params
{
};

// Function Astro.OxygenatorComponent.OnOwnerNotFullyPowered
struct UOxygenatorComponent_OnOwnerNotFullyPowered_Params
{
};

// Function Astro.OxygenatorComponent.OnOwnerItemRemovedFromSlot
struct UOxygenatorComponent_OnOwnerItemRemovedFromSlot_Params
{
	bool                                               bNewOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.OxygenatorComponent.OnOwnerItemPlacedInSlot
struct UOxygenatorComponent_OnOwnerItemPlacedInSlot_Params
{
};

// Function Astro.OxygenatorComponent.OnOwnerFullyPowered
struct UOxygenatorComponent_OnOwnerFullyPowered_Params
{
};

// Function Astro.PackageActor.Authority_Unpack
struct APackageActor_Authority_Unpack_Params
{
};

// Function Astro.PersistentLocalPlayerData.NotifySkippedTutorial
struct UPersistentLocalPlayerData_NotifySkippedTutorial_Params
{
};

// Function Astro.PersistentLocalPlayerData.NotifySeenIntroCutscene
struct UPersistentLocalPlayerData_NotifySeenIntroCutscene_Params
{
};

// Function Astro.PersistentLocalPlayerData.NotifyCompletedTutorial
struct UPersistentLocalPlayerData_NotifyCompletedTutorial_Params
{
};

// Function Astro.PersistentTerrainModification.SetSpherical
struct UPersistentTerrainModification_SetSpherical_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicalItemSpawnList.PickActor
struct UPhysicalItemSpawnList_PickActor_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalItemSpawnList.PhysicalItemSpawnListDefault
struct UPhysicalItemSpawnList_PhysicalItemSpawnListDefault_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalItemSpawnList*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalResource.SetView
struct APhysicalResource_SetView_Params
{
};

// Function Astro.PhysicalResource.PostDrained
struct APhysicalResource_PostDrained_Params
{
};

// Function Astro.PhysicalResource.OnDrained
struct APhysicalResource_OnDrained_Params
{
};

// Function Astro.PhysicalResource.IsFull
struct APhysicalResource_IsFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalResource.IsEmpty
struct APhysicalResource_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicalResource.GetFullness
struct APhysicalResource_GetFullness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PhysicsComponent.SetTraceEnabled
struct UPhysicsComponent_SetTraceEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicsComponent.SetPhysicsEnabled
struct UPhysicsComponent_SetPhysicsEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicsComponent.SetCollisionEnabled
struct UPhysicsComponent_SetCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicsComponent.OnRep_PhysicsState
struct UPhysicsComponent_OnRep_PhysicsState_Params
{
};

// Function Astro.PhysicsComponent.GetActorPhysicsComponent
struct UPhysicsComponent_GetActorPhysicsComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PhysicsMovementComponent.ServerUpdateClientMovementInput
struct UPhysicsMovementComponent_ServerUpdateClientMovementInput_Params
{
	struct FPhysicsMovementReplicatedInput             ClientSteeringInput;                                      // (Parm)
};

// DelegateFunction Astro.PhysicsMovementComponent.ResistanceChangeEvent__DelegateSignature
struct UPhysicsMovementComponent_ResistanceChangeEvent__DelegateSignature_Params
{
	int                                                REP_ResistanceLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.PhysicsMovementComponent.ParkingBrakeEvent__DelegateSignature
struct UPhysicsMovementComponent_ParkingBrakeEvent__DelegateSignature_Params
{
	bool                                               ParkingBrakeEngaged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicsMovementComponent.Move
struct UPhysicsMovementComponent_Move_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PhysicsMovementComponent.ApplyResistanceLevel
struct UPhysicsMovementComponent_ApplyResistanceLevel_Params
{
};

// Function Astro.PlanetEffect.SetActorIgnoreForAI
struct UPlanetEffect_SetActorIgnoreForAI_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetIgnore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlanetEffect.AddManagedComponent
struct UPlanetEffect_AddManagedComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.PlanetProxyActor.OnSpawn
struct APlanetProxyActor_OnSpawn_Params
{
};

// Function Astro.PlanetProxyActor.OnLocalPlayerPlanetSelectionEnd
struct APlanetProxyActor_OnLocalPlayerPlanetSelectionEnd_Params
{
};

// Function Astro.PlanetProxyActor.OnLocalPlayerPlanetSelectionBegin
struct APlanetProxyActor_OnLocalPlayerPlanetSelectionBegin_Params
{
	class ASolarBody*                                  playerHomeBody;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.SetProximitySphere
struct UPlayerProximityTickComponent_SetProximitySphere_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.SetProximityShape
struct UPlayerProximityTickComponent_SetProximityShape_Params
{
	class UShapeComponent*                             inProximityShape;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Astro.PlayerProximityTickComponent.PlayerProximityTickDisableTickEvent__DelegateSignature
struct UPlayerProximityTickComponent_PlayerProximityTickDisableTickEvent__DelegateSignature_Params
{
};

// Function Astro.PlayerProximityTickComponent.OnTrackedPlayerDestroyed
struct UPlayerProximityTickComponent_OnTrackedPlayerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.GetOverlappingPlayers
struct UPlayerProximityTickComponent_GetOverlappingPlayers_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.PlayerProximityTickComponent.GetActorPlayerProximityTickComponent
struct UPlayerProximityTickComponent_GetActorPlayerProximityTickComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerProximityTickComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.GetActorOverlappingPlayers
struct UPlayerProximityTickComponent_GetActorOverlappingPlayers_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.PlayerProximityTickComponent.EndOverlap
struct UPlayerProximityTickComponent_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.BeginOverlap
struct UPlayerProximityTickComponent_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.PlayerProximityTickComponent.AddManagedComponents
struct UPlayerProximityTickComponent_AddManagedComponents_Params
{
	TArray<class UActorComponent*>                     Components;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.PlayerProximityTickComponent.AddManagedComponent
struct UPlayerProximityTickComponent_AddManagedComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.PlayerToolComponent.OnRep_Activated
struct UPlayerToolComponent_OnRep_Activated_Params
{
};

// Function Astro.PlayerToolComponent.OnControlDeactivate
struct UPlayerToolComponent_OnControlDeactivate_Params
{
};

// Function Astro.PlayerToolComponent.OnControlActivate
struct UPlayerToolComponent_OnControlActivate_Params
{
};

// Function Astro.PlayerToolComponent.OnActorClicked
struct UPlayerToolComponent_OnActorClicked_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.PowerChargeLockingMechanism.OnNotFullyCharged
struct UPowerChargeLockingMechanism_OnNotFullyCharged_Params
{
};

// Function Astro.PowerChargeLockingMechanism.OnFullyCharged
struct UPowerChargeLockingMechanism_OnFullyCharged_Params
{
};

// Function Astro.PowerComponent.SetSuppliedVisibility
struct UPowerComponent_SetSuppliedVisibility_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.PowerComponent.SetNetPowerOutput
struct UPowerComponent_SetNetPowerOutput_Params
{
	float                                              NetPowerOutput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerComponent.SetEnabled
struct UPowerComponent_SetEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.SetCurrentCharge
struct UPowerComponent_SetCurrentCharge_Params
{
	float                                              Charge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.ReportPowerComponent
struct UPowerComponent_ReportPowerComponent_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction Astro.PowerComponent.PowerStateChangeEvent__DelegateSignature
struct UPowerComponent_PowerStateChangeEvent__DelegateSignature_Params
{
	bool                                               HasAvailablePower;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerComponent.PingIndicator
struct UPowerComponent_PingIndicator_Params
{
	bool                                               Discharging;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerComponent.OnRep_ReplicationData
struct UPowerComponent_OnRep_ReplicationData_Params
{
};

// Function Astro.PowerComponent.IsSupplied
struct UPowerComponent_IsSupplied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsPowered
struct UPowerComponent_IsPowered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsFullySupplied
struct UPowerComponent_IsFullySupplied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsFullyPowered
struct UPowerComponent_IsFullyPowered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsFullyCharged
struct UPowerComponent_IsFullyCharged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsEnabled
struct UPowerComponent_IsEnabled_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.IsAnyPowerAvailable
struct UPowerComponent_IsAnyPowerAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.HandleFreePowerChanged
struct UPowerComponent_HandleFreePowerChanged_Params
{
	bool                                               NewFreePowerChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerComponent.GetNetPowerOutput
struct UPowerComponent_GetNetPowerOutput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.GetCurrentCharge
struct UPowerComponent_GetCurrentCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.DrainBattery
struct UPowerComponent_DrainBattery_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.PowerComponent.ChargeLevelChangedEvent__DelegateSignature
struct UPowerComponent_ChargeLevelChangedEvent__DelegateSignature_Params
{
	float                                              NewCharge;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerComponent.CanPowerFor
struct UPowerComponent_CanPowerFor_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.CanPower
struct UPowerComponent_CanPower_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.AddCharge
struct UPowerComponent_AddCharge_Params
{
	float                                              Charge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerComponent.ActorPowerComponent
struct UPowerComponent_ActorPowerComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PlanetStatics.ToPlanet
struct UPlanetStatics_ToPlanet_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.TargetVelocity
struct UPlanetStatics_TargetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.TargetFacingUp
struct UPlanetStatics_TargetFacingUp_Params
{
	struct FVector                                     Up;                                                       // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TorqueStrength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlanetStatics.TargetBody
struct UPlanetStatics_TargetBody_Params
{
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccelTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSurface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationTorque;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBuffer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlanetStatics.SunDirectionRelativeToSolarBody
struct UPlanetStatics_SunDirectionRelativeToSolarBody_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  centerBody;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.SunDirection
struct UPlanetStatics_SunDirection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.SoftLanding
struct UPlanetStatics_SoftLanding_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccelTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSurface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationTorque;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBuffer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlanetStatics.PlanetUpComponent
struct UPlanetStatics_PlanetUpComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.PlanetUp
struct UPlanetStatics_PlanetUp_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.PlanetTrace
struct UPlanetStatics_PlanetTrace_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.IsTerrainReadyAtLocation
struct UPlanetStatics_IsTerrainReadyAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GravityUp
struct UPlanetStatics_GravityUp_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetSun
struct UPlanetStatics_GetSun_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASun*                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetSolarBodyByLocation
struct UPlanetStatics_GetSolarBodyByLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               bDoBoundsCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisitableByPlayerOnly;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetSolarBody
struct UPlanetStatics_GetSolarBody_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoundsCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetPlanets
struct UPlanetStatics_GetPlanets_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AAstroPlanet*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.PlanetStatics.GetPlanetByLocation
struct UPlanetStatics_GetPlanetByLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	bool                                               boundsCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               locationIsSolar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AAstroPlanet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetPlanet
struct UPlanetStatics_GetPlanet_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoundsCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAstroPlanet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetGateStation
struct UPlanetStatics_GetGateStation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGateStation*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetClosestPlanet
struct UPlanetStatics_GetClosestPlanet_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AAstroPlanet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetBodyGravityAtLocation
struct UPlanetStatics_GetBodyGravityAtLocation_Params
{
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GetBodyGravity
struct UPlanetStatics_GetBodyGravity_Params
{
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.GeneratePlanetGravitySources
struct UPlanetStatics_GeneratePlanetGravitySources_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PlanetStatics.FromPlanet
struct UPlanetStatics_FromPlanet_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.EscapedBodyByLocation
struct UPlanetStatics_EscapedBodyByLocation_Params
{
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               locationIsSolar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.EscapedBody
struct UPlanetStatics_EscapedBody_Params
{
	class ASolarBody*                                  Body;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PlanetStatics.AreAtmosphericResourcesEqual
struct UPlanetStatics_AreAtmosphericResourcesEqual_Params
{
	struct FAtmosphericResource                        resourceA;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAtmosphericResource                        resourceB;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PowerFlowLockingMechanism.OnFullyPowered
struct UPowerFlowLockingMechanism_OnFullyPowered_Params
{
};

// Function Astro.PowerFlowLockingMechanism.OnEndFullyPowered
struct UPowerFlowLockingMechanism_OnEndFullyPowered_Params
{
};

// Function Astro.PowerFlowLockingMechanismView.OnRep_CompletionRatio
struct UPowerFlowLockingMechanismView_OnRep_CompletionRatio_Params
{
};

// Function Astro.PowerFlowLockingMechanismView.OnAccumulatedFullyPoweredTimeChanged
struct UPowerFlowLockingMechanismView_OnAccumulatedFullyPoweredTimeChanged_Params
{
	class ULockingMechanism*                           LockingMechanism;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.PowerSlot.SetPoweredTrue
struct APowerSlot_SetPoweredTrue_Params
{
};

// Function Astro.PowerSlot.SetPoweredFalse
struct APowerSlot_SetPoweredFalse_Params
{
};

// Function Astro.PowerSlot.SetPowered
struct APowerSlot_SetPowered_Params
{
	bool                                               Powered;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerSlot.SetOxygen
struct APowerSlot_SetOxygen_Params
{
	bool                                               Oxygen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerSlot.PowerSetItem
struct APowerSlot_PowerSetItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerSlot.PowerReleaseItem
struct APowerSlot_PowerReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerStatics.SetFreePower
struct UPowerStatics_SetFreePower_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PowerStatics.GetSlotActorPowerComponents
struct UPowerStatics_GetSlotActorPowerComponents_Params
{
	struct FSlotReference                              PowerSlot;                                                // (Parm)
	TArray<class UPowerComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.PowerStatics.GetFreePower
struct UPowerStatics_GetFreePower_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.UpdatePrinting
struct UPrinterComponent_UpdatePrinting_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.UpdatePreprinting
struct UPrinterComponent_UpdatePreprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.UnlockedItemsChanged
struct UPrinterComponent_UnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItems;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.PrinterComponent.StartPrinting
struct UPrinterComponent_StartPrinting_Params
{
};

// Function Astro.PrinterComponent.SpawnPrintedItem
struct UPrinterComponent_SpawnPrintedItem_Params
{
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.ShowNeededIndicators
struct UPrinterComponent_ShowNeededIndicators_Params
{
};

// Function Astro.PrinterComponent.SetText
struct UPrinterComponent_SetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function Astro.PrinterComponent.SetRequiresPower
struct UPrinterComponent_SetRequiresPower_Params
{
	bool                                               printerRequiresPower;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetRepackageModeEnabled
struct UPrinterComponent_SetRepackageModeEnabled_Params
{
	bool                                               modeEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetPrintSpeed
struct UPrinterComponent_SetPrintSpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetPrinterOutputSlot
struct UPrinterComponent_SetPrinterOutputSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.PrinterComponent.SetLocalIsVisible
struct UPrinterComponent_SetLocalIsVisible_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetItemsAvailableToRepackage
struct UPrinterComponent_SetItemsAvailableToRepackage_Params
{
	TArray<TWeakObjectPtr<class APhysicalItem>>        itemsToRepackage;                                         // (Parm, ZeroConstructor)
	int                                                DefaultSelectionIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetCanUse
struct UPrinterComponent_SetCanUse_Params
{
	bool                                               bCanUse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.SetBlueprints
struct UPrinterComponent_SetBlueprints_Params
{
	TArray<class UClass*>                              newBlueprints;                                            // (Parm, ZeroConstructor)
};

// Function Astro.PrinterComponent.SaveGameSerializeCustom
struct UPrinterComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.ResetIndicator
struct UPrinterComponent_ResetIndicator_Params
{
};

// Function Astro.PrinterComponent.RemoveIgnoredActorForPrintAreaValidation
struct UPrinterComponent_RemoveIgnoredActorForPrintAreaValidation_Params
{
	class AActor*                                      ignoredActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.PrinterClickQuery
struct UPrinterComponent_PrinterClickQuery_Params
{
	class UClickQuery*                                 Query;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.OnRep_SlotIndicators
struct UPrinterComponent_OnRep_SlotIndicators_Params
{
};

// Function Astro.PrinterComponent.OnRep_Progress
struct UPrinterComponent_OnRep_Progress_Params
{
};

// Function Astro.PrinterComponent.OnRep_PrintState
struct UPrinterComponent_OnRep_PrintState_Params
{
};

// Function Astro.PrinterComponent.OnRep_PrinterStateAtomic
struct UPrinterComponent_OnRep_PrinterStateAtomic_Params
{
};

// Function Astro.PrinterComponent.OnRep_PrinterOutputSlot
struct UPrinterComponent_OnRep_PrinterOutputSlot_Params
{
};

// Function Astro.PrinterComponent.OnRep_CurrentBlueprintItem
struct UPrinterComponent_OnRep_CurrentBlueprintItem_Params
{
};

// Function Astro.PrinterComponent.OnPrinterDestroyed
struct UPrinterComponent_OnPrinterDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.OnAuthorityControlPanelCrackedChanged
struct UPrinterComponent_OnAuthorityControlPanelCrackedChanged_Params
{
	class AControlPanel*                               ControlPanel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.IncrementBlueprint
struct UPrinterComponent_IncrementBlueprint_Params
{
	bool                                               doServerIncrement;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.HideNeededIndicators
struct UPrinterComponent_HideNeededIndicators_Params
{
};

// Function Astro.PrinterComponent.HideBlueprint
struct UPrinterComponent_HideBlueprint_Params
{
};

// Function Astro.PrinterComponent.HandleCreativeCatalogUnlockedChanged
struct UPrinterComponent_HandleCreativeCatalogUnlockedChanged_Params
{
};

// Function Astro.PrinterComponent.GetTotalAvailableBlueprintCount
struct UPrinterComponent_GetTotalAvailableBlueprintCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetSlotIndicators
struct UPrinterComponent_GetSlotIndicators_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Astro.PrinterComponent.GetRepackageModeEngaged
struct UPrinterComponent_GetRepackageModeEngaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetPrintingTransform
struct UPrinterComponent_GetPrintingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetPrintingHeight
struct UPrinterComponent_GetPrintingHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetPrinting
struct UPrinterComponent_GetPrinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetItemIndicatorVisible
struct UPrinterComponent_GetItemIndicatorVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetItemIndicatorHidden
struct UPrinterComponent_GetItemIndicatorHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetCurrentUnlockedBlueprintIndex
struct UPrinterComponent_GetCurrentUnlockedBlueprintIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetCurrentItem
struct UPrinterComponent_GetCurrentItem_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetCharging
struct UPrinterComponent_GetCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetCanUse
struct UPrinterComponent_GetCanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetCanPrint
struct UPrinterComponent_GetCanPrint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.GetAvailableIngredientCounts
struct UPrinterComponent_GetAvailableIngredientCounts_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Astro.PrinterComponent.FinishPrinting
struct UPrinterComponent_FinishPrinting_Params
{
};

// Function Astro.PrinterComponent.DecrementBlueprint
struct UPrinterComponent_DecrementBlueprint_Params
{
	bool                                               doServerIncrement;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.DeactivateBlueprint
struct UPrinterComponent_DeactivateBlueprint_Params
{
};

// Function Astro.PrinterComponent.CreateIndicatorFromItem
struct UPrinterComponent_CreateIndicatorFromItem_Params
{
	class APhysicalItem*                               Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.CreateIndicatorFromClass
struct UPrinterComponent_CreateIndicatorFromClass_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.CanReserveSlotsAcceptItemForActiveRecipe
struct UPrinterComponent_CanReserveSlotsAcceptItemForActiveRecipe_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.PrinterComponent.CancelPrint
struct UPrinterComponent_CancelPrint_Params
{
};

// Function Astro.PrinterComponent.AddIgnoredActorForPrintAreaValidation
struct UPrinterComponent_AddIgnoredActorForPrintAreaValidation_Params
{
	class AActor*                                      ignoredActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.PrinterComponent.ActorPrinterComponent
struct UPrinterComponent_ActorPrinterComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.PrinterComponent.ActivateBlueprint
struct UPrinterComponent_ActivateBlueprint_Params
{
};

// Function Astro.ProceduralStateComponent.OnTerrainPhysicsBuriedChanged
struct UProceduralStateComponent_OnTerrainPhysicsBuriedChanged_Params
{
	class UTerrainPhysicsComponent*                    TerrainPhysics;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ProceduralStateComponent.OnOwnerSpawnedInSlot
struct UProceduralStateComponent_OnOwnerSpawnedInSlot_Params
{
};

// Function Astro.ProceduralStateComponent.ApplyStateToOwner
struct UProceduralStateComponent_ApplyStateToOwner_Params
{
};

// Function Astro.RailComponent.SendItem
struct URailComponent_SendItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RailComponent.MulticastSendRail
struct URailComponent_MulticastSendRail_Params
{
	bool                                               Immediate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RecipeOrganizationRule.SetRecipe
struct URecipeOrganizationRule_SetRecipe_Params
{
	struct FRecipe                                     Recipe;                                                   // (Parm)
};

// Function Astro.RecipeOrganizationRule.GetCurrentRecipeStatus
struct URecipeOrganizationRule_GetCurrentRecipeStatus_Params
{
	TArray<class APhysicalItem*>                       outUnwantedHaveItems;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<class UClass*>                              outMissingItems;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Astro.Repackager.RespondToMotionStateChange
struct ARepackager_RespondToMotionStateChange_Params
{
};

// Function Astro.Repackager.OnRepackagingTargetStateChanged
struct ARepackager_OnRepackagingTargetStateChanged_Params
{
};

// Function Astro.Repackager.OnRepackageActionFinishedAuthority
struct ARepackager_OnRepackageActionFinishedAuthority_Params
{
	class UAstroAction*                                repackageAction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Repackager.InitiateRepackaging
struct ARepackager_InitiateRepackaging_Params
{
};

// Function Astro.ResearchComponentContainer.GetResearchComponent
struct UResearchComponentContainer_GetResearchComponent_Params
{
	struct FAstroDatumRef                              ResearchComponentRef;                                     // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchComponent                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchComponentContainer.FindResearchComponent
struct UResearchComponentContainer_FindResearchComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchComponent                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchPointGrantComponentContainer.GetResearchPointGrantComponent
struct UResearchPointGrantComponentContainer_GetResearchPointGrantComponent_Params
{
	struct FAstroDatumRef                              ResearchPointGrantComponentRef;                           // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchPointGrantComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchPointGrantComponentContainer.FindResearchPointGrantComponent
struct UResearchPointGrantComponentContainer_FindResearchPointGrantComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchPointGrantComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchPointGrantItem.OnUsed
struct AResearchPointGrantItem_OnUsed_Params
{
};

// Function Astro.ResearchProgressionComponentContainer.GetResearchProgressionComponent
struct UResearchProgressionComponentContainer_GetResearchProgressionComponent_Params
{
	struct FAstroDatumRef                              ResearchProgressionComponentRef;                          // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchProgressionComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchProgressionComponentContainer.FindResearchProgressionComponent
struct UResearchProgressionComponentContainer_FindResearchProgressionComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchProgressionComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchSubjectComponentContainer.GetResearchSubjectComponent
struct UResearchSubjectComponentContainer_GetResearchSubjectComponent_Params
{
	struct FAstroDatumRef                              ResearchSubjectComponentRef;                              // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchSubjectComponent                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchSubjectComponentContainer.FindResearchSubjectComponent
struct UResearchSubjectComponentContainer_FindResearchSubjectComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchSubjectComponent                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.ResearchSystem.StartOrInterruptResearch
struct UResearchSystem_StartOrInterruptResearch_Params
{
	struct FAstroDatumRef                              ResearchEntityRef;                                        // (Parm)
	struct FAstroDatumRef                              InstigatorEntityRef;                                      // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResearchSystem.OnResearchSubjectSet
struct UResearchSystem_OnResearchSubjectSet_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResearchSystem.OnResearchSubjectReleased
struct UResearchSystem_OnResearchSubjectReleased_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResearchSystem.OnResearchSubjectItemTypeChanged
struct UResearchSystem_OnResearchSubjectItemTypeChanged_Params
{
	class UItemComponent*                              researchSubjectItemComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      NewItemType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResearchSystem.IsItemTypeUnlockedForGame
struct UResearchSystem_IsItemTypeUnlockedForGame_Params
{
	class AAstroGameState*                             GameState;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.IsItemTypeUnlocked
struct UResearchSystem_IsItemTypeUnlocked_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.GetResearchTimeProgressRatio
struct UResearchSystem_GetResearchTimeProgressRatio_Params
{
	struct FResearchSubjectComponent                   ResearchSubject;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.GetResearchSubjectTotals
struct UResearchSystem_GetResearchSubjectTotals_Params
{
	struct FResearchSubjectComponent                   ResearchSubject;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutTotalPointsFromSubject;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutSubjectTotalResearchTime;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResearchSystem.GetResearchPointProgressRatio
struct UResearchSystem_GetResearchPointProgressRatio_Params
{
	struct FResearchSubjectComponent                   ResearchSubject;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.GetCurrentResearchPointsPerMinute
struct UResearchSystem_GetCurrentResearchPointsPerMinute_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.GetCurrentResearchPointBalance
struct UResearchSystem_GetCurrentResearchPointBalance_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResearchSystem.AuthorityGrantResearchPoints
struct UResearchSystem_AuthorityGrantResearchPoints_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointsToGrant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.SwapResources
struct UResourceCacheComponent_SwapResources_Params
{
	class UClass*                                      MineralType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.StoreResource
struct UResourceCacheComponent_StoreResource_Params
{
	class UClass*                                      MineralType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.OnAcceptResource
struct UResourceCacheComponent_OnAcceptResource_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.GetCharacter
struct UResourceCacheComponent_GetCharacter_Params
{
	class AAstroCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.CacheResources
struct UResourceCacheComponent_CacheResources_Params
{
};

// Function Astro.ResourceCacheComponent.ApplyPower
struct UResourceCacheComponent_ApplyPower_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResourceCacheComponent.ApplyOxygen
struct UResourceCacheComponent_ApplyOxygen_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResourceConsumptionLockingMechanism.OnItemSetInResourceConsumptionSlot
struct UResourceConsumptionLockingMechanism_OnItemSetInResourceConsumptionSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceConsumptionLockingMechanism.OnItemBeingConsumedDrained
struct UResourceConsumptionLockingMechanism_OnItemBeingConsumedDrained_Params
{
};

// Function Astro.ResourceConsumptionLockingMechanism.OnItemBeingConsumedDestroyed
struct UResourceConsumptionLockingMechanism_OnItemBeingConsumedDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceConsumptionLockingMechanismView.OnBeginFinalResourceConsumption
struct UResourceConsumptionLockingMechanismView_OnBeginFinalResourceConsumption_Params
{
	class ULockingMechanism*                           LockingMechanism;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.ResourceCoreComponent.OnItemChange
struct UResourceCoreComponent_OnItemChange_Params
{
};

// Function Astro.ResourceInfoComponent.SpawnIfHovering
struct UResourceInfoComponent_SpawnIfHovering_Params
{
};

// Function Astro.ResourceInfoComponent.SpawnActor
struct UResourceInfoComponent_SpawnActor_Params
{
};

// Function Astro.ResourceInfoComponent.ShouldHoverIcon
struct UResourceInfoComponent_ShouldHoverIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.SetActorClass
struct UResourceInfoComponent_SetActorClass_Params
{
	class UClass*                                      infoActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.PhysicalItemSlotted
struct UResourceInfoComponent_PhysicalItemSlotted_Params
{
};

// Function Astro.ResourceInfoComponent.PhysicalItemPickedUp
struct UResourceInfoComponent_PhysicalItemPickedUp_Params
{
	bool                                               PhysicalMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.PhysicalItemDropped
struct UResourceInfoComponent_PhysicalItemDropped_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.OwnerCursorEnd
struct UResourceInfoComponent_OwnerCursorEnd_Params
{
	class AActor*                                      hoverActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.OwnerCursorBegin
struct UResourceInfoComponent_OwnerCursorBegin_Params
{
	class AActor*                                      hoverActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.DestroyActorIfClass
struct UResourceInfoComponent_DestroyActorIfClass_Params
{
	class UClass*                                      infoActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfoComponent.DestroyActor
struct UResourceInfoComponent_DestroyActor_Params
{
};

// Function Astro.ResourceInfo.SetTextVisible
struct AResourceInfo_SetTextVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfo.SetPrimaryItemTypeAndStoredSubType
struct AResourceInfo_SetPrimaryItemTypeAndStoredSubType_Params
{
	class UClass*                                      primaryItemType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      storedSubType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ResourceInfo.OnSpawn
struct AResourceInfo_OnSpawn_Params
{
};

// Function Astro.ResourceInfo.MeshCursorEnd
struct AResourceInfo_MeshCursorEnd_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ResourceInfo.MeshCursorBegin
struct AResourceInfo_MeshCursorBegin_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.ResourceInfo.MeshClicked
struct AResourceInfo_MeshClicked_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.ResourceType.ResourceTypeDefault
struct UResourceType_ResourceTypeDefault_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UResourceType*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RewardComponent.SelectReward
struct URewardComponent_SelectReward_Params
{
	struct FRewardResult                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.RewardState.IsUnlocked
struct URewardState_IsUnlocked_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RewardSystem.SelectReward
struct URewardSystem_SelectReward_Params
{
	struct FRewardSelectionParameters                  params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRewardResult                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.RewardSystem.MarkActorTypeAsResearched
struct URewardSystem_MarkActorTypeAsResearched_Params
{
	class UClass*                                      ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RewardSystem.HasActorTypeBeenResearched
struct URewardSystem_HasActorTypeBeenResearched_Params
{
	class UClass*                                      ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RewardSystem.GrantDurable
struct URewardSystem_GrantDurable_Params
{
	class UClass*                                      itemToUnlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RingCameraTargeter.SnapToTargetLocation
struct URingCameraTargeter_SnapToTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.RingCameraTargeter.SnapToTarget
struct URingCameraTargeter_SnapToTarget_Params
{
	class APlayController*                             Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RingCameraTargeter.SetTarget
struct URingCameraTargeter_SetTarget_Params
{
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RingCenter;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotReference                              TargetingSlot;                                            // (Parm)
};

// Function Astro.RingCameraTargeter.OnSlotDisconnected
struct URingCameraTargeter_OnSlotDisconnected_Params
{
	struct FSlotReference                              ConnectedSlot;                                            // (Parm)
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RingCameraTargeter.OnSlotConnected
struct URingCameraTargeter_OnSlotConnected_Params
{
	struct FSlotReference                              ConnectedSlot;                                            // (Parm)
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RingCameraTargeter.ActorRingCameraTargeter
struct URingCameraTargeter_ActorRingCameraTargeter_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class URingCameraTargeter*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.VehicleBase.VehicleLostPilotInSeat
struct AVehicleBase_VehicleLostPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleBase.VehicleGainedPilotInSeat
struct AVehicleBase_VehicleGainedPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleBase.PerformVehicleAux2Action
struct AVehicleBase_PerformVehicleAux2Action_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleBase.PerformVehicleAux1Action
struct AVehicleBase_PerformVehicleAux1Action_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleBase.OnRep_VehicleBaseReplicationData
struct AVehicleBase_OnRep_VehicleBaseReplicationData_Params
{
};

// Function Astro.VehicleBase.GetDrivingControllerSeat
struct AVehicleBase_GetDrivingControllerSeat_Params
{
	class ASeatBase*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.VehicleBase.GetDrivingController
struct AVehicleBase_GetDrivingController_Params
{
	class AAstroPlayerController*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RoverBase.UpdateUseSuppression
struct ARoverBase_UpdateUseSuppression_Params
{
	bool                                               ShouldBeSuppressed;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.UpdateTunnelBoringOriginInternal
struct ARoverBase_UpdateTunnelBoringOriginInternal_Params
{
	class USceneComponent*                             FrontRightWheel;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FrontLeftWheel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BackRightWheel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BackLeftWheel;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFrontMountedDrill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TunnelBoringOrigion;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.RoverBase.UpdateAndGetTunnelBoringOrigin
struct ARoverBase_UpdateAndGetTunnelBoringOrigin_Params
{
	struct FSlotReference                              slotDrillIsIn;                                            // (Parm)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.RoverBase.ServerReceiveSeatExitOverriddenWithFlip
struct ARoverBase_ServerReceiveSeatExitOverriddenWithFlip_Params
{
	bool                                               ExitOverridden;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.RouteAux2ToggleUse
struct ARoverBase_RouteAux2ToggleUse_Params
{
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.RouteAux1ToggleUse
struct ARoverBase_RouteAux1ToggleUse_Params
{
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.HandleVehicleUnmanned
struct ARoverBase_HandleVehicleUnmanned_Params
{
	class AAstroPlayerController*                      OldPilot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.HandleVehicleManned
struct ARoverBase_HandleVehicleManned_Params
{
	class AAstroPlayerController*                      NewPilot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.RoverBase.GetUnbundleOriginFromAuxSlot
struct ARoverBase_GetUnbundleOriginFromAuxSlot_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutForward;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.RoverBase.EngageRollYawModifier
struct ARoverBase_EngageRollYawModifier_Params
{
};

// Function Astro.RoverBase.DisengageRollYawModifier
struct ARoverBase_DisengageRollYawModifier_Params
{
};

// Function Astro.RoverBase.Authority_GetSeatExitOverriddenWithFlip
struct ARoverBase_Authority_GetSeatExitOverriddenWithFlip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.Scanner.OnRep_UsingCharacter
struct AScanner_OnRep_UsingCharacter_Params
{
};

// Function Astro.Scanner.OnRep_TargetDistance
struct AScanner_OnRep_TargetDistance_Params
{
};

// Function Astro.Scanner.OnRep_ScannerMode
struct AScanner_OnRep_ScannerMode_Params
{
};

// Function Astro.Scanner.OnRep_MidRangeDistancePercentage
struct AScanner_OnRep_MidRangeDistancePercentage_Params
{
};

// Function Astro.Scanner.OnPowerAvailableChanged
struct AScanner_OnPowerAvailableChanged_Params
{
	bool                                               hasPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Scanner.OnMidRangeScanIntroAnimationCompleted
struct AScanner_OnMidRangeScanIntroAnimationCompleted_Params
{
};

// Function Astro.Scanner.HandleVehicleUnmanned
struct AScanner_HandleVehicleUnmanned_Params
{
	class AAstroPlayerController*                      oldUsingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Scanner.HandleVehicleManned
struct AScanner_HandleVehicleManned_Params
{
	class AAstroPlayerController*                      newUsingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Scanner.HandleReleasedFromSlot
struct AScanner_HandleReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.Scanner.HandlePlacedInSlot
struct AScanner_HandlePlacedInSlot_Params
{
};

// Function Astro.Scanner.AuthorityTryScan
struct AScanner_AuthorityTryScan_Params
{
};

// Function Astro.Scanner.AuthorityOnScanCompleted
struct AScanner_AuthorityOnScanCompleted_Params
{
};

// Function Astro.SeatBase.HandleSeatReleasedFromSlot
struct ASeatBase_HandleSeatReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SeatBase.HandleSeatPlacedInSlot
struct ASeatBase_HandleSeatPlacedInSlot_Params
{
};

// Function Astro.SeatBase.GetVehicleSlottedTo
struct ASeatBase_GetVehicleSlottedTo_Params
{
	class AVehicleBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.ShelterTutorialComponent.StopCableTutorial
struct UShelterTutorialComponent_StopCableTutorial_Params
{
};

// Function Astro.ShelterTutorialComponent.SetupCableTutorial
struct UShelterTutorialComponent_SetupCableTutorial_Params
{
	TArray<struct FSlotReference>                      shelterCableSlots;                                        // (Parm, ZeroConstructor)
	class APhysicalItem*                               Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ShelterTutorialComponent.SetCableTutorialKey
struct UShelterTutorialComponent_SetCableTutorialKey_Params
{
	struct FName                                       tutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ShelterTutorialComponent.OnCablePulled
struct UShelterTutorialComponent_OnCablePulled_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ShelterTutorialComponent.OnCableDestroyed
struct UShelterTutorialComponent_OnCableDestroyed_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.ShelterTutorialComponent.OnCableConnected
struct UShelterTutorialComponent_OnCableConnected_Params
{
	struct FSlotReference                              cableSlot;                                                // (Parm)
	class ASlotConnection*                             cable;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Astro.ShelterTutorialComponent.CableTutorialCompleteEvent__DelegateSignature
struct UShelterTutorialComponent_CableTutorialCompleteEvent__DelegateSignature_Params
{
};

// Function Astro.SlotBehaviorBlueprint.OnParentStartedInWorld
struct USlotBehaviorBlueprint_OnParentStartedInWorld_Params
{
	class APhysicalItem*                               Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotBehaviorBlueprint.OnParentPickedUpFromWorld
struct USlotBehaviorBlueprint_OnParentPickedUpFromWorld_Params
{
	class APhysicalItem*                               Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotBehaviorBlueprint.OnParentDroppedInWorld
struct USlotBehaviorBlueprint_OnParentDroppedInWorld_Params
{
	class APhysicalItem*                               Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.SlotBehaviorPlatform.OnParentDeformed
struct USlotBehaviorPlatform_OnParentDeformed_Params
{
	struct FDeformationParams                          params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.SlotBehaviorPlatform.OnActorOverlappedDuringKinematicMovement
struct USlotBehaviorPlatform_OnActorOverlappedDuringKinematicMovement_Params
{
	class UPrimitiveComponent*                         ownerRootPrimitive;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotConnection.ServerUpdateClientMotion
struct ASlotConnection_ServerUpdateClientMotion_Params
{
	struct FSlotConnectionClientMotionData             motionData;                                               // (Parm)
};

// Function Astro.SlotConnection.ServerReleaseCable
struct ASlotConnection_ServerReleaseCable_Params
{
};

// Function Astro.SlotConnection.ServerDoTimedDestruction
struct ASlotConnection_ServerDoTimedDestruction_Params
{
};

// Function Astro.SlotConnection.SaveGameSerializeCustom
struct ASlotConnection_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotConnection.PlaceExtenderForHeldCable
struct ASlotConnection_PlaceExtenderForHeldCable_Params
{
	class APhysicalItem*                               ExtenderBundle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotConnection.OnTetherAttachComponentHasOxygenChanged
struct ASlotConnection_OnTetherAttachComponentHasOxygenChanged_Params
{
	bool                                               bHasOxygen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotConnection.OnSelfDestroyed
struct ASlotConnection_OnSelfDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotConnection.OnSelfClicked
struct ASlotConnection_OnSelfClicked_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Astro.SlotConnection.OnSegmentSpawn
struct ASlotConnection_OnSegmentSpawn_Params
{
};

// Function Astro.SlotConnection.OnSegmentDestroy
struct ASlotConnection_OnSegmentDestroy_Params
{
};

// Function Astro.SlotConnection.OnRep_SlotData
struct ASlotConnection_OnRep_SlotData_Params
{
};

// Function Astro.SlotConnection.OnIsCarryingOxygenChanged
struct ASlotConnection_OnIsCarryingOxygenChanged_Params
{
	bool                                               bIsCarryingOxygen;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotConnection.OnHoverOtherSlot
struct ASlotConnection_OnHoverOtherSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.SlotConnection.OnFullyRetracted
struct ASlotConnection_OnFullyRetracted_Params
{
};

// Function Astro.SlotConnection.OnDisconnected
struct ASlotConnection_OnDisconnected_Params
{
};

// Function Astro.SlotConnection.OnConnected
struct ASlotConnection_OnConnected_Params
{
};

// Function Astro.SlotConnection.MulticastBeginHoverOverSlotFX
struct ASlotConnection_MulticastBeginHoverOverSlotFX_Params
{
};

// Function Astro.SlotConnection.MakeConnection
struct ASlotConnection_MakeConnection_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.SlotConnection.MakeComponentConnection
struct ASlotConnection_MakeComponentConnection_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.SlotConnection.GetOtherSlot
struct ASlotConnection_GetOtherSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotConnection.GetEndpointLocation
struct ASlotConnection_GetEndpointLocation_Params
{
	bool                                               allowConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotConnection.GetCurveNormal
struct ASlotConnection_GetCurveNormal_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tensile;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotConnection.GetCurveLocation
struct ASlotConnection_GetCurveLocation_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tensile;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotConnection.GetConnectionMidpoint
struct ASlotConnection_GetConnectionMidpoint_Params
{
	struct FVector                                     outVector;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotConnection.CanConnect
struct ASlotConnection_CanConnect_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotConnection.Break
struct ASlotConnection_Break_Params
{
};

// Function Astro.SlotControlUnlockBehavior.RespondToLockedStateChanged
struct USlotControlUnlockBehavior_RespondToLockedStateChanged_Params
{
	struct FAstroDatumRef                              changedLockableComponent;                                 // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.SlotBehaviorTerrain.OnParentDeformed
struct USlotBehaviorTerrain_OnParentDeformed_Params
{
	struct FDeformationParams                          params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.SlotsComponent.TakeSlotItemOfTypeFromOther
struct USlotsComponent_TakeSlotItemOfTypeFromOther_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              Other;                                                    // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.TakeSlotItemFromOther
struct USlotsComponent_TakeSlotItemFromOther_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SpawnItemTypeInSlotWithDefaultContainer
struct USlotsComponent_SpawnItemTypeInSlotWithDefaultContainer_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultContainerType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartFull;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SpawnItemTypeInSlot
struct USlotsComponent_SpawnItemTypeInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartFull;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SpawnActorInSlot
struct USlotsComponent_SpawnActorInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotValidSlow
struct USlotsComponent_SlotValidSlow_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotValid
struct USlotsComponent_SlotValid_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotsEqual
struct USlotsComponent_SlotsEqual_Params
{
	struct FSlotReference                              A;                                                        // (Parm)
	struct FSlotReference                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotPushIndicatorItemTypes
struct USlotsComponent_SlotPushIndicatorItemTypes_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutSubslotIndices;                                        // (Parm, OutParm, ZeroConstructor)
	struct FSlotIndicatorDefinition                    IndicatorDefinition;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotPowerIncomingOnly
struct USlotsComponent_SlotPowerIncomingOnly_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotIsTrailerHitch
struct USlotsComponent_SlotIsTrailerHitch_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotGetTier
struct USlotsComponent_SlotGetTier_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotGetNumIndicators
struct USlotsComponent_SlotGetNumIndicators_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotEnable
struct USlotsComponent_SlotEnable_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotDestroyIndicators
struct USlotsComponent_SlotDestroyIndicators_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.SlotsComponent.SlotAttemptToPushIndicatorIntoSpecificSubslot
struct USlotsComponent_SlotAttemptToPushIndicatorIntoSpecificSubslot_Params
{
	struct FSlotReference                              Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotIndicatorDefinition                    IndicatorDefinition;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAttemptToChangeItemAmountNormalized
struct USlotsComponent_SlotAttemptToChangeItemAmountNormalized_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              normalizedAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAddIndicatorItemTypeAttemptPackage
struct USlotsComponent_SlotAddIndicatorItemTypeAttemptPackage_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAddIndicatorItemType
struct USlotsComponent_SlotAddIndicatorItemType_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAddIndicatorItemAttemptPackage
struct USlotsComponent_SlotAddIndicatorItemAttemptPackage_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAddIndicatorItem
struct USlotsComponent_SlotAddIndicatorItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAcceptsItemTypeWithChangeInAmount
struct USlotsComponent_SlotAcceptsItemTypeWithChangeInAmount_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isChangePositive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SlotAcceptsItem
struct USlotsComponent_SlotAcceptsItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SetSlotRelativeTransform
struct USlotsComponent_SetSlotRelativeTransform_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
};

// Function Astro.SlotsComponent.SetSlotClickable
struct USlotsComponent_SetSlotClickable_Params
{
	struct FSlotReference                              A;                                                        // (Parm)
	bool                                               clickable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.SetSlotBreakable
struct USlotsComponent_SetSlotBreakable_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               Breakable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.SetSlotAcceptsUnslottableItems
struct USlotsComponent_SetSlotAcceptsUnslottableItems_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	bool                                               bAcceptsUnslottableItems;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.SetSlotAcceptsItems
struct USlotsComponent_SetSlotAcceptsItems_Params
{
	struct FSlotReference                              A;                                                        // (Parm)
	bool                                               bAcceptsItems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.SaveGameSerializeCustom
struct USlotsComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.ReleaseSlotItemForce
struct USlotsComponent_ReleaseSlotItemForce_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	float                                              RandomForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.ReleaseItemWithEjectionImpulse
struct USlotsComponent_ReleaseItemWithEjectionImpulse_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ejectionImpulse;                                          // (Parm, IsPlainOldData)
	struct FVector                                     ejectionImpulseOffset;                                    // (Parm, IsPlainOldData)
};

// Function Astro.SlotsComponent.ReleaseItem
struct USlotsComponent_ReleaseItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.OnSlotItemDestroyed
struct USlotsComponent_OnSlotItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.OnSlotIndicatorClicked
struct USlotsComponent_OnSlotIndicatorClicked_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.OnRep_SlotTransitions
struct USlotsComponent_OnRep_SlotTransitions_Params
{
};

// Function Astro.SlotsComponent.OnRep_SlotsAcceptItems
struct USlotsComponent_OnRep_SlotsAcceptItems_Params
{
};

// Function Astro.SlotsComponent.OnRep_SlotRuleStatus
struct USlotsComponent_OnRep_SlotRuleStatus_Params
{
};

// Function Astro.SlotsComponent.OnRep_SlotClickability
struct USlotsComponent_OnRep_SlotClickability_Params
{
};

// Function Astro.SlotsComponent.MakeReference
struct USlotsComponent_MakeReference_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotsComponent.MakeExclusiveConnection
struct USlotsComponent_MakeExclusiveConnection_Params
{
	struct FSlotReference                              A;                                                        // (Parm)
	struct FSlotReference                              B;                                                        // (Parm)
	class UClass*                                      OverrideType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ASlotConnection*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.MakeConnection
struct USlotsComponent_MakeConnection_Params
{
	struct FSlotReference                              A;                                                        // (Parm)
	struct FSlotReference                              B;                                                        // (Parm)
	class UClass*                                      OverrideType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ASlotConnection*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotType
struct USlotsComponent_GetSlotType_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	ESlotType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotTransform
struct USlotsComponent_GetSlotTransform_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotRelativeTransform
struct USlotsComponent_GetSlotRelativeTransform_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotPrimaryItem
struct USlotsComponent_GetSlotPrimaryItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotOwner
struct USlotsComponent_GetSlotOwner_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class USlotsComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotOrientationConfiguration
struct USlotsComponent_GetSlotOrientationConfiguration_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	ESlotConfiguration                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotLegacyMeshes
struct USlotsComponent_GetSlotLegacyMeshes_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.SlotsComponent.GetSlotItems
struct USlotsComponent_GetSlotItems_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.SlotsComponent.GetSlotItem
struct USlotsComponent_GetSlotItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotExternalConnections
struct USlotsComponent_GetSlotExternalConnections_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	TArray<class ASlotConnection*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.SlotsComponent.GetSlotDelegates
struct USlotsComponent_GetSlotDelegates_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class USlotDelegates*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotConnectorType
struct USlotsComponent_GetSlotConnectorType_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	ESlotConnectorType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotsComponent.GetSlotConnectedSlot
struct USlotsComponent_GetSlotConnectedSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotsComponent.EmplaceSlotItem
struct USlotsComponent_EmplaceSlotItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SnapTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               weld;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.DestroySlotItem
struct USlotsComponent_DestroySlotItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.SlotsComponent.BreakAllSlotConnections
struct USlotsComponent_BreakAllSlotConnections_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
};

// Function Astro.SlotsComponent.AuxUseRight
struct USlotsComponent_AuxUseRight_Params
{
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.AuxUseLeft
struct USlotsComponent_AuxUseLeft_Params
{
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.AuxUseAll
struct USlotsComponent_AuxUseAll_Params
{
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotsComponent.AuxUse
struct USlotsComponent_AuxUse_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (Parm)
	class AAstroPlayerController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotStatics.WillTakePhysicalItemToSlotArray
struct USlotStatics_WillTakePhysicalItemToSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.WillAddItem
struct USlotStatics_WillAddItem_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EjectForce;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeToSlotArray
struct USlotStatics_TakeToSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItemToComponent
struct USlotStatics_TakeSlotItemToComponent_Params
{
	class UItemComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotReference                              Other;                                                    // (Parm)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItemRateToComponent
struct USlotStatics_TakeSlotItemRateToComponent_Params
{
	class UItemComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItemRateDeltaToComponent
struct USlotStatics_TakeSlotItemRateDeltaToComponent_Params
{
	class UItemComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItemRateDelta
struct USlotStatics_TakeSlotItemRateDelta_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItemRate
struct USlotStatics_TakeSlotItemRate_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotItem
struct USlotStatics_TakeSlotItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	struct FSlotReference                              Other;                                                    // (Parm)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeSlotArrayPhysicalItemOfTypeToSlotArray
struct USlotStatics_TakeSlotArrayPhysicalItemOfTypeToSlotArray_Params
{
	TArray<struct FSlotReference>                      FromSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSlotReference>                      ToSlots;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       IgnoredItems;                                             // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakePhysicalItemToSlotArray
struct USlotStatics_TakePhysicalItemToSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemToSlotArrayRateDelta
struct USlotStatics_TakeItemToSlotArrayRateDelta_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemToSlotArrayRate
struct USlotStatics_TakeItemToSlotArrayRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              Other;                                                    // (Parm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemToSlotArray
struct USlotStatics_TakeItemToSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              Other;                                                    // (Parm)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemRateDelta
struct USlotStatics_TakeItemRateDelta_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemRate
struct USlotStatics_TakeItemRate_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemFromSlotArrayRateDelta
struct USlotStatics_TakeItemFromSlotArrayRateDelta_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemFromSlotArrayRate
struct USlotStatics_TakeItemFromSlotArrayRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItemFromSlotArray
struct USlotStatics_TakeItemFromSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeItem
struct USlotStatics_TakeItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeComponentItemToSlot
struct USlotStatics_TakeComponentItemToSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemComponent*                              otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeComponentItemRateToSlot
struct USlotStatics_TakeComponentItemRateToSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemComponent*                              Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeComponentItemRateDeltaToSlot
struct USlotStatics_TakeComponentItemRateDeltaToSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemComponent*                              Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItemRateDelta
struct USlotStatics_TakeAnyItemRateDelta_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItemRate
struct USlotStatics_TakeAnyItemRate_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItemFromSlotArrayRateDelta
struct USlotStatics_TakeAnyItemFromSlotArrayRateDelta_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItemFromSlotArrayRate
struct USlotStatics_TakeAnyItemFromSlotArrayRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItemFromSlotArray
struct USlotStatics_TakeAnyItemFromSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.TakeAnyItem
struct USlotStatics_TakeAnyItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SpawnItemsInSlotArray
struct USlotStatics_SpawnItemsInSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              ItemsToSpawn;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APhysicalItem*>                       OutSpawnedItems;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotsInRangeForConnectionType
struct USlotStatics_SlotsInRangeForConnectionType_Params
{
	struct FSlotReference                              slotRefA;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlotReference                              slotRefB;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      connectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotsInRangeForConnection
struct USlotStatics_SlotsInRangeForConnection_Params
{
	struct FSlotReference                              slotRefA;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlotReference                              slotRefB;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class ASlotConnection*                             Connection;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotItemAmount
struct USlotStatics_SlotItemAmount_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArraySlotWithItem
struct USlotStatics_SlotArraySlotWithItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArraySlotWithAnyItem
struct USlotStatics_SlotArraySlotWithAnyItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArraySlotForPhysicalItem
struct USlotStatics_SlotArraySlotForPhysicalItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class APhysicalItem*                               PhysicalItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArraySlotForItem
struct USlotStatics_SlotArraySlotForItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArrayQueryBestSlot
struct USlotStatics_SlotArrayQueryBestSlot_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UClickQuery*                                 Query;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArrayQueryBestFullSlot
struct USlotStatics_SlotArrayQueryBestFullSlot_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UClickQuery*                                 Query;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArrayQueryBestEmptySlot
struct USlotStatics_SlotArrayQueryBestEmptySlot_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UClickQuery*                                 Query;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArrayHasItem
struct USlotStatics_SlotArrayHasItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayHasAnyItem
struct USlotStatics_SlotArrayHasAnyItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetSlottedItemThatCanAcceptChangeInAmountForItemType
struct USlotStatics_SlotArrayGetSlottedItemThatCanAcceptChangeInAmountForItemType_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               changeIsPositive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetNumberOfSlottedItemsThatHaveItemType
struct USlotStatics_SlotArrayGetNumberOfSlottedItemsThatHaveItemType_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetNumberOfEmptyContainers
struct USlotStatics_SlotArrayGetNumberOfEmptyContainers_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      typeToCheckAgainstStorageWhitelist;                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetItem
struct USlotStatics_SlotArrayGetItem_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetAllSlottedItemsThatHaveType
struct USlotStatics_SlotArrayGetAllSlottedItemsThatHaveType_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APhysicalItem*>                       outItemArray;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetAllSlottedItemsThatCanAcceptChangeInAmountForItemType
struct USlotStatics_SlotArrayGetAllSlottedItemsThatCanAcceptChangeInAmountForItemType_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APhysicalItem*>                       outItemArray;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               changeIsPositive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayGetAllSlottedItemsThatAreEmptyContainers
struct USlotStatics_SlotArrayGetAllSlottedItemsThatAreEmptyContainers_Params
{
	TArray<struct FSlotReference>                      itemSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      typeToCheckAgainstStorageWhitelist;                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       outEmptyContainerItems;                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayEnableClickable
struct USlotStatics_SlotArrayEnableClickable_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	bool                                               clickable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotStatics.SlotArrayEmptySlot
struct USlotStatics_SlotArrayEmptySlot_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, ZeroConstructor)
	struct FSlotReference                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SlotStatics.SlotArrayEmptyCount
struct USlotStatics_SlotArrayEmptyCount_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.MoveItemFromCurrentSlotToSlotArray
struct USlotStatics_MoveItemFromCurrentSlotToSlotArray_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.IsSlotAnAuxSlot
struct USlotStatics_IsSlotAnAuxSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.IsCompatibleWithType
struct USlotStatics_IsCompatibleWithType_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.IsAPowerCableSlot
struct USlotStatics_IsAPowerCableSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.HasSpaceAvailableAtTier
struct USlotStatics_HasSpaceAvailableAtTier_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsIndicator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.HasItem
struct USlotStatics_HasItem_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.HasFullResource
struct USlotStatics_HasFullResource_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.HasAnyItem
struct USlotStatics_HasAnyItem_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetVisualPrimitiveForIndicator
struct USlotStatics_GetVisualPrimitiveForIndicator_Params
{
	struct FSlotReference                              SlotRef;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                SlotIndicatorIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotStatics.GetTooltipForSlot
struct USlotStatics_GetTooltipForSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UTooltipComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotStatics.GetSubslotTransform
struct USlotStatics_GetSubslotTransform_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetStoredSubItemTypeClass
struct USlotStatics_GetStoredSubItemTypeClass_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetStoredSubItemTypeCDO
struct USlotStatics_GetStoredSubItemTypeCDO_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetSlotRangeLocation
struct USlotStatics_GetSlotRangeLocation_Params
{
	struct FSlotReference                              SlotRef;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetPrimaryItemTypeClass
struct USlotStatics_GetPrimaryItemTypeClass_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetPrimaryItemTypeCDO
struct USlotStatics_GetPrimaryItemTypeCDO_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetNumberOfDiscreteSlottedItems
struct USlotStatics_GetNumberOfDiscreteSlottedItems_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetItemTypeClass
struct USlotStatics_GetItemTypeClass_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetItemTypeCDO
struct USlotStatics_GetItemTypeCDO_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UItemType*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetItemAmount
struct USlotStatics_GetItemAmount_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetIndicatorTooltipForSlot
struct USlotStatics_GetIndicatorTooltipForSlot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.SlotStatics.GetAnyItem
struct USlotStatics_GetAnyItem_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.GetAllItemsInConnectedStorage
struct USlotStatics_GetAllItemsInConnectedStorage_Params
{
	class AActor*                                      baseActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.SlotStatics.FindFirstAvailableSubslot
struct USlotStatics_FindFirstAvailableSubslot_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsIndicator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.EjectAllItemsInSubslotAndChildSubslots
struct USlotStatics_EjectAllItemsInSubslotAndChildSubslots_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	int                                                SubslotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlotStatics.CloneItemIntoSlot
struct USlotStatics_CloneItemIntoSlot_Params
{
	class APhysicalItem*                               ItemToClone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              SlotToSpawnCloneIn;                                       // (Parm)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AttemptToPlacePrimaryItemInConnectedStorageSlotNetwork
struct USlotStatics_AttemptToPlacePrimaryItemInConnectedStorageSlotNetwork_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class AActor*                                      ActorInStorageNetwork;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AttemptToPlaceItemInConnectedStorageSlotNetwork
struct USlotStatics_AttemptToPlaceItemInConnectedStorageSlotNetwork_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorInStorageNetwork;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AttemptToFetchItemsFromConnectedStorageSlotNetworkToSlotArray
struct USlotStatics_AttemptToFetchItemsFromConnectedStorageSlotNetworkToSlotArray_Params
{
	class UClass*                                      ItemToRetrieve;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ActorInStorageNetwork;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumToTake;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AttemptToFetchItemFromConnectedStorageSlotNetworkToSlotArray
struct USlotStatics_AttemptToFetchItemFromConnectedStorageSlotNetworkToSlotArray_Params
{
	class UClass*                                      ItemToRetrieve;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ActorInStorageNetwork;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EItemRetrievalQuantityFilter                       ItemRetrievalQuantityFilter;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TakeAll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddToSlotArrayRateDelta
struct USlotStatics_AddToSlotArrayRateDelta_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddToSlotArrayRate
struct USlotStatics_AddToSlotArrayRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddToSlotArray
struct USlotStatics_AddToSlotArray_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddItemRateDelta
struct USlotStatics_AddItemRateDelta_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddItemRate
struct USlotStatics_AddItemRate_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlotStatics.AddItem
struct USlotStatics_AddItem_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EjectForce;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.SlottedItemLockingMechanism.OnItemSetInRelevantSlot
struct USlottedItemLockingMechanism_OnItemSetInRelevantSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SlottedItemLockingMechanism.OnItemReleasedFromRelevantSlot
struct USlottedItemLockingMechanism_OnItemReleasedFromRelevantSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SolarPowerGeneratorComponentContainer.GetSolarPowerGeneratorComponent
struct USolarPowerGeneratorComponentContainer_GetSolarPowerGeneratorComponent_Params
{
	struct FAstroDatumRef                              SolarPowerGeneratorComponentRef;                          // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSolarPowerGeneratorComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SolarPowerGeneratorComponentContainer.FindSolarPowerGeneratorComponent
struct USolarPowerGeneratorComponentContainer_FindSolarPowerGeneratorComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSolarPowerGeneratorComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.SpawnLocationComponent.PushSpawnLocation
struct USpawnLocationComponent_PushSpawnLocation_Params
{
};

// Function Astro.SpawnLocationComponent.PopSpawnLocation
struct USpawnLocationComponent_PopSpawnLocation_Params
{
};

// Function Astro.SplitterControlPanel.ProcessSplitterControlPanelInput
struct ASplitterControlPanel_ProcessSplitterControlPanelInput_Params
{
};

// Function Astro.SplitterControlPanel.HandleFullyCrackedOrClosed
struct ASplitterControlPanel_HandleFullyCrackedOrClosed_Params
{
	class UCrackableActorComponent*                    InCrackableActorComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.SplitterControlPanel.HandleCrackedChanged
struct ASplitterControlPanel_HandleCrackedChanged_Params
{
	class UCrackableActorComponent*                    InCrackableActorComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.TertiaryUse
struct UStorageChassisComponent_TertiaryUse_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.SlotEvent
struct UStorageChassisComponent_SlotEvent_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.QueryTertiary
struct UStorageChassisComponent_QueryTertiary_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.OnRep_SlotIndicatorLocations
struct UStorageChassisComponent_OnRep_SlotIndicatorLocations_Params
{
};

// Function Astro.StorageChassisComponent.OnRep_ActorAttachments
struct UStorageChassisComponent_OnRep_ActorAttachments_Params
{
};

// Function Astro.StorageChassisComponent.OnPlayerEnterExitAttachment
struct UStorageChassisComponent_OnPlayerEnterExitAttachment_Params
{
	bool                                               Entered;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.OnOwnerDestroyed
struct UStorageChassisComponent_OnOwnerDestroyed_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.GetUnmanagedSlots
struct UStorageChassisComponent_GetUnmanagedSlots_Params
{
	TArray<struct FSlotReference>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.StorageChassisComponent.GetOutermostStorage
struct UStorageChassisComponent_GetOutermostStorage_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Inclusive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.GetActorStorageChassisComponent
struct UStorageChassisComponent_GetActorStorageChassisComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.FindRuleByName
struct UStorageChassisComponent_FindRuleByName_Params
{
	struct FName                                       RuleName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USlotOrganizationRule*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.ChangeDeformationDeltaInConnectedSlotNetwork
struct UStorageChassisComponent_ChangeDeformationDeltaInConnectedSlotNetwork_Params
{
	int                                                sedimentAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      deformedItemType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.CalculateItemReservesInConnectedSlotNetwork
struct UStorageChassisComponent_CalculateItemReservesInConnectedSlotNetwork_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                outCurrentStoredItemAmount;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                outMaxStorageSize;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.AuthorityPlaceItemInLocalStorage
struct UStorageChassisComponent_AuthorityPlaceItemInLocalStorage_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.AuthorityPlaceItemInConnectedSlotNetwork
struct UStorageChassisComponent_AuthorityPlaceItemInConnectedSlotNetwork_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StorageChassisComponent.AuthorityApplyOrganizationRules
struct UStorageChassisComponent_AuthorityApplyOrganizationRules_Params
{
};

// Function Astro.StorageChassisComponent.AddItem
struct UStorageChassisComponent_AddItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StreamingPowerCableComponentContainer.GetStreamingPowerCableComponent
struct UStreamingPowerCableComponentContainer_GetStreamingPowerCableComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerCableComponentRef;                          // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerCableComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerCableComponentContainer.FindStreamingPowerCableComponent
struct UStreamingPowerCableComponentContainer_FindStreamingPowerCableComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerCableComponent               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerMergedConnectionComponentContainer.GetStreamingPowerMergedConnectionComponent
struct UStreamingPowerMergedConnectionComponentContainer_GetStreamingPowerMergedConnectionComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerMergedConnectionComponentRef;               // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerMergedConnectionComponent    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerMergedConnectionComponentContainer.FindStreamingPowerMergedConnectionComponent
struct UStreamingPowerMergedConnectionComponentContainer_FindStreamingPowerMergedConnectionComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerMergedConnectionComponent    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerMergedNodeComponentContainer.GetStreamingPowerMergedNodeComponent
struct UStreamingPowerMergedNodeComponentContainer_GetStreamingPowerMergedNodeComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerMergedNodeComponentRef;                     // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerMergedNodeComponent          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerMergedNodeComponentContainer.FindStreamingPowerMergedNodeComponent
struct UStreamingPowerMergedNodeComponentContainer_FindStreamingPowerMergedNodeComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerMergedNodeComponent          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerNodeComponentContainer.GetStreamingPowerNodeComponent
struct UStreamingPowerNodeComponentContainer_GetStreamingPowerNodeComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerNodeComponentRef;                           // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerNodeComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerNodeComponentContainer.FindStreamingPowerNodeComponent
struct UStreamingPowerNodeComponentContainer_FindStreamingPowerNodeComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerNodeComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction Astro.StreamingPowerSplitter.UpdateSplitterVisualization__DelegateSignature
struct AStreamingPowerSplitter_UpdateSplitterVisualization__DelegateSignature_Params
{
};

// Function Astro.StreamingPowerSplitter.OnRep_SplitterData
struct AStreamingPowerSplitter_OnRep_SplitterData_Params
{
};

// Function Astro.StreamingPowerSplitter.HandleCableConnectionMade
struct AStreamingPowerSplitter_HandleCableConnectionMade_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StreamingPowerSplitter.HandleCableConnectionBroken
struct AStreamingPowerSplitter_HandleCableConnectionBroken_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	class ASlotConnection*                             Connection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StreamingPowerSplitter.GetDirectionOfCableForSlot
struct AStreamingPowerSplitter_GetDirectionOfCableForSlot_Params
{
	struct FSlotReference                              ConnectedSlot;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	EPowerCableConnectionDirection                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StreamingPowerSplitter.ChangePowerSplitRatios
struct AStreamingPowerSplitter_ChangePowerSplitRatios_Params
{
	TArray<float>                                      SplitRatios;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Astro.StreamingPowerSystem.RemovePoweredItemFromActorsPowerNode
struct UStreamingPowerSystem_RemovePoweredItemFromActorsPowerNode_Params
{
	class AActor*                                      gridNodeOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StreamingPowerSystem.CreateMergedConnectionBetweenStreamingPowerNodesOnActors
struct UStreamingPowerSystem_CreateMergedConnectionBetweenStreamingPowerNodesOnActors_Params
{
	class AActor*                                      thisActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StreamingPowerSystem.AddPoweredItemToActorsPowerNode
struct UStreamingPowerSystem_AddPoweredItemToActorsPowerNode_Params
{
	class AActor*                                      gridNodeOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.StreamingPowerVampireConnectionComponentContainer.GetStreamingPowerVampireConnectionComponent
struct UStreamingPowerVampireConnectionComponentContainer_GetStreamingPowerVampireConnectionComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerVampireConnectionComponentRef;              // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerVampireConnectionComponent   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerVampireConnectionComponentContainer.FindStreamingPowerVampireConnectionComponent
struct UStreamingPowerVampireConnectionComponentContainer_FindStreamingPowerVampireConnectionComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerVampireConnectionComponent   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.Subslot.MakeSubslot
struct USubslot_MakeSubslot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     SlotComponents;                                           // (ConstParm, Parm, ZeroConstructor)
	TArray<class USubslot*>                            SubSubSlots;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USubslot*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.T2CanisterComponent.OnSlottedItemsChanged
struct UT2CanisterComponent_OnSlottedItemsChanged_Params
{
	class APhysicalItem*                               changedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.T2CanisterComponent.OnItemTypeChanged
struct UT2CanisterComponent_OnItemTypeChanged_Params
{
	class UItemComponent*                              ItemComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      NewItemType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.T2CanisterComponent.OnAmountChanged
struct UT2CanisterComponent_OnAmountChanged_Params
{
};

// Function Astro.T2CanisterComponent.CanMoveItems
struct UT2CanisterComponent_CanMoveItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.T2CanisterComponent.AuthoritySetIsDispensing
struct UT2CanisterComponent_AuthoritySetIsDispensing_Params
{
	bool                                               isDispensing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.T2CanisterOrganizationRule.SetStoredItemTypeWhitelist
struct UT2CanisterOrganizationRule_SetStoredItemTypeWhitelist_Params
{
	TArray<class UClass*>                              ItemTypes;                                                // (Parm, ZeroConstructor)
};

// Function Astro.T2CanisterOrganizationRule.SetMode
struct UT2CanisterOrganizationRule_SetMode_Params
{
	bool                                               isDispensing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.T2CanisterOrganizationRule.SetCurrentStoredItemType
struct UT2CanisterOrganizationRule_SetCurrentStoredItemType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.T2CanisterOrganizationRule.OnSlottedItemDrainedOrFilled
struct UT2CanisterOrganizationRule_OnSlottedItemDrainedOrFilled_Params
{
};

// Function Astro.TappableObjectComponent.UnregisterTapperSlot
struct UTappableObjectComponent_UnregisterTapperSlot_Params
{
	struct FSlotReference                              tapperSlot;                                               // (Parm)
};

// Function Astro.TappableObjectComponent.RegisterTapperSlot
struct UTappableObjectComponent_RegisterTapperSlot_Params
{
	struct FSlotReference                              tapperSlot;                                               // (Parm)
};

// Function Astro.TappableObjectComponent.GetCurrentTappingEfficiency
struct UTappableObjectComponent_GetCurrentTappingEfficiency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TickPostArrivalEffects
struct ATeleportationBubble_TickPostArrivalEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TickExpansionEffects
struct ATeleportationBubble_TickExpansionEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TickArrivalExpansionEffects
struct ATeleportationBubble_TickArrivalExpansionEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TickAbortionEffects
struct ATeleportationBubble_TickAbortionEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TeleportCharacterToPosition
struct ATeleportationBubble_TeleportCharacterToPosition_Params
{
	class AAstroCharacter*                             characterToTeleport;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.TeleportationBubble.TeleportCharacterToGateObject
struct ATeleportationBubble_TeleportCharacterToGateObject_Params
{
	class AAstroCharacter*                             characterToTeleport;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGateObjectReference                        GateObjectRef;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.TeleportationBubble.OnRep_ReplicationData
struct ATeleportationBubble_OnRep_ReplicationData_Params
{
};

// Function Astro.TeleportationBubble.OnCharacterCompletedBubbleExit
struct ATeleportationBubble_OnCharacterCompletedBubbleExit_Params
{
	class AActor*                                      characterActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TeleportationBubble.OnCharacterCompletedBubbleEntry
struct ATeleportationBubble_OnCharacterCompletedBubbleEntry_Params
{
	class AActor*                                      characterActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TeleportationBubble.InitializePostArrivalEffects
struct ATeleportationBubble_InitializePostArrivalEffects_Params
{
};

// Function Astro.TeleportationBubble.InitializeExpansionEffects
struct ATeleportationBubble_InitializeExpansionEffects_Params
{
};

// Function Astro.TeleportationBubble.InitializeArrivalExpansionEffects
struct ATeleportationBubble_InitializeArrivalExpansionEffects_Params
{
};

// Function Astro.TeleportationBubble.InitializeAbortEffects
struct ATeleportationBubble_InitializeAbortEffects_Params
{
};

// Function Astro.TerrainAnalyzerComponent.TryGetTerrainFromColor
struct UTerrainAnalyzerComponent_TryGetTerrainFromColor_Params
{
	bool                                               completeIfSuccessful;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainAnalyzerComponent.SetAnalysisInProgress
struct UTerrainAnalyzerComponent_SetAnalysisInProgress_Params
{
	bool                                               InProgress;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainAnalyzerComponent.SampledTerrainChanged
struct UTerrainAnalyzerComponent_SampledTerrainChanged_Params
{
};

// Function Astro.TerrainAnalyzerComponent.OnReplicated_AnalyzedTerrainMaterialSample
struct UTerrainAnalyzerComponent_OnReplicated_AnalyzedTerrainMaterialSample_Params
{
};

// Function Astro.TerrainAnalyzerComponent.OnReplicated_AnalysisIsComplete
struct UTerrainAnalyzerComponent_OnReplicated_AnalysisIsComplete_Params
{
};

// Function Astro.TerrainAnalyzerComponent.OnAugmentUnequipped
struct UTerrainAnalyzerComponent_OnAugmentUnequipped_Params
{
};

// Function Astro.TerrainAnalyzerComponent.OnAugmentEquipped
struct UTerrainAnalyzerComponent_OnAugmentEquipped_Params
{
};

// Function Astro.TerrainAnalyzerComponent.GetAnalyzedMaterialSurfaceType
struct UTerrainAnalyzerComponent_GetAnalyzedMaterialSurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TerrainAnalyzerComponent.GetAnalyzedMaterialColor
struct UTerrainAnalyzerComponent_GetAnalyzedMaterialColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.TerrainAnalyzerComponent.EndDeform
struct UTerrainAnalyzerComponent_EndDeform_Params
{
};

// Function Astro.TerrainAnalyzerComponent.BeginDeform
struct UTerrainAnalyzerComponent_BeginDeform_Params
{
};

// Function Astro.TerrainAnalyzerComponent.AttemptAnalysis
struct UTerrainAnalyzerComponent_AttemptAnalysis_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainBrush.ShowBrushElements
struct ATerrainBrush_ShowBrushElements_Params
{
	EDeformType                                        DeformType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showElement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainBrush.SetResourceTooltipSuppression
struct ATerrainBrush_SetResourceTooltipSuppression_Params
{
	bool                                               SuppressResourceTooltip;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainBrush.OnDeactivate
struct ATerrainBrush_OnDeactivate_Params
{
};

// Function Astro.TerrainBrush.OnBrushColorChanged
struct ATerrainBrush_OnBrushColorChanged_Params
{
	struct FTerrainMaterial                            TerrainMaterial;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.TerrainBrush.OnActivate
struct ATerrainBrush_OnActivate_Params
{
};

// Function Astro.TerrainBrush.ManageTerrainHardnessTexture
struct ATerrainBrush_ManageTerrainHardnessTexture_Params
{
};

// Function Astro.TerrainBrush.GetResourceNodeTooltip
struct ATerrainBrush_GetResourceNodeTooltip_Params
{
	class UTooltipComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.TerrainBrush.ChangeBrushOperation
struct ATerrainBrush_ChangeBrushOperation_Params
{
	EDeformType                                        NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainPhysicsComponent.SetWorldPhysics
struct UTerrainPhysicsComponent_SetWorldPhysics_Params
{
};

// Function Astro.TerrainPhysicsComponent.SetPickupPhysics
struct UTerrainPhysicsComponent_SetPickupPhysics_Params
{
};

// Function Astro.TerrainPhysicsComponent.SetIsBuried
struct UTerrainPhysicsComponent_SetIsBuried_Params
{
	bool                                               NewIsBuried;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainPhysicsComponent.SetBuryPhysics
struct UTerrainPhysicsComponent_SetBuryPhysics_Params
{
};

// Function Astro.TerrainPhysicsComponent.SaveGameSerializeCustom
struct UTerrainPhysicsComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainPhysicsComponent.OnRep_Buried
struct UTerrainPhysicsComponent_OnRep_Buried_Params
{
};

// Function Astro.TerrainPhysicsComponent.OnDeformationComplete
struct UTerrainPhysicsComponent_OnDeformationComplete_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.TerrainPhysicsComponent.IsTerrainBuried
struct UTerrainPhysicsComponent_IsTerrainBuried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TerrainPhysicsComponent.GetIsBuried
struct UTerrainPhysicsComponent_GetIsBuried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TerrainPlatformComponent.OwnerDestroyed
struct UTerrainPlatformComponent_OwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TerrainShapeComponent.OwnerDestroyed
struct UTerrainShapeComponent_OwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TestEntityColorCycleContainer.GetTestEntityColorCycleComponent
struct UTestEntityColorCycleContainer_GetTestEntityColorCycleComponent_Params
{
	struct FAstroDatumRef                              ColorCycleComponentRef;                                   // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTestEntityColorCycleComponent              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction Astro.TetherAttachComponent.UpdateTetherAttachPowerFlow__DelegateSignature
struct UTetherAttachComponent_UpdateTetherAttachPowerFlow__DelegateSignature_Params
{
	float                                              PowerFlow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.UpdateExplicitNetwork
struct UTetherAttachComponent_UpdateExplicitNetwork_Params
{
};

// Function Astro.TetherAttachComponent.TeardownLinkToOxygenator
struct UTetherAttachComponent_TeardownLinkToOxygenator_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.SetCanAttach
struct UTetherAttachComponent_SetCanAttach_Params
{
	bool                                               NewCanAttach;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromSave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.OnOwnerMotionStateChanged
struct UTetherAttachComponent_OnOwnerMotionStateChanged_Params
{
};

// Function Astro.TetherAttachComponent.OnOwnerDestroy
struct UTetherAttachComponent_OnOwnerDestroy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.OnBuiltInOxygenatorOxygenChanged
struct UTetherAttachComponent_OnBuiltInOxygenatorOxygenChanged_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.OnBuiltInOxygenatorDestroyed
struct UTetherAttachComponent_OnBuiltInOxygenatorDestroyed_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.GetTetherAttachmentType
struct UTetherAttachComponent_GetTetherAttachmentType_Params
{
	ETetherAttachmentType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.GetPowerFlowOnVampireConnections
struct UTetherAttachComponent_GetPowerFlowOnVampireConnections_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.GetAttachPoint
struct UTetherAttachComponent_GetAttachPoint_Params
{
	struct FSlotReference                              SlotRef;                                                  // (Parm)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               allowConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.GetActorTetherAttachComponent
struct UTetherAttachComponent_GetActorTetherAttachComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherAttachComponent.GetActorHierarchyTetherAttachComponent
struct UTetherAttachComponent_GetActorHierarchyTetherAttachComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherDecorationConfig.GetNextTetherDecorationIndex
struct UTetherDecorationConfig_GetNextTetherDecorationIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TetherNetwork.RemoveOxygenator
struct UTetherNetwork_RemoveOxygenator_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherNetwork.OnTetherConnectionDestroyed
struct UTetherNetwork_OnTetherConnectionDestroyed_Params
{
	class ASlotConnection*                             Connection;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TetherNetwork.OnOxygenatorSupplyingOxygenChanged
struct UTetherNetwork_OnOxygenatorSupplyingOxygenChanged_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TetherNetwork.IsSupplyingOxygenToConsumers
struct UTetherNetwork_IsSupplyingOxygenToConsumers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TetherPostComponent.SetPlacing
struct UTetherPostComponent_SetPlacing_Params
{
	bool                                               newPlacing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TetherPostComponent.OnOwnerPlacedInSlot
struct UTetherPostComponent_OnOwnerPlacedInSlot_Params
{
};

// Function Astro.TetherPostComponent.BreakTethers
struct UTetherPostComponent_BreakTethers_Params
{
};

// Function Astro.TetherPostComponent.AttachTethers
struct UTetherPostComponent_AttachTethers_Params
{
	bool                                               fromSave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.UpdateWidgetOverrideDisplayData
struct UTooltipComponent_UpdateWidgetOverrideDisplayData_Params
{
	struct FName                                       overrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   DisplayData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.TooltipComponent.UpdateWidgetOverrideDescriptionText
struct UTooltipComponent_UpdateWidgetOverrideDescriptionText_Params
{
	struct FName                                       overrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newDescription;                                           // (Parm)
};

// Function Astro.TooltipComponent.UpdateCorrectedPivotLocation
struct UTooltipComponent_UpdateCorrectedPivotLocation_Params
{
};

// Function Astro.TooltipComponent.UpdateActiveHoldInput
struct UTooltipComponent_UpdateActiveHoldInput_Params
{
};

// Function Astro.TooltipComponent.StopCurrentHoldAction
struct UTooltipComponent_StopCurrentHoldAction_Params
{
	bool                                               InputActionSucceeded;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetupTooltipReferenceAnchor
struct UTooltipComponent_SetupTooltipReferenceAnchor_Params
{
};

// Function Astro.TooltipComponent.SetupTooltipForItemType
struct UTooltipComponent_SetupTooltipForItemType_Params
{
	class UItemType*                                   ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetupTooltipForCurrentDisplaySettings
struct UTooltipComponent_SetupTooltipForCurrentDisplaySettings_Params
{
};

// Function Astro.TooltipComponent.SetTooltipTitle
struct UTooltipComponent_SetTooltipTitle_Params
{
	struct FText                                       NewTitle;                                                 // (Parm)
};

// Function Astro.TooltipComponent.SetTooltipBadgeImage
struct UTooltipComponent_SetTooltipBadgeImage_Params
{
	class UObject*                                     ResourceObjectBadge;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetTooltipBadgeColor
struct UTooltipComponent_SetTooltipBadgeColor_Params
{
	struct FLinearColor                                NewBadgeColor;                                            // (Parm, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetInputRespondingCollider
struct UTooltipComponent_SetInputRespondingCollider_Params
{
	class UPrimitiveComponent*                         NewInputRespondingCollider;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetHasFocus
struct UTooltipComponent_SetHasFocus_Params
{
	bool                                               bInHasFocus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetDesiredTooltipState
struct UTooltipComponent_SetDesiredTooltipState_Params
{
	ETooltipState                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.SetCustomTooltipReferenceAnchor
struct UTooltipComponent_SetCustomTooltipReferenceAnchor_Params
{
	class USceneComponent*                             CustomReferenceAnchor;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TooltipComponent.PushTooltipWidgetOverride
struct UTooltipComponent_PushTooltipWidgetOverride_Params
{
	struct FName                                       overrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ETooltipVisibilityControl                          overrideVisibilityControl;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInApplyAnchorReferenceOverride;                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnchorReferenceOverride;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInApplyScreenOffsetOverride;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenOffsetOverride;                                     // (Parm, IsPlainOldData)
	bool                                               bInRemainsVisibleWhenHeld;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSuppressOtherTooltipsWhenExpanded;                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInOverrideUseAndExaminePrompts;                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   DisplayData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTooltipProximityBadgeVisibilityData        proximityData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.TooltipComponent.PopTooltipWidgetOverride
struct UTooltipComponent_PopTooltipWidgetOverride_Params
{
	struct FName                                       overrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnUseContextChanged
struct UTooltipComponent_OnUseContextChanged_Params
{
	EUseContext                                        UseContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnTooltipWidgetStateChanged
struct UTooltipComponent_OnTooltipWidgetStateChanged_Params
{
};

// Function Astro.TooltipComponent.OnSecondaryProximitySphereEndOverlapBadge
struct UTooltipComponent_OnSecondaryProximitySphereEndOverlapBadge_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnSecondaryProximitySphereBeginOverlapBadge
struct UTooltipComponent_OnSecondaryProximitySphereBeginOverlapBadge_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnProximitySphereEndOverlapDetails
struct UTooltipComponent_OnProximitySphereEndOverlapDetails_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnProximitySphereBeginOverlapDetails
struct UTooltipComponent_OnProximitySphereBeginOverlapDetails_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnPrimaryProximitySphereEndOverlapBadge
struct UTooltipComponent_OnPrimaryProximitySphereEndOverlapBadge_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnPrimaryProximitySphereBeginOverlapBadge
struct UTooltipComponent_OnPrimaryProximitySphereBeginOverlapBadge_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         otherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnOwningSlotCrackedStateChanged
struct UTooltipComponent_OnOwningSlotCrackedStateChanged_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsCracked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnOwningItemReleasedFromSlot
struct UTooltipComponent_OnOwningItemReleasedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnOwningItemPlacedInSlot
struct UTooltipComponent_OnOwningItemPlacedInSlot_Params
{
};

// Function Astro.TooltipComponent.OnOwnerUseAvailabilityChanged
struct UTooltipComponent_OnOwnerUseAvailabilityChanged_Params
{
	bool                                               bIsUsable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnOwnerItemTypeChanged
struct UTooltipComponent_OnOwnerItemTypeChanged_Params
{
};

// Function Astro.TooltipComponent.OnNonResolutionMenuSettingsChanged
struct UTooltipComponent_OnNonResolutionMenuSettingsChanged_Params
{
};

// Function Astro.TooltipComponent.OnInteractionActivated
struct UTooltipComponent_OnInteractionActivated_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnInputUnhandled
struct UTooltipComponent_OnInputUnhandled_Params
{
	TEnumAsByte<EInputEvent>                           InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnActionInputReleased
struct UTooltipComponent_OnActionInputReleased_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.OnActionInputPressed
struct UTooltipComponent_OnActionInputPressed_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TooltipComponent.HasTooltipOverride
struct UTooltipComponent_HasTooltipOverride_Params
{
	struct FName                                       overrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.GetVisibilityControl
struct UTooltipComponent_GetVisibilityControl_Params
{
	ETooltipVisibilityControl                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.GetProximityState
struct UTooltipComponent_GetProximityState_Params
{
	ETooltipProximityState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.GetHasFocus
struct UTooltipComponent_GetHasFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.GetDesiredState
struct UTooltipComponent_GetDesiredState_Params
{
	ETooltipState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipComponent.GetActorThisTooltipIsFor
struct UTooltipComponent_GetActorThisTooltipIsFor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TooltipManager.OnTooltipPrimitiveEndCursorOver
struct UTooltipManager_OnTooltipPrimitiveEndCursorOver_Params
{
	class UPrimitiveComponent*                         TooltipPrimitive;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TooltipManager.OnTooltipPrimitiveBeginCursorOver
struct UTooltipManager_OnTooltipPrimitiveBeginCursorOver_Params
{
	class UPrimitiveComponent*                         TooltipPrimitive;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TooltipManager.OnExclusiveExpansionTooltipOverrideChanged
struct UTooltipManager_OnExclusiveExpansionTooltipOverrideChanged_Params
{
};

// Function Astro.TooltipStatics.GetDefaultTooltipComponentForActor
struct UTooltipStatics_GetDefaultTooltipComponentForActor_Params
{
	class AActor*                                      TooltipOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.TooltipStatics.DuplicateTooltipDisplayDataAndAppendInteractionPrompts
struct UTooltipStatics_DuplicateTooltipDisplayDataAndAppendInteractionPrompts_Params
{
	struct FTooltipWidgetDisplayData                   DataToCopy;                                               // (Parm)
	TArray<struct FInteractionPromptEntryData>         InteractionPromptDataToAdd;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTooltipWidgetDisplayData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.TradeShipComponent.UpdateIndicators
struct UTradeShipComponent_UpdateIndicators_Params
{
};

// Function Astro.TradeShipComponent.ShipLaunchEnded
struct UTradeShipComponent_ShipLaunchEnded_Params
{
};

// Function Astro.TradeShipComponent.ShipLaunched
struct UTradeShipComponent_ShipLaunched_Params
{
};

// Function Astro.TradeShipComponent.SetupIndicatorList
struct UTradeShipComponent_SetupIndicatorList_Params
{
};

// Function Astro.TradeShipComponent.OnRep_ParentDockComponent
struct UTradeShipComponent_OnRep_ParentDockComponent_Params
{
};

// Function Astro.TradeShipComponent.ItemSetOrReleasedFromResourceSlot
struct UTradeShipComponent_ItemSetOrReleasedFromResourceSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TradeShipComponent.IsDocked
struct UTradeShipComponent_IsDocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TradeShipComponent.HandleQueryClickable
struct UTradeShipComponent_HandleQueryClickable_Params
{
	class UClickQuery*                                 Query;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TradeShipComponent.AuthoritySnapToOrbitAndLand
struct UTradeShipComponent_AuthoritySnapToOrbitAndLand_Params
{
};

// Function Astro.TradeShipComponent.AuthoritySetParentDock
struct UTradeShipComponent_AuthoritySetParentDock_Params
{
	class UTradeShipDockComponent*                     dock;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Astro.TradeShipComponent.AuthorityReturnLaunchedShip
struct UTradeShipComponent_AuthorityReturnLaunchedShip_Params
{
};

// Function Astro.TradeShipComponent.AuthorityLaunchShip
struct UTradeShipComponent_AuthorityLaunchShip_Params
{
	class APlayController*                             LaunchingPlayController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TradeShipDockComponent.MulticastShipLaunchedToOrbit
struct UTradeShipDockComponent_MulticastShipLaunchedToOrbit_Params
{
	float                                              LaunchLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TradeShipDockComponent.MulticastShipLaunchedToDock
struct UTradeShipDockComponent_MulticastShipLaunchedToDock_Params
{
	float                                              LaunchLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.TradeShipDockComponent.MulticastShipArrivedAtDock
struct UTradeShipDockComponent_MulticastShipArrivedAtDock_Params
{
};

// Function Astro.TradeShipDockComponent.AcceptsItem
struct UTradeShipDockComponent_AcceptsItem_Params
{
	class APhysicalItem*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.TradeShipDockComponent_ItemDrive.HandleActiveEventChanged
struct UTradeShipDockComponent_ItemDrive_HandleActiveEventChanged_Params
{
};

// Function Astro.UISettings.GetAstroUISettings
struct UUISettings_GetAstroUISettings_Params
{
	class UUISettings*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.UseToDiscoverItem.OnUsed
struct AUseToDiscoverItem_OnUsed_Params
{
};

// Function Astro.UseTriggerComponent.OnTriggerVolumeOverlapped
struct UUseTriggerComponent_OnTriggerVolumeOverlapped_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.UseTriggerComponent.OnCooldownCompleted
struct UUseTriggerComponent_OnCooldownCompleted_Params
{
};

// Function Astro.VehicleDrill.UpdateTerrainDeformationParticles
struct AVehicleDrill_UpdateTerrainDeformationParticles_Params
{
	bool                                               SystemEnabled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HardnessDelta;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.UpdateSlopeIndicator
struct AVehicleDrill_UpdateSlopeIndicator_Params
{
	float                                              SlopeDegree;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.UpdateSedimentGauge
struct AVehicleDrill_UpdateSedimentGauge_Params
{
	float                                              CurrentSedimentAvailalbe;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSedimentCapacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.UpdatePlayerAccentIndex
struct AVehicleDrill_UpdatePlayerAccentIndex_Params
{
	int                                                PlayerAccentIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.UpdateDeformationNormal
struct AVehicleDrill_UpdateDeformationNormal_Params
{
	struct FVector                                     DeformationNormal;                                        // (Parm, IsPlainOldData)
};

// Function Astro.VehicleDrill.ToggleDrillUsageForTunnelBoring
struct AVehicleDrill_ToggleDrillUsageForTunnelBoring_Params
{
};

// Function Astro.VehicleDrill.ServerUpdateToolState
struct AVehicleDrill_ServerUpdateToolState_Params
{
	bool                                               ToolIsActive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVehicleDrillToolMode                              DrillMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.ServerRequestNewMaterialWithTerrainProperties
struct AVehicleDrill_ServerRequestNewMaterialWithTerrainProperties_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTerrainProperties                          TerrainProperties;                                        // (ConstParm, Parm, ReferenceParm)
	class UMaterialInterface*                          CustomMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                creativeModePaintMaterialIndex;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.ResetExcessTerrainCollectionFlag
struct AVehicleDrill_ResetExcessTerrainCollectionFlag_Params
{
};

// Function Astro.VehicleDrill.PlayDrillStartWithInsufficientSoilEffect
struct AVehicleDrill_PlayDrillStartWithInsufficientSoilEffect_Params
{
};

// Function Astro.VehicleDrill.PlayDrillStartWithInsufficientPowerEffect
struct AVehicleDrill_PlayDrillStartWithInsufficientPowerEffect_Params
{
};

// Function Astro.VehicleDrill.OnRep_VehicleDrillSedimentReplicationData
struct AVehicleDrill_OnRep_VehicleDrillSedimentReplicationData_Params
{
};

// Function Astro.VehicleDrill.OnRep_VehicleDrillReplicationData
struct AVehicleDrill_OnRep_VehicleDrillReplicationData_Params
{
};

// Function Astro.VehicleDrill.MulticastPlayDrillStartWithInsufficientSoilEffect
struct AVehicleDrill_MulticastPlayDrillStartWithInsufficientSoilEffect_Params
{
};

// Function Astro.VehicleDrill.MulticastPlayDrillStartWithInsufficientPowerEffect
struct AVehicleDrill_MulticastPlayDrillStartWithInsufficientPowerEffect_Params
{
};

// Function Astro.VehicleDrill.IsToolActive
struct AVehicleDrill_IsToolActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleVehicleUnmanned
struct AVehicleDrill_HandleVehicleUnmanned_Params
{
	class AAstroPlayerController*                      VehicleDriver;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleVehicleManned
struct AVehicleDrill_HandleVehicleManned_Params
{
	class AAstroPlayerController*                      VehicleDriver;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleTunnelBoringDrillBecameActiveOnMyRover
struct AVehicleDrill_HandleTunnelBoringDrillBecameActiveOnMyRover_Params
{
	class AVehicleDrill*                               DrillThatBecameActive;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleTerraianDeformationDensityDeltaReceived
struct AVehicleDrill_HandleTerraianDeformationDensityDeltaReceived_Params
{
	float                                              DensityDelta;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleRemovedFromSlot
struct AVehicleDrill_HandleRemovedFromSlot_Params
{
	bool                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandlePlacedInSlot
struct AVehicleDrill_HandlePlacedInSlot_Params
{
};

// Function Astro.VehicleDrill.HandleDummyDrillRemovedFromSlot
struct AVehicleDrill_HandleDummyDrillRemovedFromSlot_Params
{
	class AVehicleDrill*                               DummyDrillRemoved;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleDestroyedWhileInSlot
struct AVehicleDrill_HandleDestroyedWhileInSlot_Params
{
	class APhysicalItem*                               DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.VehicleDrill.HandleDeactivatedAsExcavator
struct AVehicleDrill_HandleDeactivatedAsExcavator_Params
{
};

// Function Astro.VehicleDrill.HandleActivatedAsExcavator
struct AVehicleDrill_HandleActivatedAsExcavator_Params
{
};

// Function Astro.VehicleDrill.GetSubtractParticleEffect
struct AVehicleDrill_GetSubtractParticleEffect_Params
{
	int                                                HardnessDelta;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.VehicleDrill.DidCollectExcessTerrain
struct AVehicleDrill_DidCollectExcessTerrain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.VehicleSlotComponent.GetConnectedVehicles
struct UVehicleSlotComponent_GetConnectedVehicles_Params
{
	TArray<class UVehicleSlotComponent*>               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Astro.VehicleSlotComponent.ActorVehicleSlotComponent
struct UVehicleSlotComponent_ActorVehicleSlotComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSlotComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Astro.VintageProbeUnlockBehavior.RespondToLockedStateChanged
struct UVintageProbeUnlockBehavior_RespondToLockedStateChanged_Params
{
	struct FAstroDatumRef                              changedLockableComponent;                                 // (Parm)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Astro.WandererPhotoWidget.ClosePhotoWidget
struct UWandererPhotoWidget_ClosePhotoWidget_Params
{
};

// Function Astro.WandererRealityTearComponent.WasActivatedByPlayer
struct UWandererRealityTearComponent_WasActivatedByPlayer_Params
{
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.WandererRealityTearComponent.TakePhoto
struct UWandererRealityTearComponent_TakePhoto_Params
{
	class APlayerController*                           inputPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WandererRealityTearComponent.OnRep_ActivatingPlayer
struct UWandererRealityTearComponent_OnRep_ActivatingPlayer_Params
{
};

// Function Astro.WandererRealityTearComponent.MarkActivated_AuthorityOnly
struct UWandererRealityTearComponent_MarkActivated_AuthorityOnly_Params
{
};

// Function Astro.WandererRealityTearComponent.DisplayPhotoWidget_Multicast
struct UWandererRealityTearComponent_DisplayPhotoWidget_Multicast_Params
{
	class AAstroPlayerController*                      inputPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WandererRealityTearComponent.DisplayPhotoWidget
struct UWandererRealityTearComponent_DisplayPhotoWidget_Params
{
	class APlayerController*                           inputPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.WakePhysics
struct UWheeledChassisComponent_WakePhysics_Params
{
};

// Function Astro.WheeledChassisComponent.UpdateVehicleEffects
struct UWheeledChassisComponent_UpdateVehicleEffects_Params
{
	TArray<class UParticleSystemComponent*>            wheelBlows;                                               // (Parm, ZeroConstructor)
	TArray<struct FName>                               AudioSurfaceTypes;                                        // (Parm, ZeroConstructor)
};

// Function Astro.WheeledChassisComponent.SleepPhysics
struct UWheeledChassisComponent_SleepPhysics_Params
{
	bool                                               sleepAllConnectedVehicles;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.SetThrottle
struct UWheeledChassisComponent_SetThrottle_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.ServerUpdateUprightFlipComplete
struct UWheeledChassisComponent_ServerUpdateUprightFlipComplete_Params
{
	bool                                               bReceivedUprightFlipComplete;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.ServerUpdateIsFlippingUpright
struct UWheeledChassisComponent_ServerUpdateIsFlippingUpright_Params
{
	bool                                               bReceivedIsFlippingUpright;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.ServerUpdateClientMotionState
struct UWheeledChassisComponent_ServerUpdateClientMotionState_Params
{
	struct FRepWheeledChassisMovement                  Movement;                                                 // (Parm)
};

// Function Astro.WheeledChassisComponent.SaveGameSerializeCustom
struct UWheeledChassisComponent_SaveGameSerializeCustom_Params
{
	class UAstroSaveCustomArchiveProxy*                proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.Reset
struct UWheeledChassisComponent_Reset_Params
{
};

// Function Astro.WheeledChassisComponent.OnWheelHit
struct UWheeledChassisComponent_OnWheelHit_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.OnWakePhysics
struct UWheeledChassisComponent_OnWakePhysics_Params
{
};

// Function Astro.WheeledChassisComponent.OnRep_UprightFlipComplete
struct UWheeledChassisComponent_OnRep_UprightFlipComplete_Params
{
};

// Function Astro.WheeledChassisComponent.OnRep_Movement
struct UWheeledChassisComponent_OnRep_Movement_Params
{
};

// Function Astro.WheeledChassisComponent.OnRep_IsFlippingUpright
struct UWheeledChassisComponent_OnRep_IsFlippingUpright_Params
{
};

// Function Astro.WheeledChassisComponent.OnActorHit
struct UWheeledChassisComponent_OnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.AuthorityInitiateUprightFlip
struct UWheeledChassisComponent_AuthorityInitiateUprightFlip_Params
{
	bool                                               initiateFlipOnAllConnectedVehicles;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WheeledChassisComponent.AddWheelCollider
struct UWheeledChassisComponent_AddWheelCollider_Params
{
	class APhysicalItem*                               WheelItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WheelCollider;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWheelInfo                                  WheelInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUseLinearMotors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WindPowerGeneratorComponentContainer.GetWindPowerGeneratorComponent
struct UWindPowerGeneratorComponentContainer_GetWindPowerGeneratorComponent_Params
{
	struct FAstroDatumRef                              WindPowerGeneratorComponentRef;                           // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FWindPowerGeneratorComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.WindPowerGeneratorComponentContainer.FindWindPowerGeneratorComponent
struct UWindPowerGeneratorComponentContainer_FindWindPowerGeneratorComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FWindPowerGeneratorComponent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.WorldGravity.SetComponentTickEnabled
struct UWorldGravity_SetComponentTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WorldGravity.OnComponentSleep
struct UWorldGravity_OnComponentSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.WorldGravity.OnComponentAwake
struct UWorldGravity_OnComponentAwake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro.StreamingPowerDirectionalConnectionComponentContainer.GetStreamingPowerConnectionComponent
struct UStreamingPowerDirectionalConnectionComponentContainer_GetStreamingPowerConnectionComponent_Params
{
	struct FAstroDatumRef                              StreamingPowerConnectionComponentRef;                     // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerDirectionalConnectionComponent ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.StreamingPowerDirectionalConnectionComponentContainer.FindStreamingPowerConnectionComponent
struct UStreamingPowerDirectionalConnectionComponentContainer_FindStreamingPowerConnectionComponent_Params
{
	struct FAstroDatumRef                              EntityRef;                                                // (Parm)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStreamingPowerDirectionalConnectionComponent ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Astro.AstroCharacterPalette.GetMaterialInstanceForSuit
struct UAstroCharacterPalette_GetMaterialInstanceForSuit_Params
{
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowSuitSpecificMaterialOverrides;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro.AstroCharacterPalette.GetMaterialColorsForSuit
struct UAstroCharacterPalette_GetMaterialColorsForSuit_Params
{
	class UAstroCharacterSuit*                         Suit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroSuitColors                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
