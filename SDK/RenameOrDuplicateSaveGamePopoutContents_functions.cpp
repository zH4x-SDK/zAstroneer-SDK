
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

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URenameOrDuplicateSaveGamePopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.LayoutWidget");

	URenameOrDuplicateSaveGamePopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ValidateEnteredSaveName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 saveName                       (Parm, OutParm, ZeroConstructor)

void URenameOrDuplicateSaveGamePopoutContents_C::ValidateEnteredSaveName(bool* IsValid, struct FString* saveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ValidateEnteredSaveName");

	URenameOrDuplicateSaveGamePopoutContents_C_ValidateEnteredSaveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (saveName != nullptr)
		*saveName = params.saveName;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenameOrDuplicateSaveGamePopoutContents_C::BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature");

	URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenameOrDuplicateSaveGamePopoutContents_C::BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature");

	URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.HandleNavigationBackRequest
// (Event, Public, BlueprintEvent)

void URenameOrDuplicateSaveGamePopoutContents_C::HandleNavigationBackRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.HandleNavigationBackRequest");

	URenameOrDuplicateSaveGamePopoutContents_C_HandleNavigationBackRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void URenameOrDuplicateSaveGamePopoutContents_C::BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature");

	URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenameOrDuplicateSaveGamePopoutContents_C::ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents");

	URenameOrDuplicateSaveGamePopoutContents_C_ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenameOrDuplicateSaveGamePopoutContents_C::OnRenameSaveCanceled__DelegateSignature(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveCanceled__DelegateSignature");

	URenameOrDuplicateSaveGamePopoutContents_C_OnRenameSaveCanceled__DelegateSignature_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SaveFileInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 NewSaveFileDescriptiveName     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void URenameOrDuplicateSaveGamePopoutContents_C::OnRenameSaveConfirmed__DelegateSignature(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewSaveFileDescriptiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveConfirmed__DelegateSignature");

	URenameOrDuplicateSaveGamePopoutContents_C_OnRenameSaveConfirmed__DelegateSignature_Params params;
	params.SaveFileInfo = SaveFileInfo;
	params.NewSaveFileDescriptiveName = NewSaveFileDescriptiveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
