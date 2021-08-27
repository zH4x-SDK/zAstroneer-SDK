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

// Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeIn
struct UFadeToBlackScreen_C_TriggerFadeIn_Params
{
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeOut
struct UFadeToBlackScreen_C_TriggerFadeOut_Params
{
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.SetOpacity
struct UFadeToBlackScreen_C_SetOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.Binding_GetColorAndOpacity
struct UFadeToBlackScreen_C_Binding_GetColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.ResetTimer
struct UFadeToBlackScreen_C_ResetTimer_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.DoFade
struct UFadeToBlackScreen_C_DoFade_Params
{
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.Fade
struct UFadeToBlackScreen_C_Fade_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialDelay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.Construct
struct UFadeToBlackScreen_C_Construct_Params
{
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.OnTransitionComplete
struct UFadeToBlackScreen_C_OnTransitionComplete_Params
{
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.ExecuteUbergraph_FadeToBlackScreen
struct UFadeToBlackScreen_C_ExecuteUbergraph_FadeToBlackScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FadeToBlackScreen.FadeToBlackScreen_C.TransitionComplete__DelegateSignature
struct UFadeToBlackScreen_C_TransitionComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
