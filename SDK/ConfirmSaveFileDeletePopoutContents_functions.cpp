
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

// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmSaveFileDeletePopoutContents_C::BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature");

	UConfirmSaveFileDeletePopoutContents_C_BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmSaveFileDeletePopoutContents_C::BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature");

	UConfirmSaveFileDeletePopoutContents_C_BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.HandleNavigationBackRequest
// (Event, Public, BlueprintEvent)

void UConfirmSaveFileDeletePopoutContents_C::HandleNavigationBackRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.HandleNavigationBackRequest");

	UConfirmSaveFileDeletePopoutContents_C_HandleNavigationBackRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.ExecuteUbergraph_ConfirmSaveFileDeletePopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmSaveFileDeletePopoutContents_C::ExecuteUbergraph_ConfirmSaveFileDeletePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.ExecuteUbergraph_ConfirmSaveFileDeletePopoutContents");

	UConfirmSaveFileDeletePopoutContents_C_ExecuteUbergraph_ConfirmSaveFileDeletePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.OnSavedGameDeletionCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmSaveFileDeletePopoutContents_C::OnSavedGameDeletionCanceled__DelegateSignature(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.OnSavedGameDeletionCanceled__DelegateSignature");

	UConfirmSaveFileDeletePopoutContents_C_OnSavedGameDeletionCanceled__DelegateSignature_Params params;
	params.PopoutOwningFocusItem = PopoutOwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.OnSavedGameDeletionConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroSaveFileInformation AstroSaveFileInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void UConfirmSaveFileDeletePopoutContents_C::OnSavedGameDeletionConfirmed__DelegateSignature(const struct FAstroSaveFileInformation& AstroSaveFileInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmSaveFileDeletePopoutContents.ConfirmSaveFileDeletePopoutContents_C.OnSavedGameDeletionConfirmed__DelegateSignature");

	UConfirmSaveFileDeletePopoutContents_C_OnSavedGameDeletionConfirmed__DelegateSignature_Params params;
	params.AstroSaveFileInfo = AstroSaveFileInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
