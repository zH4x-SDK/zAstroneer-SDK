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

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.LayoutWidget
struct UJoinFriendPasswordPopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
struct UJoinFriendPasswordPopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UJoinFriendPasswordPopoutContents_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature
struct UJoinFriendPasswordPopoutContents_C_BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature_Params
{
	class UGameMenuEntryDoubleText_Edit_C*             TextEditWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.Construct
struct UJoinFriendPasswordPopoutContents_C_Construct_Params
{
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.ExecuteUbergraph_JoinFriendPasswordPopoutContents
struct UJoinFriendPasswordPopoutContents_C_ExecuteUbergraph_JoinFriendPasswordPopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnJoinCancelled__DelegateSignature
struct UJoinFriendPasswordPopoutContents_C_OnJoinCancelled__DelegateSignature_Params
{
};

// Function JoinFriendPasswordPopoutContents.JoinFriendPasswordPopoutContents_C.OnPasswordReceived__DelegateSignature
struct UJoinFriendPasswordPopoutContents_C_OnPasswordReceived__DelegateSignature_Params
{
	struct FString                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
