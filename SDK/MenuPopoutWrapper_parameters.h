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

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetUnboundedDimensionOfSubPane
struct UMenuPopoutWrapper_C_GetUnboundedDimensionOfSubPane_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutPanelWrapper
struct UMenuPopoutWrapper_C_GetPopoutPanelWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutOutermostContainer
struct UMenuPopoutWrapper_C_GetPopoutOutermostContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.UpdateTextWidgets
struct UMenuPopoutWrapper_C_UpdateTextWidgets_Params
{
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.LayoutWidget
struct UMenuPopoutWrapper_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutContentsWrapper
struct UMenuPopoutWrapper_C_GetPopoutContentsWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.OnFocusIndexChanged
struct UMenuPopoutWrapper_C_OnFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.ExecuteUbergraph_MenuPopoutWrapper
struct UMenuPopoutWrapper_C_ExecuteUbergraph_MenuPopoutWrapper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
