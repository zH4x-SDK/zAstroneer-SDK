
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

// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.UpdateSaveList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerSessionManagementSubsection_C::UpdateSaveList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.UpdateSaveList");

	UGameMenuServerSessionManagementSubsection_C_UpdateSaveList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuServerSessionManagementSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.LayoutWidget");

	UGameMenuServerSessionManagementSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuServerSessionManagementSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.Construct");

	UGameMenuServerSessionManagementSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ForceMenuRefresh
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerSessionManagementSubsection_C::ForceMenuRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ForceMenuRefresh");

	UGameMenuServerSessionManagementSubsection_C_ForceMenuRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameList               GameList                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameMenuServerSessionManagementSubsection_C::CustomEvent_3(const struct FGameList& GameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_3");

	UGameMenuServerSessionManagementSubsection_C_CustomEvent_3_Params params;
	params.GameList = GameList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSavedGameEntryUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::OnSavedGameEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSavedGameEntryUsed");

	UGameMenuServerSessionManagementSubsection_C_OnSavedGameEntryUsed_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileDeleteConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileToDelete               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerSessionManagementSubsection_C::OnSaveFileDeleteConfirmed(const struct FAstroSaveFileInformation& SaveFileToDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileDeleteConfirmed");

	UGameMenuServerSessionManagementSubsection_C_OnSaveFileDeleteConfirmed_Params params;
	params.SaveFileToDelete = SaveFileToDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerSessionManagementSubsection_C::OnSaveFIleDeleteOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteOptionSelected");

	UGameMenuServerSessionManagementSubsection_C_OnSaveFIleDeleteOptionSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::OnSaveFIleDeleteCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFIleDeleteCanceled");

	UGameMenuServerSessionManagementSubsection_C_OnSaveFIleDeleteCanceled_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameFIleOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerSessionManagementSubsection_C::OnRenameFIleOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameFIleOptionSelected");

	UGameMenuServerSessionManagementSubsection_C_OnRenameFIleOptionSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameSaveFileConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 NewFileName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::OnRenameSaveFileConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameSaveFileConfirmed");

	UGameMenuServerSessionManagementSubsection_C_OnRenameSaveFileConfirmed_Params params;
	params.SaveFileInfo = SaveFileInfo;
	params.NewFileName = NewFileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameOrDuplicateSaveFileCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::OnRenameOrDuplicateSaveFileCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnRenameOrDuplicateSaveFileCanceled");

	UGameMenuServerSessionManagementSubsection_C_OnRenameOrDuplicateSaveFileCanceled_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFileSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerSessionManagementSubsection_C::OnDuplicateSaveFileSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFileSelected");

	UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFileSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 NewFileName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::OnDuplicateSaveFIleConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleConfirmed");

	UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFIleConfirmed_Params params;
	params.SaveFileInfo = SaveFileInfo;
	params.NewFileName = NewFileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::OnDuplicateSaveFIleComplete(bool success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnDuplicateSaveFIleComplete");

	UGameMenuServerSessionManagementSubsection_C_OnDuplicateSaveFIleComplete_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           copySuccess                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           removeSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 fromName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 twoName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::CustomEvent_1(bool copySuccess, bool removeSuccess, const struct FString& fromName, const struct FString& twoName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_1");

	UGameMenuServerSessionManagementSubsection_C_CustomEvent_1_Params params;
	params.copySuccess = copySuccess;
	params.removeSuccess = removeSuccess;
	params.fromName = fromName;
	params.twoName = twoName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 saveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::CustomEvent_2(bool success, const struct FString& saveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_2");

	UGameMenuServerSessionManagementSubsection_C_CustomEvent_2_Params params;
	params.success = success;
	params.saveName = saveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileLoadOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerSessionManagementSubsection_C::OnSaveFileLoadOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveFileLoadOptionSelected");

	UGameMenuServerSessionManagementSubsection_C_OnSaveFileLoadOptionSelected_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerSessionManagementSubsection_C_BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerSessionManagementSubsection_C_BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveGameConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveGameName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::OnSaveGameConfirm(const struct FString& SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.OnSaveGameConfirm");

	UGameMenuServerSessionManagementSubsection_C_OnSaveGameConfirm_Params params;
	params.SaveGameName = SaveGameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 saveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerSessionManagementSubsection_C::CustomEvent_4(bool success, const struct FString& saveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.CustomEvent_4");

	UGameMenuServerSessionManagementSubsection_C_CustomEvent_4_Params params;
	params.success = success;
	params.saveName = saveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ExecuteUbergraph_GameMenuServerSessionManagementSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerSessionManagementSubsection_C::ExecuteUbergraph_GameMenuServerSessionManagementSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C.ExecuteUbergraph_GameMenuServerSessionManagementSubsection");

	UGameMenuServerSessionManagementSubsection_C_ExecuteUbergraph_GameMenuServerSessionManagementSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
