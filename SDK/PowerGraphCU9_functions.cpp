
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

// Function PowerGraphCU9.PowerGraphCU9_C.AnimatePowerGraph
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerGraphCU9_C::AnimatePowerGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.AnimatePowerGraph");

	UPowerGraphCU9_C_AnimatePowerGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.ResetPowerIconColor
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerGraphCU9_C::ResetPowerIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.ResetPowerIconColor");

	UPowerGraphCU9_C_ResetPowerIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.PulsePowerIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerGraphCU9_C::PulsePowerIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.PulsePowerIcon");

	UPowerGraphCU9_C_PulsePowerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.ToggleHidePowerDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cracked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerGraphCU9_C::ToggleHidePowerDisplay(bool cracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.ToggleHidePowerDisplay");

	UPowerGraphCU9_C_ToggleHidePowerDisplay_Params params;
	params.cracked = cracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.UpdateForResearchReplicationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResearchReplicationData ResearchReplicationData        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPowerGraphCU9_C::UpdateForResearchReplicationData(const struct FResearchReplicationData& ResearchReplicationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.UpdateForResearchReplicationData");

	UPowerGraphCU9_C_UpdateForResearchReplicationData_Params params;
	params.ResearchReplicationData = ResearchReplicationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerGraphCU9_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.Tick");

	UPowerGraphCU9_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerGraphCU9.PowerGraphCU9_C.ExecuteUbergraph_PowerGraphCU9
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerGraphCU9_C::ExecuteUbergraph_PowerGraphCU9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerGraphCU9.PowerGraphCU9_C.ExecuteUbergraph_PowerGraphCU9");

	UPowerGraphCU9_C_ExecuteUbergraph_PowerGraphCU9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
