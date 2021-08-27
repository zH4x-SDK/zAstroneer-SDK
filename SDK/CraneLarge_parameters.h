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

// Function CraneLarge.CraneLarge_C.UpdateToolOwner
struct ACraneLarge_C_UpdateToolOwner_Params
{
};

// Function CraneLarge.CraneLarge_C.UpdateAudio
struct ACraneLarge_C_UpdateAudio_Params
{
};

// Function CraneLarge.CraneLarge_C.Move Head By Transform
struct ACraneLarge_C_Move_Head_By_Transform_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.Update Head
struct ACraneLarge_C_Update_Head_Params
{
};

// Function CraneLarge.CraneLarge_C.Move Head
struct ACraneLarge_C_Move_Head_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.GetBodySlotLegacy
struct ACraneLarge_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.UserConstructionScript
struct ACraneLarge_C_UserConstructionScript_Params
{
};

// Function CraneLarge.CraneLarge_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ACraneLarge_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CraneLarge.CraneLarge_C.ReceiveTick
struct ACraneLarge_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature
struct ACraneLarge_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature_Params
{
	class APlayController*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  toolHit;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FClickResult                                ClickResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               startedInteraction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               usingTool;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               justActivated;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature
struct ACraneLarge_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.ReceiveBeginPlay
struct ACraneLarge_C_ReceiveBeginPlay_Params
{
};

// Function CraneLarge.CraneLarge_C.ReceiveEndPlay
struct ACraneLarge_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature
struct ACraneLarge_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.OnSetItem
struct ACraneLarge_C_OnSetItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.OnReleaseItem
struct ACraneLarge_C_OnReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.DroppedInWorld
struct ACraneLarge_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CraneLarge.CraneLarge_C.PickedUpFromWorld
struct ACraneLarge_C_PickedUpFromWorld_Params
{
};

// Function CraneLarge.CraneLarge_C.ReceiveHit
struct ACraneLarge_C_ReceiveHit_Params
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

// Function CraneLarge.CraneLarge_C.BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct ACraneLarge_C_BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function CraneLarge.CraneLarge_C.ExecuteUbergraph_CraneLarge
struct ACraneLarge_C_ExecuteUbergraph_CraneLarge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
