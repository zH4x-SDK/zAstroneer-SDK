
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

// Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AControlPanelDeleteButton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.UserConstructionScript");

	AControlPanelDeleteButton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.UpdateButtonVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AControlPanelDeleteButton_C::UpdateButtonVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.UpdateButtonVisuals");

	AControlPanelDeleteButton_C_UpdateButtonVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.ExecuteUbergraph_ControlPanelDeleteButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AControlPanelDeleteButton_C::ExecuteUbergraph_ControlPanelDeleteButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPanelDeleteButton.ControlPanelDeleteButton_C.ExecuteUbergraph_ControlPanelDeleteButton");

	AControlPanelDeleteButton_C_ExecuteUbergraph_ControlPanelDeleteButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
