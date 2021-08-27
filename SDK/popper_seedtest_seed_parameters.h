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

// Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Movable
struct Apopper_seedtest_seed_C_OnRep_REP_Movable_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Growth
struct Apopper_seedtest_seed_C_OnRep_REP_Growth_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.Update View
struct Apopper_seedtest_seed_C_Update_View_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.GetBodySlotLegacy
struct Apopper_seedtest_seed_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.UserConstructionScript
struct Apopper_seedtest_seed_C_UserConstructionScript_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.DroppedInWorld
struct Apopper_seedtest_seed_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.Spawn Spiker
struct Apopper_seedtest_seed_C_Spawn_Spiker_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.PickedUpFromWorld
struct Apopper_seedtest_seed_C_PickedUpFromWorld_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveTick
struct Apopper_seedtest_seed_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveBeginPlay
struct Apopper_seedtest_seed_C_ReceiveBeginPlay_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.Initial Kill
struct Apopper_seedtest_seed_C_Initial_Kill_Params
{
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.PlacedInSlot
struct Apopper_seedtest_seed_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popper_seedtest_seed.popper_seedtest_seed_C.ExecuteUbergraph_popper_seedtest_seed
struct Apopper_seedtest_seed_C_ExecuteUbergraph_popper_seedtest_seed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
