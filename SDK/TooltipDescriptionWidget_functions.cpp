
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

// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.GetContentBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ContentBounds                  (Parm, OutParm, IsPlainOldData)

void UTooltipDescriptionWidget_C::GetContentBounds(struct FVector2D* ContentBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.GetContentBounds");

	UTooltipDescriptionWidget_C_GetContentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentBounds != nullptr)
		*ContentBounds = params.ContentBounds;
}


// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTooltipDescriptionWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.LayoutWidget");

	UTooltipDescriptionWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTooltipDescriptionWidget_C::SetDescriptionText(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.SetDescriptionText");

	UTooltipDescriptionWidget_C_SetDescriptionText_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
