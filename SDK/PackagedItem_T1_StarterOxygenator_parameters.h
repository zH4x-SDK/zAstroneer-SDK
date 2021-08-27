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

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.DisableTutorialTooltips
struct APackagedItem_T1_StarterOxygenator_C_DisableTutorialTooltips_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.EnableUnpackPromptTooltip
struct APackagedItem_T1_StarterOxygenator_C_EnableUnpackPromptTooltip_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.EnablePlacePromptTooltip
struct APackagedItem_T1_StarterOxygenator_C_EnablePlacePromptTooltip_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.TutorialCursorOver
struct APackagedItem_T1_StarterOxygenator_C_TutorialCursorOver_Params
{
	bool                                               OverBegin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.TutorialPickedUp
struct APackagedItem_T1_StarterOxygenator_C_TutorialPickedUp_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.TutorialDroppedInWorld
struct APackagedItem_T1_StarterOxygenator_C_TutorialDroppedInWorld_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.TutorialPlacedInSlot
struct APackagedItem_T1_StarterOxygenator_C_TutorialPlacedInSlot_Params
{
	struct FSlotReference                              NewSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.CheckUpdateTutorial
struct APackagedItem_T1_StarterOxygenator_C_CheckUpdateTutorial_Params
{
	bool                                               CanDeploy;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.TestSlottedToTargetSlot
struct APackagedItem_T1_StarterOxygenator_C_TestSlottedToTargetSlot_Params
{
	struct FSlotReference                              NewSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.UpdateShelterHologram
struct APackagedItem_T1_StarterOxygenator_C_UpdateShelterHologram_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.SetupStarterShelterRef
struct APackagedItem_T1_StarterOxygenator_C_SetupStarterShelterRef_Params
{
	class AShelter_T4_Starter_C*                       StarterShelter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.HandlePackageLanded
struct APackagedItem_T1_StarterOxygenator_C_HandlePackageLanded_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.UserConstructionScript
struct APackagedItem_T1_StarterOxygenator_C_UserConstructionScript_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.ReceiveBeginPlay
struct APackagedItem_T1_StarterOxygenator_C_ReceiveBeginPlay_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.HandleItemUnpacked
struct APackagedItem_T1_StarterOxygenator_C_HandleItemUnpacked_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.PickedUpFromWorld
struct APackagedItem_T1_StarterOxygenator_C_PickedUpFromWorld_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.DroppedInWorld
struct APackagedItem_T1_StarterOxygenator_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.ReceiveActorBeginCursorOver
struct APackagedItem_T1_StarterOxygenator_C_ReceiveActorBeginCursorOver_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.ReceiveActorEndCursorOver
struct APackagedItem_T1_StarterOxygenator_C_ReceiveActorEndCursorOver_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.PlacedInSlot
struct APackagedItem_T1_StarterOxygenator_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.Authority_Unpack
struct APackagedItem_T1_StarterOxygenator_C_Authority_Unpack_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.ReleasedFromSlot
struct APackagedItem_T1_StarterOxygenator_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.DoLandingEffectsRPC
struct APackagedItem_T1_StarterOxygenator_C_DoLandingEffectsRPC_Params
{
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.HandleOnDeployReadyChanged
struct APackagedItem_T1_StarterOxygenator_C_HandleOnDeployReadyChanged_Params
{
	bool                                               DeployReady;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C.ExecuteUbergraph_PackagedItem_T1_StarterOxygenator
struct APackagedItem_T1_StarterOxygenator_C_ExecuteUbergraph_PackagedItem_T1_StarterOxygenator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
