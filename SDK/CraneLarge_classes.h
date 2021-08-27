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

// BlueprintGeneratedClass CraneLarge.CraneLarge_C
// 0x00F2 (0x0752 - 0x0660)
class ACraneLarge_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_2;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Crane_Slot;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Exit;                                                     // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Driver;                                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Interact_Collision;                                       // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorAttachmentsComponent*                  ActorAttachments;                                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_1;                                          // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RelativeCraneTarget;                                      // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Crane;                                                    // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ucrane_large_bp_C*                           Anim_BP;                                                  // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Target_Actor;                                             // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     Target_Offset;                                            // 0x0700(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HeadAngle;                                                // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     REP_Crane_Head_Location;                                  // 0x0710(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FSlotReference                              Crane_Slot_Ref;                                           // 0x0720(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     REP_Crane_Head_Normal;                                    // 0x0730(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<struct FSlotReference>                      Resource_Refs;                                            // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EUseContext                                        UseContextEnter;                                          // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextExit;                                           // 0x0751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CraneLarge.CraneLarge_C");
		return ptr;
	}


	void UpdateToolOwner();
	void UpdateAudio();
	void Move_Head_By_Transform(const struct FTransform& Transform);
	void Update_Head();
	void Move_Head(struct FHitResult* Hit);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature(class APlayController* Controller, const struct FHitResult& toolHit, const struct FClickResult& ClickResult, bool startedInteraction, bool usingTool, bool justActivated, bool canUse);
	void BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature(const struct FTransform& Transform);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature(bool Entered);
	void OnSetItem(class APhysicalItem* Item);
	void OnReleaseItem(class APhysicalItem* Item);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void ExecuteUbergraph_CraneLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
