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

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.GetTetherAttachPoints
struct APlatform_Standard_T2x1_P3_BP_C_GetTetherAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                AttachPoints;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.UserConstructionScript
struct APlatform_Standard_T2x1_P3_BP_C_UserConstructionScript_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.ReceiveBeginPlay
struct APlatform_Standard_T2x1_P3_BP_C_ReceiveBeginPlay_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.SetupPrimarySlots
struct APlatform_Standard_T2x1_P3_BP_C_SetupPrimarySlots_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.SetupCableSlots
struct APlatform_Standard_T2x1_P3_BP_C_SetupCableSlots_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.SetupSecondarySlots
struct APlatform_Standard_T2x1_P3_BP_C_SetupSecondarySlots_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.DroppedInWorld
struct APlatform_Standard_T2x1_P3_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.PickedUpFromWorld
struct APlatform_Standard_T2x1_P3_BP_C_PickedUpFromWorld_Params
{
};

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.ReceiveHit
struct APlatform_Standard_T2x1_P3_BP_C_ReceiveHit_Params
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

// Function Platform_Standard_T2x1_P3_BP.Platform_Standard_T2x1_P3_BP_C.ExecuteUbergraph_Platform_Standard_T2x1_P3_BP
struct APlatform_Standard_T2x1_P3_BP_C_ExecuteUbergraph_Platform_Standard_T2x1_P3_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
