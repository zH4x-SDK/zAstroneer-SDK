
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

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComboSelectionPopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LayoutWidget");

	UComboSelectionPopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.SetupComboOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UComboSelectionPopoutContents_C::SetupComboOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.SetupComboOptions");

	UComboSelectionPopoutContents_C_SetupComboOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UComboSelectionPopoutContents_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.Construct");

	UComboSelectionPopoutContents_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::HandleComboSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionMade");

	UComboSelectionPopoutContents_C_HandleComboSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionFocusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::HandleComboSelectionFocusChanged(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusedItem, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionFocusChanged");

	UComboSelectionPopoutContents_C_HandleComboSelectionFocusChanged_Params params;
	params.IsFocused = IsFocused;
	params.FocusedItem = FocusedItem;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleNavigationBackRequest
// (Event, Public, BlueprintEvent)

void UComboSelectionPopoutContents_C::HandleNavigationBackRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleNavigationBackRequest");

	UComboSelectionPopoutContents_C_HandleNavigationBackRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleWrapperFocusIndexChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::HandleWrapperFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleWrapperFocusIndexChanged");

	UComboSelectionPopoutContents_C_HandleWrapperFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleLockedComboSelectionAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::HandleLockedComboSelectionAttempted(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleLockedComboSelectionAttempted");

	UComboSelectionPopoutContents_C_HandleLockedComboSelectionAttempted_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ExecuteUbergraph_ComboSelectionPopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::ExecuteUbergraph_ComboSelectionPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ExecuteUbergraph_ComboSelectionPopoutContents");

	UComboSelectionPopoutContents_C_ExecuteUbergraph_ComboSelectionPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LockedComboSelectionAttempted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::LockedComboSelectionAttempted__DelegateSignature(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LockedComboSelectionAttempted__DelegateSignature");

	UComboSelectionPopoutContents_C_LockedComboSelectionAttempted__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.NavigatedAwayFrom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UComboSelectionPopoutContents_C::NavigatedAwayFrom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.NavigatedAwayFrom__DelegateSignature");

	UComboSelectionPopoutContents_C_NavigatedAwayFrom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionFocusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::ComboSelectionFocusChanged__DelegateSignature(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionFocusChanged__DelegateSignature");

	UComboSelectionPopoutContents_C_ComboSelectionFocusChanged__DelegateSignature_Params params;
	params.IsFocused = IsFocused;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboSelectionPopoutContents_C::ComboSelectionMade__DelegateSignature(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionMade__DelegateSignature");

	UComboSelectionPopoutContents_C_ComboSelectionMade__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
