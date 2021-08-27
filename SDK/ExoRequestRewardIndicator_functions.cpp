
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

// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSecondary                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestRewardIndicator_C::UpdateInfo(bool IsHighlighted, int ScoreThreshold, bool IsSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.UpdateInfo");

	UExoRequestRewardIndicator_C_UpdateInfo_Params params;
	params.IsHighlighted = IsHighlighted;
	params.ScoreThreshold = ScoreThreshold;
	params.IsSecondary = IsSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestRewardIndicator_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.PreConstruct");

	UExoRequestRewardIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.ExecuteUbergraph_ExoRequestRewardIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestRewardIndicator_C::ExecuteUbergraph_ExoRequestRewardIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestRewardIndicator.ExoRequestRewardIndicator_C.ExecuteUbergraph_ExoRequestRewardIndicator");

	UExoRequestRewardIndicator_C_ExecuteUbergraph_ExoRequestRewardIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
