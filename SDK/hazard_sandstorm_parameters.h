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

// Function hazard_sandstorm.hazard_sandstorm_C.Spawn Rocks
struct Ahazard_sandstorm_C_Spawn_Rocks_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.UpdateCameraExposure
struct Ahazard_sandstorm_C_UpdateCameraExposure_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.CalcFrameRotDelta
struct Ahazard_sandstorm_C_CalcFrameRotDelta_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.UpdateAudio
struct Ahazard_sandstorm_C_UpdateAudio_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.UpdateTimer
struct Ahazard_sandstorm_C_UpdateTimer_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.SetTargetLocation
struct Ahazard_sandstorm_C_SetTargetLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function hazard_sandstorm.hazard_sandstorm_C.Update Meshes
struct Ahazard_sandstorm_C_Update_Meshes_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.Blow Stuff
struct Ahazard_sandstorm_C_Blow_Stuff_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.Calc Dist To Player
struct Ahazard_sandstorm_C_Calc_Dist_To_Player_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.Update Particles
struct Ahazard_sandstorm_C_Update_Particles_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.Rotate Components
struct Ahazard_sandstorm_C_Rotate_Components_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.Move To Target
struct Ahazard_sandstorm_C_Move_To_Target_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.UserConstructionScript
struct Ahazard_sandstorm_C_UserConstructionScript_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.ReceiveBeginPlay
struct Ahazard_sandstorm_C_ReceiveBeginPlay_Params
{
};

// Function hazard_sandstorm.hazard_sandstorm_C.ReceiveTick
struct Ahazard_sandstorm_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_sandstorm.hazard_sandstorm_C.OnSpawn
struct Ahazard_sandstorm_C_OnSpawn_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_sandstorm.hazard_sandstorm_C.ExecuteUbergraph_hazard_sandstorm
struct Ahazard_sandstorm_C_ExecuteUbergraph_hazard_sandstorm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
