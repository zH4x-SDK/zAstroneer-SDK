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

// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.UpdateInfo
struct UExoRequestRewardEntry_C_UpdateInfo_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SubTitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ScoreThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RewardIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    EventInputIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHighlighted;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.Construct
struct UExoRequestRewardEntry_C_Construct_Params
{
};

// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.ExecuteUbergraph_ExoRequestRewardEntry
struct UExoRequestRewardEntry_C_ExecuteUbergraph_ExoRequestRewardEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
