
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AutoUnlockInput
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuSavedGamesSubsection_C::AutoUnlockInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AutoUnlockInput");

	UGameMenuSavedGamesSubsection_C_AutoUnlockInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ResetSaveGameFetchAndAttemptRefetch
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuSavedGamesSubsection_C::ResetSaveGameFetchAndAttemptRefetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ResetSaveGameFetchAndAttemptRefetch");

	UGameMenuSavedGamesSubsection_C_ResetSaveGameFetchAndAttemptRefetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuSavedGamesSubsection_C::AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries");

	UGameMenuSavedGamesSubsection_C_AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSavedGameEntryUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::OnSavedGameEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSavedGameEntryUsed");

	UGameMenuSavedGamesSubsection_C_OnSavedGameEntryUsed_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFileDeleteConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileToDelete               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuSavedGamesSubsection_C::OnSaveFileDeleteConfirmed(const struct FAstroSaveFileInformation& SaveFileToDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFileDeleteConfirmed");

	UGameMenuSavedGamesSubsection_C_OnSaveFileDeleteConfirmed_Params params;
	params.SaveFileToDelete = SaveFileToDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuSavedGamesSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.Construct");

	UGameMenuSavedGamesSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuSavedGamesSubsection_C::OnSaveFIleDeleteOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteOptionSelected");

	UGameMenuSavedGamesSubsection_C_OnSaveFIleDeleteOptionSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::OnSaveFIleDeleteCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveFIleDeleteCanceled");

	UGameMenuSavedGamesSubsection_C_OnSaveFIleDeleteCanceled_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameFIleOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuSavedGamesSubsection_C::OnRenameFIleOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameFIleOptionSelected");

	UGameMenuSavedGamesSubsection_C_OnRenameFIleOptionSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameSaveFileConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 NewFileName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuSavedGamesSubsection_C::OnRenameSaveFileConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameSaveFileConfirmed");

	UGameMenuSavedGamesSubsection_C_OnRenameSaveFileConfirmed_Params params;
	params.SaveFileInfo = SaveFileInfo;
	params.NewFileName = NewFileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameOrDuplicateSaveFileCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::OnRenameOrDuplicateSaveFileCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnRenameOrDuplicateSaveFileCanceled");

	UGameMenuSavedGamesSubsection_C_OnRenameOrDuplicateSaveFileCanceled_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveRenameComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           renamedFileSaveSuccess         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           oldFileDeleteSuccess           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::OnSaveRenameComplete(bool renamedFileSaveSuccess, bool oldFileDeleteSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnSaveRenameComplete");

	UGameMenuSavedGamesSubsection_C_OnSaveRenameComplete_Params params;
	params.renamedFileSaveSuccess = renamedFileSaveSuccess;
	params.oldFileDeleteSuccess = oldFileDeleteSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFileSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuSavedGamesSubsection_C::OnDuplicateSaveFileSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFileSelected");

	UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFileSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 NewFileName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuSavedGamesSubsection_C::OnDuplicateSaveFIleConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleConfirmed");

	UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFIleConfirmed_Params params;
	params.SaveFileInfo = SaveFileInfo;
	params.NewFileName = NewFileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveGameOperationResult       saveOperationResult            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::OnDuplicateSaveFIleComplete(ESaveGameOperationResult saveOperationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.OnDuplicateSaveFIleComplete");

	UGameMenuSavedGamesSubsection_C_OnDuplicateSaveFIleComplete_Params params;
	params.saveOperationResult = saveOperationResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ExecuteUbergraph_GameMenuSavedGamesSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSavedGamesSubsection_C::ExecuteUbergraph_GameMenuSavedGamesSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C.ExecuteUbergraph_GameMenuSavedGamesSubsection");

	UGameMenuSavedGamesSubsection_C_ExecuteUbergraph_GameMenuSavedGamesSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
