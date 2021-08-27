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

// Function PressAToStart.PressAToStart_C.OnPressAToastComplete
struct UPressAToStart_C_OnPressAToastComplete_Params
{
};

// Function PressAToStart.PressAToStart_C.TryWelcomeControllingPlayer
struct UPressAToStart_C_TryWelcomeControllingPlayer_Params
{
};

// Function PressAToStart.PressAToStart_C.OnFadeOutComplete
struct UPressAToStart_C_OnFadeOutComplete_Params
{
};

// Function PressAToStart.PressAToStart_C.StartFadeOut
struct UPressAToStart_C_StartFadeOut_Params
{
};

// Function PressAToStart.PressAToStart_C.OnKeyDown
struct UPressAToStart_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PressAToStart.PressAToStart_C.Tick
struct UPressAToStart_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PressAToStart.PressAToStart_C.Construct
struct UPressAToStart_C_Construct_Params
{
};

// Function PressAToStart.PressAToStart_C.OnControllingPlayerSet
struct UPressAToStart_C_OnControllingPlayerSet_Params
{
};

// Function PressAToStart.PressAToStart_C.Destruct
struct UPressAToStart_C_Destruct_Params
{
};

// Function PressAToStart.PressAToStart_C.ExecuteUbergraph_PressAToStart
struct UPressAToStart_C_ExecuteUbergraph_PressAToStart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
