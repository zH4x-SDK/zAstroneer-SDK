
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

// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Gasbag_v1_BASE_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.HandleOnDeformationEvent");

	AHazard_Gasbag_v1_BASE_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.SpawnResearchable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::SpawnResearchable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.SpawnResearchable");

	AHazard_Gasbag_v1_BASE_C_SpawnResearchable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Check Plucked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play_Sound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v1_BASE_C::Check_Plucked(bool Play_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Check Plucked");

	AHazard_Gasbag_v1_BASE_C_Check_Plucked_Params params;
	params.Play_Sound = Play_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.OnRep_Plucked
// (BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::OnRep_Plucked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.OnRep_Plucked");

	AHazard_Gasbag_v1_BASE_C_OnRep_Plucked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Spawn Gas
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Follow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v1_BASE_C::Spawn_Gas(class AActor* Follow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Spawn Gas");

	AHazard_Gasbag_v1_BASE_C_Spawn_Gas_Params params;
	params.Follow = Follow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Hazard Tick
// (Public, BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::Hazard_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Hazard Tick");

	AHazard_Gasbag_v1_BASE_C_Hazard_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.UserConstructionScript");

	AHazard_Gasbag_v1_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveBeginPlay");

	AHazard_Gasbag_v1_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature");

	AHazard_Gasbag_v1_BASE_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_228_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v1_BASE_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ReceiveTick");

	AHazard_Gasbag_v1_BASE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.MULTI Spawn Gas Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::MULTI_Spawn_Gas_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.MULTI Spawn Gas Effects");

	AHazard_Gasbag_v1_BASE_C_MULTI_Spawn_Gas_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v1_BASE_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.Destroy Particle");

	AHazard_Gasbag_v1_BASE_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v1_BASE_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.DestroyFinished");

	AHazard_Gasbag_v1_BASE_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Gasbag_v1_BASE_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature");

	AHazard_Gasbag_v1_BASE_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_2_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ExecuteUbergraph_Hazard_Gasbag_v1_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v1_BASE_C::ExecuteUbergraph_Hazard_Gasbag_v1_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v1_BASE.Hazard_Gasbag_v1_BASE_C.ExecuteUbergraph_Hazard_Gasbag_v1_BASE");

	AHazard_Gasbag_v1_BASE_C_ExecuteUbergraph_Hazard_Gasbag_v1_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
