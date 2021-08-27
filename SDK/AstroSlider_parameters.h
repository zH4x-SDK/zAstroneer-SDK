#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AstroSlider.AstroSlider_C.GetIsEditing
struct UAstroSlider_C_GetIsEditing_Params
{
	bool                                               IsEditing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroSlider.AstroSlider_C.GetIntSliderSize
struct UAstroSlider_C_GetIntSliderSize_Params
{
	struct FVector2D                                   SliderSize;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function AstroSlider.AstroSlider_C.SetTextColor
struct UAstroSlider_C_SetTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AstroSlider.AstroSlider_C.SetIsEditing
struct UAstroSlider_C_SetIsEditing_Params
{
	bool                                               NewIsEditing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroSlider.AstroSlider_C.SetSliderValue
struct UAstroSlider_C_SetSliderValue_Params
{
	float                                              NewVal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidChange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroSlider.AstroSlider_C.GetSliderValue
struct UAstroSlider_C_GetSliderValue_Params
{
	float                                              SliderVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroSlider.AstroSlider_C.LayoutWidget
struct UAstroSlider_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
