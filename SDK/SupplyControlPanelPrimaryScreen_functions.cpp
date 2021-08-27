
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

// Function SupplyControlPanelPrimaryScreen.SupplyControlPanelPrimaryScreen_C.UpdatePanelVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstDeployHasBeenDone         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USupplyControlPanelPrimaryScreen_C::UpdatePanelVisuals(bool FirstDeployHasBeenDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanelPrimaryScreen.SupplyControlPanelPrimaryScreen_C.UpdatePanelVisuals");

	USupplyControlPanelPrimaryScreen_C_UpdatePanelVisuals_Params params;
	params.FirstDeployHasBeenDone = FirstDeployHasBeenDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
