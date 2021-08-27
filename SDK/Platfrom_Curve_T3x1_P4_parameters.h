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

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.GetTetherAttachPoints
struct APlatfrom_Curve_T3x1_P4_C_GetTetherAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                AttachPoints;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.UserConstructionScript
struct APlatfrom_Curve_T3x1_P4_C_UserConstructionScript_Params
{
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.SetupCableSlots
struct APlatfrom_Curve_T3x1_P4_C_SetupCableSlots_Params
{
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.DroppedInWorld
struct APlatfrom_Curve_T3x1_P4_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.PickedUpFromWorld
struct APlatfrom_Curve_T3x1_P4_C_PickedUpFromWorld_Params
{
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.ReceiveHit
struct APlatfrom_Curve_T3x1_P4_C_ReceiveHit_Params
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

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.ReceiveBeginPlay
struct APlatfrom_Curve_T3x1_P4_C_ReceiveBeginPlay_Params
{
};

// Function Platfrom_Curve_T3x1_P4.Platfrom_Curve_T3x1_P4_C.ExecuteUbergraph_Platfrom_Curve_T3x1_P4
struct APlatfrom_Curve_T3x1_P4_C_ExecuteUbergraph_Platfrom_Curve_T3x1_P4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
