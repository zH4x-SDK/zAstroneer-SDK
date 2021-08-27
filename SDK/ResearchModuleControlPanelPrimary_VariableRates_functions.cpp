
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

// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdatePhaseBarGraphics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BarIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearchModuleControlPanelPrimary_VariableRates_C::UpdatePhaseBarGraphics(int BarIndex, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdatePhaseBarGraphics");

	UResearchModuleControlPanelPrimary_VariableRates_C_UpdatePhaseBarGraphics_Params params;
	params.BarIndex = BarIndex;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.Set Research Subject Definition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResearchSubjectDefinition* Research_Subject_Def           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemType*               Item_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearchModuleControlPanelPrimary_VariableRates_C::Set_Research_Subject_Definition(class UResearchSubjectDefinition* Research_Subject_Def, class UItemType* Item_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.Set Research Subject Definition");

	UResearchModuleControlPanelPrimary_VariableRates_C_Set_Research_Subject_Definition_Params params;
	params.Research_Subject_Def = Research_Subject_Def;
	params.Item_Type = Item_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.ToggleHideCrackedDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cracked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearchModuleControlPanelPrimary_VariableRates_C::ToggleHideCrackedDisplay(bool cracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.ToggleHideCrackedDisplay");

	UResearchModuleControlPanelPrimary_VariableRates_C_ToggleHideCrackedDisplay_Params params;
	params.cracked = cracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdateForResearchReplicationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResearchReplicationData ResearchReplicationData        (BlueprintVisible, BlueprintReadOnly, Parm)

void UResearchModuleControlPanelPrimary_VariableRates_C::UpdateForResearchReplicationData(const struct FResearchReplicationData& ResearchReplicationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanelPrimary_VariableRates.ResearchModuleControlPanelPrimary_VariableRates_C.UpdateForResearchReplicationData");

	UResearchModuleControlPanelPrimary_VariableRates_C_UpdateForResearchReplicationData_Params params;
	params.ResearchReplicationData = ResearchReplicationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
