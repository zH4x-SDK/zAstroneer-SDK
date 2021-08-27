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

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.GetScrollBarWidth
struct UAstroMenuScrollBar_C_GetScrollBarWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.Construct
struct UAstroMenuScrollBar_C_Construct_Params
{
};

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.CustomEvent_1
struct UAstroMenuScrollBar_C_CustomEvent_1_Params
{
	struct FVector2D                                   MousePosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   MousePosDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.SetupStylingData
struct UAstroMenuScrollBar_C_SetupStylingData_Params
{
};

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.ExecuteUbergraph_AstroMenuScrollBar
struct UAstroMenuScrollBar_C_ExecuteUbergraph_AstroMenuScrollBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
