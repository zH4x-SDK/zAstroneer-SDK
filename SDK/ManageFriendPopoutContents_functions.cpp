
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

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManageFriendPopoutContents_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.LayoutWidget");

	UManageFriendPopoutContents_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UManageFriendPopoutContents_C_BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UManageFriendPopoutContents_C_BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToJoin                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAstroServerInfo        serverInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           requiresPassword               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 lastJoinedPassword             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerNicknameOrURL            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UManageFriendPopoutContents_C::CustomEvent_1(bool success, const struct FAstroFriend& friendToJoin, const struct FAstroServerInfo& serverInfo, bool requiresPassword, const struct FString& lastJoinedPassword, class APlayerController* PlayerController, const struct FString& ServerNicknameOrURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_1");

	UManageFriendPopoutContents_C_CustomEvent_1_Params params;
	params.success = success;
	params.friendToJoin = friendToJoin;
	params.serverInfo = serverInfo;
	params.requiresPassword = requiresPassword;
	params.lastJoinedPassword = lastJoinedPassword;
	params.PlayerController = PlayerController;
	params.ServerNicknameOrURL = ServerNicknameOrURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           succes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::CustomEvent_2(bool succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_2");

	UManageFriendPopoutContents_C_CustomEvent_2_Params params;
	params.succes = succes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UManageFriendPopoutContents_C::CustomEvent_3(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_3");

	UManageFriendPopoutContents_C_CustomEvent_3_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UManageFriendPopoutContents_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_4");

	UManageFriendPopoutContents_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UManageFriendPopoutContents_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UManageFriendPopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.ExecuteUbergraph_ManageFriendPopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageFriendPopoutContents_C::ExecuteUbergraph_ManageFriendPopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.ExecuteUbergraph_ManageFriendPopoutContents");

	UManageFriendPopoutContents_C_ExecuteUbergraph_ManageFriendPopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.DedicatedServerAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   IP                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ServerName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageFriendPopoutContents_C::DedicatedServerAdded__DelegateSignature(const struct FText& IP, const struct FText& ServerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.DedicatedServerAdded__DelegateSignature");

	UManageFriendPopoutContents_C_DedicatedServerAdded__DelegateSignature_Params params;
	params.IP = IP;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
