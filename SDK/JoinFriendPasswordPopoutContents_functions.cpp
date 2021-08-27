
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

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJoinFriendPasswordPopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.LayoutWidget");

	UJoinFriendPasswordPopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinFriendPasswordPopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UJoinFriendPasswordPopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinFriendPasswordPopoutContents_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UJoinFriendPasswordPopoutContents_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UJoinFriendPasswordPopoutContents_C::BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature");

	UJoinFriendPasswordPopoutContents_C_BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoinFriendPasswordPopoutContents_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.Construct");

	UJoinFriendPasswordPopoutContents_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.ExecuteUbergraph_JoinFriendPasswordPopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinFriendPasswordPopoutContents_C::ExecuteUbergraph_JoinFriendPasswordPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.ExecuteUbergraph_JoinFriendPasswordPopoutContents");

	UJoinFriendPasswordPopoutContents_C_ExecuteUbergraph_JoinFriendPasswordPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnJoinCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UJoinFriendPasswordPopoutContents_C::OnJoinCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnJoinCancelled__DelegateSignature");

	UJoinFriendPasswordPopoutContents_C_OnJoinCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnPasswordReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UJoinFriendPasswordPopoutContents_C::OnPasswordReceived__DelegateSignature(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnPasswordReceived__DelegateSignature");

	UJoinFriendPasswordPopoutContents_C_OnPasswordReceived__DelegateSignature_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
