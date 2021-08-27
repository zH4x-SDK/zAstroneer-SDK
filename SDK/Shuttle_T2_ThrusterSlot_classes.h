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

// BlueprintGeneratedClass Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C
// 0x0239 (0x0909 - 0x06D0)
class AShuttle_T2_ThrusterSlot_C : public AVehicleBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraTargetNode;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SkyObstructionTestMarker;                                 // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Beacon;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingJet_4;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_3_Center;                                      // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_3_Right;                                       // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_3_Left;                                        // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingJet_2;                                             // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_2_Center;                                      // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingJet_3;                                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_2_Left;                                        // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_2_Right;                                       // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_1_Center;                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_1_Right;                                       // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpulseJet_1_Left;                                        // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ThrusterSlot;                                             // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         oxygenatorSlot;                                           // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         FixedSeatSlot;                                            // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         StorageSlot2;                                             // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         StorageSlot1;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOxygenatorComponent*                        oxygenator;                                               // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             printheight;                                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleTetherAttachComponent*               VehicleTetherAttach;                                      // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSlotComponent*                       VehicleSlot;                                              // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center;                                            // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOrbitalNavigationComponent*                 OrbitalNavigation;                                        // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Interact;                                                 // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Parts;                                                    // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnLocationComponent*                     spawnLocation;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Indicator_Slot;                                    // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrusterComponent_C*                        ThrusterComponent;                                        // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Point;                                             // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Spawn;                                                    // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  Target_Body;                                              // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASolarBody*                                  Orbital_Body;                                             // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelNeededForLaunch;                                      // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumptionRate;                                      // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RCSVolume;                                                // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	TArray<bool>                                       RCSEnabled;                                               // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Taken_Fuel;                                               // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	class UClass*                                      Seat_Type;                                                // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Orbiting;                                                 // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	struct FSlotReference                              Seat_Slot_1_Ref;                                          // 0x0880(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AllocatedFuel;                                            // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LaunchIsAllowed;                                          // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class ASeatBase*                                   PilotSeatThatHasTooltipOverride;                          // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AThruster_BASE_C*                            REP_ThrusterRef;                                          // 0x08A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AThruster_BASE_C*                            ActiveThrusterRef_PREV;                                   // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_ThrusterActive;                                       // 0x08B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            ImpulseJets;                                              // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            LandingJets;                                              // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UShuttleMedium_AnimBP_C*                     T2_AnimBP;                                                // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABuiltInVehicleSeat_C*                       REP_InvisibleSeatRef;                                     // 0x08E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              OxygenatorSlotRef;                                        // 0x08E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SkyObstructionTestRadius;                                 // 0x08F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	struct FName                                       UseSuppressionID;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SaveGameSuppressed;                                       // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C");
		return ptr;
	}


	void DestroyOxygenatorIndicator();
	void CreateOxygenatorIndicator();
	void SetupJets();
	void OnRep_REP_InvisibleSeatRef();
	void SetShuttleAnimationState(bool Occupied, bool Launched);
	void SetupBlueprintAnimation();
	void UpdateThrusterParticlesActive(class AThruster_BASE_C* Thruster, bool active);
	void OnRep_REP_ThrusterRef();
	void OnRep_REP_ThrusterActive();
	void UpdateThrusterActive();
	void SetupThruster(class UObject* Item);
	void GetTotalAvailableFuel(float* TotalFuel);
	int ConsumeThrusterFuel(int TakeAmount);
	void HandleItemRemovedFromThrusterSlot(class AActor* Item);
	void SetupThrusterParticles();
	void SERVER_Create_Default_Equipment();
	void ExecuteLaunchSequence();
	void UpdatePilotSeatTooltipOverride();
	void HandleLaunchRequest();
	void Do_Launch();
	void Do_Launch_End();
	void Update_Save_Game_Permitted();
	void ExpendFuel(float Delta_Time);
	class UChildSlotComponent* GetBodySlotLegacy();
	void Launch_View();
	void CLIENT_Set_Bars();
	void Can_Launch(bool* Can, struct FAstroNotificationTagAuthoringData* ErrorNotification);
	void CLIENT_Launch(bool Launched, const struct FAstroNotificationTagAuthoringData& ErrorNotification);
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnLaunchEnd_Event_1();
	void BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery);
	void MULTI_DoLaunch(bool Launched, const struct FAstroNotificationTagAuthoringData& ErrorNotification);
	void Save_Game();
	void UpdateCanLaunch(bool Can, bool Orbiting);
	void OnLaunch_Event_1();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void Save_Completed(ESaveGameOperationResult saveOperationResult);
	void VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void CustomEvent_2();
	void CustomEvent_3(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType);
	void ExecuteLaunchSequenceServer();
	void OnThrusterAttached(class APhysicalItem* Item);
	void ThrusterDestroyed(class AActor* DestroyedActor);
	void ThrusterRemoved(class APhysicalItem* Item);
	void OnThrusterDrained(class AThruster_BASE_C* Thruster);
	void OnThrusterRestored(class AThruster_BASE_C* Thruster);
	void OnShuttleEnterExit(bool Entered);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnOxygenatorSlotItemSet(class APhysicalItem* Item);
	void OnOxygenatorSlotItemReleased(class APhysicalItem* Item);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void HandleVehicleUnmanned(class AAstroPlayerController* VehicleDriver);
	void HandleDestroyed(class AActor* DestroyedActor);
	void CheckIfShuttleIsAbandonedInSpace();
	void BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void ExecuteUbergraph_Shuttle_T2_ThrusterSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
