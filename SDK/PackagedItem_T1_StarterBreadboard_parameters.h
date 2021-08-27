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

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.CheckOxygenatorTutorialCompleted
struct APackagedItem_T1_StarterBreadboard_C_CheckOxygenatorTutorialCompleted_Params
{
	bool                                               OxygenatorTutorialComplete;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DisableAllTutorialTooltips
struct APackagedItem_T1_StarterBreadboard_C_DisableAllTutorialTooltips_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableUnpackTooltip
struct APackagedItem_T1_StarterBreadboard_C_EnableUnpackTooltip_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableRotatePromptTooltip
struct APackagedItem_T1_StarterBreadboard_C_EnableRotatePromptTooltip_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnablePickUpTooltip
struct APackagedItem_T1_StarterBreadboard_C_EnablePickUpTooltip_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UpdateTutorialPickedUp
struct APackagedItem_T1_StarterBreadboard_C_UpdateTutorialPickedUp_Params
{
	bool                                               PickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandlePackageLanded
struct APackagedItem_T1_StarterBreadboard_C_HandlePackageLanded_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UserConstructionScript
struct APackagedItem_T1_StarterBreadboard_C_UserConstructionScript_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReceiveBeginPlay
struct APackagedItem_T1_StarterBreadboard_C_ReceiveBeginPlay_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleItemUnpacked
struct APackagedItem_T1_StarterBreadboard_C_HandleItemUnpacked_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.Authority_Unpack
struct APackagedItem_T1_StarterBreadboard_C_Authority_Unpack_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.PickedUpFromWorld
struct APackagedItem_T1_StarterBreadboard_C_PickedUpFromWorld_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DroppedInWorld
struct APackagedItem_T1_StarterBreadboard_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DoLandingEffectsRPC
struct APackagedItem_T1_StarterBreadboard_C_DoLandingEffectsRPC_Params
{
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReleasedFromSlot
struct APackagedItem_T1_StarterBreadboard_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.OnStartingItemCreated
struct APackagedItem_T1_StarterBreadboard_C_OnStartingItemCreated_Params
{
	class APhysicalItem*                               StarterItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnDeployReadyChanged
struct APackagedItem_T1_StarterBreadboard_C_HandleOnDeployReadyChanged_Params
{
	bool                                               DeployReady;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnIndicatorVisibleChanged
struct APackagedItem_T1_StarterBreadboard_C_HandleOnIndicatorVisibleChanged_Params
{
	bool                                               IndicatorVisible;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ExecuteUbergraph_PackagedItem_T1_StarterBreadboard
struct APackagedItem_T1_StarterBreadboard_C_ExecuteUbergraph_PackagedItem_T1_StarterBreadboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
