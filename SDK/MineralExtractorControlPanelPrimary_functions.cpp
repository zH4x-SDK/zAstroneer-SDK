
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

// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MineralToExtract               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumAvailableItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AvailableExtractionCountActual (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolatedMaxExtractionCount (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SoilLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMineralExtractorControlPanelPrimary_C::UpdateInfo(class UClass* MineralToExtract, int NumAvailableItems, int ItemIndex, int AvailableExtractionCountActual, int InterpolatedMaxExtractionCount, float SoilLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.UpdateInfo");

	UMineralExtractorControlPanelPrimary_C_UpdateInfo_Params params;
	params.MineralToExtract = MineralToExtract;
	params.NumAvailableItems = NumAvailableItems;
	params.ItemIndex = ItemIndex;
	params.AvailableExtractionCountActual = AvailableExtractionCountActual;
	params.InterpolatedMaxExtractionCount = InterpolatedMaxExtractionCount;
	params.SoilLevel = SoilLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMineralExtractorControlPanelPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.Construct");

	UMineralExtractorControlPanelPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.ExecuteUbergraph_MineralExtractorControlPanelPrimary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMineralExtractorControlPanelPrimary_C::ExecuteUbergraph_MineralExtractorControlPanelPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractorControlPanelPrimary.MineralExtractorControlPanelPrimary_C.ExecuteUbergraph_MineralExtractorControlPanelPrimary");

	UMineralExtractorControlPanelPrimary_C_ExecuteUbergraph_MineralExtractorControlPanelPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
