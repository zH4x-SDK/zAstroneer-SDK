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

// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdatePhaseBarGraphics
struct UResearchModuleControlPanelPrimary_VariableRates_C_UpdatePhaseBarGraphics_Params
{
	int                                                BarIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.Set Research Subject Definition
struct UResearchModuleControlPanelPrimary_VariableRates_C_Set_Research_Subject_Definition_Params
{
	class UResearchSubjectDefinition*                  Research_Subject_Def;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemType*                                   Item_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.ToggleHideCrackedDisplay
struct UResearchModuleControlPanelPrimary_VariableRates_C_ToggleHideCrackedDisplay_Params
{
	bool                                               cracked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdateForResearchReplicationData
struct UResearchModuleControlPanelPrimary_VariableRates_C_UpdateForResearchReplicationData_Params
{
	struct FResearchReplicationData                    ResearchReplicationData;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
