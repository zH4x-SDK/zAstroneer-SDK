
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.SetAnalysisInProgress
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainAnalyzerBP_C::SetAnalysisInProgress(bool InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.SetAnalysisInProgress");

	UTerrainAnalyzerBP_C_SetAnalysisInProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.ExecuteUbergraph_TerrainAnalyzerBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainAnalyzerBP_C::ExecuteUbergraph_TerrainAnalyzerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzerBP.TerrainAnalyzerBP_C.ExecuteUbergraph_TerrainAnalyzerBP");

	UTerrainAnalyzerBP_C_ExecuteUbergraph_TerrainAnalyzerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
