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

// Function Seat_Small_Cab.Seat_Small_Cab_C.UserConstructionScript
struct ASeat_Small_Cab_C_UserConstructionScript_Params
{
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.PickedUpFromWorld
struct ASeat_Small_Cab_C_PickedUpFromWorld_Params
{
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.DroppedInWorld
struct ASeat_Small_Cab_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.HandlePlayerEnterExit
struct ASeat_Small_Cab_C_HandlePlayerEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.CheckEjectPlayer
struct ASeat_Small_Cab_C_CheckEjectPlayer_Params
{
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.MULTICAST_PlayDetachSound
struct ASeat_Small_Cab_C_MULTICAST_PlayDetachSound_Params
{
};

// Function Seat_Small_Cab.Seat_Small_Cab_C.ExecuteUbergraph_Seat_Small_Cab
struct ASeat_Small_Cab_C_ExecuteUbergraph_Seat_Small_Cab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
