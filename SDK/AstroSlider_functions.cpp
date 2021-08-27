
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

// Function AstroSlider.AstroSlider_C.GetIsEditing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEditing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroSlider_C::GetIsEditing(bool* IsEditing)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.GetIsEditing");

	UAstroSlider_C_GetIsEditing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEditing != nullptr)
		*IsEditing = params.IsEditing;
}


// Function AstroSlider.AstroSlider_C.GetIntSliderSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               SliderSize                     (Parm, OutParm, IsPlainOldData)

void UAstroSlider_C::GetIntSliderSize(struct FVector2D* SliderSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.GetIntSliderSize");

	UAstroSlider_C_GetIntSliderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderSize != nullptr)
		*SliderSize = params.SliderSize;
}


// Function AstroSlider.AstroSlider_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UAstroSlider_C::SetTextColor(const struct FSlateColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.SetTextColor");

	UAstroSlider_C_SetTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroSlider.AstroSlider_C.SetIsEditing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsEditing                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroSlider_C::SetIsEditing(bool NewIsEditing)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.SetIsEditing");

	UAstroSlider_C_SetIsEditing_Params params;
	params.NewIsEditing = NewIsEditing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroSlider.AstroSlider_C.SetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidChange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroSlider_C::SetSliderValue(float NewVal, bool* DidChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.SetSliderValue");

	UAstroSlider_C_SetSliderValue_Params params;
	params.NewVal = NewVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;
}


// Function AstroSlider.AstroSlider_C.GetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SliderVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroSlider_C::GetSliderValue(float* SliderVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.GetSliderValue");

	UAstroSlider_C_GetSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderVal != nullptr)
		*SliderVal = params.SliderVal;
}


// Function AstroSlider.AstroSlider_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroSlider_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroSlider.AstroSlider_C.LayoutWidget");

	UAstroSlider_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
