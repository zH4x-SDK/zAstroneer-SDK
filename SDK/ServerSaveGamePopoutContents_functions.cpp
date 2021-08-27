
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

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSaveGamePopoutContents_C::BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature");

	UServerSaveGamePopoutContents_C_BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSaveGamePopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UServerSaveGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerSaveGamePopoutContents_C::BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature");

	UServerSaveGamePopoutContents_C_BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.ExecuteUbergraph_ServerSaveGamePopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSaveGamePopoutContents_C::ExecuteUbergraph_ServerSaveGamePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.ExecuteUbergraph_ServerSaveGamePopoutContents");

	UServerSaveGamePopoutContents_C_ExecuteUbergraph_ServerSaveGamePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.OnSaveGameConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveGameName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerSaveGamePopoutContents_C::OnSaveGameConfirm__DelegateSignature(const struct FString& SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.OnSaveGameConfirm__DelegateSignature");

	UServerSaveGamePopoutContents_C_OnSaveGameConfirm__DelegateSignature_Params params;
	params.SaveGameName = SaveGameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
