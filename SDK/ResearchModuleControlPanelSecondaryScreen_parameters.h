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

// Function ResearchModuleControlPanelSecondaryScreen.ResearchModuleControlPanelSecondaryScreen_C.ToggleHideCrackedDisplay
struct UResearchModuleControlPanelSecondaryScreen_C_ToggleHideCrackedDisplay_Params
{
	bool                                               cracked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanelSecondaryScreen.ResearchModuleControlPanelSecondaryScreen_C.UpdateForResearchReplicationData
struct UResearchModuleControlPanelSecondaryScreen_C_UpdateForResearchReplicationData_Params
{
	struct FResearchReplicationData                    ResearchReplicationData;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
