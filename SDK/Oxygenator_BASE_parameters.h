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

// Function Oxygenator_BASE.Oxygenator_BASE_C.GetBodySlotLegacy
struct AOxygenator_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.UserConstructionScript
struct AOxygenator_BASE_C_UserConstructionScript_Params
{
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AOxygenator_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveBeginPlay
struct AOxygenator_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature
struct AOxygenator_BASE_C_BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature_Params
{
	class UOxygenatorComponent*                        oxygenator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.DroppedInWorld
struct AOxygenator_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.PickedUpFromWorld
struct AOxygenator_BASE_C_PickedUpFromWorld_Params
{
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveHit
struct AOxygenator_BASE_C_ReceiveHit_Params
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

// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveEndPlay
struct AOxygenator_BASE_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Oxygenator_BASE.Oxygenator_BASE_C.ExecuteUbergraph_Oxygenator_BASE
struct AOxygenator_BASE_C_ExecuteUbergraph_Oxygenator_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
