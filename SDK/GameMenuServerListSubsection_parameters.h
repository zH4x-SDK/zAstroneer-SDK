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

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CreateServerEntryWidget
struct UGameMenuServerListSubsection_C_CreateServerEntryWidget_Params
{
	struct FAstroServerInfo                            serverInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGameMenuEntry_Base_C*                       NewWidget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateRecentServerList
struct UGameMenuServerListSubsection_C_UpdateRecentServerList_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateFavoriteServerList
struct UGameMenuServerListSubsection_C_UpdateFavoriteServerList_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.LayoutWidget
struct UGameMenuServerListSubsection_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.EventManageDedicatedServer
struct UGameMenuServerListSubsection_C_EventManageDedicatedServer_Params
{
	class UAstroGameMenuFocusItemWidget*               InstigatingWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerListSubsection_C_BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_1
struct UGameMenuServerListSubsection_C_CustomEvent_1_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.Construct
struct UGameMenuServerListSubsection_C_Construct_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ForceMenuRefresh
struct UGameMenuServerListSubsection_C_ForceMenuRefresh_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_2
struct UGameMenuServerListSubsection_C_CustomEvent_2_Params
{
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerListSubsection_C_BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ExecuteUbergraph_GameMenuServerListSubsection
struct UGameMenuServerListSubsection_C_ExecuteUbergraph_GameMenuServerListSubsection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
