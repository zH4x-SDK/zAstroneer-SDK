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

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.UserConstructionScript
struct ABuiltInVehicleSeat_C_UserConstructionScript_Params
{
};

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.PickedUpFromWorld
struct ABuiltInVehicleSeat_C_PickedUpFromWorld_Params
{
};

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.DroppedInWorld
struct ABuiltInVehicleSeat_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.HandlePlayerEnterExit
struct ABuiltInVehicleSeat_C_HandlePlayerEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ReceiveBeginPlay
struct ABuiltInVehicleSeat_C_ReceiveBeginPlay_Params
{
};

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ExecuteUbergraph_BuiltInVehicleSeat
struct ABuiltInVehicleSeat_C_ExecuteUbergraph_BuiltInVehicleSeat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
