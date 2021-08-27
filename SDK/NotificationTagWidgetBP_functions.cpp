
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

// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardRenderSize
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNotificationTagWidgetBP_C::GetUICardRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardRenderSize");

	UNotificationTagWidgetBP_C_GetUICardRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardScreenPosOffset
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNotificationTagWidgetBP_C::GetUICardScreenPosOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.GetUICardScreenPosOffset");

	UNotificationTagWidgetBP_C_GetUICardScreenPosOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.CalculateBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNotificationTagWidgetBP_C::CalculateBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.CalculateBounds");

	UNotificationTagWidgetBP_C_CalculateBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNotificationTagWidgetBP_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.LayoutWidget");

	UNotificationTagWidgetBP_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.UpdateAnimationVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationTagWidgetBP_C::UpdateAnimationVisuals(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.UpdateAnimationVisuals");

	UNotificationTagWidgetBP_C_UpdateAnimationVisuals_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.PlayArrowFadeAnimation_2
// (BlueprintCallable, BlueprintEvent)

void UNotificationTagWidgetBP_C::PlayArrowFadeAnimation_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.PlayArrowFadeAnimation_2");

	UNotificationTagWidgetBP_C_PlayArrowFadeAnimation_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.ExecuteUbergraph_NotificationTagWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationTagWidgetBP_C::ExecuteUbergraph_NotificationTagWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationTagWidgetBP.NotificationTagWidgetBP_C.ExecuteUbergraph_NotificationTagWidgetBP");

	UNotificationTagWidgetBP_C_ExecuteUbergraph_NotificationTagWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
