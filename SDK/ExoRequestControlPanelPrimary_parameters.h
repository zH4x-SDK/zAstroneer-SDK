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

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateUnclaimedRewards
struct UExoRequestControlPanelPrimary_C_UpdateUnclaimedRewards_Params
{
	bool                                               HasUnclaimedRewards;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdatePageVisibility
struct UExoRequestControlPanelPrimary_C_UpdatePageVisibility_Params
{
	int                                                CurrScreenIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EventIsActive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateRewards
struct UExoRequestControlPanelPrimary_C_UpdateRewards_Params
{
	TArray<struct FExoRequestReward>                   Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture*                                    EventInputIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventMaxScore;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventMinScore;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateInfo
struct UExoRequestControlPanelPrimary_C_UpdateInfo_Params
{
	int                                                ShipContentsValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EExoRequestStatus                                  Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EventDescription;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EventDaysRemaining;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    EventInputIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FExoRequestReward>                   EventRewards;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                EventProgress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventMinProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventMaxProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalBytes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LaunchByteCost;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsProgressionDisabled;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.Construct
struct UExoRequestControlPanelPrimary_C_Construct_Params
{
};

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.ExecuteUbergraph_ExoRequestControlPanelPrimary
struct UExoRequestControlPanelPrimary_C_ExecuteUbergraph_ExoRequestControlPanelPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
