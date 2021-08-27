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

// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.UpdateInfo
struct UMineralExtractorControlPanelPrimary_C_UpdateInfo_Params
{
	class UClass*                                      MineralToExtract;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumAvailableItems;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvailableExtractionCountActual;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolatedMaxExtractionCount;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SoilLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.Construct
struct UMineralExtractorControlPanelPrimary_C_Construct_Params
{
};

// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.ExecuteUbergraph_MineralExtractorControlPanelPrimary
struct UMineralExtractorControlPanelPrimary_C_ExecuteUbergraph_MineralExtractorControlPanelPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
