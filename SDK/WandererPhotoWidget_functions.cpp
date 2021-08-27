
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

// Function WandererPhotoWidget.WandererPhotoWidget_C.GetBrush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWandererPhotoWidget_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.GetBrush_1");

	UWandererPhotoWidget_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WandererPhotoWidget.WandererPhotoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWandererPhotoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UWandererPhotoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WandererPhotoWidget.WandererPhotoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWandererPhotoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.Construct");

	UWandererPhotoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WandererPhotoWidget.WandererPhotoWidget_C.UpdateClosePromptButtonIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWandererPhotoWidget_C::UpdateClosePromptButtonIcon(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.UpdateClosePromptButtonIcon");

	UWandererPhotoWidget_C_UpdateClosePromptButtonIcon_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WandererPhotoWidget.WandererPhotoWidget_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWandererPhotoWidget_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.SetupStylingData");

	UWandererPhotoWidget_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WandererPhotoWidget.WandererPhotoWidget_C.ExecuteUbergraph_WandererPhotoWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWandererPhotoWidget_C::ExecuteUbergraph_WandererPhotoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WandererPhotoWidget.WandererPhotoWidget_C.ExecuteUbergraph_WandererPhotoWidget");

	UWandererPhotoWidget_C_ExecuteUbergraph_WandererPhotoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
