
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

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.SetBackpackCameraStateEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BackpackEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_Discovery_C::SetBackpackCameraStateEnabled(bool BackpackEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.SetBackpackCameraStateEnabled");

	AAstroCorpse_Discovery_C_SetBackpackCameraStateEnabled_Params params;
	params.BackpackEnabled = BackpackEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAstroCorpse_Discovery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.UserConstructionScript");

	AAstroCorpse_Discovery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAstroCorpse_Discovery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveBeginPlay");

	AAstroCorpse_Discovery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstroCorpse_Discovery_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.OnClicked_Event_1");

	AAstroCorpse_Discovery_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_Discovery_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveTick");

	AAstroCorpse_Discovery_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ClickUnhandled_Event_1
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_Discovery_C::ClickUnhandled_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ClickUnhandled_Event_1");

	AAstroCorpse_Discovery_C_ClickUnhandled_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAstroCorpse_Discovery_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveDestroyed");

	AAstroCorpse_Discovery_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.EnableLight
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_Discovery_C::EnableLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.EnableLight");

	AAstroCorpse_Discovery_C_EnableLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.DisableLight
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_Discovery_C::DisableLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.DisableLight");

	AAstroCorpse_Discovery_C_DisableLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AAstroCorpse_Discovery_C::BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AAstroCorpse_Discovery_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void AAstroCorpse_Discovery_C::BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	AAstroCorpse_Discovery_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ExecuteUbergraph_AstroCorpse_Discovery
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_Discovery_C::ExecuteUbergraph_AstroCorpse_Discovery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ExecuteUbergraph_AstroCorpse_Discovery");

	AAstroCorpse_Discovery_C_ExecuteUbergraph_AstroCorpse_Discovery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
