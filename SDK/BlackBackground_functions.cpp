
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

// Function BlackBackground.BlackBackground_C.SetOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlackBackground_C::SetOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackBackground.BlackBackground_C.SetOpacity");

	UBlackBackground_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackBackground.BlackBackground_C.Binding_GetColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBlackBackground_C::Binding_GetColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackBackground.BlackBackground_C.Binding_GetColorAndOpacity");

	UBlackBackground_C_Binding_GetColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlackBackground.BlackBackground_C.ResetTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlackBackground_C::ResetTimer(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackBackground.BlackBackground_C.ResetTimer");

	UBlackBackground_C_ResetTimer_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackBackground.BlackBackground_C.DoFade
// (Private, BlueprintCallable, BlueprintEvent)

void UBlackBackground_C::DoFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackBackground.BlackBackground_C.DoFade");

	UBlackBackground_C_DoFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackBackground.BlackBackground_C.Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialDelay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlackBackground_C::Fade(float Time, float Opacity, float InitialDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackBackground.BlackBackground_C.Fade");

	UBlackBackground_C_Fade_Params params;
	params.Time = Time;
	params.Opacity = Opacity;
	params.InitialDelay = InitialDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
