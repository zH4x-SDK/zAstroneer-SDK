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

// Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.SetAnalysisInProgress
struct UTerrainAnalyzerBP_C_SetAnalysisInProgress_Params
{
	bool                                               InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.ExecuteUbergraph_TerrainAnalyzerBP
struct UTerrainAnalyzerBP_C_ExecuteUbergraph_TerrainAnalyzerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
