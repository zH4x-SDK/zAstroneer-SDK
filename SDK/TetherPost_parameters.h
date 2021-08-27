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

// Function TetherPost.TetherPost_C.OnRep_REP_DecorationOptionIndex
struct ATetherPost_C_OnRep_REP_DecorationOptionIndex_Params
{
};

// Function TetherPost.TetherPost_C.InitializeDecoration
struct ATetherPost_C_InitializeDecoration_Params
{
	TArray<struct FString>                             ActiveEventNames;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TetherPost.TetherPost_C.UpdateDecorationMaterialAndLightColor
struct ATetherPost_C_UpdateDecorationMaterialAndLightColor_Params
{
};

// Function TetherPost.TetherPost_C.SetTetherDecorationActive
struct ATetherPost_C_SetTetherDecorationActive_Params
{
	bool                                               IsDecorationActive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectNewDecorationOption;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTetherDecorationConfig*                     DecorationConfig;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.Set Oxygen
struct ATetherPost_C_Set_Oxygen_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.OnRep_REP Oxygen
struct ATetherPost_C_OnRep_REP_Oxygen_Params
{
};

// Function TetherPost.TetherPost_C.GetBodySlotLegacy
struct ATetherPost_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.UserConstructionScript
struct ATetherPost_C_UserConstructionScript_Params
{
};

// Function TetherPost.TetherPost_C.DroppedInWorld
struct ATetherPost_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.PickedUpFromWorld
struct ATetherPost_C_PickedUpFromWorld_Params
{
};

// Function TetherPost.TetherPost_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature
struct ATetherPost_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.StartInWorld
struct ATetherPost_C_StartInWorld_Params
{
};

// Function TetherPost.TetherPost_C.ReceiveBeginPlay
struct ATetherPost_C_ReceiveBeginPlay_Params
{
};

// Function TetherPost.TetherPost_C.ReceiveHit
struct ATetherPost_C_ReceiveHit_Params
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

// Function TetherPost.TetherPost_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
struct ATetherPost_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature
struct ATetherPost_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bIsEventActive;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature
struct ATetherPost_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature_Params
{
	TArray<struct FString>                             activeEventsOfInterest;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TetherPost.TetherPost_C.ExecuteUbergraph_TetherPost
struct ATetherPost_C_ExecuteUbergraph_TetherPost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
