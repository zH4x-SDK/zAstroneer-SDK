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

// Function Wind_Medium.Wind_Medium_C.GetBodySlotLegacy
struct AWind_Medium_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind_Medium.Wind_Medium_C.UserConstructionScript
struct AWind_Medium_C_UserConstructionScript_Params
{
};

// Function Wind_Medium.Wind_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature
struct AWind_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind_Medium.Wind_Medium_C.PickedUpFromWorld
struct AWind_Medium_C_PickedUpFromWorld_Params
{
};

// Function Wind_Medium.Wind_Medium_C.DroppedInWorld
struct AWind_Medium_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Wind_Medium.Wind_Medium_C.ReceiveBeginPlay
struct AWind_Medium_C_ReceiveBeginPlay_Params
{
};

// Function Wind_Medium.Wind_Medium_C.ReceiveEndPlay
struct AWind_Medium_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind_Medium.Wind_Medium_C.ReceiveHit
struct AWind_Medium_C_ReceiveHit_Params
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

// Function Wind_Medium.Wind_Medium_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature
struct AWind_Medium_C_BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature_Params
{
	struct FVector                                     WindNormal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              WindSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind_Medium.Wind_Medium_C.ExecuteUbergraph_Wind_Medium
struct AWind_Medium_C_ExecuteUbergraph_Wind_Medium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
