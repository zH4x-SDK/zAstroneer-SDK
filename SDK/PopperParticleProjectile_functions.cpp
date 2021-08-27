
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

// Function PopperParticleProjectile.PopperParticleProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APopperParticleProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.UserConstructionScript");

	APopperParticleProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APopperParticleProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveBeginPlay");

	APopperParticleProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopperParticleProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveTick");

	APopperParticleProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void APopperParticleProjectile_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.Destroy Particle");

	APopperParticleProjectile_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopperParticleProjectile_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.DestroyFinished");

	APopperParticleProjectile_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APopperParticleProjectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveHit");

	APopperParticleProjectile_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopperParticleProjectile.PopperParticleProjectile_C.ExecuteUbergraph_PopperParticleProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopperParticleProjectile_C::ExecuteUbergraph_PopperParticleProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopperParticleProjectile.PopperParticleProjectile_C.ExecuteUbergraph_PopperParticleProjectile");

	APopperParticleProjectile_C_ExecuteUbergraph_PopperParticleProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
