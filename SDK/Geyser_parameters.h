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

// Function Geyser.Geyser_C.UserConstructionScript
struct AGeyser_C_UserConstructionScript_Params
{
};

// Function Geyser.Geyser_C.ReceiveTick
struct AGeyser_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geyser.Geyser_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature
struct AGeyser_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geyser.Geyser_C.ReceiveBeginPlay
struct AGeyser_C_ReceiveBeginPlay_Params
{
};

// Function Geyser.Geyser_C.ExecuteUbergraph_Geyser
struct AGeyser_C_ExecuteUbergraph_Geyser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
