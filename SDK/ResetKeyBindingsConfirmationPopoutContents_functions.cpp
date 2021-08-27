
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

// Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.BndEvt__ConfirmEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResetKeyBindingsConfirmationPopoutContents_C::BndEvt__ConfirmEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.BndEvt__ConfirmEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature");

	UResetKeyBindingsConfirmationPopoutContents_C_BndEvt__ConfirmEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResetKeyBindingsConfirmationPopoutContents_C::BndEvt__CancelEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature");

	UResetKeyBindingsConfirmationPopoutContents_C_BndEvt__CancelEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.ExecuteUbergraph_ResetKeyBindingsConfirmationPopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResetKeyBindingsConfirmationPopoutContents_C::ExecuteUbergraph_ResetKeyBindingsConfirmationPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.ExecuteUbergraph_ResetKeyBindingsConfirmationPopoutContents");

	UResetKeyBindingsConfirmationPopoutContents_C_ExecuteUbergraph_ResetKeyBindingsConfirmationPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.OnControlsReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResetKeyBindingsConfirmationPopoutContents_C::OnControlsReset__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResetKeyBindingsConfirmationPopoutContents.ResetKeyBindingsConfirmationPopoutContents_C.OnControlsReset__DelegateSignature");

	UResetKeyBindingsConfirmationPopoutContents_C_OnControlsReset__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
