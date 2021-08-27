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

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.GetTooltipDisplayAndProximityData
struct ATutorial_POI_Tooltip_C_GetTooltipDisplayAndProximityData_Params
{
	struct FTooltipWidgetDisplayData                   RevisedTooltipData;                                       // (Parm, OutParm)
	struct FTooltipProximityBadgeVisibilityData        RevisedProximityData;                                     // (Parm, OutParm)
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetCanShowDetails
struct ATutorial_POI_Tooltip_C_SetCanShowDetails_Params
{
	bool                                               CanShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.CheckShowTooltipDetails
struct ATutorial_POI_Tooltip_C_CheckShowTooltipDetails_Params
{
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetTooltipEnabled
struct ATutorial_POI_Tooltip_C_SetTooltipEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.UserConstructionScript
struct ATutorial_POI_Tooltip_C_UserConstructionScript_Params
{
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ReceiveBeginPlay
struct ATutorial_POI_Tooltip_C_ReceiveBeginPlay_Params
{
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.OnSelfDestroyed
struct ATutorial_POI_Tooltip_C_OnSelfDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ExecuteUbergraph_Tutorial_POI_Tooltip
struct ATutorial_POI_Tooltip_C_ExecuteUbergraph_Tutorial_POI_Tooltip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
