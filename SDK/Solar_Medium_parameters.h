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

// Function Solar_Medium.Solar_Medium_C.GetBodySlotLegacy
struct ASolar_Medium_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.Update Power Bar
struct ASolar_Medium_C_Update_Power_Bar_Params
{
	bool                                               IsPowered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.UserConstructionScript
struct ASolar_Medium_C_UserConstructionScript_Params
{
};

// Function Solar_Medium.Solar_Medium_C.PickedUpFromWorld
struct ASolar_Medium_C_PickedUpFromWorld_Params
{
};

// Function Solar_Medium.Solar_Medium_C.ReleasedFromSlot
struct ASolar_Medium_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.DroppedInWorld
struct ASolar_Medium_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.PlacedInSlot
struct ASolar_Medium_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.On Begin Folding
struct ASolar_Medium_C_On_Begin_Folding_Params
{
};

// Function Solar_Medium.Solar_Medium_C.On Begin Unfolding
struct ASolar_Medium_C_On_Begin_Unfolding_Params
{
};

// Function Solar_Medium.Solar_Medium_C.ReceiveBeginPlay
struct ASolar_Medium_C_ReceiveBeginPlay_Params
{
};

// Function Solar_Medium.Solar_Medium_C.ReceiveEndPlay
struct ASolar_Medium_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Medium.Solar_Medium_C.ReceiveHit
struct ASolar_Medium_C_ReceiveHit_Params
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

// Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ASolar_Medium_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ASolar_Medium_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Solar_Medium.Solar_Medium_C.ExecuteUbergraph_Solar_Medium
struct ASolar_Medium_C_ExecuteUbergraph_Solar_Medium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
