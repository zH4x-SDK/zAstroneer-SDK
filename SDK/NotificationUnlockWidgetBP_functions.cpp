
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

// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNotificationUnlockWidgetBP_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.LayoutWidget");

	UNotificationUnlockWidgetBP_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UNotificationUnlockWidgetBP_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.SetupStylingData");

	UNotificationUnlockWidgetBP_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotificationUnlockWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.Construct");

	UNotificationUnlockWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.HandleMaxLifetimeReached
// (BlueprintCallable, BlueprintEvent)

void UNotificationUnlockWidgetBP_C::HandleMaxLifetimeReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.HandleMaxLifetimeReached");

	UNotificationUnlockWidgetBP_C_HandleMaxLifetimeReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationUnlockWidgetBP_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.OnAnimationFinished");

	UNotificationUnlockWidgetBP_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.ExecuteUbergraph_NotificationUnlockWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationUnlockWidgetBP_C::ExecuteUbergraph_NotificationUnlockWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationUnlockWidgetBP.NotificationUnlockWidgetBP_C.ExecuteUbergraph_NotificationUnlockWidgetBP");

	UNotificationUnlockWidgetBP_C_ExecuteUbergraph_NotificationUnlockWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
