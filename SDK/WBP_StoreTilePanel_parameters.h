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

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnFocusReceived
struct UWBP_StoreTilePanel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.PopulateItems
struct UWBP_StoreTilePanel_C_PopulateItems_Params
{
	TArray<struct FAstroMicroTxnCombinedItem>          Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     categoryKeyString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.Construct
struct UWBP_StoreTilePanel_C_Construct_Params
{
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnAddedToFocusPath
struct UWBP_StoreTilePanel_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildAddedToFocusPath
struct UWBP_StoreTilePanel_C_OnChildAddedToFocusPath_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildRemovedFromFocusPath
struct UWBP_StoreTilePanel_C_OnChildRemovedFromFocusPath_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnRemovedFromFocusPath
struct UWBP_StoreTilePanel_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TilePressed
struct UWBP_StoreTilePanel_C_TilePressed_Params
{
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TileReleased
struct UWBP_StoreTilePanel_C_TileReleased_Params
{
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.ExecuteUbergraph_WBP_StoreTilePanel
struct UWBP_StoreTilePanel_C_ExecuteUbergraph_WBP_StoreTilePanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileAddedToFocusPath__DelegateSignature
struct UWBP_StoreTilePanel_C_OnTileAddedToFocusPath__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileReleased__DelegateSignature
struct UWBP_StoreTilePanel_C_OnTileReleased__DelegateSignature_Params
{
};

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTilePressed__DelegateSignature
struct UWBP_StoreTilePanel_C_OnTilePressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
