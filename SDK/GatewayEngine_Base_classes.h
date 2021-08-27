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

// BlueprintGeneratedClass GatewayEngine_Base.GatewayEngine_Base_C
// 0x0398 (0x0770 - 0x03D8)
class AGatewayEngine_Base_C : public AGateEngine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Free_Oxygen_Collider;                                     // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProceduralStateComponent*                   ProceduralState;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            InteriorPlayerExitedCollider;                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            InteriorPlayerEnteredCollider;                            // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PS_StarField;                                             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        InnerLight;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         GatewayKeySlot_Floor;                                     // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Entry_Barrier_Shell;                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_platform_lines;                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         GateKeyDispenser;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        pedestal_door;                                            // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_01_c;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_02_c;                                              // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_03_c;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        pedestal_c;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        door_02_c;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        door_03_c;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemConverter03;                                          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemConverter02;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemConverter01;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Ceiling_Anchor_Point;                                     // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Key_Platform_Plinth;                                      // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockComponent*                         ActorLock;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockableComponent*                     ActorLockable;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure12;                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon03;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon02;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon01;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ItemConsumer03;                                           // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ItemConsumer01;                                           // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ItemConsumer02;                                           // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             SlotsComponent;                                           // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_round_shell_wire3;                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_round_shell_wire2;                            // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_round_shell_wire1;                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_round_shell_frame;                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure11;                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure10;                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure9;                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure8;                  // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure7;                  // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure6;                  // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure5;                  // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure4;                  // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure2;                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure3;                  // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_floating_diamond_structure;                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_floating_diamond_sockets;                     // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure12;                              // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure11;                              // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure10;                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure9;                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure8;                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure7;                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure6;                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure5;                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure4;                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure3;                               // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure2;                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        gate_engine_arm_structure;                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_arm_sockets;                                  // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphericalGravityVolumeComponent*            SphericalGravityVolume;                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Fixed_Gravity_Collider_Sphere;                            // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedGravityVolumeComponent*                FixedGravityVolume_Wall3;                                 // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedGravityVolumeComponent*                FixedGravityVolume_Wall2;                                 // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedGravityVolumeComponent*                FixedGravityVolume_Wall1;                                 // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_core_gravity_arm3;                            // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_core_gravity_arm2;                            // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_core_gravity_bottom;                          // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_core_gravity_arm1;                            // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_core_gravity_top;                             // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedGravityVolumeComponent*                FixedGravityVolume_Ceiling;                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedGravityVolumeComponent*                FixedGravityVolume_Floor;                                 // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_engine_platform_walled;                              // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      gate_chamber_skeleton_puzzle_floor;                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_01;                                                // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_02;                                                // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        stairs_03;                                                // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        pedestal;                                                 // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        door_03;                                                  // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        door_02;                                                  // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        door_01;                                                  // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotate_Diamonds_Angle_486448D7471C949B844DE6AEDC465B8A;   // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Rotate_Diamonds__Direction_486448D7471C949B844DE6AEDC465B8A;// 0x067C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Rotate_Diamonds;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drain_Item_Fullness_Timeline_Item_Fullness_D187209047518712E5E37F8350025DB1;// 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Drain_Item_Fullness_Timeline__Direction_D187209047518712E5E37F8350025DB1;// 0x068C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Drain_Item_Fullness_Timeline;                             // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptKeySequence_PillarGlyphOpacity_E67B26BB452DEEB1F7CE0EA0EAD4F8A2;// 0x0698(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AcceptKeySequence_PillarPaletteProgress_E67B26BB452DEEB1F7CE0EA0EAD4F8A2;// 0x069C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AcceptKeySequence_PillarRecede_E67B26BB452DEEB1F7CE0EA0EAD4F8A2;// 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AcceptKeySequence__Direction_E67B26BB452DEEB1F7CE0EA0EAD4F8A2;// 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AcceptKeySequence;                                        // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Engine_Specific_Ingredient;                               // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Engine_Specific_Gateway_Key;                              // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_PuzzleSolved;                                         // 0x06C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EItemPuzzleEngineState>                State;                                                    // 0x06C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x06C2(0x0006) MISSED OFFSET
	class UMaterialInstance*                           Palette_SharedMaterial;                                   // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           Glyph_SharedMaterial;                                     // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Palette_MID;                                              // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Glyph_MID;                                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_Palette;                                 // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_Glyph;                                   // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Palette_Progress_Scalar;                                  // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Glyph_Opacity_Scalar;                                     // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pillar_Default_Height;                                    // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pillar_Fully_Recessed_Height;                             // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Control_Panel_Type;                                       // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstKeyGenerated;                                        // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                EntryShells;                                              // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AAstroCharacter*>                     PlayersWithinInterior;                                    // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               REP_ShellEnabled;                                         // 0x0738(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Audio_PlayerInsideEngine;                                 // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	TArray<class USceneComponent*>                     Floating_Diamond_Actors;                                  // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Floating_Diamond_Rotation_Speed;                          // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Diamond_rotation_vector;                                  // 0x0754(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSlotReference>                      Depleting_Item_Slots;                                     // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GatewayEngine_Base.GatewayEngine_Base_C");
		return ptr;
	}


	void InitializeLocalPlayerInProximity();
	void PlayAmbience();
	void OnRep_PuzzleSolved();
	void DisableInteriorPlayerColliders();
	void OnRep_REP_ShellEnabled();
	void AwardPlanetEngineAchievement();
	void UpdateShellCollision();
	void Force_Destroy_Shell();
	void AuthorityUpdateShellEnabled();
	void Remove_Key_Plinth();
	void Setup_Dynamic_Materials();
	void Validate_Key_Variant(class APhysicalItem* Physical_Item, bool* IsCorrectKey);
	void Authority_Setup_Slot_Delegates();
	void UserConstructionScript();
	void AcceptKeySequence__FinishedFunc();
	void AcceptKeySequence__UpdateFunc();
	void AcceptKeySequence__TriggerKeyBuildOut__EventFunc();
	void Drain_Item_Fullness_Timeline__FinishedFunc();
	void Drain_Item_Fullness_Timeline__UpdateFunc();
	void Rotate_Diamonds__FinishedFunc();
	void Rotate_Diamonds__UpdateFunc();
	void ReceiveBeginPlay();
	void AuthorityEvaluateGatewayKeyConversion(class APhysicalItem* PhysicalItem);
	void BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable);
	void Consume_Item(class APhysicalItem* Physical_Item, const struct FSlotReference& Attached_Slot);
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature();
	void BndEvt__InteriorPlayerEnteredCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__InteriorPlayerExitedCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity);
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity);
	void ReceiveTick(float DeltaSeconds);
	void Key_Build_in_Finished();
	void MulticastPlayKeyStartPrint();
	void MulticastPlayKeyFinishPrint();
	void PlayPuzzleSolvedTimeline();
	void BndEvt__Free_Oxygen_Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Free_Oxygen_Collider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_GatewayEngine_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
