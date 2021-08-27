
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

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterMapLoadingSpinner_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetPercent_1");

	UInterMapLoadingSpinner_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Get_LoadingMessage_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UInterMapLoadingSpinner_C::Get_LoadingMessage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Get_LoadingMessage_ColorAndOpacity_1");

	UInterMapLoadingSpinner_C_Get_LoadingMessage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetFadeTargetOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::GetFadeTargetOpacity(float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetFadeTargetOpacity");

	UInterMapLoadingSpinner_C_GetFadeTargetOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Opacity != nullptr)
		*Opacity = params.Opacity;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInterMapLoadingSpinner_C::GetContentColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_2");

	UInterMapLoadingSpinner_C_GetContentColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UInterMapLoadingSpinner_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Dismiss");

	UInterMapLoadingSpinner_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UInterMapLoadingSpinner_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMouseButtonDown_1");

	UInterMapLoadingSpinner_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInterMapLoadingSpinner_C::GetContentColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_1");

	UInterMapLoadingSpinner_C_GetContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ResetTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::ResetTimer(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ResetTimer");

	UInterMapLoadingSpinner_C_ResetTimer_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DoFade
// (Public, BlueprintCallable, BlueprintEvent)

void UInterMapLoadingSpinner_C::DoFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DoFade");

	UInterMapLoadingSpinner_C_DoFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialDelay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::Fade(float Time, float Opacity, float InitialDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Fade");

	UInterMapLoadingSpinner_C_Fade_Params params;
	params.Time = Time;
	params.Opacity = Opacity;
	params.InitialDelay = InitialDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.SetOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::SetOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.SetOpacity");

	UInterMapLoadingSpinner_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInterMapLoadingSpinner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Construct");

	UInterMapLoadingSpinner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Tick");

	UInterMapLoadingSpinner_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnFadeCompleted
// (BlueprintCallable, BlueprintEvent)

void UInterMapLoadingSpinner_C::OnFadeCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnFadeCompleted");

	UInterMapLoadingSpinner_C_OnFadeCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMapLoadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UInterMapLoadingSpinner_C::OnMapLoadStarted(const struct FString& Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMapLoadStarted");

	UInterMapLoadingSpinner_C_OnMapLoadStarted_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ExecuteUbergraph_InterMapLoadingSpinner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterMapLoadingSpinner_C::ExecuteUbergraph_InterMapLoadingSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ExecuteUbergraph_InterMapLoadingSpinner");

	UInterMapLoadingSpinner_C_ExecuteUbergraph_InterMapLoadingSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DismissClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInterMapLoadingSpinner_C::DismissClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DismissClicked__DelegateSignature");

	UInterMapLoadingSpinner_C_DismissClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
