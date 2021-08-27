
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

// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.LaunchDedicatedServerTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuFriendsAndServersSubsection_C::LaunchDedicatedServerTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.LaunchDedicatedServerTab");

	UGameMenuFriendsAndServersSubsection_C_LaunchDedicatedServerTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.FetchAstroFriends
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuFriendsAndServersSubsection_C::FetchAstroFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.FetchAstroFriends");

	UGameMenuFriendsAndServersSubsection_C_FetchAstroFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuFriendsAndServersSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.LayoutWidget");

	UGameMenuFriendsAndServersSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuFriendsAndServersSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.Construct");

	UGameMenuFriendsAndServersSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.EventManageFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* InstigatingWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuFriendsAndServersSubsection_C::EventManageFriend(class UAstroGameMenuFocusItemWidget* InstigatingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.EventManageFriend");

	UGameMenuFriendsAndServersSubsection_C_EventManageFriend_Params params;
	params.InstigatingWidget = InstigatingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.ForceMenuRefresh
// (BlueprintCallable, BlueprintEvent)

void UGameMenuFriendsAndServersSubsection_C::ForceMenuRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.ForceMenuRefresh");

	UGameMenuFriendsAndServersSubsection_C_ForceMenuRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.BndEvt__DedicatedServerTabLaunch_K2Node_ComponentBoundEvent_44_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuFriendsAndServersSubsection_C::BndEvt__DedicatedServerTabLaunch_K2Node_ComponentBoundEvent_44_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.BndEvt__DedicatedServerTabLaunch_K2Node_ComponentBoundEvent_44_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuFriendsAndServersSubsection_C_BndEvt__DedicatedServerTabLaunch_K2Node_ComponentBoundEvent_44_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.ExecuteUbergraph_GameMenuFriendsAndServersSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuFriendsAndServersSubsection_C::ExecuteUbergraph_GameMenuFriendsAndServersSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuFriendsAndServersSubsection.GameMenuFriendsAndServersSubsection_C.ExecuteUbergraph_GameMenuFriendsAndServersSubsection");

	UGameMenuFriendsAndServersSubsection_C_ExecuteUbergraph_GameMenuFriendsAndServersSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
