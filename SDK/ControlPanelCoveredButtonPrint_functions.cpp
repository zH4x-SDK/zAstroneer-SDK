
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

// Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AControlPanelCoveredButtonPrint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.UserConstructionScript");

	AControlPanelCoveredButtonPrint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.UpdateButtonVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AControlPanelCoveredButtonPrint_C::UpdateButtonVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.UpdateButtonVisuals");

	AControlPanelCoveredButtonPrint_C_UpdateButtonVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.ExecuteUbergraph_ControlPanelCoveredButtonPrint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AControlPanelCoveredButtonPrint_C::ExecuteUbergraph_ControlPanelCoveredButtonPrint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C.ExecuteUbergraph_ControlPanelCoveredButtonPrint");

	AControlPanelCoveredButtonPrint_C_ExecuteUbergraph_ControlPanelCoveredButtonPrint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
