
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

// Function ResearchModuleControlPanelPrimaryScreen.ResearchModuleControlPanelPrimaryScreen_C.ToggleHideCrackedDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cracked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearchModuleControlPanelPrimaryScreen_C::ToggleHideCrackedDisplay(bool cracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimaryScreen.ResearchModuleControlPanelPrimaryScreen_C.ToggleHideCrackedDisplay");

	UResearchModuleControlPanelPrimaryScreen_C_ToggleHideCrackedDisplay_Params params;
	params.cracked = cracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanelPrimaryScreen.ResearchModuleControlPanelPrimaryScreen_C.UpdateForResearchReplicationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResearchReplicationData ResearchReplicationData        (BlueprintVisible, BlueprintReadOnly, Parm)

void UResearchModuleControlPanelPrimaryScreen_C::UpdateForResearchReplicationData(const struct FResearchReplicationData& ResearchReplicationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimaryScreen.ResearchModuleControlPanelPrimaryScreen_C.UpdateForResearchReplicationData");

	UResearchModuleControlPanelPrimaryScreen_C_UpdateForResearchReplicationData_Params params;
	params.ResearchReplicationData = ResearchReplicationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
