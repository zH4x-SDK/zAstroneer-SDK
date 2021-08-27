
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

// Function Hazard_Spiker_2.Hazard_Spiker_1_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Spiker_1_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.HandleOnDeformationEvent");

	AHazard_Spiker_1_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.UserConstructionScript");

	AHazard_Spiker_1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_1_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveTick");

	AHazard_Spiker_1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHazard_Spiker_1_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature");

	AHazard_Spiker_1_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_1_C::BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature");

	AHazard_Spiker_1_C_BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Spiker_1_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AHazard_Spiker_1_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Spiker_1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveBeginPlay");

	AHazard_Spiker_1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.MULTI Spawn Seeds
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_1_C::MULTI_Spawn_Seeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.MULTI Spawn Seeds");

	AHazard_Spiker_1_C_MULTI_Spawn_Seeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_1_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.ReceiveEndPlay");

	AHazard_Spiker_1_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_1_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.DestroyFinished");

	AHazard_Spiker_1_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_1_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.Destroy Particle");

	AHazard_Spiker_1_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Spiker_1_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature");

	AHazard_Spiker_1_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_7_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_2.Hazard_Spiker_1_C.ExecuteUbergraph_Hazard_Spiker_2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_1_C::ExecuteUbergraph_Hazard_Spiker_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_2.Hazard_Spiker_1_C.ExecuteUbergraph_Hazard_Spiker_2");

	AHazard_Spiker_1_C_ExecuteUbergraph_Hazard_Spiker_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
