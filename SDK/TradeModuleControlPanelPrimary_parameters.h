#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.OverrideVisible
struct UTradeModuleControlPanelPrimary_C_OverrideVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.UpdateInfo
struct UTradeModuleControlPanelPrimary_C_UpdateInfo_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumAvailableItems;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputResource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutputResource;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TradeRatioInput;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TradeRatioOutput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InputProvided;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTradeGroups;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TradeActive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.Construct
struct UTradeModuleControlPanelPrimary_C_Construct_Params
{
};

// Function TradeModuleControlPanelPrimary.TradeModuleControlPanelPrimary_C.ExecuteUbergraph_TradeModuleControlPanelPrimary
struct UTradeModuleControlPanelPrimary_C_ExecuteUbergraph_TradeModuleControlPanelPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
