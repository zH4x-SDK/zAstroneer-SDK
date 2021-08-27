
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

// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SubTitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ScoreThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                RewardIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                EventInputIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHighlighted                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestRewardEntry_C::UpdateInfo(const struct FText& Title, const struct FText& SubTitle, int ScoreThreshold, class UTexture* RewardIcon, class UTexture* EventInputIcon, bool IsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.UpdateInfo");

	UExoRequestRewardEntry_C_UpdateInfo_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.ScoreThreshold = ScoreThreshold;
	params.RewardIcon = RewardIcon;
	params.EventInputIcon = EventInputIcon;
	params.IsHighlighted = IsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExoRequestRewardEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.Construct");

	UExoRequestRewardEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.ExecuteUbergraph_ExoRequestRewardEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestRewardEntry_C::ExecuteUbergraph_ExoRequestRewardEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardEntry.ExoRequestRewardEntry_C.ExecuteUbergraph_ExoRequestRewardEntry");

	UExoRequestRewardEntry_C_ExecuteUbergraph_ExoRequestRewardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
