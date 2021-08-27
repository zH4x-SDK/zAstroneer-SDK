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

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.UpdateText
struct UGameMenuStorageSpaceWarning_C_UpdateText_Params
{
};

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.GetMenuFocusWidgetSize
struct UGameMenuStorageSpaceWarning_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.LayoutWidget
struct UGameMenuStorageSpaceWarning_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.SetupStylingData
struct UGameMenuStorageSpaceWarning_C_SetupStylingData_Params
{
};

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.ExecuteUbergraph_GameMenuStorageSpaceWarning
struct UGameMenuStorageSpaceWarning_C_ExecuteUbergraph_GameMenuStorageSpaceWarning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
