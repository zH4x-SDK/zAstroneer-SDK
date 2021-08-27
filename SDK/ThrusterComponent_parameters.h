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

// Function ThrusterComponent.ThrusterComponent_C.Setup FX Arrays
struct UThrusterComponent_C_Setup_FX_Arrays_Params
{
};

// Function ThrusterComponent.ThrusterComponent_C.Set FX Active
struct UThrusterComponent_C_Set_FX_Active_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThrusterComponent.ThrusterComponent_C.Update FX
struct UThrusterComponent_C_Update_FX_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThrusterComponent.ThrusterComponent_C.ReceiveBeginPlay
struct UThrusterComponent_C_ReceiveBeginPlay_Params
{
};

// Function ThrusterComponent.ThrusterComponent_C.ReceiveTick
struct UThrusterComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThrusterComponent.ThrusterComponent_C.ExecuteUbergraph_ThrusterComponent
struct UThrusterComponent_C_ExecuteUbergraph_ThrusterComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
