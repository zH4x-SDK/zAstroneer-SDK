
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

// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.GetTooltipDisplayAndProximityData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipWidgetDisplayData RevisedTooltipData             (Parm, OutParm)
// struct FTooltipProximityBadgeVisibilityData RevisedProximityData           (Parm, OutParm)

void ATutorial_POI_Tooltip_C::GetTooltipDisplayAndProximityData(struct FTooltipWidgetDisplayData* RevisedTooltipData, struct FTooltipProximityBadgeVisibilityData* RevisedProximityData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.GetTooltipDisplayAndProximityData");

	ATutorial_POI_Tooltip_C_GetTooltipDisplayAndProximityData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RevisedTooltipData != nullptr)
		*RevisedTooltipData = params.RevisedTooltipData;
	if (RevisedProximityData != nullptr)
		*RevisedProximityData = params.RevisedProximityData;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetCanShowDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_POI_Tooltip_C::SetCanShowDetails(bool CanShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetCanShowDetails");

	ATutorial_POI_Tooltip_C_SetCanShowDetails_Params params;
	params.CanShow = CanShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.CheckShowTooltipDetails
// (Public, BlueprintCallable, BlueprintEvent)

void ATutorial_POI_Tooltip_C::CheckShowTooltipDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.CheckShowTooltipDetails");

	ATutorial_POI_Tooltip_C_CheckShowTooltipDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetTooltipEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_POI_Tooltip_C::SetTooltipEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.SetTooltipEnabled");

	ATutorial_POI_Tooltip_C_SetTooltipEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATutorial_POI_Tooltip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.UserConstructionScript");

	ATutorial_POI_Tooltip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATutorial_POI_Tooltip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ReceiveBeginPlay");

	ATutorial_POI_Tooltip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.OnSelfDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_POI_Tooltip_C::OnSelfDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.OnSelfDestroyed");

	ATutorial_POI_Tooltip_C_OnSelfDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ExecuteUbergraph_Tutorial_POI_Tooltip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_POI_Tooltip_C::ExecuteUbergraph_Tutorial_POI_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C.ExecuteUbergraph_Tutorial_POI_Tooltip");

	ATutorial_POI_Tooltip_C_ExecuteUbergraph_Tutorial_POI_Tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
