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

// Function Beacon_Small_Item.Beacon_Small_Item_C.DisableBeacon
struct ABeacon_Small_Item_C_DisableBeacon_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_IsSlottedToCrackable
struct ABeacon_Small_Item_C_OnRep_IsSlottedToCrackable_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.UpdateBeaconVisualsLocal
struct ABeacon_Small_Item_C_UpdateBeaconVisualsLocal_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_BeaconColorIndex
struct ABeacon_Small_Item_C_OnRep_BeaconColorIndex_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.CycleBeaconColor
struct ABeacon_Small_Item_C_CycleBeaconColor_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.GetBodySlotLegacy
struct ABeacon_Small_Item_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.UserConstructionScript
struct ABeacon_Small_Item_C_UserConstructionScript_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ABeacon_Small_Item_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.PickedUpFromWorld
struct ABeacon_Small_Item_C_PickedUpFromWorld_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.DroppedInWorld
struct ABeacon_Small_Item_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveBeginPlay
struct ABeacon_Small_Item_C_ReceiveBeginPlay_Params
{
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveEndPlay
struct ABeacon_Small_Item_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.PlacedInSlot
struct ABeacon_Small_Item_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.ReleasedFromSlot
struct ABeacon_Small_Item_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveHit
struct ABeacon_Small_Item_C_ReceiveHit_Params
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

// Function Beacon_Small_Item.Beacon_Small_Item_C.ExecuteUbergraph_Beacon_Small_Item
struct ABeacon_Small_Item_C_ExecuteUbergraph_Beacon_Small_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
