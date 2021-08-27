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

// Function GameStartCamera.GameStartCamera_C.ConditionalSetViewTarget
struct AGameStartCamera_C_ConditionalSetViewTarget_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStartCamera.GameStartCamera_C.UserConstructionScript
struct AGameStartCamera_C_UserConstructionScript_Params
{
};

// Function GameStartCamera.GameStartCamera_C.ReceiveBeginPlay
struct AGameStartCamera_C_ReceiveBeginPlay_Params
{
};

// Function GameStartCamera.GameStartCamera_C.OnStartGameSignal_Event_1
struct AGameStartCamera_C_OnStartGameSignal_Event_1_Params
{
	bool                                               StartedFromSave;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStartCamera.GameStartCamera_C.OnIntroCinematicComplete_Event_1
struct AGameStartCamera_C_OnIntroCinematicComplete_Event_1_Params
{
};

// Function GameStartCamera.GameStartCamera_C.LocalClientJoined
struct AGameStartCamera_C_LocalClientJoined_Params
{
	class AAstroPlayerController*                      Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStartCamera.GameStartCamera_C.ReceiveTick
struct AGameStartCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStartCamera.GameStartCamera_C.OnLifecycleChanged
struct AGameStartCamera_C_OnLifecycleChanged_Params
{
	EGameLifecycleState                                OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGameLifecycleState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameStartCamera.GameStartCamera_C.MakeSelfCameraTarget
struct AGameStartCamera_C_MakeSelfCameraTarget_Params
{
};

// Function GameStartCamera.GameStartCamera_C.ReceiveDestroyed
struct AGameStartCamera_C_ReceiveDestroyed_Params
{
};

// Function GameStartCamera.GameStartCamera_C.ExecuteUbergraph_GameStartCamera
struct AGameStartCamera_C_ExecuteUbergraph_GameStartCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
