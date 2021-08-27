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

// Function CheatPlinth_Base.CheatPlinth_Base_C.SpawnCopyOfHologramItem
struct ACheatPlinth_Base_C_SpawnCopyOfHologramItem_Params
{
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.GetBodySlotLegacy
struct ACheatPlinth_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.UpdateSelectedItem
struct ACheatPlinth_Base_C_UpdateSelectedItem_Params
{
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.UserConstructionScript
struct ACheatPlinth_Base_C_UserConstructionScript_Params
{
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveBeginPlay
struct ACheatPlinth_Base_C_ReceiveBeginPlay_Params
{
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_1
struct ACheatPlinth_Base_C_OnClicked_Event_1_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_0_Copy
struct ACheatPlinth_Base_C_OnClicked_Event_0_Copy_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleasedFromSlot_Event_1
struct ACheatPlinth_Base_C_OnReleasedFromSlot_Event_1_Params
{
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleaseItem
struct ACheatPlinth_Base_C_OnReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ACheatPlinth_Base_C_BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.CustomEvent_2
struct ACheatPlinth_Base_C_CustomEvent_2_Params
{
	class UClass*                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.PlacedInSlot
struct ACheatPlinth_Base_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveHit
struct ACheatPlinth_Base_C_ReceiveHit_Params
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

// Function CheatPlinth_Base.CheatPlinth_Base_C.PickedUpFromWorld
struct ACheatPlinth_Base_C_PickedUpFromWorld_Params
{
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.DroppedInWorld
struct ACheatPlinth_Base_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CheatPlinth_Base.CheatPlinth_Base_C.ExecuteUbergraph_CheatPlinth_Base
struct ACheatPlinth_Base_C_ExecuteUbergraph_CheatPlinth_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
