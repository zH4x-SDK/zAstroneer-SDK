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

// Function Storage_Medium.Storage_Medium_C.OnRep_REP_ShouldExpand
struct AStorage_Medium_C_OnRep_REP_ShouldExpand_Params
{
};

// Function Storage_Medium.Storage_Medium_C.UpdateUseContext
struct AStorage_Medium_C_UpdateUseContext_Params
{
};

// Function Storage_Medium.Storage_Medium_C.ToggleShouldExpand
struct AStorage_Medium_C_ToggleShouldExpand_Params
{
};

// Function Storage_Medium.Storage_Medium_C.UpdateUseSuppression
struct AStorage_Medium_C_UpdateUseSuppression_Params
{
	bool                                               NewCanExpand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.Set Body Slot
struct AStorage_Medium_C_Set_Body_Slot_Params
{
};

// Function Storage_Medium.Storage_Medium_C.Get Cracked Value Aux
struct AStorage_Medium_C_Get_Cracked_Value_Aux_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.GetBodySlotLegacy
struct AStorage_Medium_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.UserConstructionScript
struct AStorage_Medium_C_UserConstructionScript_Params
{
};

// Function Storage_Medium.Storage_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AStorage_Medium_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Storage_Medium.Storage_Medium_C.ReceiveTick
struct AStorage_Medium_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
struct AStorage_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.PickedUpFromWorld
struct AStorage_Medium_C_PickedUpFromWorld_Params
{
};

// Function Storage_Medium.Storage_Medium_C.DroppedInWorld
struct AStorage_Medium_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.PlacedInSlot
struct AStorage_Medium_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.ReleasedFromSlot
struct AStorage_Medium_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Storage_Medium.Storage_Medium_C.ReceiveHit
struct AStorage_Medium_C_ReceiveHit_Params
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

// Function Storage_Medium.Storage_Medium_C.ReceiveBeginPlay
struct AStorage_Medium_C_ReceiveBeginPlay_Params
{
};

// Function Storage_Medium.Storage_Medium_C.AnimateExpansionToggle
struct AStorage_Medium_C_AnimateExpansionToggle_Params
{
};

// Function Storage_Medium.Storage_Medium_C.ExecuteUbergraph_Storage_Medium
struct AStorage_Medium_C_ExecuteUbergraph_Storage_Medium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
