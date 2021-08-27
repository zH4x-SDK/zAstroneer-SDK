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

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateStorageSlotRefs
struct ABackpackRail_Dummy_Gameplay_C_UpdateStorageSlotRefs_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckNeedExtenderTutorial
struct ABackpackRail_Dummy_Gameplay_C_CheckNeedExtenderTutorial_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateExtenderTutorial
struct ABackpackRail_Dummy_Gameplay_C_SERVER_UpdateExtenderTutorial_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SetBackpackLightVisibility
struct ABackpackRail_Dummy_Gameplay_C_SetBackpackLightVisibility_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckShowAuxSlotPrompts
struct ABackpackRail_Dummy_Gameplay_C_CheckShowAuxSlotPrompts_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetAstro
struct ABackpackRail_Dummy_Gameplay_C_GetAstro_Params
{
	class ADesignAstro_C*                              Astro;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckForTutorialResources
struct ABackpackRail_Dummy_Gameplay_C_CheckForTutorialResources_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateTutorialPrinterList
struct ABackpackRail_Dummy_Gameplay_C_UpdateTutorialPrinterList_Params
{
	bool                                               CompleteCurrentTutorialStep;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckSetupTutorialPrinterList
struct ABackpackRail_Dummy_Gameplay_C_CheckSetupTutorialPrinterList_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetSedimentHoseRef
struct ABackpackRail_Dummy_Gameplay_C_GetSedimentHoseRef_Params
{
	bool                                               SuccesfullyRetrieved;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateSedimentHose
struct ABackpackRail_Dummy_Gameplay_C_SERVER_UpdateSedimentHose_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetBackpackMesh
struct ABackpackRail_Dummy_Gameplay_C_GetBackpackMesh_Params
{
	class UMeshComponent*                              BackpackMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ApplyPlayerColor
struct ABackpackRail_Dummy_Gameplay_C_ApplyPlayerColor_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetDeformToolRef
struct ABackpackRail_Dummy_Gameplay_C_GetDeformToolRef_Params
{
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ShowAllItems
struct ABackpackRail_Dummy_Gameplay_C_ShowAllItems_Params
{
	bool                                               show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Set Control Slot
struct ABackpackRail_Dummy_Gameplay_C_Set_Control_Slot_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Finish Print
struct ABackpackRail_Dummy_Gameplay_C_Finish_Print_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Printer View
struct ABackpackRail_Dummy_Gameplay_C_CLIENT_Printer_View_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Bind Printer
struct ABackpackRail_Dummy_Gameplay_C_SERVER_Bind_Printer_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Get Character
struct ABackpackRail_Dummy_Gameplay_C_Get_Character_Params
{
	class ADesignAstro_C*                              Astro;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Is Powered
struct ABackpackRail_Dummy_Gameplay_C_Is_Powered_Params
{
	bool                                               Powered;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Set Indicator
struct ABackpackRail_Dummy_Gameplay_C_CLIENT_Set_Indicator_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Closed
struct ABackpackRail_Dummy_Gameplay_C_Backpack_Closed_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Cracked
struct ABackpackRail_Dummy_Gameplay_C_Backpack_Cracked_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Prereq
struct ABackpackRail_Dummy_Gameplay_C_Prereq_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Do Resources
struct ABackpackRail_Dummy_Gameplay_C_CLIENT_Do_Resources_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Do Resources
struct ABackpackRail_Dummy_Gameplay_C_SERVER_Do_Resources_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CreateDefaultResources
struct ABackpackRail_Dummy_Gameplay_C_CreateDefaultResources_Params
{
};

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UserConstructionScript
struct ABackpackRail_Dummy_Gameplay_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
