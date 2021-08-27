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

// Function ChassisPad_Base.ChassisPad_Base_C.Undrill Terrain
struct AChassisPad_Base_C_Undrill_Terrain_Params
{
};

// Function ChassisPad_Base.ChassisPad_Base_C.Set Owner Physics
struct AChassisPad_Base_C_Set_Owner_Physics_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.SaveGameFixup
struct AChassisPad_Base_C_SaveGameFixup_Params
{
};

// Function ChassisPad_Base.ChassisPad_Base_C.Drill Terrain
struct AChassisPad_Base_C_Drill_Terrain_Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.UserConstructionScript
struct AChassisPad_Base_C_UserConstructionScript_Params
{
};

// Function ChassisPad_Base.ChassisPad_Base_C.ReceiveTick
struct AChassisPad_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.OnSpawn
struct AChassisPad_Base_C_OnSpawn_Params
{
	bool                                               withTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.OnPickedUpFromWorld_Event_1
struct AChassisPad_Base_C_OnPickedUpFromWorld_Event_1_Params
{
	bool                                               PhysicalMovement;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.OnDroppedInWorld_Event_1
struct AChassisPad_Base_C_OnDroppedInWorld_Event_1_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ChassisPad_Base.ChassisPad_Base_C.ExecuteUbergraph_ChassisPad_Base
struct AChassisPad_Base_C_ExecuteUbergraph_ChassisPad_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
