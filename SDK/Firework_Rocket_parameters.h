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

// Function Firework_Rocket.Firework_Rocket_C.TrackActivatingPlayer
struct AFirework_Rocket_C_TrackActivatingPlayer_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.GetBodySlotLegacy
struct AFirework_Rocket_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Firework_Rocket.Firework_Rocket_C.Set FX
struct AFirework_Rocket_C_Set_FX_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Firework_Rocket.Firework_Rocket_C.UserConstructionScript
struct AFirework_Rocket_C_UserConstructionScript_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AFirework_Rocket_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Firework_Rocket.Firework_Rocket_C.DroppedInWorld
struct AFirework_Rocket_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Firework_Rocket.Firework_Rocket_C.PickedUpFromWorld
struct AFirework_Rocket_C_PickedUpFromWorld_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.ReceiveTick
struct AFirework_Rocket_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Firework_Rocket.Firework_Rocket_C.ReceiveBeginPlay
struct AFirework_Rocket_C_ReceiveBeginPlay_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.ReceiveHit
struct AFirework_Rocket_C_ReceiveHit_Params
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

// Function Firework_Rocket.Firework_Rocket_C.LaunchRocket
struct AFirework_Rocket_C_LaunchRocket_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.MULTI Instant Particles
struct AFirework_Rocket_C_MULTI_Instant_Particles_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.MULTI__Activate Effects
struct AFirework_Rocket_C_MULTI__Activate_Effects_Params
{
};

// Function Firework_Rocket.Firework_Rocket_C.ExecuteUbergraph_Firework_Rocket
struct AFirework_Rocket_C_ExecuteUbergraph_Firework_Rocket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
