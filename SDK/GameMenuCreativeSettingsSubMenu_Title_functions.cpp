
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

// Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Title_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeSettingsSubMenu_Title_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.NavigatedAwayFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isNavigateBack                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Title_C::NavigatedAwayFrom(bool isNavigateBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.NavigatedAwayFrom");

	UGameMenuCreativeSettingsSubMenu_Title_C_NavigatedAwayFrom_Params params;
	params.isNavigateBack = isNavigateBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Title_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.Construct");

	UGameMenuCreativeSettingsSubMenu_Title_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Title
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Title_C::ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Title.GameMenuCreativeSettingsSubMenu_Title_C.ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Title");

	UGameMenuCreativeSettingsSubMenu_Title_C_ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Title_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
