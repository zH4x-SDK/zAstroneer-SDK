
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

// Function BackpackCatalog.BackpackCatalog_C.ManipulateBackpackLightOnCrackedChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCracked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::ManipulateBackpackLightOnCrackedChanged(bool IsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ManipulateBackpackLightOnCrackedChanged");

	ABackpackCatalog_C_ManipulateBackpackLightOnCrackedChanged_Params params;
	params.IsCracked = IsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ResetDisplayLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::ResetDisplayLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ResetDisplayLights");

	ABackpackCatalog_C_ResetDisplayLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.UpdateConfirmationButtonAndCatalogLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::UpdateConfirmationButtonAndCatalogLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.UpdateConfirmationButtonAndCatalogLights");

	ABackpackCatalog_C_UpdateConfirmationButtonAndCatalogLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.UpdateCategoryButtonLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::UpdateCategoryButtonLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.UpdateCategoryButtonLights");

	ABackpackCatalog_C_UpdateCategoryButtonLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.UpdateSelectedItemIconMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::UpdateSelectedItemIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.UpdateSelectedItemIconMaterial");

	ABackpackCatalog_C_UpdateSelectedItemIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnCancelBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABackpackCatalog_C::OnCancelBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnCancelBP");

	ABackpackCatalog_C_OnCancelBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackCatalog.BackpackCatalog_C.HandleCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::HandleCancel(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.HandleCancel");

	ABackpackCatalog_C_HandleCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BackpackCatalog.BackpackCatalog_C.HandleConfirm
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::HandleConfirm(class APlayerController* Controller, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.HandleConfirm");

	ABackpackCatalog_C_HandleConfirm_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BackpackCatalog.BackpackCatalog_C.OnConfirmBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABackpackCatalog_C::OnConfirmBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnConfirmBP");

	ABackpackCatalog_C_OnConfirmBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconItemVariantIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemVariantType               ItemIconVariantType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnIconClickedRow5(int IconItemVariantIndex, EItemVariantType ItemIconVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow5");

	ABackpackCatalog_C_OnIconClickedRow5_Params params;
	params.IconItemVariantIndex = IconItemVariantIndex;
	params.ItemIconVariantType = ItemIconVariantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconItemVariantIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemVariantType               ItemIconVariantType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnIconClickedRow4(int IconItemVariantIndex, EItemVariantType ItemIconVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow4");

	ABackpackCatalog_C_OnIconClickedRow4_Params params;
	params.IconItemVariantIndex = IconItemVariantIndex;
	params.ItemIconVariantType = ItemIconVariantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconItemVariantIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemVariantType               ItemIconVariantType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnIconClickedRow3(int IconItemVariantIndex, EItemVariantType ItemIconVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow3");

	ABackpackCatalog_C_OnIconClickedRow3_Params params;
	params.IconItemVariantIndex = IconItemVariantIndex;
	params.ItemIconVariantType = ItemIconVariantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconItemVariantIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemVariantType               ItemIconVariantType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnIconClickedRow2(int IconItemVariantIndex, EItemVariantType ItemIconVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow2");

	ABackpackCatalog_C_OnIconClickedRow2_Params params;
	params.IconItemVariantIndex = IconItemVariantIndex;
	params.ItemIconVariantType = ItemIconVariantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconItemVariantIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemVariantType               ItemIconVariantType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnIconClickedRow1(int IconItemVariantIndex, EItemVariantType ItemIconVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow1");

	ABackpackCatalog_C_OnIconClickedRow1_Params params;
	params.IconItemVariantIndex = IconItemVariantIndex;
	params.ItemIconVariantType = ItemIconVariantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.UpdateItemInfoWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::UpdateItemInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.UpdateItemInfoWidget");

	ABackpackCatalog_C_UpdateItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.InitItemIconArrays
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::InitItemIconArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.InitItemIconArrays");

	ABackpackCatalog_C_InitItemIconArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.UserConstructionScript");

	ABackpackCatalog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::BigHologramItemChangedAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__FinishedFunc");

	ABackpackCatalog_C_BigHologramItemChangedAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::BigHologramItemChangedAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__UpdateFunc");

	ABackpackCatalog_C_BigHologramItemChangedAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__SwapMesh__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::BigHologramItemChangedAnim__SwapMesh__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__SwapMesh__EventFunc");

	ABackpackCatalog_C_BigHologramItemChangedAnim__SwapMesh__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::BigHologramUnlockedAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__FinishedFunc");

	ABackpackCatalog_C_BigHologramUnlockedAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::BigHologramUnlockedAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__UpdateFunc");

	ABackpackCatalog_C_BigHologramUnlockedAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SmallHologramMouseOverPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__FinishedFunc");

	ABackpackCatalog_C_SmallHologramMouseOverPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SmallHologramMouseOverPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__UpdateFunc");

	ABackpackCatalog_C_SmallHologramMouseOverPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SmallHologramItemChangedAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__FinishedFunc");

	ABackpackCatalog_C_SmallHologramItemChangedAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SmallHologramItemChangedAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__UpdateFunc");

	ABackpackCatalog_C_SmallHologramItemChangedAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__MeshSwap__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SmallHologramItemChangedAnim__MeshSwap__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__MeshSwap__EventFunc");

	ABackpackCatalog_C_SmallHologramItemChangedAnim__MeshSwap__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogHoverSlide__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__FinishedFunc");

	ABackpackCatalog_C_CatalogHoverSlide__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogHoverSlide__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__UpdateFunc");

	ABackpackCatalog_C_CatalogHoverSlide__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::DisplayLightsUnlockFlash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__FinishedFunc");

	ABackpackCatalog_C_DisplayLightsUnlockFlash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::DisplayLightsUnlockFlash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__UpdateFunc");

	ABackpackCatalog_C_DisplayLightsUnlockFlash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn2__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::DisplayLightsUnlockFlash__LightsOn2__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn2__EventFunc");

	ABackpackCatalog_C_DisplayLightsUnlockFlash__LightsOn2__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn1__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::DisplayLightsUnlockFlash__LightsOn1__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn1__EventFunc");

	ABackpackCatalog_C_DisplayLightsUnlockFlash__LightsOn1__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__FinishedFunc");

	ABackpackCatalog_C_SpindleTransition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__UpdateFunc");

	ABackpackCatalog_C_SpindleTransition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PopOutBottom__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__PopOutBottom__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PopOutBottom__EventFunc");

	ABackpackCatalog_C_SpindleTransition__PopOutBottom__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CloseTop__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__CloseTop__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CloseTop__EventFunc");

	ABackpackCatalog_C_SpindleTransition__CloseTop__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemDisplay__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__SelectedItemDisplay__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemDisplay__EventFunc");

	ABackpackCatalog_C_SpindleTransition__SelectedItemDisplay__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemIcon__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__SelectedItemIcon__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemIcon__EventFunc");

	ABackpackCatalog_C_SpindleTransition__SelectedItemIcon__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CatalogEntryDisplays__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__CatalogEntryDisplays__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CatalogEntryDisplays__EventFunc");

	ABackpackCatalog_C_SpindleTransition__CatalogEntryDisplays__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PointAndRateDisplay__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTransition__PointAndRateDisplay__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PointAndRateDisplay__EventFunc");

	ABackpackCatalog_C_SpindleTransition__PointAndRateDisplay__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__FinishedFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpdateFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__BottomRow__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__BottomRow__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__BottomRow__EventFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__BottomRow__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__LowerRow__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__LowerRow__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__LowerRow__EventFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__LowerRow__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__MiddleRow__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__MiddleRow__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__MiddleRow__EventFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__MiddleRow__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpperRow__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__UpperRow__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpperRow__EventFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__UpperRow__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__TopRow__EventFunc
// (BlueprintEvent)

void ABackpackCatalog_C::CatalogEntryDisplayTimeline__TopRow__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__TopRow__EventFunc");

	ABackpackCatalog_C_CatalogEntryDisplayTimeline__TopRow__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTopRowScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__FinishedFunc");

	ABackpackCatalog_C_SpindleTopRowScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleTopRowScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__UpdateFunc");

	ABackpackCatalog_C_SpindleTopRowScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleBottomRowScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__FinishedFunc");

	ABackpackCatalog_C_SpindleBottomRowScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleBottomRowScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__UpdateFunc");

	ABackpackCatalog_C_SpindleBottomRowScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleLowerRowScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__FinishedFunc");

	ABackpackCatalog_C_SpindleLowerRowScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleLowerRowScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__UpdateFunc");

	ABackpackCatalog_C_SpindleLowerRowScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleCenterRowScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__FinishedFunc");

	ABackpackCatalog_C_SpindleCenterRowScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleCenterRowScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__UpdateFunc");

	ABackpackCatalog_C_SpindleCenterRowScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleUpperRowScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__FinishedFunc");

	ABackpackCatalog_C_SpindleUpperRowScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SpindleUpperRowScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__UpdateFunc");

	ABackpackCatalog_C_SpindleUpperRowScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__FinishedFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SelectedIconScaling__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__FinishedFunc");

	ABackpackCatalog_C_SelectedIconScaling__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__UpdateFunc
// (BlueprintEvent)

void ABackpackCatalog_C::SelectedIconScaling__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__UpdateFunc");

	ABackpackCatalog_C_SelectedIconScaling__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABackpackCatalog_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ReceiveBeginPlay");

	ABackpackCatalog_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnMontageEnded");

	ABackpackCatalog_C_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnCatalogClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::OnCatalogClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnCatalogClicked");

	ABackpackCatalog_C_OnCatalogClicked_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnSelectedItemTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemType*               selectedItemType               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnSelectedItemTypeChanged(class UItemType* selectedItemType, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnSelectedItemTypeChanged");

	ABackpackCatalog_C_OnSelectedItemTypeChanged_Params params;
	params.selectedItemType = selectedItemType;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnUnlockedItemsChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          NewUnlockedItems               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABackpackCatalog_C::OnUnlockedItemsChanged(TArray<class UClass*> NewUnlockedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnUnlockedItemsChanged");

	ABackpackCatalog_C_OnUnlockedItemsChanged_Params params;
	params.NewUnlockedItems = NewUnlockedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnResearchPointBalanceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          NewResearchPointBalance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnResearchPointBalanceChanged(float NewResearchPointBalance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnResearchPointBalanceChanged");

	ABackpackCatalog_C_OnResearchPointBalanceChanged_Params params;
	params.NewResearchPointBalance = NewResearchPointBalance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature");

	ABackpackCatalog_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature");

	ABackpackCatalog_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DPadUp Release
// (BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::DPadUp_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DPadUp Release");

	ABackpackCatalog_C_DPadUp_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnNavigateUpBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnNavigateUpBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnNavigateUpBP");

	ABackpackCatalog_C_OnNavigateUpBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnNavigateDownBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnNavigateDownBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnNavigateDownBP");

	ABackpackCatalog_C_OnNavigateDownBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnNavigateRightBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnNavigateRightBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnNavigateRightBP");

	ABackpackCatalog_C_OnNavigateRightBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnNavigateLeftBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnNavigateLeftBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnNavigateLeftBP");

	ABackpackCatalog_C_OnNavigateLeftBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DPadDown Release
// (BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::DPadDown_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DPadDown Release");

	ABackpackCatalog_C_DPadDown_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DPadLeft Release
// (BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::DPadLeft_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DPadLeft Release");

	ABackpackCatalog_C_DPadLeft_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.DPadRight Release
// (BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::DPadRight_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.DPadRight Release");

	ABackpackCatalog_C_DPadRight_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackCatalog_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ABackpackCatalog_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconBeginCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnSpindleIconBeginCursorOver(class UPrimitiveComponent* Primitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconBeginCursorOver");

	ABackpackCatalog_C_OnSpindleIconBeginCursorOver_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconEndCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::OnSpindleIconEndCursorOver(class UPrimitiveComponent* Primitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconEndCursorOver");

	ABackpackCatalog_C_OnSpindleIconEndCursorOver_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ActiveCatalogEntryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bImmediate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::ActiveCatalogEntryChanged(bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ActiveCatalogEntryChanged");

	ABackpackCatalog_C_ActiveCatalogEntryChanged_Params params;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)

void ABackpackCatalog_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ReceiveActorBeginCursorOver");

	ABackpackCatalog_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)

void ABackpackCatalog_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ReceiveActorEndCursorOver");

	ABackpackCatalog_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.HandleCreativeModeCatalogUnlockedChanged
// (BlueprintCallable, BlueprintEvent)

void ABackpackCatalog_C::HandleCreativeModeCatalogUnlockedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.HandleCreativeModeCatalogUnlockedChanged");

	ABackpackCatalog_C_HandleCreativeModeCatalogUnlockedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackCatalog.BackpackCatalog_C.ExecuteUbergraph_BackpackCatalog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackCatalog_C::ExecuteUbergraph_BackpackCatalog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackCatalog.BackpackCatalog_C.ExecuteUbergraph_BackpackCatalog");

	ABackpackCatalog_C_ExecuteUbergraph_BackpackCatalog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
