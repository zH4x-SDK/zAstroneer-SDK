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

// Function Glowstick_Bundle.Glowstick_Bundle_C.UserConstructionScript
struct AGlowstick_Bundle_C_UserConstructionScript_Params
{
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.CustomEvent
struct AGlowstick_Bundle_C_CustomEvent_Params
{
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.OnChanged_Event_1
struct AGlowstick_Bundle_C_OnChanged_Event_1_Params
{
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.DroppedInWorld
struct AGlowstick_Bundle_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.PickedUpFromWorld
struct AGlowstick_Bundle_C_PickedUpFromWorld_Params
{
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.ReceiveHit
struct AGlowstick_Bundle_C_ReceiveHit_Params
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

// Function Glowstick_Bundle.Glowstick_Bundle_C.ReceiveBeginPlay
struct AGlowstick_Bundle_C_ReceiveBeginPlay_Params
{
};

// Function Glowstick_Bundle.Glowstick_Bundle_C.ExecuteUbergraph_Glowstick_Bundle
struct AGlowstick_Bundle_C_ExecuteUbergraph_Glowstick_Bundle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
