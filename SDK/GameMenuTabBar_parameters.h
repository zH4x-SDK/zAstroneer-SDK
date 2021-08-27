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

// Function GameMenuTabBar.GameMenuTabBar_C.GetHeightOfTabBar
struct UGameMenuTabBar_C_GetHeightOfTabBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuTabBar.GameMenuTabBar_C.LayoutWidget
struct UGameMenuTabBar_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuTabBar.GameMenuTabBar_C.SetupStylingData
struct UGameMenuTabBar_C_SetupStylingData_Params
{
};

// Function GameMenuTabBar.GameMenuTabBar_C.ExecuteUbergraph_GameMenuTabBar
struct UGameMenuTabBar_C_ExecuteUbergraph_GameMenuTabBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
