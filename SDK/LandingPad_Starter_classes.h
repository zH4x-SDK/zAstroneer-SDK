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

// BlueprintGeneratedClass LandingPad_Starter.LandingPad_Starter_C
// 0x00A8 (0x0708 - 0x0660)
class ALandingPad_Starter_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             OxygenatorSupplyDropPoint;                                // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         LandingPadSlot;                                           // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULandingPadComponent*                        LandingPad;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InteractCollisionForAutoselect;                           // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PlatformSupplyDropPoint;                                  // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PrinterSupplyDropPoint;                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USunlightDetectorComponent*                  SunlightDetector;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingParticleSystem;                                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPlatformComponent*                   TerrainPlatform;                                          // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        SupplyPanelChildActor;                                    // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LandingPadRunningLights__Direction_0F0CE7564FA009524F9E2DB23495691E;// 0x06D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LandingPadRunningLights;                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_1;                               // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_2;                               // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_3;                               // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_4;                               // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_5;                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Buttons_and_Lights_MID;                                   // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LandingPad_Starter.LandingPad_Starter_C");
		return ptr;
	}


	void SetAllLandingLightsOn(bool AreLightsOn);
	void SnapPlatformToClosedAnimState();
	void PerformDeployAnim();
	void HandleTouchdown();
	void UserConstructionScript();
	void LandingPadRunningLights__FinishedFunc();
	void LandingPadRunningLights__UpdateFunc();
	void LandingPadRunningLights__LightsOff__EventFunc();
	void LandingPadRunningLights__LightsOn5__EventFunc();
	void LandingPadRunningLights__LightsOn4__EventFunc();
	void LandingPadRunningLights__LightsOn3__EventFunc();
	void LandingPadRunningLights__LightsOn2__EventFunc();
	void LandingPadRunningLights__LightsOn1__EventFunc();
	void ReceiveBeginPlay();
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void ItemSetOnLandingPad(class APhysicalItem* Item);
	void ItemRemovedFromLandingPad(class APhysicalItem* Item);
	void ExecuteUbergraph_LandingPad_Starter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
