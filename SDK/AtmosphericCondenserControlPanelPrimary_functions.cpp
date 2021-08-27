
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

// Function AtmosphericCondenserControlPanelPrimary.AtmosphericCondenserControlPanelPrimary_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumAvailableItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GasToCondense                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Density                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASolarBody*              PlanetRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAtmosphericCondenserControlPanelPrimary_C::UpdateInfo(int ItemIndex, int NumAvailableItems, class UClass* GasToCondense, float Density, class ASolarBody* PlanetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtmosphericCondenserControlPanelPrimary.AtmosphericCondenserControlPanelPrimary_C.UpdateInfo");

	UAtmosphericCondenserControlPanelPrimary_C_UpdateInfo_Params params;
	params.ItemIndex = ItemIndex;
	params.NumAvailableItems = NumAvailableItems;
	params.GasToCondense = GasToCondense;
	params.Density = Density;
	params.PlanetRef = PlanetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
