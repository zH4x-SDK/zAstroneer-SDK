
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

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.CreateDescriptionWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UTooltipContentAreaWidget_C::CreateDescriptionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.CreateDescriptionWidget");

	UTooltipContentAreaWidget_C_CreateDescriptionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.OnTextContentChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTooltipWidgetDisplayData NewDisplayData                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTooltipContentAreaWidget_C::OnTextContentChanged(const struct FTooltipWidgetDisplayData& NewDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.OnTextContentChanged");

	UTooltipContentAreaWidget_C_OnTextContentChanged_Params params;
	params.NewDisplayData = NewDisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTooltipWidgetDisplayData DisplayData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTooltipContentAreaWidget_C::UpdateTooltipDataForInteractionPromptsWithoutChangingLayout(const struct FTooltipWidgetDisplayData& DisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout");

	UTooltipContentAreaWidget_C_UpdateTooltipDataForInteractionPromptsWithoutChangingLayout_Params params;
	params.DisplayData = DisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTooltipInteractionPromptWidget_C* InteractionPrompt              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputSucceeded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipContentAreaWidget_C::InteractionPromptInputComplete(class UTooltipInteractionPromptWidget_C* InteractionPrompt, const struct FName& InputName, bool InputSucceeded, bool* InputHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputComplete");

	UTooltipContentAreaWidget_C_InteractionPromptInputComplete_Params params;
	params.InteractionPrompt = InteractionPrompt;
	params.InputName = InputName;
	params.InputSucceeded = InputSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTooltipInteractionPromptWidget_C* InteractionPrompt              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipContentAreaWidget_C::InteractionPromptInputStarted(class UTooltipInteractionPromptWidget_C* InteractionPrompt, const struct FName& InputName, bool* InputHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputStarted");

	UTooltipContentAreaWidget_C_InteractionPromptInputStarted_Params params;
	params.InteractionPrompt = InteractionPrompt;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTooltipContentAreaWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.LayoutWidget");

	UTooltipContentAreaWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, IsPlainOldData)

void UTooltipContentAreaWidget_C::GetContentSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.GetContentSize");

	UTooltipContentAreaWidget_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipContentAreaWidget_C::InputStarted(const struct FName& ActionOrAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputStarted");

	UTooltipContentAreaWidget_C_InputStarted_Params params;
	params.ActionOrAxisName = ActionOrAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionOrAxisName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputSucceeded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipContentAreaWidget_C::InputComplete(const struct FName& ActionOrAxisName, bool InputSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputComplete");

	UTooltipContentAreaWidget_C_InputComplete_Params params;
	params.ActionOrAxisName = ActionOrAxisName;
	params.InputSucceeded = InputSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.ExecuteUbergraph_TooltipContentAreaWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipContentAreaWidget_C::ExecuteUbergraph_TooltipContentAreaWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.ExecuteUbergraph_TooltipContentAreaWidget");

	UTooltipContentAreaWidget_C_ExecuteUbergraph_TooltipContentAreaWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
