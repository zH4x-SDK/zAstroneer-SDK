
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

// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Popper_Proximity_01_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.HandleOnDeformationEvent");

	AHazard_Popper_Proximity_01_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ResearchSpawnChance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_Proximity_01_C::ResearchSpawnChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ResearchSpawnChance");

	AHazard_Popper_Proximity_01_C_ResearchSpawnChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.OnRep_REP Enabled
// (BlueprintCallable, BlueprintEvent)

void AHazard_Popper_Proximity_01_C::OnRep_REP_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.OnRep_REP Enabled");

	AHazard_Popper_Proximity_01_C_OnRep_REP_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_Proximity_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.UserConstructionScript");

	AHazard_Popper_Proximity_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_Proximity_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveTick");

	AHazard_Popper_Proximity_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Popper_Proximity_01_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AHazard_Popper_Proximity_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Popper_Proximity_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ReceiveBeginPlay");

	AHazard_Popper_Proximity_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHazard_Popper_Proximity_01_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AHazard_Popper_Proximity_01_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_Proximity_01_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.DestroyFinished");

	AHazard_Popper_Proximity_01_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_Popper_Proximity_01_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.Destroy Particle");

	AHazard_Popper_Proximity_01_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature
// (BlueprintEvent)

void AHazard_Popper_Proximity_01_C::BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature");

	AHazard_Popper_Proximity_01_C_BndEvt__PlayerProximityTick_K2Node_ComponentBoundEvent_0_PlayerProximityTickDisableTickEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Popper_Proximity_01_C::BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AHazard_Popper_Proximity_01_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Popper_Proximity_01_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature");

	AHazard_Popper_Proximity_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_4_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.PlayDamageSFXMultiCast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              xform                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AHazard_Popper_Proximity_01_C::PlayDamageSFXMultiCast(const struct FTransform& xform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.PlayDamageSFXMultiCast");

	AHazard_Popper_Proximity_01_C_PlayDamageSFXMultiCast_Params params;
	params.xform = xform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ExecuteUbergraph_Hazard_Popper_Proximity_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_Proximity_01_C::ExecuteUbergraph_Hazard_Popper_Proximity_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Proximity_01.Hazard_Popper_Proximity_01_C.ExecuteUbergraph_Hazard_Popper_Proximity_01");

	AHazard_Popper_Proximity_01_C_ExecuteUbergraph_Hazard_Popper_Proximity_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
