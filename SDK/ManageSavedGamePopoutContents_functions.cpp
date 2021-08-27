
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

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.UpdateTextWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UManageSavedGamePopoutContents_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.UpdateTextWidgets");

	UManageSavedGamePopoutContents_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManageSavedGamePopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.LayoutWidget");

	UManageSavedGamePopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature");

	UManageSavedGamePopoutContents_C_BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature");

	UManageSavedGamePopoutContents_C_BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature");

	UManageSavedGamePopoutContents_C_BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveGameOperationResult       saveOperationResult            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::CustomEvent_1(ESaveGameOperationResult saveOperationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.CustomEvent_1");

	UManageSavedGamePopoutContents_C_CustomEvent_1_Params params;
	params.saveOperationResult = saveOperationResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DoSaveFileLoad
// (BlueprintCallable, BlueprintEvent)

void UManageSavedGamePopoutContents_C::DoSaveFileLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DoSaveFileLoad");

	UManageSavedGamePopoutContents_C_DoSaveFileLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature");

	UManageSavedGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UManageSavedGamePopoutContents_C_BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.ExecuteUbergraph_ManageSavedGamePopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageSavedGamePopoutContents_C::ExecuteUbergraph_ManageSavedGamePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.ExecuteUbergraph_ManageSavedGamePopoutContents");

	UManageSavedGamePopoutContents_C_ExecuteUbergraph_ManageSavedGamePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DuplicateSaveFileSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageSavedGamePopoutContents_C::DuplicateSaveFileSelected__DelegateSignature(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DuplicateSaveFileSelected__DelegateSignature");

	UManageSavedGamePopoutContents_C_DuplicateSaveFileSelected__DelegateSignature_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.RenameSaveFileSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageSavedGamePopoutContents_C::RenameSaveFileSelected__DelegateSignature(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.RenameSaveFileSelected__DelegateSignature");

	UManageSavedGamePopoutContents_C_RenameSaveFileSelected__DelegateSignature_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DeleteSaveFileSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation SelectedSaveFile               (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageSavedGamePopoutContents_C::DeleteSaveFileSelected__DelegateSignature(const struct FAstroSaveFileInformation& SelectedSaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DeleteSaveFileSelected__DelegateSignature");

	UManageSavedGamePopoutContents_C_DeleteSaveFileSelected__DelegateSignature_Params params;
	params.SelectedSaveFile = SelectedSaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
