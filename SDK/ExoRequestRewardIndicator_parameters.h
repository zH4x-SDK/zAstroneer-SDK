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

// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.UpdateInfo
struct UExoRequestRewardIndicator_C_UpdateInfo_Params
{
	bool                                               IsHighlighted;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondary;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.PreConstruct
struct UExoRequestRewardIndicator_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.ExecuteUbergraph_ExoRequestRewardIndicator
struct UExoRequestRewardIndicator_C_ExecuteUbergraph_ExoRequestRewardIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
