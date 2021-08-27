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

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnAddedToFocusPath
struct UWBP_StoreTileBase_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnRemovedFromFocusPath
struct UWBP_StoreTileBase_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.ExecuteUbergraph_WBP_StoreTileBase
struct UWBP_StoreTileBase_C_ExecuteUbergraph_WBP_StoreTileBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileReleased__DelegateSignature
struct UWBP_StoreTileBase_C_OnTileReleased__DelegateSignature_Params
{
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTilePressed__DelegateSignature
struct UWBP_StoreTileBase_C_OnTilePressed__DelegateSignature_Params
{
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileRemovedFromFocusPath__DelegateSignature
struct UWBP_StoreTileBase_C_OnTileRemovedFromFocusPath__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileAddedToFocusPath__DelegateSignature
struct UWBP_StoreTileBase_C_OnTileAddedToFocusPath__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
