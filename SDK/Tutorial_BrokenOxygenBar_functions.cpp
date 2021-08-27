
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

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.SetVentingEffectsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_BrokenOxygenBar_C::SetVentingEffectsActive(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.SetVentingEffectsActive");

	ATutorial_BrokenOxygenBar_C_SetVentingEffectsActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATutorial_BrokenOxygenBar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.UserConstructionScript");

	ATutorial_BrokenOxygenBar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_BrokenOxygenBar_C::BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	ATutorial_BrokenOxygenBar_C_BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_BrokenOxygenBar_C::BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");

	ATutorial_BrokenOxygenBar_C_BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.ExecuteUbergraph_Tutorial_BrokenOxygenBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorial_BrokenOxygenBar_C::ExecuteUbergraph_Tutorial_BrokenOxygenBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.ExecuteUbergraph_Tutorial_BrokenOxygenBar");

	ATutorial_BrokenOxygenBar_C_ExecuteUbergraph_Tutorial_BrokenOxygenBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
