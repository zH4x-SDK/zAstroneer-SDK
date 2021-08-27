#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.UserConstructionScript
struct ASpikeProjectileNoExplode_C_UserConstructionScript_Params
{
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveTick
struct ASpikeProjectileNoExplode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.Destroy Particle
struct ASpikeProjectileNoExplode_C_Destroy_Particle_Params
{
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.DestroyFinished
struct ASpikeProjectileNoExplode_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveBeginPlay
struct ASpikeProjectileNoExplode_C_ReceiveBeginPlay_Params
{
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct ASpikeProjectileNoExplode_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ReceiveEndPlay
struct ASpikeProjectileNoExplode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileNoExplode.SpikeProjectileNoExplode_C.ExecuteUbergraph_SpikeProjectileNoExplode
struct ASpikeProjectileNoExplode_C_ExecuteUbergraph_SpikeProjectileNoExplode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
