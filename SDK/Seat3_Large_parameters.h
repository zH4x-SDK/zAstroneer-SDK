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

// Function Seat3_Large.Seat3_Large_C.UserConstructionScript
struct ASeat3_Large_C_UserConstructionScript_Params
{
};

// Function Seat3_Large.Seat3_Large_C.HandlePlayerEnterExit
struct ASeat3_Large_C_HandlePlayerEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat3_Large.Seat3_Large_C.PickedUpFromWorld
struct ASeat3_Large_C_PickedUpFromWorld_Params
{
};

// Function Seat3_Large.Seat3_Large_C.DroppedInWorld
struct ASeat3_Large_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Seat3_Large.Seat3_Large_C.ReceiveBeginPlay
struct ASeat3_Large_C_ReceiveBeginPlay_Params
{
};

// Function Seat3_Large.Seat3_Large_C.ExecuteUbergraph_Seat3_Large
struct ASeat3_Large_C_ExecuteUbergraph_Seat3_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
