
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

// Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStartNewGamePopoutContents_C::BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature");

	UStartNewGamePopoutContents_C_BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStartNewGamePopoutContents_C::BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature");

	UStartNewGamePopoutContents_C_BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.HandleNavigationBackRequest
// (Event, Public, BlueprintEvent)

void UStartNewGamePopoutContents_C::HandleNavigationBackRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.HandleNavigationBackRequest");

	UStartNewGamePopoutContents_C_HandleNavigationBackRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.ExecuteUbergraph_StartNewGamePopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStartNewGamePopoutContents_C::ExecuteUbergraph_StartNewGamePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.ExecuteUbergraph_StartNewGamePopoutContents");

	UStartNewGamePopoutContents_C_ExecuteUbergraph_StartNewGamePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.OnCustomizationFinalizationCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStartNewGamePopoutContents_C::OnCustomizationFinalizationCanceled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StartNewGamePopoutContents.StartNewGamePopoutContents_C.OnCustomizationFinalizationCanceled__DelegateSignature");

	UStartNewGamePopoutContents_C_OnCustomizationFinalizationCanceled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
