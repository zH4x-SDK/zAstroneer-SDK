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

// Function Seat_Medium_SS.Seat_Medium_SS_C.UserConstructionScript
struct ASeat_Medium_SS_C_UserConstructionScript_Params
{
};

// Function Seat_Medium_SS.Seat_Medium_SS_C.CustomEvent
struct ASeat_Medium_SS_C_CustomEvent_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Medium_SS.Seat_Medium_SS_C.PickedUpFromWorld
struct ASeat_Medium_SS_C_PickedUpFromWorld_Params
{
};

// Function Seat_Medium_SS.Seat_Medium_SS_C.DroppedInWorld
struct ASeat_Medium_SS_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Seat_Medium_SS.Seat_Medium_SS_C.ExecuteUbergraph_Seat_Medium_SS
struct ASeat_Medium_SS_C_ExecuteUbergraph_Seat_Medium_SS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
