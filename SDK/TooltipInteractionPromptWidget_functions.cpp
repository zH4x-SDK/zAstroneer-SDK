
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

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateInteractionDataWithoutChangingLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionPromptEntryData InteractionData                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTooltipInteractionPromptWidget_C::UpdateInteractionDataWithoutChangingLayout(const struct FInteractionPromptEntryData& InteractionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateInteractionDataWithoutChangingLayout");

	UTooltipInteractionPromptWidget_C_UpdateInteractionDataWithoutChangingLayout_Params params;
	params.InteractionData = InteractionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetShowInputModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShowModifier                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::GetShowInputModifier(bool* ShowModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetShowInputModifier");

	UTooltipInteractionPromptWidget_C_GetShowInputModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowModifier != nullptr)
		*ShowModifier = params.ShowModifier;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateHoldAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::UpdateHoldAnimation(float HoldProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateHoldAnimation");

	UTooltipInteractionPromptWidget_C_UpdateHoldAnimation_Params params;
	params.HoldProgress = HoldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTooltipInteractionPromptWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.LayoutWidget");

	UTooltipInteractionPromptWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetContentBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ContentBounds                  (Parm, OutParm, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::GetContentBounds(struct FVector2D* ContentBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetContentBounds");

	UTooltipInteractionPromptWidget_C_GetContentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentBounds != nullptr)
		*ContentBounds = params.ContentBounds;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipInteractionPromptWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Construct");

	UTooltipInteractionPromptWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UTooltipInteractionPromptWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.OnSynchronizeProperties");

	UTooltipInteractionPromptWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.HandleInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::HandleInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.HandleInputDeviceChanged");

	UTooltipInteractionPromptWidget_C_HandleInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipInteractionPromptWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Destruct");

	UTooltipInteractionPromptWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::InputStarted(const struct FName& ActionOrAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputStarted");

	UTooltipInteractionPromptWidget_C_InputStarted_Params params;
	params.ActionOrAxisName = ActionOrAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputSucceeded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::InputComplete(const struct FName& ActionOrAxisName, bool InputSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputComplete");

	UTooltipInteractionPromptWidget_C_InputComplete_Params params;
	params.ActionOrAxisName = ActionOrAxisName;
	params.InputSucceeded = InputSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.ExecuteUbergraph_TooltipInteractionPromptWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipInteractionPromptWidget_C::ExecuteUbergraph_TooltipInteractionPromptWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.ExecuteUbergraph_TooltipInteractionPromptWidget");

	UTooltipInteractionPromptWidget_C_ExecuteUbergraph_TooltipInteractionPromptWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
