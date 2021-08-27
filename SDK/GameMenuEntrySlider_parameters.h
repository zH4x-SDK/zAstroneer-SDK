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

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValueAsNormalizedFloat
struct UGameMenuEntrySlider_C_SetSliderValueAsNormalizedFloat_Params
{
	float                                              NormalizedSliderVal;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidChange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderPositionFromMousePosition
struct UGameMenuEntrySlider_C_SetSliderPositionFromMousePosition_Params
{
	struct FVector2D                                   MousePos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               SliderValueChanged;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateSliderBubblePosition
struct UGameMenuEntrySlider_C_UpdateSliderBubblePosition_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValue
struct UGameMenuEntrySlider_C_GetSliderValue_Params
{
	float                                              SliderValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.ConvertValToNormalizedSliderRangeFloat
struct UGameMenuEntrySlider_C_ConvertValToNormalizedSliderRangeFloat_Params
{
	float                                              ValueToConvert;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedVal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValueAsNormalizedFloat
struct UGameMenuEntrySlider_C_GetSliderValueAsNormalizedFloat_Params
{
	float                                              NormalizedSliderVal;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValue
struct UGameMenuEntrySlider_C_SetSliderValue_Params
{
	float                                              SliderValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidChange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetMenuFocusWidgetSize
struct UGameMenuEntrySlider_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.LayoutWidget
struct UGameMenuEntrySlider_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditingItemValueIncremeneted
struct UGameMenuEntrySlider_C_OnEditingItemValueIncremeneted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditiingItemValueDecremeneted
struct UGameMenuEntrySlider_C_OnEditiingItemValueDecremeneted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragMoved
struct UGameMenuEntrySlider_C_OnDragMoved_Params
{
	struct FVector2D                                   MousePosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   MousePosDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCommited
struct UGameMenuEntrySlider_C_OnEditOrDragCommited_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragStarted
struct UGameMenuEntrySlider_C_OnEditOrDragStarted_Params
{
	struct FVector2D                                   MousePosition;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCancelled
struct UGameMenuEntrySlider_C_OnEditOrDragCancelled_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.Construct
struct UGameMenuEntrySlider_C_Construct_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateColors
struct UGameMenuEntrySlider_C_UpdateColors_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetupStylingData
struct UGameMenuEntrySlider_C_SetupStylingData_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.HandleGameMenuResized
struct UGameMenuEntrySlider_C_HandleGameMenuResized_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDiscreteEditStarted
struct UGameMenuEntrySlider_C_OnDiscreteEditStarted_Params
{
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragEditStarted
struct UGameMenuEntrySlider_C_OnDragEditStarted_Params
{
	struct FVector2D                                   MousePosition;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.ExecuteUbergraph_GameMenuEntrySlider
struct UGameMenuEntrySlider_C_ExecuteUbergraph_GameMenuEntrySlider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditValueUpdated__DelegateSignature
struct UGameMenuEntrySlider_C_SliderEditValueUpdated__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCanceled__DelegateSignature
struct UGameMenuEntrySlider_C_SliderEditCanceled__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalSliderValue;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuEntrySlider_C_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
