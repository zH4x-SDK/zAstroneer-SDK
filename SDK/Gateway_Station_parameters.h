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

// Function Gateway_Station.Gateway_Station_C.AllMatchingKeysPresent
struct AGateway_Station_C_AllMatchingKeysPresent_Params
{
	bool                                               AllKeysPresent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.OnKeyRemovedAuthority
struct AGateway_Station_C_OnKeyRemovedAuthority_Params
{
	class APhysicalItem*                               RemovedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.OnKeySlottedAuthority
struct AGateway_Station_C_OnKeySlottedAuthority_Params
{
	class APhysicalItem*                               SlottedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.AuthorityInitializeMatchingKeyStatuses
struct AGateway_Station_C_AuthorityInitializeMatchingKeyStatuses_Params
{
};

// Function Gateway_Station.Gateway_Station_C.OnRep_MatchingKeyStatus
struct AGateway_Station_C_OnRep_MatchingKeyStatus_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Create Landing Zone Array
struct AGateway_Station_C_Create_Landing_Zone_Array_Params
{
};

// Function Gateway_Station.Gateway_Station_C.AuthorityResetKeyPlinths
struct AGateway_Station_C_AuthorityResetKeyPlinths_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Setup Slot Delegates
struct AGateway_Station_C_Setup_Slot_Delegates_Params
{
};

// Function Gateway_Station.Gateway_Station_C.UserConstructionScript
struct AGateway_Station_C_UserConstructionScript_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__FinishedFunc
struct AGateway_Station_C_Staggered__Build_Out__FinishedFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__UpdateFunc
struct AGateway_Station_C_Staggered__Build_Out__UpdateFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 7__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_7__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 6__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_6__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 5__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_5__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 4__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_4__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 3__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_3__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 2__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_2__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 1__EventFunc
struct AGateway_Station_C_Staggered__Build_Out__Key_1__EventFunc_Params
{
};

// Function Gateway_Station.Gateway_Station_C.ReceiveBeginPlay
struct AGateway_Station_C_ReceiveBeginPlay_Params
{
};

// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AGateway_Station_C_BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AGateway_Station_C_BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.ActivateStationPortal
struct AGateway_Station_C_ActivateStationPortal_Params
{
};

// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature
struct AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature
struct AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.InitializeLandingZones
struct AGateway_Station_C_InitializeLandingZones_Params
{
};

// Function Gateway_Station.Gateway_Station_C.ReceiveEndPlay
struct AGateway_Station_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gateway_Station.Gateway_Station_C.OutroCinematicStarted
struct AGateway_Station_C_OutroCinematicStarted_Params
{
};

// Function Gateway_Station.Gateway_Station_C.OutroCinematicCompleted
struct AGateway_Station_C_OutroCinematicCompleted_Params
{
};

// Function Gateway_Station.Gateway_Station_C.ExecuteUbergraph_Gateway_Station
struct AGateway_Station_C_ExecuteUbergraph_Gateway_Station_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
