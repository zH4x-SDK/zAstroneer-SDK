
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

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.DisplayStoreItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroMicroTxnCombinedItem InCombinedItem                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreBuyPanel_C::DisplayStoreItemData(const struct FAstroMicroTxnCombinedItem& InCombinedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.DisplayStoreItemData");

	UWBP_StoreBuyPanel_C_DisplayStoreItemData_Params params;
	params.InCombinedItem = InCombinedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreBuyPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.PreConstruct");

	UWBP_StoreBuyPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreBuyPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.Construct");

	UWBP_StoreBuyPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreBuyPanel_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnAddedToFocusPath");

	UWBP_StoreBuyPanel_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreBuyPanel_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnRemovedFromFocusPath");

	UWBP_StoreBuyPanel_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnInputDeviceChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreBuyPanel_C::OnInputDeviceChanged_Event_1(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnInputDeviceChanged_Event_1");

	UWBP_StoreBuyPanel_C_OnInputDeviceChanged_Event_1_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldBegin
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreBuyPanel_C::OnHoldBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldBegin");

	UWBP_StoreBuyPanel_C_OnHoldBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreBuyPanel_C::OnHoldEnd(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldEnd");

	UWBP_StoreBuyPanel_C_OnHoldEnd_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreBuyPanel_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreBuyPanel_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreBuyPanel_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreBuyPanel_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.ExecuteUbergraph_WBP_StoreBuyPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreBuyPanel_C::ExecuteUbergraph_WBP_StoreBuyPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.ExecuteUbergraph_WBP_StoreBuyPanel");

	UWBP_StoreBuyPanel_C_ExecuteUbergraph_WBP_StoreBuyPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreBuyPanel_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnReleased__DelegateSignature");

	UWBP_StoreBuyPanel_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreBuyPanel_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnPressed__DelegateSignature");

	UWBP_StoreBuyPanel_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnGamepadInputWhileFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreBuyPanel_C::OnGamepadInputWhileFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnGamepadInputWhileFocused__DelegateSignature");

	UWBP_StoreBuyPanel_C_OnGamepadInputWhileFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
