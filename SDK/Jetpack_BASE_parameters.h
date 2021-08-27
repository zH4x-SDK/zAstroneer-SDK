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

// Function Jetpack_BASE.Jetpack_BASE_C.UpdateNozzleTarget
struct AJetpack_BASE_C_UpdateNozzleTarget_Params
{
	struct FVector                                     TargetNozzleDir;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SFX_Stowed
struct AJetpack_BASE_C_SFX_Stowed_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.SFX_Deployed
struct AJetpack_BASE_C_SFX_Deployed_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.SFX_SuccessfulActivation
struct AJetpack_BASE_C_SFX_SuccessfulActivation_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.SFX_FailedActivation
struct AJetpack_BASE_C_SFX_FailedActivation_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.UpdateCurrentNozzleDir
struct AJetpack_BASE_C_UpdateCurrentNozzleDir_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.InterpolateNozzleDir
struct AJetpack_BASE_C_InterpolateNozzleDir_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleNeutralHeading
struct AJetpack_BASE_C_SetNozzleNeutralHeading_Params
{
	bool                                               SnapToNeutralHeading;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.CreateLowFuelLightMaterialInstance
struct AJetpack_BASE_C_CreateLowFuelLightMaterialInstance_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetLowFuelStateActive
struct AJetpack_BASE_C_SetLowFuelStateActive_Params
{
	bool                                               StateActive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetFuelLightEnabled
struct AJetpack_BASE_C_SetFuelLightEnabled_Params
{
	bool                                               LightEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackThrustActive
struct AJetpack_BASE_C_SetJetpackThrustActive_Params
{
	bool                                               ThrustActive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleTargetHeading
struct AJetpack_BASE_C_SetNozzleTargetHeading_Params
{
	struct FVector                                     TargetHeading;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               SnapToTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackDeployed
struct AJetpack_BASE_C_SetJetpackDeployed_Params
{
	bool                                               Deployed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Mirrored;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackOrientation
struct AJetpack_BASE_C_SetJetpackOrientation_Params
{
	bool                                               Mirrored;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.UserConstructionScript
struct AJetpack_BASE_C_UserConstructionScript_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__FinishedFunc
struct AJetpack_BASE_C_LowFuelLightBlinkLoop__FinishedFunc_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__UpdateFunc
struct AJetpack_BASE_C_LowFuelLightBlinkLoop__UpdateFunc_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__DisableLight__EventFunc
struct AJetpack_BASE_C_LowFuelLightBlinkLoop__DisableLight__EventFunc_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__EnableLight__EventFunc
struct AJetpack_BASE_C_LowFuelLightBlinkLoop__EnableLight__EventFunc_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.ReceiveBeginPlay
struct AJetpack_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.StartLowFuelLightLoop
struct AJetpack_BASE_C_StartLowFuelLightLoop_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.StopLowFuelLightLoop
struct AJetpack_BASE_C_StopLowFuelLightLoop_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackActived
struct AJetpack_BASE_C_OnJetpackActived_Params
{
	bool                                               Activated;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnAttemptedActivationNoFuel
struct AJetpack_BASE_C_OnAttemptedActivationNoFuel_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnUpdateNozzleDirection
struct AJetpack_BASE_C_OnUpdateNozzleDirection_Params
{
	struct FVector                                     NewNozzleDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackDeployed
struct AJetpack_BASE_C_OnJetpackDeployed_Params
{
	struct FVector                                     NeutralPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bMirrored;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackStowed
struct AJetpack_BASE_C_OnJetpackStowed_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.OnFuelIsLow
struct AJetpack_BASE_C_OnFuelIsLow_Params
{
	bool                                               bIsLow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.PickedUpFromWorld
struct AJetpack_BASE_C_PickedUpFromWorld_Params
{
};

// Function Jetpack_BASE.Jetpack_BASE_C.DroppedInWorld
struct AJetpack_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.ReceiveHit
struct AJetpack_BASE_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Jetpack_BASE.Jetpack_BASE_C.ExecuteUbergraph_Jetpack_BASE
struct AJetpack_BASE_C_ExecuteUbergraph_Jetpack_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
