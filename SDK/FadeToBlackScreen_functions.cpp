
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UFadeToBlackScreen_C::TriggerFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeIn");

	UFadeToBlackScreen_C_TriggerFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UFadeToBlackScreen_C::TriggerFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.TriggerFadeOut");

	UFadeToBlackScreen_C_TriggerFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.SetOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFadeToBlackScreen_C::SetOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.SetOpacity");

	UFadeToBlackScreen_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.Binding_GetColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UFadeToBlackScreen_C::Binding_GetColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.Binding_GetColorAndOpacity");

	UFadeToBlackScreen_C_Binding_GetColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.ResetTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFadeToBlackScreen_C::ResetTimer(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.ResetTimer");

	UFadeToBlackScreen_C_ResetTimer_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.DoFade
// (Private, BlueprintCallable, BlueprintEvent)

void UFadeToBlackScreen_C::DoFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.DoFade");

	UFadeToBlackScreen_C_DoFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialDelay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFadeToBlackScreen_C::Fade(float Time, float Opacity, float InitialDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.Fade");

	UFadeToBlackScreen_C_Fade_Params params;
	params.Time = Time;
	params.Opacity = Opacity;
	params.InitialDelay = InitialDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFadeToBlackScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.Construct");

	UFadeToBlackScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.OnTransitionComplete
// (BlueprintCallable, BlueprintEvent)

void UFadeToBlackScreen_C::OnTransitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.OnTransitionComplete");

	UFadeToBlackScreen_C_OnTransitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.ExecuteUbergraph_FadeToBlackScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFadeToBlackScreen_C::ExecuteUbergraph_FadeToBlackScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.ExecuteUbergraph_FadeToBlackScreen");

	UFadeToBlackScreen_C_ExecuteUbergraph_FadeToBlackScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackScreen.FadeToBlackScreen_C.TransitionComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFadeToBlackScreen_C::TransitionComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackScreen.FadeToBlackScreen_C.TransitionComplete__DelegateSignature");

	UFadeToBlackScreen_C_TransitionComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
