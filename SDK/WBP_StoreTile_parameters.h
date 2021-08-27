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

// Function WBP_StoreTile.WBP_StoreTile_C.SetupTile
struct UWBP_StoreTile_C_SetupTile_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.OnFocusReceived
struct UWBP_StoreTile_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_StoreTile.WBP_StoreTile_C.PreConstruct
struct UWBP_StoreTile_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreTile.WBP_StoreTile_C.Construct
struct UWBP_StoreTile_C_Construct_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreTile_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreTile_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.OnAddedToFocusPath
struct UWBP_StoreTile_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTile.WBP_StoreTile_C.OnRemovedFromFocusPath
struct UWBP_StoreTile_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreTile.WBP_StoreTile_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWBP_StoreTile_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWBP_StoreTile_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreTile.WBP_StoreTile_C.ExecuteUbergraph_WBP_StoreTile
struct UWBP_StoreTile_C_ExecuteUbergraph_WBP_StoreTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
