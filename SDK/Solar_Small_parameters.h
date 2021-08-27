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

// Function Solar_Small.Solar_Small_C.GetBodySlotLegacy
struct ASolar_Small_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solar_Small.Solar_Small_C.UserConstructionScript
struct ASolar_Small_C_UserConstructionScript_Params
{
};

// Function Solar_Small.Solar_Small_C.ReceiveHit
struct ASolar_Small_C_ReceiveHit_Params
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

// Function Solar_Small.Solar_Small_C.DroppedInWorld
struct ASolar_Small_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Solar_Small.Solar_Small_C.PickedUpFromWorld
struct ASolar_Small_C_PickedUpFromWorld_Params
{
};

// Function Solar_Small.Solar_Small_C.ReceiveBeginPlay
struct ASolar_Small_C_ReceiveBeginPlay_Params
{
};

// Function Solar_Small.Solar_Small_C.ReceiveEndPlay
struct ASolar_Small_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Small.Solar_Small_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ASolar_Small_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Solar_Small.Solar_Small_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ASolar_Small_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Solar_Small.Solar_Small_C.ExecuteUbergraph_Solar_Small
struct ASolar_Small_C_ExecuteUbergraph_Solar_Small_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
