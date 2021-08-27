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

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.GetActiveTabString
struct UWBP_StoreSubTabBar_C_GetActiveTabString_Params
{
	struct FString                                     TabString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnFakeKeyDown
struct UWBP_StoreSubTabBar_C_OnFakeKeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PopulateTabs
struct UWBP_StoreSubTabBar_C_PopulateTabs_Params
{
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PreConstruct
struct UWBP_StoreSubTabBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.Construct
struct UWBP_StoreSubTabBar_C_Construct_Params
{
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnInputDeviceChanged_Event_1
struct UWBP_StoreSubTabBar_C_OnInputDeviceChanged_Event_1_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabCategorySelected
struct UWBP_StoreSubTabBar_C_OnTabCategorySelected_Params
{
	class UUserWidget*                                 SelectedWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.ExecuteUbergraph_WBP_StoreSubTabBar
struct UWBP_StoreSubTabBar_C_ExecuteUbergraph_WBP_StoreSubTabBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabIndexChanged__DelegateSignature
struct UWBP_StoreSubTabBar_C_OnTabIndexChanged__DelegateSignature_Params
{
	struct FString                                     ActiveIndexString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnGamepadInputWhileFocused__DelegateSignature
struct UWBP_StoreSubTabBar_C_OnGamepadInputWhileFocused__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
