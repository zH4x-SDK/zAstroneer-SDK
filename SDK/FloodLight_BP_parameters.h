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

// Function FloodLight_BP.FloodLight_BP_C.OnRep_REP_LightIsOn
struct AFloodLight_BP_C_OnRep_REP_LightIsOn_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.UpdateUseContext
struct AFloodLight_BP_C_UpdateUseContext_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.TurnLightOff
struct AFloodLight_BP_C_TurnLightOff_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.TurnLightOn
struct AFloodLight_BP_C_TurnLightOn_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.GetBodySlotLegacy
struct AFloodLight_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.UserConstructionScript
struct AFloodLight_BP_C_UserConstructionScript_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AFloodLight_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FloodLight_BP.FloodLight_BP_C.ReceiveTick
struct AFloodLight_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.ReceiveBeginPlay
struct AFloodLight_BP_C_ReceiveBeginPlay_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.ReceiveEndPlay
struct AFloodLight_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.PlacedInSlot
struct AFloodLight_BP_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.ReleasedFromSlot
struct AFloodLight_BP_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.OnAvailablePowerChanged
struct AFloodLight_BP_C_OnAvailablePowerChanged_Params
{
	bool                                               HasAvailablePower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.DroppedInWorld
struct AFloodLight_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FloodLight_BP.FloodLight_BP_C.PickedUpFromWorld
struct AFloodLight_BP_C_PickedUpFromWorld_Params
{
};

// Function FloodLight_BP.FloodLight_BP_C.ReceiveHit
struct AFloodLight_BP_C_ReceiveHit_Params
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

// Function FloodLight_BP.FloodLight_BP_C.ExecuteUbergraph_FloodLight_BP
struct AFloodLight_BP_C_ExecuteUbergraph_FloodLight_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
