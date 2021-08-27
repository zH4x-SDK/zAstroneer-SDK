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

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.LayoutWidget
struct UNotificationUnlockWidgetBP_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.SetupStylingData
struct UNotificationUnlockWidgetBP_C_SetupStylingData_Params
{
};

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.Construct
struct UNotificationUnlockWidgetBP_C_Construct_Params
{
};

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.HandleMaxLifetimeReached
struct UNotificationUnlockWidgetBP_C_HandleMaxLifetimeReached_Params
{
};

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.OnAnimationFinished
struct UNotificationUnlockWidgetBP_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.ExecuteUbergraph_NotificationUnlockWidgetBP
struct UNotificationUnlockWidgetBP_C_ExecuteUbergraph_NotificationUnlockWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
