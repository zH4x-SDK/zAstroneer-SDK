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

// BlueprintGeneratedClass Dropship.Dropship_C
// 0x01D9 (0x0839 - 0x0660)
class ADropship_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RCS_14;                                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem25;                                         // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem30;                                         // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem29;                                         // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem28;                                         // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem27;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem13;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem12;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem11;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem17;                                         // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem16;                                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem15;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem14;                                         // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RCS_1;                                                    // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Thruster_4;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Thruster_3;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Thruster_2;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Thruster_1;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Slot_Center;                                              // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_2;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_1;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Seat;                                                     // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    ItemPad;                                                  // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Beacon;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Exit;                                                     // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Spawn;                                                    // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            TetherCollision;                                          // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         tetherslot;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleTetherAttachComponent*               VehicleTetherAttach;                                      // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOxygenatorComponent*                        oxygenator;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrusterComponent_C*                        ThrusterComponent;                                        // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOrbitalNavigationComponent*                 OrbitalNavigation;                                        // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnLocationComponent*                     spawnLocation;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorAttachmentsComponent*                  ActorAttachments;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_Planted;                                              // 0x07D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	TArray<struct FSlotReference>                      Resource_Slots;                                           // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RCSVolume;                                                // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	TArray<bool>                                       RCSEnabled;                                               // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Conduit_Tutorial;                                         // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exited;                                                   // 0x0809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Relaunch_On_Exit;                                         // 0x080A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               REP_Door_Open;                                            // 0x080B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               REP_TerrainPlatformEnabled;                               // 0x080C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TerrainPlatformSpawned;                                   // 0x080D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CLIENT_Planted;                                           // 0x080E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Start_Planted;                                            // 0x080F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_IsDropshipNotHabitat;                                 // 0x0810(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               REP_Plantable;                                            // 0x0811(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0812(0x0006) MISSED OFFSET
	TArray<struct FString>                             SelectAudio;                                              // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BlockShelterUpgradePath;                                  // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUseContext                                        UseContextEnter;                                          // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextExit;                                           // 0x082A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextDeploy;                                         // 0x082B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrevDoorOpen;                                             // 0x082C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Client_Dropship;                                          // 0x082D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x082E(0x0002) MISSED OFFSET
	struct FName                                       UseSuppressionID;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalPlayerOnBoard;                                       // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dropship.Dropship_C");
		return ptr;
	}


	void UpdateUseContext();
	void PopInteractionOverride();
	void PushInteractionOverride();
	void ConvertToNewShelter();
	void OnRep_REP_Door_Open();
	void OnRep_Rep_Planted();
	void Plant_Dropship(bool Delay_Can_Enter);
	void Attach_();
	void Set_Physics_Dropped();
	void Enable_Terrain_Platform();
	void Get_All_Slots(TArray<struct FSlotReference>* slots);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void Do_Drop();
	void BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void Delay_Can_Enter();
	void BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered);
	void ReceiveTick(float DeltaSeconds);
	void MULTI_Reliable_Plant();
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered);
	void OnActorEnterExit(bool Entered);
	void OnLaunchEnd_Event_1();
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ReceiveBeginPlay();
	void BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void ReceiveDestroyed();
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature(class AActor* attachedActor);
	void ExecuteUbergraph_Dropship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
