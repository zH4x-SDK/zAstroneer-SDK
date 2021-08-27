#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rover_Base.Rover_Base_C
// 0x0248 (0x09B8 - 0x0770)
class ARover_Base_C : public ARoverBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             CameraFrontFacing;                                        // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PopupBadgeAnchor;                                         // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TunnelBoringOriginBack;                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOxygenatorComponent*                        oxygenator;                                               // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraTargetNode;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TunnelBoringOriginFront;                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Power_Sockets;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleTetherAttachComponent*               VehicleTetherAttach;                                      // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSlotComponent*                       VehicleSlot;                                              // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Tether_Collision;                                         // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Tether_Attach_Collision;                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        PowerBar_2;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Seat_Chassis;                                             // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WheelBlow4;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WheelBlow3;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WheelBlow2;                                               // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WheelBlow1;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        PowerBar1;                                                // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Force_Location;                                           // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Front_Right;                                              // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Back_Right;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Front_Left;                                               // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Back_Left;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power_Battery;                                            // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWheeledChassisComponent*                    WheeledChassis;                                           // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsMovementComponent*                   PhysicsMovement;                                          // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             RoverPower;                                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Default_Seat;                                             // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class UChildActorComponent*                        Active_Control_Slot;                                      // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class UClass*                                      Seat_Class;                                               // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Power_Bar_Scale;                                          // 0x08B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FSlotReference                              Power_Slot_1_Ref;                                         // 0x08C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Power_Slot_2_Ref;                                         // 0x08D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Seat_Chassis_Ref;                                         // 0x08E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EjectsOnFlipEnabled;                                      // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Consumption_Gauge_MID;                                    // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Generation_Gauge_MID;                                     // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSuppressed;                                            // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	TArray<struct FSlotReference>                      CableSlots;                                               // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       AuxSlotsEnabled;                                          // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Rover_Motor_Event_Name;                                   // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Rover_Tire_Loop_Event_Name;                               // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Rover_Impact_Sound_Event_Name;                            // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Rover_Land_Sound_Event_Name;                              // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FRoverBrakeState                            REP_BrakesState;                                          // 0x0970(0x0002) (Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	bool                                               REP_PlayerAttached;                                       // 0x0972(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FRoverBrakeState                            Local_BrakesState;                                        // 0x0973(0x0002) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	int                                                Local_ResistanceLevel;                                    // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           DefaultWheelFriction;                                     // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           DrillResistance1Friction;                                 // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           DrillResistance2Friction;                                 // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           BrakeAssistFriction;                                      // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           ParkingBrakeFriction;                                     // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevBatteryCharge;                                        // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DrillCameraMode;                                          // 0x09AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	float                                              Drill_to_Default_Zoom_Threshold;                          // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_to_Drill_Zoom_Threshold;                          // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rover_Base.Rover_Base_C");
		return ptr;
	}


	void OnMouseZoomLevelChanged(float Zoom_Value);
	void OnRep_REP_PlayerAttached();
	void Local_UpdateWheelFrictionState(const struct FRoverBrakeState& NewFrictionState);
	void CheckPlayerAttachedOnCaravan();
	void OnRep_REP_WheelFrictionState();
	class USceneComponent* UpdateAndGetTunnelBoringOrigin(const struct FSlotReference& slotDrillIsIn);
	void ExecuteFlip();
	void SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex);
	void SetupCableSlotEvents();
	void InitializeAuxSlotsEnabled();
	void HandleAuxSlotEnabledChanged(bool SlotEnabled, int Index);
	void SERVER_EjectItemFromAuxSlot(const struct FSlotReference& AuxSlot);
	void SetupCableSlots();
	void SetupAuxSlots();
	void OnPowerCableConnectionChanged(const struct FSlotReference& cableSlot, bool ConnectionMade);
	void OnAuxSlotAttachmentChanged(const struct FSlotReference& AuxSlot, bool ItemSlotted);
	void SetupAnimBP();
	void PostSubclassConstruction();
	void Do_Update_Friction();
	class UChildSlotComponent* GetBodySlotLegacy();
	void Eject_Players();
	void Power_UI();
	void Create_Default_Equipment();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void Bind_Trailers();
	void OnConnectionBuild_Event_1(const struct FSlotReference& Slot, class ASlotConnection* Connection);
	void BndEvt__Power_Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature();
	void BndEvt__Power_Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature();
	void BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData);
	void OnConnectionComplete(const struct FSlotReference& Slot, class ASlotConnection* Connection);
	void OnConnectionDestroy(const struct FSlotReference& Slot, class ASlotConnection* Connection);
	void BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature(bool ParkingBrakeEngaged);
	void BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature(bool ParkingBrakeEngaged);
	void BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature(int REP_ResistanceLevel);
	void Server_UpdateClientBrakesState(const struct FRoverBrakeState& ClientFrictionState);
	void VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void HandleInternalBatteryChargeLevelChanged(float NewCharge, float ChargeDelta);
	void BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature(bool facingBackward);
	void ExecuteUbergraph_Rover_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
