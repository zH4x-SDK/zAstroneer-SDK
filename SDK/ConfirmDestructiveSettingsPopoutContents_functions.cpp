
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

// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConfirmDestructiveSettingsPopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.LayoutWidget");

	UConfirmDestructiveSettingsPopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.UpdateCountdownTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmDestructiveSettingsPopoutContents_C::UpdateCountdownTimer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.UpdateCountdownTimer");

	UConfirmDestructiveSettingsPopoutContents_C_UpdateCountdownTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.StartCountdownTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmDestructiveSettingsPopoutContents_C::StartCountdownTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.StartCountdownTimer");

	UConfirmDestructiveSettingsPopoutContents_C_StartCountdownTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmDestructiveSettingsPopoutContents_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.UpdateText");

	UConfirmDestructiveSettingsPopoutContents_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmDestructiveSettingsPopoutContents_C::BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature");

	UConfirmDestructiveSettingsPopoutContents_C_BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmDestructiveSettingsPopoutContents_C::BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature");

	UConfirmDestructiveSettingsPopoutContents_C_BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.HandleNavigationBackRequest
// (Event, Public, BlueprintEvent)

void UConfirmDestructiveSettingsPopoutContents_C::HandleNavigationBackRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.HandleNavigationBackRequest");

	UConfirmDestructiveSettingsPopoutContents_C_HandleNavigationBackRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmDestructiveSettingsPopoutContents_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.Tick");

	UConfirmDestructiveSettingsPopoutContents_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.ExecuteUbergraph_ConfirmDestructiveSettingsPopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmDestructiveSettingsPopoutContents_C::ExecuteUbergraph_ConfirmDestructiveSettingsPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.ExecuteUbergraph_ConfirmDestructiveSettingsPopoutContents");

	UConfirmDestructiveSettingsPopoutContents_C_ExecuteUbergraph_ConfirmDestructiveSettingsPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.SettingsCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfirmDestructiveSettingsPopoutContents_C::SettingsCanceled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.SettingsCanceled__DelegateSignature");

	UConfirmDestructiveSettingsPopoutContents_C_SettingsCanceled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.SettingsConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfirmDestructiveSettingsPopoutContents_C::SettingsConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C.SettingsConfirmed__DelegateSignature");

	UConfirmDestructiveSettingsPopoutContents_C_SettingsConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
