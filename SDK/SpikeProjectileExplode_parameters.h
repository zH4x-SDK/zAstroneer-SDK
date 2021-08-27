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

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.UserConstructionScript
struct ASpikeProjectileExplode_C_UserConstructionScript_Params
{
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveTick
struct ASpikeProjectileExplode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.Destroy Particle
struct ASpikeProjectileExplode_C_Destroy_Particle_Params
{
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.DestroyFinished
struct ASpikeProjectileExplode_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveBeginPlay
struct ASpikeProjectileExplode_C_ReceiveBeginPlay_Params
{
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ASpikeProjectileExplode_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ReceiveEndPlay
struct ASpikeProjectileExplode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeProjectileExplode.SpikeProjectileExplode_C.ExecuteUbergraph_SpikeProjectileExplode
struct ASpikeProjectileExplode_C_ExecuteUbergraph_SpikeProjectileExplode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
