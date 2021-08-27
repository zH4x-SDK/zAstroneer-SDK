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

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AutoUnlockInput
struct UGameMenuSavedGamesSubsection_C_AutoUnlockInput_Params
{
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ResetSaveGameFetchAndAttemptRefetch
struct UGameMenuSavedGamesSubsection_C_ResetSaveGameFetchAndAttemptRefetch_Params
{
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries
struct UGameMenuSavedGamesSubsection_C_AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries_Params
{
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSavedGameEntryUsed
struct UGameMenuSavedGamesSubsection_C_OnSavedGameEntryUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFileDeleteConfirmed
struct UGameMenuSavedGamesSubsection_C_OnSaveFileDeleteConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileToDelete;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.Construct
struct UGameMenuSavedGamesSubsection_C_Construct_Params
{
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteOptionSelected
struct UGameMenuSavedGamesSubsection_C_OnSaveFIleDeleteOptionSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteCanceled
struct UGameMenuSavedGamesSubsection_C_OnSaveFIleDeleteCanceled_Params
{
	class UAstroGameMenuFocusItemWidget*               PopoutOwningFocusItem;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameFIleOptionSelected
struct UGameMenuSavedGamesSubsection_C_OnRenameFIleOptionSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameSaveFileConfirmed
struct UGameMenuSavedGamesSubsection_C_OnRenameSaveFileConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     NewFileName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameOrDuplicateSaveFileCanceled
struct UGameMenuSavedGamesSubsection_C_OnRenameOrDuplicateSaveFileCanceled_Params
{
	class UAstroGameMenuFocusItemWidget*               PopoutOwningFocusItem;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveRenameComplete
struct UGameMenuSavedGamesSubsection_C_OnSaveRenameComplete_Params
{
	bool                                               renamedFileSaveSuccess;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               oldFileDeleteSuccess;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFileSelected
struct UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFileSelected_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleConfirmed
struct UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFIleConfirmed_Params
{
	struct FAstroSaveFileInformation                   SaveFileInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     NewFileName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleComplete
struct UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFIleComplete_Params
{
	ESaveGameOperationResult                           saveOperationResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ExecuteUbergraph_GameMenuSavedGamesSubsection
struct UGameMenuSavedGamesSubsection_C_ExecuteUbergraph_GameMenuSavedGamesSubsection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
