
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

// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.OverrideVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTradeModuleControlPanelPrimary_C::OverrideVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.OverrideVisible");

	UTradeModuleControlPanelPrimary_C_OverrideVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumAvailableItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InputResource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutputResource                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TradeRatioInput                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TradeRatioOutput               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InputProvided                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTradeGroups                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TradeActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTradeModuleControlPanelPrimary_C::UpdateInfo(int ItemIndex, int NumAvailableItems, class UClass* InputResource, class UClass* OutputResource, int TradeRatioInput, int TradeRatioOutput, int InputProvided, int MaxTradeGroups, bool TradeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.UpdateInfo");

	UTradeModuleControlPanelPrimary_C_UpdateInfo_Params params;
	params.ItemIndex = ItemIndex;
	params.NumAvailableItems = NumAvailableItems;
	params.InputResource = InputResource;
	params.OutputResource = OutputResource;
	params.TradeRatioInput = TradeRatioInput;
	params.TradeRatioOutput = TradeRatioOutput;
	params.InputProvided = InputProvided;
	params.MaxTradeGroups = MaxTradeGroups;
	params.TradeActive = TradeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTradeModuleControlPanelPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.Construct");

	UTradeModuleControlPanelPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.ExecuteUbergraph_TradeModuleControlPanelPrimary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTradeModuleControlPanelPrimary_C::ExecuteUbergraph_TradeModuleControlPanelPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.ExecuteUbergraph_TradeModuleControlPanelPrimary");

	UTradeModuleControlPanelPrimary_C_ExecuteUbergraph_TradeModuleControlPanelPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
