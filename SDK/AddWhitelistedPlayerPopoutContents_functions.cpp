
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

// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAddWhitelistedPlayerPopoutContents_C::BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature");

	UAddWhitelistedPlayerPopoutContents_C_BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAddWhitelistedPlayerPopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UAddWhitelistedPlayerPopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__ServerURL_K2Node_ComponentBoundEvent_2_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAddWhitelistedPlayerPopoutContents_C::BndEvt__ServerURL_K2Node_ComponentBoundEvent_2_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.BndEvt__ServerURL_K2Node_ComponentBoundEvent_2_OnTextEntryCompleted__DelegateSignature");

	UAddWhitelistedPlayerPopoutContents_C_BndEvt__ServerURL_K2Node_ComponentBoundEvent_2_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAddWhitelistedPlayerPopoutContents_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.Construct");

	UAddWhitelistedPlayerPopoutContents_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.ExecuteUbergraph_AddWhitelistedPlayerPopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAddWhitelistedPlayerPopoutContents_C::ExecuteUbergraph_AddWhitelistedPlayerPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.ExecuteUbergraph_AddWhitelistedPlayerPopoutContents");

	UAddWhitelistedPlayerPopoutContents_C_ExecuteUbergraph_AddWhitelistedPlayerPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.AddPlayerToWhitelist__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAddWhitelistedPlayerPopoutContents_C::AddPlayerToWhitelist__DelegateSignature(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddWhitelistedPlayerPopoutContents.AddWhitelistedPlayerPopoutContents_C.AddPlayerToWhitelist__DelegateSignature");

	UAddWhitelistedPlayerPopoutContents_C_AddPlayerToWhitelist__DelegateSignature_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
