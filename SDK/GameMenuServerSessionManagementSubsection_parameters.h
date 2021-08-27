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

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.UpdateSaveList
struct UGameMenuServerSessionManagementSubsection_C_UpdateSaveList_Params
{
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.LayoutWidget
struct UGameMenuServerSessionManagementSubsection_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.Construct
struct UGameMenuServerSessionManagementSubsection_C_Construct_Params
{
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ForceMenuRefresh
struct UGameMenuServerSessionManagementSubsection_C_ForceMenuRefresh_Params
{
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_3
struct UGameMenuServerSessionManagementSubsection_C_CustomEvent_3_Params
{
	struct FGameList                                   GameList;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSavedGameEntryUsed
struct UGameMenuServerSessionManagementSubsection_C_OnSavedGameEntryUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileDeleteConfirmed
struct UGameMenuServerSessionManagementSubsection_C_OnSaveFileDeleteConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileToDelete;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteOptionSelected
struct UGameMenuServerSessionManagementSubsection_C_OnSaveFIleDeleteOptionSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteCanceled
struct UGameMenuServerSessionManagementSubsection_C_OnSaveFIleDeleteCanceled_Params
{
	class UAstroGameMenuFocusItemWidget*               PopoutOwningFocusItem;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameFIleOptionSelected
struct UGameMenuServerSessionManagementSubsection_C_OnRenameFIleOptionSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameSaveFileConfirmed
struct UGameMenuServerSessionManagementSubsection_C_OnRenameSaveFileConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     NewFileName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameOrDuplicateSaveFileCanceled
struct UGameMenuServerSessionManagementSubsection_C_OnRenameOrDuplicateSaveFileCanceled_Params
{
	class UAstroGameMenuFocusItemWidget*               PopoutOwningFocusItem;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFileSelected
struct UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFileSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleConfirmed
struct UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFIleConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     NewFileName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleComplete
struct UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFIleComplete_Params
{
	bool                                               success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_1
struct UGameMenuServerSessionManagementSubsection_C_CustomEvent_1_Params
{
	bool                                               copySuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removeSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     fromName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     twoName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_2
struct UGameMenuServerSessionManagementSubsection_C_CustomEvent_2_Params
{
	bool                                               success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     saveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileLoadOptionSelected
struct UGameMenuServerSessionManagementSubsection_C_OnSaveFileLoadOptionSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerSessionManagementSubsection_C_BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerSessionManagementSubsection_C_BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveGameConfirm
struct UGameMenuServerSessionManagementSubsection_C_OnSaveGameConfirm_Params
{
	struct FString                                     SaveGameName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_4
struct UGameMenuServerSessionManagementSubsection_C_CustomEvent_4_Params
{
	bool                                               success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     saveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ExecuteUbergraph_GameMenuServerSessionManagementSubsection
struct UGameMenuServerSessionManagementSubsection_C_ExecuteUbergraph_GameMenuServerSessionManagementSubsection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
