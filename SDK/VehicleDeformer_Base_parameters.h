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

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateSedimentGauge
struct AVehicleDeformer_Base_C_CHILD_UpdateSedimentGauge_Params
{
	float                                              CurrentSedimentAvailable;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSedimentCapacity;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetStencilValueFromPlayerIndex
struct AVehicleDeformer_Base_C_GetStencilValueFromPlayerIndex_Params
{
	int                                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateGroundPlaneIndicator
struct AVehicleDeformer_Base_C_UpdateGroundPlaneIndicator_Params
{
	float                                              SlopeDegree;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetSubtractParticleEffect
struct AVehicleDeformer_Base_C_GetSubtractParticleEffect_Params
{
	int                                                HardnessDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetCursorTexture
struct AVehicleDeformer_Base_C_GetCursorTexture_Params
{
	int                                                TerrainHardness;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateToolVisualState
struct AVehicleDeformer_Base_C_CHILD_UpdateToolVisualState_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolIsActiveChanged
struct AVehicleDeformer_Base_C_HandleToolIsActiveChanged_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetBodySlotLegacy
struct AVehicleDeformer_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UserConstructionScript
struct AVehicleDeformer_Base_C_UserConstructionScript_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveBeginPlay
struct AVehicleDeformer_Base_C_ReceiveBeginPlay_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PickedUpFromWorld
struct AVehicleDeformer_Base_C_PickedUpFromWorld_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.DroppedInWorld
struct AVehicleDeformer_Base_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature
struct AVehicleDeformer_Base_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature_Params
{
	class UClass*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveEndPlay
struct AVehicleDeformer_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolActivationChanged
struct AVehicleDeformer_Base_C_HandleToolActivationChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PerformAuxUseOverride
struct AVehicleDeformer_Base_C_PerformAuxUseOverride_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillCollectedExcessTerrain
struct AVehicleDeformer_Base_C_HandleDrillCollectedExcessTerrain_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdatePlayerAccentIndex
struct AVehicleDeformer_Base_C_UpdatePlayerAccentIndex_Params
{
	int                                                PlayerAccentIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleTerrainBeingDrilledAudioChanged
struct AVehicleDeformer_Base_C_HandleTerrainBeingDrilledAudioChanged_Params
{
	int                                                AudioEventIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillMotorAudioChanged
struct AVehicleDeformer_Base_C_HandleDrillMotorAudioChanged_Params
{
	int                                                AudioEventIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CustomEvent_1
struct AVehicleDeformer_Base_C_CustomEvent_1_Params
{
	float                                              NewHardness;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PlayDrillStartWithInsufficientPowerEffect
struct AVehicleDeformer_Base_C_PlayDrillStartWithInsufficientPowerEffect_Params
{
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveHit
struct AVehicleDeformer_Base_C_ReceiveHit_Params
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

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSlopeIndicator
struct AVehicleDeformer_Base_C_UpdateSlopeIndicator_Params
{
	float                                              SlopeDegree;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSedimentGauge
struct AVehicleDeformer_Base_C_UpdateSedimentGauge_Params
{
	float                                              CurrentSedimentAvailalbe;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSedimentCapacity;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ExecuteUbergraph_VehicleDeformer_Base
struct AVehicleDeformer_Base_C_ExecuteUbergraph_VehicleDeformer_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
