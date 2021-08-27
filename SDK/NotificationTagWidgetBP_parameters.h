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

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardRenderSize
struct UNotificationTagWidgetBP_C_GetUICardRenderSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardScreenPosOffset
struct UNotificationTagWidgetBP_C_GetUICardScreenPosOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.CalculateBounds
struct UNotificationTagWidgetBP_C_CalculateBounds_Params
{
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.LayoutWidget
struct UNotificationTagWidgetBP_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.UpdateAnimationVisuals
struct UNotificationTagWidgetBP_C_UpdateAnimationVisuals_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.PlayArrowFadeAnimation_2
struct UNotificationTagWidgetBP_C_PlayArrowFadeAnimation_2_Params
{
};

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.ExecuteUbergraph_NotificationTagWidgetBP
struct UNotificationTagWidgetBP_C_ExecuteUbergraph_NotificationTagWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
