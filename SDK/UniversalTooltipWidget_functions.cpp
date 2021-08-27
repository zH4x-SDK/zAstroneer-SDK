
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

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateContentAreaSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUniversalTooltipWidget_C::CalculateContentAreaSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateContentAreaSize");

	UUniversalTooltipWidget_C_CalculateContentAreaSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutTitleWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUniversalTooltipWidget_C::LayoutTitleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutTitleWidget");

	UUniversalTooltipWidget_C_LayoutTitleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardRenderSize
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UUniversalTooltipWidget_C::GetUICardRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardRenderSize");

	UUniversalTooltipWidget_C_GetUICardRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardScreenPosOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UUniversalTooltipWidget_C::GetUICardScreenPosOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardScreenPosOffset");

	UUniversalTooltipWidget_C_GetUICardScreenPosOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUniversalTooltipWidget_C::AnimateDetails(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateDetails");

	UUniversalTooltipWidget_C_AnimateDetails_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUniversalTooltipWidget_C::AnimateBadge(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateBadge");

	UUniversalTooltipWidget_C_AnimateBadge_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateTooltipRenderSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUniversalTooltipWidget_C::CalculateTooltipRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateTooltipRenderSize");

	UUniversalTooltipWidget_C_CalculateTooltipRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUniversalTooltipWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutWidget");

	UUniversalTooltipWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUniversalTooltipWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.Construct");

	UUniversalTooltipWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUniversalTooltipWidget_C::UpdateTooltipAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipAnimation");

	UUniversalTooltipWidget_C_UpdateTooltipAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UUniversalTooltipWidget_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnStateChanged");

	UUniversalTooltipWidget_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnAnimationChanged
// (Event, Public, BlueprintEvent)

void UUniversalTooltipWidget_C::OnAnimationChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnAnimationChanged");

	UUniversalTooltipWidget_C_OnAnimationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FTooltipWidgetDisplayData NewTooltipWidgetDisplayData    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUniversalTooltipWidget_C::UpdateTooltipDataForInteractionPromptsWithoutChangingLayout(const struct FTooltipWidgetDisplayData& NewTooltipWidgetDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout");

	UUniversalTooltipWidget_C_UpdateTooltipDataForInteractionPromptsWithoutChangingLayout_Params params;
	params.NewTooltipWidgetDisplayData = NewTooltipWidgetDisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUniversalTooltipWidget_C::InputStarted(const struct FName& ActionOrAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputStarted");

	UUniversalTooltipWidget_C_InputStarted_Params params;
	params.ActionOrAxisName = ActionOrAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputSucceeded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUniversalTooltipWidget_C::InputComplete(const struct FName& ActionOrAxisName, bool InputSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputComplete");

	UUniversalTooltipWidget_C_InputComplete_Params params;
	params.ActionOrAxisName = ActionOrAxisName;
	params.InputSucceeded = InputSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnTextContentChanged
// (Event, Public, BlueprintEvent)

void UUniversalTooltipWidget_C::OnTextContentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnTextContentChanged");

	UUniversalTooltipWidget_C_OnTextContentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UniversalTooltipWidget.UniversalTooltipWidget_C.ExecuteUbergraph_UniversalTooltipWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUniversalTooltipWidget_C::ExecuteUbergraph_UniversalTooltipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UniversalTooltipWidget.UniversalTooltipWidget_C.ExecuteUbergraph_UniversalTooltipWidget");

	UUniversalTooltipWidget_C_ExecuteUbergraph_UniversalTooltipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
