
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

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpikeProjectileNoExplode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.UserConstructionScript");

	ASpikeProjectileNoExplode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileNoExplode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveTick");

	ASpikeProjectileNoExplode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void ASpikeProjectileNoExplode_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.Destroy Particle");

	ASpikeProjectileNoExplode_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileNoExplode_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.DestroyFinished");

	ASpikeProjectileNoExplode_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpikeProjectileNoExplode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveBeginPlay");

	ASpikeProjectileNoExplode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASpikeProjectileNoExplode_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");

	ASpikeProjectileNoExplode_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileNoExplode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveEndPlay");

	ASpikeProjectileNoExplode_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ExecuteUbergraph_SpikeProjectileNoExplode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpikeProjectileNoExplode_C::ExecuteUbergraph_SpikeProjectileNoExplode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ExecuteUbergraph_SpikeProjectileNoExplode");

	ASpikeProjectileNoExplode_C_ExecuteUbergraph_SpikeProjectileNoExplode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
