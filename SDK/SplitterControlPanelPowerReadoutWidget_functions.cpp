
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

// Function SplitterControlPanelPowerReadoutWidget.SplitterControlPanelPowerReadoutWidget_C.UpdatePowerAmountDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PowerAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Connected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplitterControlPanelPowerReadoutWidget_C::UpdatePowerAmountDisplay(float PowerAmount, bool Connected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanelPowerReadoutWidget.SplitterControlPanelPowerReadoutWidget_C.UpdatePowerAmountDisplay");

	USplitterControlPanelPowerReadoutWidget_C_UpdatePowerAmountDisplay_Params params;
	params.PowerAmount = PowerAmount;
	params.Connected = Connected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
