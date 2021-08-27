
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

// Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSureForceRespawnPopoutContents_C::BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature");

	UAreYouSureForceRespawnPopoutContents_C_BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSureForceRespawnPopoutContents_C::BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature");

	UAreYouSureForceRespawnPopoutContents_C_BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.ExecuteUbergraph_AreYouSureForceRespawnPopoutContents
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAreYouSureForceRespawnPopoutContents_C::ExecuteUbergraph_AreYouSureForceRespawnPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.ExecuteUbergraph_AreYouSureForceRespawnPopoutContents");

	UAreYouSureForceRespawnPopoutContents_C_ExecuteUbergraph_AreYouSureForceRespawnPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.OnYesPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAreYouSureForceRespawnPopoutContents_C::OnYesPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreYouSureForceRespawnPopoutContents.AreYouSureForceRespawnPopoutContents_C.OnYesPressed__DelegateSignature");

	UAreYouSureForceRespawnPopoutContents_C_OnYesPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
