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

// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ConfigureVisuals
struct UCombinerControlPanelPrimary_C_ConfigureVisuals_Params
{
	EItemConverterState                                ConversionState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.UpdateInfo
struct UCombinerControlPanelPrimary_C_UpdateInfo_Params
{
	class UClass*                                      ItemToCraft;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemConversionInputItemStatus>      RegularIngredientStatuses;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FItemConversionInputItemStatus>      FuelStatuses;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumAvailableItems;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                ConversionState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.Construct
struct UCombinerControlPanelPrimary_C_Construct_Params
{
};

// Function CombinerControlPanelPrimary.CombinerControlPanelPrimary_C.ExecuteUbergraph_CombinerControlPanelPrimary
struct UCombinerControlPanelPrimary_C_ExecuteUbergraph_CombinerControlPanelPrimary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
