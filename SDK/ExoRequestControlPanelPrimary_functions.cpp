
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

// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateUnclaimedRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasUnclaimedRewards            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestControlPanelPrimary_C::UpdateUnclaimedRewards(bool HasUnclaimedRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateUnclaimedRewards");

	UExoRequestControlPanelPrimary_C_UpdateUnclaimedRewards_Params params;
	params.HasUnclaimedRewards = HasUnclaimedRewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdatePageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrScreenIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EventIsActive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestControlPanelPrimary_C::UpdatePageVisibility(int CurrScreenIndex, bool EventIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdatePageVisibility");

	UExoRequestControlPanelPrimary_C_UpdatePageVisibility_Params params;
	params.CurrScreenIndex = CurrScreenIndex;
	params.EventIsActive = EventIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExoRequestReward> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture*                EventInputIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventMaxScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventMinScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestControlPanelPrimary_C::UpdateRewards(class UTexture* EventInputIcon, int EventScore, int EventMaxScore, int EventMinScore, TArray<struct FExoRequestReward>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateRewards");

	UExoRequestControlPanelPrimary_C_UpdateRewards_Params params;
	params.EventInputIcon = EventInputIcon;
	params.EventScore = EventScore;
	params.EventMaxScore = EventMaxScore;
	params.EventMinScore = EventMinScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShipContentsValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EExoRequestStatus              Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EventDescription               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            EventDaysRemaining             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                EventInputIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FExoRequestReward> EventRewards                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            EventProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventMinProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventMaxProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalBytes                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LaunchByteCost                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsProgressionDisabled          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestControlPanelPrimary_C::UpdateInfo(int ShipContentsValue, EExoRequestStatus Status, const struct FText& EventName, const struct FText& EventDescription, int EventDaysRemaining, class UTexture* EventInputIcon, int EventProgress, int EventMinProgress, int EventMaxProgress, int TotalBytes, int LaunchByteCost, bool IsProgressionDisabled, TArray<struct FExoRequestReward>* EventRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.UpdateInfo");

	UExoRequestControlPanelPrimary_C_UpdateInfo_Params params;
	params.ShipContentsValue = ShipContentsValue;
	params.Status = Status;
	params.EventName = EventName;
	params.EventDescription = EventDescription;
	params.EventDaysRemaining = EventDaysRemaining;
	params.EventInputIcon = EventInputIcon;
	params.EventProgress = EventProgress;
	params.EventMinProgress = EventMinProgress;
	params.EventMaxProgress = EventMaxProgress;
	params.TotalBytes = TotalBytes;
	params.LaunchByteCost = LaunchByteCost;
	params.IsProgressionDisabled = IsProgressionDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventRewards != nullptr)
		*EventRewards = params.EventRewards;
}


// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExoRequestControlPanelPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.Construct");

	UExoRequestControlPanelPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.ExecuteUbergraph_ExoRequestControlPanelPrimary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestControlPanelPrimary_C::ExecuteUbergraph_ExoRequestControlPanelPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestControlPanelPrimary.ExoRequestControlPanelPrimary_C.ExecuteUbergraph_ExoRequestControlPanelPrimary");

	UExoRequestControlPanelPrimary_C_ExecuteUbergraph_ExoRequestControlPanelPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
