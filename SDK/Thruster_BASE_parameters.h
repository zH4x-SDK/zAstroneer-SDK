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

// Function Thruster_BASE.Thruster_BASE_C.Set Use Context
struct AThruster_BASE_C_Set_Use_Context_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.Set Initial Use Context
struct AThruster_BASE_C_Set_Initial_Use_Context_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.OnRep_REP_FX_Override
struct AThruster_BASE_C_OnRep_REP_FX_Override_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.SetThrusterControlOverride
struct AThruster_BASE_C_SetThrusterControlOverride_Params
{
	bool                                               Override;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel_Internal
struct AThruster_BASE_C_GetAvailableFuel_Internal_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel
struct AThruster_BASE_C_GetAvailableFuel_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.CheckFuelStateChanged
struct AThruster_BASE_C_CheckFuelStateChanged_Params
{
	bool                                               HasFuelCurrent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount_Internal
struct AThruster_BASE_C_TakeFuelAmount_Internal_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount
struct AThruster_BASE_C_TakeFuelAmount_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetThrusterParticles
struct AThruster_BASE_C_GetThrusterParticles_Params
{
	TArray<class UParticleSystemComponent*>            NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Thruster_BASE.Thruster_BASE_C.Take Fuel_Internal
struct AThruster_BASE_C_Take_Fuel_Internal_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetHasFuel_Internal
struct AThruster_BASE_C_GetHasFuel_Internal_Params
{
	bool                                               HasFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetHasFuel
struct AThruster_BASE_C_GetHasFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.GetOffsetFromOwner
struct AThruster_BASE_C_GetOffsetFromOwner_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.UpdateThrusterMotion
struct AThruster_BASE_C_UpdateThrusterMotion_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.UpdateFuelState
struct AThruster_BASE_C_UpdateFuelState_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.GetBodySlotLegacy
struct AThruster_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.Take Fuel
struct AThruster_BASE_C_Take_Fuel_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Taken;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.Set FX
struct AThruster_BASE_C_Set_FX_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.UserConstructionScript
struct AThruster_BASE_C_UserConstructionScript_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AThruster_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Thruster_BASE.Thruster_BASE_C.ReceiveBeginPlay
struct AThruster_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.ReceiveTick
struct AThruster_BASE_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.DroppedInWorld
struct AThruster_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.PickedUpFromWorld
struct AThruster_BASE_C_PickedUpFromWorld_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.ReceiveDestroyed
struct AThruster_BASE_C_ReceiveDestroyed_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature
struct AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature
struct AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature
struct AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature_Params
{
};

// Function Thruster_BASE.Thruster_BASE_C.PlacedInSlot
struct AThruster_BASE_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.ReleasedFromSlot
struct AThruster_BASE_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.ReceiveHit
struct AThruster_BASE_C_ReceiveHit_Params
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

// Function Thruster_BASE.Thruster_BASE_C.Push Use Suppression
struct AThruster_BASE_C_Push_Use_Suppression_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.Pop Use Suppression
struct AThruster_BASE_C_Pop_Use_Suppression_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.ExecuteUbergraph_Thruster_BASE
struct AThruster_BASE_C_ExecuteUbergraph_Thruster_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.OnFuelRestored__DelegateSignature
struct AThruster_BASE_C_OnFuelRestored__DelegateSignature_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thruster_BASE.Thruster_BASE_C.OnFuelDrained__DelegateSignature
struct AThruster_BASE_C_OnFuelDrained__DelegateSignature_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
