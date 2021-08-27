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

// UserDefinedStruct TutorialSubGoal.TutorialSubGoal
// 0x0022
struct FTutorialSubGoal
{
	TEnumAsByte<ETutorialSubGoalKeys>                  SubGoalKey_13_50EB396741316B6CD8EE838CC76B4476;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       SubGoalHeader_6_AB87BDA443FDF677C1E764992A8578A0;         // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               GoalComplete_12_3CC20A844A9A629916E6E5B4F921401D;         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CompletionRecorded_15_F32B90A4488176EE92D18B9EF3F94238;   // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
