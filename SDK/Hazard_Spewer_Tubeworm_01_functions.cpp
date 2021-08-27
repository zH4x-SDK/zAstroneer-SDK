
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

// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Spewer_Tubeworm_01_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.HandleOnDeformationEvent");

	AHazard_Spewer_Tubeworm_01_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.OnRep_IsSpewing
// (BlueprintCallable, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::OnRep_IsSpewing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.OnRep_IsSpewing");

	AHazard_Spewer_Tubeworm_01_C_OnRep_IsSpewing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.Check Plucked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play_Sound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spewer_Tubeworm_01_C::Check_Plucked(bool Play_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.Check Plucked");

	AHazard_Spewer_Tubeworm_01_C_Check_Plucked_Params params;
	params.Play_Sound = Play_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.OnRep_Plucked
// (BlueprintCallable, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::OnRep_Plucked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.OnRep_Plucked");

	AHazard_Spewer_Tubeworm_01_C_OnRep_Plucked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.UserConstructionScript");

	AHazard_Spewer_Tubeworm_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spewer_Tubeworm_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ReceiveTick");

	AHazard_Spewer_Tubeworm_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ReceiveBeginPlay");

	AHazard_Spewer_Tubeworm_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.Destroy Particle");

	AHazard_Spewer_Tubeworm_01_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AHazard_Spewer_Tubeworm_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spewer_Tubeworm_01_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.DestroyFinished");

	AHazard_Spewer_Tubeworm_01_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.MULTI Spawn Researchable
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Spewer_Tubeworm_01_C::MULTI_Spawn_Researchable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.MULTI Spawn Researchable");

	AHazard_Spewer_Tubeworm_01_C_MULTI_Spawn_Researchable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_6_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Spewer_Tubeworm_01_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_6_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_6_OnDeformed__DelegateSignature");

	AHazard_Spewer_Tubeworm_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_6_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ExecuteUbergraph_Hazard_Spewer_Tubeworm_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spewer_Tubeworm_01_C::ExecuteUbergraph_Hazard_Spewer_Tubeworm_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spewer_Tubeworm_01.Hazard_Spewer_Tubeworm_01_C.ExecuteUbergraph_Hazard_Spewer_Tubeworm_01");

	AHazard_Spewer_Tubeworm_01_C_ExecuteUbergraph_Hazard_Spewer_Tubeworm_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
