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

// Function PowerGraphCU9.PowerGraphCU9_C.AnimatePowerGraph
struct UPowerGraphCU9_C_AnimatePowerGraph_Params
{
};

// Function PowerGraphCU9.PowerGraphCU9_C.ResetPowerIconColor
struct UPowerGraphCU9_C_ResetPowerIconColor_Params
{
};

// Function PowerGraphCU9.PowerGraphCU9_C.PulsePowerIcon
struct UPowerGraphCU9_C_PulsePowerIcon_Params
{
};

// Function PowerGraphCU9.PowerGraphCU9_C.ToggleHidePowerDisplay
struct UPowerGraphCU9_C_ToggleHidePowerDisplay_Params
{
	bool                                               cracked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerGraphCU9.PowerGraphCU9_C.UpdateForResearchReplicationData
struct UPowerGraphCU9_C_UpdateForResearchReplicationData_Params
{
	struct FResearchReplicationData                    ResearchReplicationData;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PowerGraphCU9.PowerGraphCU9_C.Tick
struct UPowerGraphCU9_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerGraphCU9.PowerGraphCU9_C.ExecuteUbergraph_PowerGraphCU9
struct UPowerGraphCU9_C_ExecuteUbergraph_PowerGraphCU9_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
