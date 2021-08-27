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

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.LayoutWidget
struct UManageFriendPopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UManageFriendPopoutContents_C_BndEvt__InviteFriend_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UManageFriendPopoutContents_C_BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_1
struct UManageFriendPopoutContents_C_CustomEvent_1_Params
{
	bool                                               success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToJoin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAstroServerInfo                            serverInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               requiresPassword;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     lastJoinedPassword;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerNicknameOrURL;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_2
struct UManageFriendPopoutContents_C_CustomEvent_2_Params
{
	bool                                               succes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_3
struct UManageFriendPopoutContents_C_CustomEvent_3_Params
{
	struct FString                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.CustomEvent_4
struct UManageFriendPopoutContents_C_CustomEvent_4_Params
{
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UManageFriendPopoutContents_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
struct UManageFriendPopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.ExecuteUbergraph_ManageFriendPopoutContents
struct UManageFriendPopoutContents_C_ExecuteUbergraph_ManageFriendPopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageFriendPopoutContents.ManageFriendPopoutContents_C.DedicatedServerAdded__DelegateSignature
struct UManageFriendPopoutContents_C_DedicatedServerAdded__DelegateSignature_Params
{
	struct FText                                       IP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ServerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
