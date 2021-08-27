#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct TutorialObjective.TutorialObjective
// 0x0031
struct FTutorialObjective
{
	TEnumAsByte<ETutorialObjectiveKeys>                ObjectiveKey_12_D1A8076B42EB7CD6724BDDBA2B0C1AB3;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ObjectiveHeader_2_AB87BDA443FDF677C1E764992A8578A0;       // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<struct FTutorialSubGoal>                    SubGoals_6_50EB396741316B6CD8EE838CC76B4476;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               CompletionRecorded_8_8C9F5A92424B7A92B57957ADEA29D983;    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
