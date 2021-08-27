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

// BlueprintGeneratedClass VehicleDeformer_Base.VehicleDeformer_Base_C
// 0x0158 (0x0998 - 0x0840)
class AVehicleDeformer_Base_C : public AVehicleDrill
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SlopeCenterLine_BackFacing;                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TiltCenterLine_BackFacing;                                // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SoilGauge;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HUD_UI_Container;                                         // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        HardnessMarker;                                           // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TiltUpArrow;                                              // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TiltDownArrow;                                            // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GroundPlaneMarkerRight;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GroundPlaneMarkerLeft;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             GroundPlaneWrapper;                                       // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DeformationVolumeRing;                                    // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PivotingUI_Container;                                     // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TunnelBoringUI_Container;                                 // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DeformationParticleSystem;                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DownArrowWrapper;                                         // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             UpArrowWrapper;                                           // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SlopeCenterLine_FrontFacing;                              // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DeformationVisualizer;                                    // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TiltCenterLine_FrontFacing;                               // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SlopeGauge;                                               // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SlopeUI_Container;                                        // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TiltUI_Container;                                         // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceCacheComponent*                     ResourceCache;                                            // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundPlaneIndicatorAxisExtent;                           // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	struct FSlotReference                              ResourceOutputSlot;                                       // 0x0928(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USceneComponent*                             TunnelBoringOrigin;                                       // 0x0938(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Drill_Audio_Event_Loop_Start;                             // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Drill_Audio_Event_Loop_Stop;                              // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*                    SlopeGaugeMat;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NoPowerFailedActivationSound;                             // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    HardnesMarkerMaterial;                                    // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SoilGaugeMaterial;                                        // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                OverdrawMeshes;                                           // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleDeformer_Base.VehicleDeformer_Base_C");
		return ptr;
	}


	void CHILD_UpdateSedimentGauge(float CurrentSedimentAvailable, float CurrentSedimentCapacity);
	void GetStencilValueFromPlayerIndex(int InputPin, int* OutputPin);
	void UpdateGroundPlaneIndicator(float SlopeDegree);
	class UParticleSystem* GetSubtractParticleEffect(int HardnessDelta);
	void GetCursorTexture(int TerrainHardness, class UTexture2D** Texture);
	void CHILD_UpdateToolVisualState();
	void HandleToolIsActiveChanged();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature(class UClass* Type);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleToolActivationChanged(bool Enable);
	void PerformAuxUseOverride(TEnumAsByte<EInputEvent> InputEvent);
	void HandleDrillCollectedExcessTerrain(bool Enable);
	void UpdatePlayerAccentIndex(int PlayerAccentIndex);
	void HandleTerrainBeingDrilledAudioChanged(int AudioEventIndex);
	void HandleDrillMotorAudioChanged(int AudioEventIndex);
	void CustomEvent_1(float NewHardness, const struct FLinearColor& NewColor);
	void PlayDrillStartWithInsufficientPowerEffect();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UpdateSlopeIndicator(float SlopeDegree);
	void UpdateSedimentGauge(float CurrentSedimentAvailalbe, float CurrentSedimentCapacity);
	void ExecuteUbergraph_VehicleDeformer_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
