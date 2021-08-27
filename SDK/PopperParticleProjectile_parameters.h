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

// Function PopperParticleProjectile.PopperParticleProjectile_C.UserConstructionScript
struct APopperParticleProjectile_C_UserConstructionScript_Params
{
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveBeginPlay
struct APopperParticleProjectile_C_ReceiveBeginPlay_Params
{
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveTick
struct APopperParticleProjectile_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.Destroy Particle
struct APopperParticleProjectile_C_Destroy_Particle_Params
{
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.DestroyFinished
struct APopperParticleProjectile_C_DestroyFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.ReceiveHit
struct APopperParticleProjectile_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PopperParticleProjectile.PopperParticleProjectile_C.ExecuteUbergraph_PopperParticleProjectile
struct APopperParticleProjectile_C_ExecuteUbergraph_PopperParticleProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
