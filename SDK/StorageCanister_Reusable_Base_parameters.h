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

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ValidateContainedItem
struct AStorageCanister_Reusable_Base_C_ValidateContainedItem_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateTankVisuals
struct AStorageCanister_Reusable_Base_C_UpdateTankVisuals_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateItemData
struct AStorageCanister_Reusable_Base_C_UpdateItemData_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateVolatility
struct AStorageCanister_Reusable_Base_C_UpdateVolatility_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UserConstructionScript
struct AStorageCanister_Reusable_Base_C_UserConstructionScript_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveBeginPlay
struct AStorageCanister_Reusable_Base_C_ReceiveBeginPlay_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.SetView
struct AStorageCanister_Reusable_Base_C_SetView_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.DroppedInWorld
struct AStorageCanister_Reusable_Base_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PlacedInSlot
struct AStorageCanister_Reusable_Base_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReleasedFromSlot
struct AStorageCanister_Reusable_Base_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PickedUpFromWorld
struct AStorageCanister_Reusable_Base_C_PickedUpFromWorld_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnIemValueChanged
struct AStorageCanister_Reusable_Base_C_OnIemValueChanged_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnUpdateVisuals
struct AStorageCanister_Reusable_Base_C_OnUpdateVisuals_Params
{
};

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveHit
struct AStorageCanister_Reusable_Base_C_ReceiveHit_Params
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

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ExecuteUbergraph_StorageCanister_Reusable_Base
struct AStorageCanister_Reusable_Base_C_ExecuteUbergraph_StorageCanister_Reusable_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
