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

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.LayoutWidget
struct UAstropediaTutorialCardCarousel_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnMouseMove
struct UAstropediaTutorialCardCarousel_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateCarouselTitle
struct UAstropediaTutorialCardCarousel_C_UpdateCarouselTitle_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateTutorialPageWidgets
struct UAstropediaTutorialCardCarousel_C_UpdateTutorialPageWidgets_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateTo
struct UAstropediaTutorialCardCarousel_C_NavigateTo_Params
{
	int                                                ScreenIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.DismissHelpMenu
struct UAstropediaTutorialCardCarousel_C_DismissHelpMenu_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateNavButtons
struct UAstropediaTutorialCardCarousel_C_UpdateNavButtons_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateNext
struct UAstropediaTutorialCardCarousel_C_NavigateNext_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigatePrevious
struct UAstropediaTutorialCardCarousel_C_NavigatePrevious_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnKeyDown
struct UAstropediaTutorialCardCarousel_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.Construct
struct UAstropediaTutorialCardCarousel_C_Construct_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UAstropediaTutorialCardCarousel_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
struct UAstropediaTutorialCardCarousel_C_BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
struct UAstropediaTutorialCardCarousel_C_BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.HandleInputDeviceChanged
struct UAstropediaTutorialCardCarousel_C_HandleInputDeviceChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.CustomEvent_1
struct UAstropediaTutorialCardCarousel_C_CustomEvent_1_Params
{
	int                                                SelectedPipIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.ExecuteUbergraph_AstropediaTutorialCardCarousel
struct UAstropediaTutorialCardCarousel_C_ExecuteUbergraph_AstropediaTutorialCardCarousel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnHide__DelegateSignature
struct UAstropediaTutorialCardCarousel_C_OnHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
