
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

// Function Hazard_Spiker_3.Hazard_Spiker_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.UserConstructionScript");

	AHazard_Spiker_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_2_C::CustomEvent_2(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.CustomEvent_2");

	AHazard_Spiker_2_C_CustomEvent_2_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHazard_Spiker_2_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature");

	AHazard_Spiker_2_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_2_C::BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature");

	AHazard_Spiker_2_C_BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Spiker_2_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AHazard_Spiker_2_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Spiker_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.ReceiveBeginPlay");

	AHazard_Spiker_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.MULTI Spawn Seeds
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_2_C::MULTI_Spawn_Seeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.MULTI Spawn Seeds");

	AHazard_Spiker_2_C_MULTI_Spawn_Seeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_2_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.ReceiveEndPlay");

	AHazard_Spiker_2_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_2_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.DestroyFinished");

	AHazard_Spiker_2_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_2_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.Destroy Particle");

	AHazard_Spiker_2_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Spiker_3.Hazard_Spiker_2_C.ExecuteUbergraph_Hazard_Spiker_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Spiker_2_C::ExecuteUbergraph_Hazard_Spiker_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_3.Hazard_Spiker_2_C.ExecuteUbergraph_Hazard_Spiker_3");

	AHazard_Spiker_2_C_ExecuteUbergraph_Hazard_Spiker_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
