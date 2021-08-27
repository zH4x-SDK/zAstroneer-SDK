
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

// Function ThrusterComponent.ThrusterComponent_C.Setup FX Arrays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UThrusterComponent_C::Setup_FX_Arrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.Setup FX Arrays");

	UThrusterComponent_C_Setup_FX_Arrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterComponent.ThrusterComponent_C.Set FX Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThrusterComponent_C::Set_FX_Active(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.Set FX Active");

	UThrusterComponent_C_Set_FX_Active_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterComponent.ThrusterComponent_C.Update FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* FX                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThrusterComponent_C::Update_FX(int Index, class UParticleSystemComponent* FX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.Update FX");

	UThrusterComponent_C_Update_FX_Params params;
	params.Index = Index;
	params.FX = FX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterComponent.ThrusterComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UThrusterComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.ReceiveBeginPlay");

	UThrusterComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterComponent.ThrusterComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThrusterComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.ReceiveTick");

	UThrusterComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterComponent.ThrusterComponent_C.ExecuteUbergraph_ThrusterComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThrusterComponent_C::ExecuteUbergraph_ThrusterComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterComponent.ThrusterComponent_C.ExecuteUbergraph_ThrusterComponent");

	UThrusterComponent_C_ExecuteUbergraph_ThrusterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
