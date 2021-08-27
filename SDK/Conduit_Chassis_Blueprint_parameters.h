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

// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.RedirectOldClasses
struct AConduit_Chassis_Blueprint_C_RedirectOldClasses_Params
{
	class UClass*                                      InClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutClass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.UserConstructionScript
struct AConduit_Chassis_Blueprint_C_UserConstructionScript_Params
{
};

// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ReceiveBeginPlay
struct AConduit_Chassis_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ExecuteUbergraph_Conduit_Chassis_Blueprint
struct AConduit_Chassis_Blueprint_C_ExecuteUbergraph_Conduit_Chassis_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
