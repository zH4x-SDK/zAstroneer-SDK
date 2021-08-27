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

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.DoesControlledVehiclePreventRespawn
struct UGameMenuQuitGameSubmenu_C_DoesControlledVehiclePreventRespawn_Params
{
	bool                                               PreventsRespawn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitWithFailedSaveWarningPrompt
struct UGameMenuQuitGameSubmenu_C_GenerateQuitWithFailedSaveWarningPrompt_Params
{
	class UGameMenuEntryDoubleText_C*                  OwningWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnToTitleScreen;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitToMainMenuPrompt
struct UGameMenuQuitGameSubmenu_C_GenerateQuitToMainMenuPrompt_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttemptToSave;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitGamePrompt
struct UGameMenuQuitGameSubmenu_C_GenerateQuitGamePrompt_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttemptToSave;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.LayoutWidget
struct UGameMenuQuitGameSubmenu_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature
struct UGameMenuQuitGameSubmenu_C_BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature
struct UGameMenuQuitGameSubmenu_C_BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuQuitGameSubmenu_C_BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuQuitGameSubmenu_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenu
struct UGameMenuQuitGameSubmenu_C_ForceQuitGameToMainMenu_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGame
struct UGameMenuQuitGameSubmenu_C_ForceQuitGame_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitToMainMenu
struct UGameMenuQuitGameSubmenu_C_TryToSaveAndQuitToMainMenu_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitGame
struct UGameMenuQuitGameSubmenu_C_TryToSaveAndQuitGame_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitToMenuFailed
struct UGameMenuQuitGameSubmenu_C_SaveAndQuitToMenuFailed_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitFailed
struct UGameMenuQuitGameSubmenu_C_SaveAndQuitFailed_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenuWithSave
struct UGameMenuQuitGameSubmenu_C_ForceQuitGameToMainMenuWithSave_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameWithSave
struct UGameMenuQuitGameSubmenu_C_ForceQuitGameWithSave_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuQuitGameSubmenu_C_BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.OnInitialRespawnConfirmationMade
struct UGameMenuQuitGameSubmenu_C_OnInitialRespawnConfirmationMade_Params
{
};

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ExecuteUbergraph_GameMenuQuitGameSubmenu
struct UGameMenuQuitGameSubmenu_C_ExecuteUbergraph_GameMenuQuitGameSubmenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
