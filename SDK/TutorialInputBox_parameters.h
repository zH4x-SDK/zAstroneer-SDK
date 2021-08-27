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

// Function TutorialInputBox.TutorialInputBox_C.LayoutWidget
struct UTutorialInputBox_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutorialInputBox.TutorialInputBox_C.SetupStylingData
struct UTutorialInputBox_C_SetupStylingData_Params
{
};

// Function TutorialInputBox.TutorialInputBox_C.ExecuteUbergraph_TutorialInputBox
struct UTutorialInputBox_C_ExecuteUbergraph_TutorialInputBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
