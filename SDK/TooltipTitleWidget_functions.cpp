
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

// Function TooltipTitleWidget.TooltipTitleWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTooltipTitleWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipTitleWidget.TooltipTitleWidget_C.LayoutWidget");

	UTooltipTitleWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TooltipTitleWidget.TooltipTitleWidget_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ContentBounds                  (Parm, OutParm, IsPlainOldData)

void UTooltipTitleWidget_C::GetContentSize(struct FVector2D* ContentBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipTitleWidget.TooltipTitleWidget_C.GetContentSize");

	UTooltipTitleWidget_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentBounds != nullptr)
		*ContentBounds = params.ContentBounds;
}


// Function TooltipTitleWidget.TooltipTitleWidget_C.SetTitleWidgetDrawData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewTitleText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   NewSubtitleText                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTooltipTitleWidget_C::SetTitleWidgetDrawData(const struct FText& NewTitleText, const struct FText& NewSubtitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipTitleWidget.TooltipTitleWidget_C.SetTitleWidgetDrawData");

	UTooltipTitleWidget_C_SetTitleWidgetDrawData_Params params;
	params.NewTitleText = NewTitleText;
	params.NewSubtitleText = NewSubtitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
