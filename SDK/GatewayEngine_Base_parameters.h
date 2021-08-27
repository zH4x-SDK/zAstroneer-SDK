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

// Function GatewayEngine_Base.GatewayEngine_Base_C.InitializeLocalPlayerInProximity
struct AGatewayEngine_Base_C_InitializeLocalPlayerInProximity_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.PlayAmbience
struct AGatewayEngine_Base_C_PlayAmbience_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.OnRep_PuzzleSolved
struct AGatewayEngine_Base_C_OnRep_PuzzleSolved_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.DisableInteriorPlayerColliders
struct AGatewayEngine_Base_C_DisableInteriorPlayerColliders_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.OnRep_REP_ShellEnabled
struct AGatewayEngine_Base_C_OnRep_REP_ShellEnabled_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AwardPlanetEngineAchievement
struct AGatewayEngine_Base_C_AwardPlanetEngineAchievement_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.UpdateShellCollision
struct AGatewayEngine_Base_C_UpdateShellCollision_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Force Destroy Shell
struct AGatewayEngine_Base_C_Force_Destroy_Shell_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AuthorityUpdateShellEnabled
struct AGatewayEngine_Base_C_AuthorityUpdateShellEnabled_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Remove Key Plinth
struct AGatewayEngine_Base_C_Remove_Key_Plinth_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Setup Dynamic Materials
struct AGatewayEngine_Base_C_Setup_Dynamic_Materials_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Validate Key Variant
struct AGatewayEngine_Base_C_Validate_Key_Variant_Params
{
	class APhysicalItem*                               Physical_Item;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCorrectKey;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Authority Setup Slot Delegates
struct AGatewayEngine_Base_C_Authority_Setup_Slot_Delegates_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.UserConstructionScript
struct AGatewayEngine_Base_C_UserConstructionScript_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AcceptKeySequence__FinishedFunc
struct AGatewayEngine_Base_C_AcceptKeySequence__FinishedFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AcceptKeySequence__UpdateFunc
struct AGatewayEngine_Base_C_AcceptKeySequence__UpdateFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AcceptKeySequence__TriggerKeyBuildOut__EventFunc
struct AGatewayEngine_Base_C_AcceptKeySequence__TriggerKeyBuildOut__EventFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Drain Item Fullness Timeline__FinishedFunc
struct AGatewayEngine_Base_C_Drain_Item_Fullness_Timeline__FinishedFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Drain Item Fullness Timeline__UpdateFunc
struct AGatewayEngine_Base_C_Drain_Item_Fullness_Timeline__UpdateFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Rotate Diamonds__FinishedFunc
struct AGatewayEngine_Base_C_Rotate_Diamonds__FinishedFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Rotate Diamonds__UpdateFunc
struct AGatewayEngine_Base_C_Rotate_Diamonds__UpdateFunc_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.ReceiveBeginPlay
struct AGatewayEngine_Base_C_ReceiveBeginPlay_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.AuthorityEvaluateGatewayKeyConversion
struct AGatewayEngine_Base_C_AuthorityEvaluateGatewayKeyConversion_Params
{
	class APhysicalItem*                               PhysicalItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Consume Item
struct AGatewayEngine_Base_C_Consume_Item_Params
{
	class APhysicalItem*                               Physical_Item;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Attached_Slot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__InteriorPlayerEnteredCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__InteriorPlayerEnteredCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__InteriorPlayerExitedCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__InteriorPlayerExitedCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.ReceiveTick
struct AGatewayEngine_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.Key Build-in Finished
struct AGatewayEngine_Base_C_Key_Build_in_Finished_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.MulticastPlayKeyStartPrint
struct AGatewayEngine_Base_C_MulticastPlayKeyStartPrint_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.MulticastPlayKeyFinishPrint
struct AGatewayEngine_Base_C_MulticastPlayKeyFinishPrint_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.PlayPuzzleSolvedTimeline
struct AGatewayEngine_Base_C_PlayPuzzleSolvedTimeline_Params
{
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__Free Oxygen Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__Free_Oxygen_Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.BndEvt__Free Oxygen Collider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AGatewayEngine_Base_C_BndEvt__Free_Oxygen_Collider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayEngine_Base.GatewayEngine_Base_C.ExecuteUbergraph_GatewayEngine_Base
struct AGatewayEngine_Base_C_ExecuteUbergraph_GatewayEngine_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
