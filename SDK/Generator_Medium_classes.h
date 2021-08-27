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

// BlueprintGeneratedClass Generator_Medium.Generator_Medium_C
// 0x00E8 (0x0748 - 0x0660)
class AGenerator_Medium_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Input_Slot;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformEventReceiver*                        DeformEventReceiver;                                      // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_IsGenerating;                                         // 0x06A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06A9(0x0003) MISSED OFFSET
	float                                              MineRate;                                                 // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Placed;                                                   // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	struct FVector                                     Start_Location;                                           // 0x06B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Picked;                                                   // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bore;                                                     // 0x06C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06C2(0x0002) MISSED OFFSET
	float                                              Deform_Radius;                                            // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Deform_Intensity;                                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rate_Multiplier;                                          // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Fuel_Type;                                                // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Power_Output;                                             // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Consumption_Rate;                                         // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              InputSlotRef;                                             // 0x06E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Audio_GeneratorLevel;                                     // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GeneratorTimer;                                           // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_ShowFuelIndicator;                                    // 0x06F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_ShowResourceInfo;                                     // 0x06F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LOCAL_ShowResourceInfo;                                   // 0x06FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LOCAL_ShowFuelIndicator;                                  // 0x06FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGeneratingInitialized;                                  // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_GeneratorEnabled;                                     // 0x06FD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x06FE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGeneratorEnabledChanged;                                // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EUseContext                                        UseContextTurnOn;                                         // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextTurnOff;                                        // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        CurrentUseContext;                                        // 0x0712(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0713(0x0005) MISSED OFFSET
	struct FString                                     StartGeneratorAudioEventName;                             // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StopGeneratorAudioEventName;                              // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnGeneratorPoweredChanged;                                // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Generator_Medium.Generator_Medium_C");
		return ptr;
	}


	void LoadSoundBank();
	void DestroyPartialInputItem();
	void UpdateUseContext();
	void OnRep_REP_GeneratorEnabled();
	void SetGeneratorEnabled(bool Enabled);
	void TryGetFuel(bool* HasFuel);
	void StopGenerating();
	void StartGenerating();
	void OnRep_REP_IsGenerating();
	void UpdateGeneratingAudio();
	void UpdateFuelIndicator(bool ShowFuelIndicator);
	void CheckShowFuelIndicator(const struct FSlotReference& Slot);
	void Can_Use(bool* Can);
	class UChildSlotComponent* GetBodySlotLegacy();
	void CheckPowered(bool* Powered);
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void On_Powered();
	void OnUnpowered();
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void ReceiveBeginPlay();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PowerButtonToggled();
	void ReceiveDestroyed();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Generator_Medium(int EntryPoint);
	void OnGeneratorPoweredChanged__DelegateSignature(bool Powered);
	void OnGeneratorEnabledChanged__DelegateSignature(bool NewEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
