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

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.GetTetherAttachPoints
struct APlatform_Ring_t1x6_p2_C_GetTetherAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                AttachPoints;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.UserConstructionScript
struct APlatform_Ring_t1x6_p2_C_UserConstructionScript_Params
{
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.SetupCableSlots
struct APlatform_Ring_t1x6_p2_C_SetupCableSlots_Params
{
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.PickedUpFromWorld
struct APlatform_Ring_t1x6_p2_C_PickedUpFromWorld_Params
{
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.DroppedInWorld
struct APlatform_Ring_t1x6_p2_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.ReceiveHit
struct APlatform_Ring_t1x6_p2_C_ReceiveHit_Params
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

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.ReceiveBeginPlay
struct APlatform_Ring_t1x6_p2_C_ReceiveBeginPlay_Params
{
};

// Function Platform_Ring_t1x6_p2.Platform_Ring_t1x6_p2_C.ExecuteUbergraph_Platform_Ring_t1x6_p2
struct APlatform_Ring_t1x6_p2_C_ExecuteUbergraph_Platform_Ring_t1x6_p2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
