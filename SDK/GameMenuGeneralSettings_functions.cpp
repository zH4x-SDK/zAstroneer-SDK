
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

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.CreateLanguageOptionPopout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* OwningFocusItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGeneralSettings_C::CreateLanguageOptionPopout(class UAstroGameMenuFocusItemWidget* OwningFocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.CreateLanguageOptionPopout");

	UGameMenuGeneralSettings_C_CreateLanguageOptionPopout_Params params;
	params.OwningFocusItem = OwningFocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuGeneralSettings_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.LayoutWidget");

	UGameMenuGeneralSettings_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGeneralSettings_C::BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature");

	UGameMenuGeneralSettings_C_BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.HandleLanguageComboSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGeneralSettings_C::HandleLanguageComboSelectionMade(int SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.HandleLanguageComboSelectionMade");

	UGameMenuGeneralSettings_C_HandleLanguageComboSelectionMade_Params params;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuGeneralSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.Construct");

	UGameMenuGeneralSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.ExecuteUbergraph_GameMenuGeneralSettings
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGeneralSettings_C::ExecuteUbergraph_GameMenuGeneralSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.ExecuteUbergraph_GameMenuGeneralSettings");

	UGameMenuGeneralSettings_C_ExecuteUbergraph_GameMenuGeneralSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
