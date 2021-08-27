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

// Function WBP_StoreMenu.WBP_StoreMenu_C.UpdateClientDataUI
struct UWBP_StoreMenu_C_UpdateClientDataUI_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.PreviewItem
struct UWBP_StoreMenu_C_PreviewItem_Params
{
	struct FAstroMicroTxnCombinedItem                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BuildStoreItemList
struct UWBP_StoreMenu_C_BuildStoreItemList_Params
{
	struct FString                                     FilterTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FAstroMicroTxnCombinedItem>          OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.OnKeyDown
struct UWBP_StoreMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.OnFocusReceived
struct UWBP_StoreMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.PreConstruct
struct UWBP_StoreMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.Construct
struct UWBP_StoreMenu_C_Construct_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature_Params
{
	struct FString                                     ActiveIndexString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BeginHold
struct UWBP_StoreMenu_C_BeginHold_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.HoldSuccess
struct UWBP_StoreMenu_C_HoldSuccess_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.HoldCancel
struct UWBP_StoreMenu_C_HoldCancel_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature
struct UWBP_StoreMenu_C_BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.OnPlayFabTxnCompleted
struct UWBP_StoreMenu_C_OnPlayFabTxnCompleted_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.OnClientDataRefreshed
struct UWBP_StoreMenu_C_OnClientDataRefreshed_Params
{
};

// Function WBP_StoreMenu.WBP_StoreMenu_C.ExecuteUbergraph_WBP_StoreMenu
struct UWBP_StoreMenu_C_ExecuteUbergraph_WBP_StoreMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
