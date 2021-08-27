#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TerrainAnalyzerBP.TerrainAnalyzerBP_C
// 0x0008 (0x0198 - 0x0190)
class UTerrainAnalyzerBP_C : public UTerrainAnalyzerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TerrainAnalyzerBP.TerrainAnalyzerBP_C");
		return ptr;
	}


	void SetAnalysisInProgress(bool InProgress);
	void ExecuteUbergraph_TerrainAnalyzerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
