
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

// Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetBadgeSizeRatioComparedToDefaultSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipBadgeWidget_C::GetBadgeSizeRatioComparedToDefaultSize(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetBadgeSizeRatioComparedToDefaultSize");

	UTooltipBadgeWidget_C_GetBadgeSizeRatioComparedToDefaultSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetWidgetSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               OutSize                        (Parm, OutParm, IsPlainOldData)

void UTooltipBadgeWidget_C::GetWidgetSize(struct FVector2D* OutSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetWidgetSize");

	UTooltipBadgeWidget_C_GetWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSize != nullptr)
		*OutSize = params.OutSize;
}


// Function TooltipBadgeWidget.TooltipBadgeWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTooltipBadgeWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipBadgeWidget.TooltipBadgeWidget_C.LayoutWidget");

	UTooltipBadgeWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
