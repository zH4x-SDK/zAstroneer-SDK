
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

// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.Check Plucked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play_Sound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABouncer_Geyser_01_C::Check_Plucked(bool Play_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.Check Plucked");

	ABouncer_Geyser_01_C_Check_Plucked_Params params;
	params.Play_Sound = Play_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.OnRep_Plucked
// (BlueprintCallable, BlueprintEvent)

void ABouncer_Geyser_01_C::OnRep_Plucked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.OnRep_Plucked");

	ABouncer_Geyser_01_C_OnRep_Plucked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABouncer_Geyser_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.UserConstructionScript");

	ABouncer_Geyser_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABouncer_Geyser_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.ReceiveBeginPlay");

	ABouncer_Geyser_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ABouncer_Geyser_01_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ABouncer_Geyser_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void ABouncer_Geyser_01_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.Destroy Particle");

	ABouncer_Geyser_01_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABouncer_Geyser_01_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.DestroyFinished");

	ABouncer_Geyser_01_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.ExecuteUbergraph_Bouncer_Geyser_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABouncer_Geyser_01_C::ExecuteUbergraph_Bouncer_Geyser_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bouncer_Geyser_01.Bouncer_Geyser_01_C.ExecuteUbergraph_Bouncer_Geyser_01");

	ABouncer_Geyser_01_C_ExecuteUbergraph_Bouncer_Geyser_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
