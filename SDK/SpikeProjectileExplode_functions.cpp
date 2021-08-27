
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

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpikeProjectileExplode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.UserConstructionScript");

	ASpikeProjectileExplode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileExplode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveTick");

	ASpikeProjectileExplode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void ASpikeProjectileExplode_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.Destroy Particle");

	ASpikeProjectileExplode_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileExplode_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.DestroyFinished");

	ASpikeProjectileExplode_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpikeProjectileExplode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveBeginPlay");

	ASpikeProjectileExplode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASpikeProjectileExplode_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ASpikeProjectileExplode_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileExplode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveEndPlay");

	ASpikeProjectileExplode_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ExecuteUbergraph_SpikeProjectileExplode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileExplode_C::ExecuteUbergraph_SpikeProjectileExplode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileExplode.SpikeProjectileExplode_C.ExecuteUbergraph_SpikeProjectileExplode");

	ASpikeProjectileExplode_C_ExecuteUbergraph_SpikeProjectileExplode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
