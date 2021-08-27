
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

// Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSurePopoutContents_C::BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature");

	UAreYouSurePopoutContents_C_BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSurePopoutContents_C::BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature");

	UAreYouSurePopoutContents_C_BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.ExecuteUbergraph_AreYouSurePopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSurePopoutContents_C::ExecuteUbergraph_AreYouSurePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.ExecuteUbergraph_AreYouSurePopoutContents");

	UAreYouSurePopoutContents_C_ExecuteUbergraph_AreYouSurePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.OnYesPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAreYouSurePopoutContents_C::OnYesPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSurePopoutContents.AreYouSurePopoutContents_C.OnYesPressed__DelegateSignature");

	UAreYouSurePopoutContents_C_OnYesPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
