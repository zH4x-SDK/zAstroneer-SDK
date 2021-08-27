
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

// Function FadeToBlackActor.FadeToBlackActor_C.DestroyFadeScreen
// (Public, BlueprintCallable, BlueprintEvent)

void AFadeToBlackActor_C::DestroyFadeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.DestroyFadeScreen");

	AFadeToBlackActor_C_DestroyFadeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.TriggerFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void AFadeToBlackActor_C::TriggerFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.TriggerFadeIn");

	AFadeToBlackActor_C_TriggerFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.TriggerFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void AFadeToBlackActor_C::TriggerFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.TriggerFadeOut");

	AFadeToBlackActor_C_TriggerFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFadeToBlackActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.UserConstructionScript");

	AFadeToBlackActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFadeToBlackActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.ReceiveBeginPlay");

	AFadeToBlackActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.OnTransitionComplete
// (BlueprintCallable, BlueprintEvent)

void AFadeToBlackActor_C::OnTransitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.OnTransitionComplete");

	AFadeToBlackActor_C_OnTransitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeToBlackActor.FadeToBlackActor_C.ExecuteUbergraph_FadeToBlackActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFadeToBlackActor_C::ExecuteUbergraph_FadeToBlackActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeToBlackActor.FadeToBlackActor_C.ExecuteUbergraph_FadeToBlackActor");

	AFadeToBlackActor_C_ExecuteUbergraph_FadeToBlackActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
