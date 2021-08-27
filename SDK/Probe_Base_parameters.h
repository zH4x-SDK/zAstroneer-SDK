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

// Function Probe_Base.Probe_Base_C.SlotHasScanner
struct AProbe_Base_C_SlotHasScanner_Params
{
	bool                                               HasScanner;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.PositionTearSpawnPoint
struct AProbe_Base_C_PositionTearSpawnPoint_Params
{
};

// Function Probe_Base.Probe_Base_C.UpdateUnlockedIndicator
struct AProbe_Base_C_UpdateUnlockedIndicator_Params
{
	bool                                               ItemInInputSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.UserConstructionScript
struct AProbe_Base_C_UserConstructionScript_Params
{
};

// Function Probe_Base.Probe_Base_C.ReceiveBeginPlay
struct AProbe_Base_C_ReceiveBeginPlay_Params
{
};

// Function Probe_Base.Probe_Base_C.OnUnlockedProbesChanged
struct AProbe_Base_C_OnUnlockedProbesChanged_Params
{
};

// Function Probe_Base.Probe_Base_C.OnBeginFinalResourceConsumption
struct AProbe_Base_C_OnBeginFinalResourceConsumption_Params
{
	class ULockingMechanism*                           SignallingLockingMechanism;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Probe_Base.Probe_Base_C.OnRealityTearOpenChanged
struct AProbe_Base_C_OnRealityTearOpenChanged_Params
{
	EWandererRealityTearOpenState                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature
struct AProbe_Base_C_BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature_Params
{
	class ULockingMechanism*                           SignallingLockingMechanism;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLockChangedEventMetadata                   EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Probe_Base.Probe_Base_C.ReceiveHit
struct AProbe_Base_C_ReceiveHit_Params
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

// Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AProbe_Base_C_BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AProbe_Base_C_BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.ReceiveEndPlay
struct AProbe_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.MULTI_PlayScannerConsumptionSFX
struct AProbe_Base_C_MULTI_PlayScannerConsumptionSFX_Params
{
};

// Function Probe_Base.Probe_Base_C.OnInputItemEmplaced
struct AProbe_Base_C_OnInputItemEmplaced_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.OnInputItemUnemplaced
struct AProbe_Base_C_OnInputItemUnemplaced_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Probe_Base.Probe_Base_C.ExecuteUbergraph_Probe_Base
struct AProbe_Base_C_ExecuteUbergraph_Probe_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
