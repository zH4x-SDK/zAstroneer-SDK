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

// Function Rover_Base.Rover_Base_C.OnMouseZoomLevelChanged
struct ARover_Base_C_OnMouseZoomLevelChanged_Params
{
	float                                              Zoom_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.OnRep_REP_PlayerAttached
struct ARover_Base_C_OnRep_REP_PlayerAttached_Params
{
};

// Function Rover_Base.Rover_Base_C.Local_UpdateWheelFrictionState
struct ARover_Base_C_Local_UpdateWheelFrictionState_Params
{
	struct FRoverBrakeState                            NewFrictionState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Rover_Base.Rover_Base_C.CheckPlayerAttachedOnCaravan
struct ARover_Base_C_CheckPlayerAttachedOnCaravan_Params
{
};

// Function Rover_Base.Rover_Base_C.OnRep_REP_WheelFrictionState
struct ARover_Base_C_OnRep_REP_WheelFrictionState_Params
{
};

// Function Rover_Base.Rover_Base_C.UpdateAndGetTunnelBoringOrigin
struct ARover_Base_C_UpdateAndGetTunnelBoringOrigin_Params
{
	struct FSlotReference                              slotDrillIsIn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.ExecuteFlip
struct ARover_Base_C_ExecuteFlip_Params
{
};

// Function Rover_Base.Rover_Base_C.SetupGenerationGaugeMaterial
struct ARover_Base_C_SetupGenerationGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.SetupConsumptionGaugeMaterial
struct ARover_Base_C_SetupConsumptionGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.UpdateAuxSlotAnims
struct ARover_Base_C_UpdateAuxSlotAnims_Params
{
	bool                                               SlotEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AuxSlotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.SetupCableSlotEvents
struct ARover_Base_C_SetupCableSlotEvents_Params
{
};

// Function Rover_Base.Rover_Base_C.InitializeAuxSlotsEnabled
struct ARover_Base_C_InitializeAuxSlotsEnabled_Params
{
};

// Function Rover_Base.Rover_Base_C.HandleAuxSlotEnabledChanged
struct ARover_Base_C_HandleAuxSlotEnabledChanged_Params
{
	bool                                               SlotEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.SERVER_EjectItemFromAuxSlot
struct ARover_Base_C_SERVER_EjectItemFromAuxSlot_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Rover_Base.Rover_Base_C.SetupCableSlots
struct ARover_Base_C_SetupCableSlots_Params
{
};

// Function Rover_Base.Rover_Base_C.SetupAuxSlots
struct ARover_Base_C_SetupAuxSlots_Params
{
};

// Function Rover_Base.Rover_Base_C.OnPowerCableConnectionChanged
struct ARover_Base_C_OnPowerCableConnectionChanged_Params
{
	struct FSlotReference                              cableSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ConnectionMade;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.OnAuxSlotAttachmentChanged
struct ARover_Base_C_OnAuxSlotAttachmentChanged_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ItemSlotted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.SetupAnimBP
struct ARover_Base_C_SetupAnimBP_Params
{
};

// Function Rover_Base.Rover_Base_C.PostSubclassConstruction
struct ARover_Base_C_PostSubclassConstruction_Params
{
};

// Function Rover_Base.Rover_Base_C.Do Update Friction
struct ARover_Base_C_Do_Update_Friction_Params
{
};

// Function Rover_Base.Rover_Base_C.GetBodySlotLegacy
struct ARover_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.Eject Players
struct ARover_Base_C_Eject_Players_Params
{
};

// Function Rover_Base.Rover_Base_C.Power UI
struct ARover_Base_C_Power_UI_Params
{
};

// Function Rover_Base.Rover_Base_C.Create Default Equipment
struct ARover_Base_C_Create_Default_Equipment_Params
{
};

// Function Rover_Base.Rover_Base_C.UserConstructionScript
struct ARover_Base_C_UserConstructionScript_Params
{
};

// Function Rover_Base.Rover_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ARover_Base_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Rover_Base.Rover_Base_C.ReceiveBeginPlay
struct ARover_Base_C_ReceiveBeginPlay_Params
{
};

// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Rover_Base.Rover_Base_C.PlacedInSlot
struct ARover_Base_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature
struct ARover_Base_C_BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature
struct ARover_Base_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.Bind Trailers
struct ARover_Base_C_Bind_Trailers_Params
{
};

// Function Rover_Base.Rover_Base_C.OnConnectionBuild_Event_1
struct ARover_Base_C_OnConnectionBuild_Event_1_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
struct ARover_Base_C_BndEvt__Power_Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params
{
};

// Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature
struct ARover_Base_C_BndEvt__Power_Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature_Params
{
};

// Function Rover_Base.Rover_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct ARover_Base_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Rover_Base.Rover_Base_C.OnConnectionComplete
struct ARover_Base_C_OnConnectionComplete_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.OnConnectionDestroy
struct ARover_Base_C_OnConnectionDestroy_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ARover_Base_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Rover_Base.Rover_Base_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
struct ARover_Base_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature
struct ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature_Params
{
	bool                                               ParkingBrakeEngaged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature
struct ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature_Params
{
	bool                                               ParkingBrakeEngaged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature
struct ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature_Params
{
	int                                                REP_ResistanceLevel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.Server_UpdateClientBrakesState
struct ARover_Base_C_Server_UpdateClientBrakesState_Params
{
	struct FRoverBrakeState                            ClientFrictionState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Rover_Base.Rover_Base_C.VehicleGainedPilotInSeat
struct ARover_Base_C_VehicleGainedPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.VehicleLostPilotInSeat
struct ARover_Base_C_VehicleLostPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.HandleInternalBatteryChargeLevelChanged
struct ARover_Base_C_HandleInternalBatteryChargeLevelChanged_Params
{
	float                                              NewCharge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature
struct ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature_Params
{
	bool                                               facingBackward;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rover_Base.Rover_Base_C.ExecuteUbergraph_Rover_Base
struct ARover_Base_C_ExecuteUbergraph_Rover_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
