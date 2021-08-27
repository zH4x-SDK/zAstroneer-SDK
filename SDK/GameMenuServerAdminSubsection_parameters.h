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

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleAddPlayerToWhitelistByName
struct UGameMenuServerAdminSubsection_C_HandleAddPlayerToWhitelistByName_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ManageListedPlayer
struct UGameMenuServerAdminSubsection_C_ManageListedPlayer_Params
{
	class UAstroGameMenuFocusItemWidget*               PlayerEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdateSettings
struct UGameMenuServerAdminSubsection_C_UpdateSettings_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.UpdatePlayerLists
struct UGameMenuServerAdminSubsection_C_UpdatePlayerLists_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.LayoutWidget
struct UGameMenuServerAdminSubsection_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.Construct
struct UGameMenuServerAdminSubsection_C_Construct_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_1
struct UGameMenuServerAdminSubsection_C_CustomEvent_1_Params
{
	struct FServerStatistics                           ServerStatistics;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent_2
struct UGameMenuServerAdminSubsection_C_CustomEvent_2_Params
{
	struct FPlayerList                                 PlayerList;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ForceMenuRefresh
struct UGameMenuServerAdminSubsection_C_ForceMenuRefresh_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__EnableCreativeMode_K2Node_ComponentBoundEvent_68_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.HandleEnterCreativeModeAccepted
struct UGameMenuServerAdminSubsection_C_HandleEnterCreativeModeAccepted_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__RebootServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.CustomEvent1
struct UGameMenuServerAdminSubsection_C_CustomEvent1_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__EnforceWhitelist_K2Node_ComponentBoundEvent_42_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__ManageGameSession_K2Node_ComponentBoundEvent_209_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__ServerPassword2_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params
{
	class UGameMenuEntryDoubleText_Edit_C*             TextEditWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.OnPlayerCategoryChanged
struct UGameMenuServerAdminSubsection_C_OnPlayerCategoryChanged_Params
{
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__AddPlayerToWhitelist_K2Node_ComponentBoundEvent_53_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature
struct UGameMenuServerAdminSubsection_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_0_OnFocusItemMousePosInteraction__DelegateSignature_Params
{
	struct FVector2D                                   MousePosition;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuServerAdminSubsection.GameMenuServerAdminSubsection_C.ExecuteUbergraph_GameMenuServerAdminSubsection
struct UGameMenuServerAdminSubsection_C_ExecuteUbergraph_GameMenuServerAdminSubsection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
