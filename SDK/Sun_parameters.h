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

// Function Sun.Sun_C.Set Intensity
struct ASun_C_Set_Intensity_Params
{
};

// Function Sun.Sun_C.UserConstructionScript
struct ASun_C_UserConstructionScript_Params
{
};

// Function Sun.Sun_C.ReceiveBeginPlay
struct ASun_C_ReceiveBeginPlay_Params
{
};

// Function Sun.Sun_C.ReceiveTick
struct ASun_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sun.Sun_C.ExecuteUbergraph_Sun
struct ASun_C_ExecuteUbergraph_Sun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
