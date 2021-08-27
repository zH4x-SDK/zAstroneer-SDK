
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

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleAddPlayerToWhitelistByName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameMenuServerAdminSubsection_C::HandleAddPlayerToWhitelistByName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleAddPlayerToWhitelistByName");

	UGameMenuServerAdminSubsection_C_HandleAddPlayerToWhitelistByName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ManageListedPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* PlayerEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::ManageListedPlayer(class UAstroGameMenuFocusItemWidget* PlayerEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ManageListedPlayer");

	UGameMenuServerAdminSubsection_C_ManageListedPlayer_Params params;
	params.PlayerEntry = PlayerEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdateSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::UpdateSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdateSettings");

	UGameMenuServerAdminSubsection_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdatePlayerLists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::UpdatePlayerLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdatePlayerLists");

	UGameMenuServerAdminSubsection_C_UpdatePlayerLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuServerAdminSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.LayoutWidget");

	UGameMenuServerAdminSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.Construct");

	UGameMenuServerAdminSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerStatistics       ServerStatistics               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameMenuServerAdminSubsection_C::CustomEvent_1(const struct FServerStatistics& ServerStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_1");

	UGameMenuServerAdminSubsection_C_CustomEvent_1_Params params;
	params.ServerStatistics = ServerStatistics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerList             PlayerList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameMenuServerAdminSubsection_C::CustomEvent_2(const struct FPlayerList& PlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_2");

	UGameMenuServerAdminSubsection_C_CustomEvent_2_Params params;
	params.PlayerList = PlayerList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ForceMenuRefresh
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::ForceMenuRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ForceMenuRefresh");

	UGameMenuServerAdminSubsection_C_ForceMenuRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleEnterCreativeModeAccepted
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::HandleEnterCreativeModeAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleEnterCreativeModeAccepted");

	UGameMenuServerAdminSubsection_C_HandleEnterCreativeModeAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent1
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::CustomEvent1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent1");

	UGameMenuServerAdminSubsection_C_CustomEvent1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuServerAdminSubsection_C::BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.OnPlayerCategoryChanged
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerAdminSubsection_C::OnPlayerCategoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.OnPlayerCategoryChanged");

	UGameMenuServerAdminSubsection_C_OnPlayerCategoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature");

	UGameMenuServerAdminSubsection_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ExecuteUbergraph_GameMenuServerAdminSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerAdminSubsection_C::ExecuteUbergraph_GameMenuServerAdminSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ExecuteUbergraph_GameMenuServerAdminSubsection");

	UGameMenuServerAdminSubsection_C_ExecuteUbergraph_GameMenuServerAdminSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
