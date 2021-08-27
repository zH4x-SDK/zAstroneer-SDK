
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

// Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkipTutorialPopoutContents_C::BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature");

	USkipTutorialPopoutContents_C_BndEvt__LaunchEntry_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkipTutorialPopoutContents_C::BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature");

	USkipTutorialPopoutContents_C_BndEvt__CancelEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.ExecuteUbergraph_SkipTutorialPopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkipTutorialPopoutContents_C::ExecuteUbergraph_SkipTutorialPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.ExecuteUbergraph_SkipTutorialPopoutContents");

	USkipTutorialPopoutContents_C_ExecuteUbergraph_SkipTutorialPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.OnTutorialSkipConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkipTutorialPopoutContents_C::OnTutorialSkipConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipTutorialPopoutContents.SkipTutorialPopoutContents_C.OnTutorialSkipConfirmed__DelegateSignature");

	USkipTutorialPopoutContents_C_OnTutorialSkipConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
