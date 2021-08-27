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

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DestroyOxygenatorIndicator
struct AShuttle_T2_ThrusterSlot_C_DestroyOxygenatorIndicator_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CreateOxygenatorIndicator
struct AShuttle_T2_ThrusterSlot_C_CreateOxygenatorIndicator_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupJets
struct AShuttle_T2_ThrusterSlot_C_SetupJets_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_InvisibleSeatRef
struct AShuttle_T2_ThrusterSlot_C_OnRep_REP_InvisibleSeatRef_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetShuttleAnimationState
struct AShuttle_T2_ThrusterSlot_C_SetShuttleAnimationState_Params
{
	bool                                               Occupied;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Launched;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupBlueprintAnimation
struct AShuttle_T2_ThrusterSlot_C_SetupBlueprintAnimation_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterParticlesActive
struct AShuttle_T2_ThrusterSlot_C_UpdateThrusterParticlesActive_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterRef
struct AShuttle_T2_ThrusterSlot_C_OnRep_REP_ThrusterRef_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterActive
struct AShuttle_T2_ThrusterSlot_C_OnRep_REP_ThrusterActive_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterActive
struct AShuttle_T2_ThrusterSlot_C_UpdateThrusterActive_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThruster
struct AShuttle_T2_ThrusterSlot_C_SetupThruster_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetTotalAvailableFuel
struct AShuttle_T2_ThrusterSlot_C_GetTotalAvailableFuel_Params
{
	float                                              TotalFuel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ConsumeThrusterFuel
struct AShuttle_T2_ThrusterSlot_C_ConsumeThrusterFuel_Params
{
	int                                                TakeAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleItemRemovedFromThrusterSlot
struct AShuttle_T2_ThrusterSlot_C_HandleItemRemovedFromThrusterSlot_Params
{
	class AActor*                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThrusterParticles
struct AShuttle_T2_ThrusterSlot_C_SetupThrusterParticles_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SERVER Create Default Equipment
struct AShuttle_T2_ThrusterSlot_C_SERVER_Create_Default_Equipment_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequence
struct AShuttle_T2_ThrusterSlot_C_ExecuteLaunchSequence_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdatePilotSeatTooltipOverride
struct AShuttle_T2_ThrusterSlot_C_UpdatePilotSeatTooltipOverride_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleLaunchRequest
struct AShuttle_T2_ThrusterSlot_C_HandleLaunchRequest_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch
struct AShuttle_T2_ThrusterSlot_C_Do_Launch_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch End
struct AShuttle_T2_ThrusterSlot_C_Do_Launch_End_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Update Save Game Permitted
struct AShuttle_T2_ThrusterSlot_C_Update_Save_Game_Permitted_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExpendFuel
struct AShuttle_T2_ThrusterSlot_C_ExpendFuel_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetBodySlotLegacy
struct AShuttle_T2_ThrusterSlot_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Launch View
struct AShuttle_T2_ThrusterSlot_C_Launch_View_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Set Bars
struct AShuttle_T2_ThrusterSlot_C_CLIENT_Set_Bars_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Can Launch
struct AShuttle_T2_ThrusterSlot_C_Can_Launch_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          ErrorNotification;                                        // (Parm, OutParm)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Launch
struct AShuttle_T2_ThrusterSlot_C_CLIENT_Launch_Params
{
	bool                                               Launched;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          ErrorNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UserConstructionScript
struct AShuttle_T2_ThrusterSlot_C_UserConstructionScript_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AShuttle_T2_ThrusterSlot_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveBeginPlay
struct AShuttle_T2_ThrusterSlot_C_ReceiveBeginPlay_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunchEnd_Event_1
struct AShuttle_T2_ThrusterSlot_C_OnLaunchEnd_Event_1_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature
struct AShuttle_T2_ThrusterSlot_C_BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.MULTI DoLaunch
struct AShuttle_T2_ThrusterSlot_C_MULTI_DoLaunch_Params
{
	bool                                               Launched;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          ErrorNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Game
struct AShuttle_T2_ThrusterSlot_C_Save_Game_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateCanLaunch
struct AShuttle_T2_ThrusterSlot_C_UpdateCanLaunch_Params
{
	bool                                               Can;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Orbiting;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunch_Event_1
struct AShuttle_T2_ThrusterSlot_C_OnLaunch_Event_1_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveTick
struct AShuttle_T2_ThrusterSlot_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature
struct AShuttle_T2_ThrusterSlot_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Completed
struct AShuttle_T2_ThrusterSlot_C_Save_Completed_Params
{
	ESaveGameOperationResult                           saveOperationResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleLostPilotInSeat
struct AShuttle_T2_ThrusterSlot_C_VehicleLostPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleGainedPilotInSeat
struct AShuttle_T2_ThrusterSlot_C_VehicleGainedPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_2
struct AShuttle_T2_ThrusterSlot_C_CustomEvent_2_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_3
struct AShuttle_T2_ThrusterSlot_C_CustomEvent_3_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequenceServer
struct AShuttle_T2_ThrusterSlot_C_ExecuteLaunchSequenceServer_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterAttached
struct AShuttle_T2_ThrusterSlot_C_OnThrusterAttached_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterDestroyed
struct AShuttle_T2_ThrusterSlot_C_ThrusterDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterRemoved
struct AShuttle_T2_ThrusterSlot_C_ThrusterRemoved_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterDrained
struct AShuttle_T2_ThrusterSlot_C_OnThrusterDrained_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterRestored
struct AShuttle_T2_ThrusterSlot_C_OnThrusterRestored_Params
{
	class AThruster_BASE_C*                            Thruster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnShuttleEnterExit
struct AShuttle_T2_ThrusterSlot_C_OnShuttleEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveEndPlay
struct AShuttle_T2_ThrusterSlot_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemSet
struct AShuttle_T2_ThrusterSlot_C_OnOxygenatorSlotItemSet_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemReleased
struct AShuttle_T2_ThrusterSlot_C_OnOxygenatorSlotItemReleased_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DroppedInWorld
struct AShuttle_T2_ThrusterSlot_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.PickedUpFromWorld
struct AShuttle_T2_ThrusterSlot_C_PickedUpFromWorld_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveHit
struct AShuttle_T2_ThrusterSlot_C_ReceiveHit_Params
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

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
struct AShuttle_T2_ThrusterSlot_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleVehicleUnmanned
struct AShuttle_T2_ThrusterSlot_C_HandleVehicleUnmanned_Params
{
	class AAstroPlayerController*                      VehicleDriver;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleDestroyed
struct AShuttle_T2_ThrusterSlot_C_HandleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CheckIfShuttleIsAbandonedInSpace
struct AShuttle_T2_ThrusterSlot_C_CheckIfShuttleIsAbandonedInSpace_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AShuttle_T2_ThrusterSlot_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteUbergraph_Shuttle_T2_ThrusterSlot
struct AShuttle_T2_ThrusterSlot_C_ExecuteUbergraph_Shuttle_T2_ThrusterSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
