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

// Function Augment_Base.Augment_Base_C.PlayAugmentDetachSound
struct AAugment_Base_C_PlayAugmentDetachSound_Params
{
};

// Function Augment_Base.Augment_Base_C.PlayAugmentAttachSound
struct AAugment_Base_C_PlayAugmentAttachSound_Params
{
};

// Function Augment_Base.Augment_Base_C.GetBodySlotLegacy
struct AAugment_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Augment_Base.Augment_Base_C.UserConstructionScript
struct AAugment_Base_C_UserConstructionScript_Params
{
};

// Function Augment_Base.Augment_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AAugment_Base_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Augment_Base.Augment_Base_C.ReceiveBeginPlay
struct AAugment_Base_C_ReceiveBeginPlay_Params
{
};

// Function Augment_Base.Augment_Base_C.ReceiveHit
struct AAugment_Base_C_ReceiveHit_Params
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

// Function Augment_Base.Augment_Base_C.PickedUpFromWorld
struct AAugment_Base_C_PickedUpFromWorld_Params
{
};

// Function Augment_Base.Augment_Base_C.DroppedInWorld
struct AAugment_Base_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
struct AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params
{
};

// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature
struct AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature_Params
{
};

// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
struct AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params
{
};

// Function Augment_Base.Augment_Base_C.ExecuteUbergraph_Augment_Base
struct AAugment_Base_C_ExecuteUbergraph_Augment_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
