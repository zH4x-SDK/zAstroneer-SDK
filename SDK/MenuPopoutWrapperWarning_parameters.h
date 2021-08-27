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

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.GetUnboundedDimensionOfSubPane
struct UMenuPopoutWrapperWarning_C_GetUnboundedDimensionOfSubPane_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.GetPopoutPanelWrapper
struct UMenuPopoutWrapperWarning_C_GetPopoutPanelWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.GetPopoutOutermostContainer
struct UMenuPopoutWrapperWarning_C_GetPopoutOutermostContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.UpdateTextWidgets
struct UMenuPopoutWrapperWarning_C_UpdateTextWidgets_Params
{
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.LayoutWidget
struct UMenuPopoutWrapperWarning_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.GetPopoutContentsWrapper
struct UMenuPopoutWrapperWarning_C_GetPopoutContentsWrapper_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.OnFocusIndexChanged
struct UMenuPopoutWrapperWarning_C_OnFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.SetupStylingData
struct UMenuPopoutWrapperWarning_C_SetupStylingData_Params
{
};

// Function MenuPopoutWrapperWarning.MenuPopoutWrapperWarning_C.ExecuteUbergraph_MenuPopoutWrapperWarning
struct UMenuPopoutWrapperWarning_C_ExecuteUbergraph_MenuPopoutWrapperWarning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
