
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

// Function GenericSelectorUI.GenericSelectorUI_C.UpdateStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewDisplayText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenericSelectorUI_C::UpdateStatusText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.UpdateStatusText");

	AGenericSelectorUI_C_UpdateStatusText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.ShowButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ActivationButtonVisible        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectorButtonsVisible         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorUI_C::ShowButtons(bool ActivationButtonVisible, bool SelectorButtonsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.ShowButtons");

	AGenericSelectorUI_C_ShowButtons_Params params;
	params.ActivationButtonVisible = ActivationButtonVisible;
	params.SelectorButtonsVisible = SelectorButtonsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.Set UI View
// (Protected, BlueprintCallable, BlueprintEvent)

void AGenericSelectorUI_C::Set_UI_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.Set UI View");

	AGenericSelectorUI_C_Set_UI_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.UserConstructionScript");

	AGenericSelectorUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Left Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void AGenericSelectorUI_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Left Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature");

	AGenericSelectorUI_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Right Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void AGenericSelectorUI_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Right Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature");

	AGenericSelectorUI_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__New Print Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void AGenericSelectorUI_C::BndEvt__New_Print_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__New Print Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature");

	AGenericSelectorUI_C_BndEvt__New_Print_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.OnShowButtons
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowActivationButton           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowSelectorButtons            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorUI_C::OnShowButtons(bool ShowActivationButton, bool ShowSelectorButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.OnShowButtons");

	AGenericSelectorUI_C_OnShowButtons_Params params;
	params.ShowActivationButton = ShowActivationButton;
	params.ShowSelectorButtons = ShowSelectorButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGenericSelectorUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.ReceiveBeginPlay");

	AGenericSelectorUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.ExecuteUbergraph_GenericSelectorUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorUI_C::ExecuteUbergraph_GenericSelectorUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.ExecuteUbergraph_GenericSelectorUI");

	AGenericSelectorUI_C_ExecuteUbergraph_GenericSelectorUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.OnDecrementSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorUI_C::OnDecrementSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.OnDecrementSelection__DelegateSignature");

	AGenericSelectorUI_C_OnDecrementSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.OnActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorUI_C::OnActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.OnActivated__DelegateSignature");

	AGenericSelectorUI_C_OnActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorUI.GenericSelectorUI_C.OnIncrementSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorUI_C::OnIncrementSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorUI.GenericSelectorUI_C.OnIncrementSelection__DelegateSignature");

	AGenericSelectorUI_C_OnIncrementSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
