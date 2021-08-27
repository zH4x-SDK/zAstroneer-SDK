
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

// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ConfigureVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemConverterState            ConversionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombinerControlPanelPrimary_C::ConfigureVisuals(EItemConverterState ConversionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ConfigureVisuals");

	UCombinerControlPanelPrimary_C_ConfigureVisuals_Params params;
	params.ConversionState = ConversionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.UpdateInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemToCraft                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemConversionInputItemStatus> RegularIngredientStatuses      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FItemConversionInputItemStatus> FuelStatuses                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumAvailableItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            ConversionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombinerControlPanelPrimary_C::UpdateInfo(class UClass* ItemToCraft, int NumAvailableItems, int ItemIndex, EItemConverterState ConversionState, TArray<struct FItemConversionInputItemStatus>* RegularIngredientStatuses, TArray<struct FItemConversionInputItemStatus>* FuelStatuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.UpdateInfo");

	UCombinerControlPanelPrimary_C_UpdateInfo_Params params;
	params.ItemToCraft = ItemToCraft;
	params.NumAvailableItems = NumAvailableItems;
	params.ItemIndex = ItemIndex;
	params.ConversionState = ConversionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegularIngredientStatuses != nullptr)
		*RegularIngredientStatuses = params.RegularIngredientStatuses;
	if (FuelStatuses != nullptr)
		*FuelStatuses = params.FuelStatuses;
}


// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCombinerControlPanelPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.Construct");

	UCombinerControlPanelPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ExecuteUbergraph_CombinerControlPanelPrimary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombinerControlPanelPrimary_C::ExecuteUbergraph_CombinerControlPanelPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ExecuteUbergraph_CombinerControlPanelPrimary");

	UCombinerControlPanelPrimary_C_ExecuteUbergraph_CombinerControlPanelPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
