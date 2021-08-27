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

// BlueprintGeneratedClass Thruster_BASE.Thruster_BASE_C
// 0x00C0 (0x0720 - 0x0660)
class AThruster_BASE_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Thrust_Point;                                             // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               justActivated;                                            // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JustDeactivated;                                          // 0x0699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFuel;                                                  // 0x069A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThrusterActive;                                           // 0x069B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActiveLastFrame;                                          // 0x069C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	class UPrimitiveComponent*                         OwnerPrimativeComponent;                                  // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ThrusterParticles;                                        // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnFuelDrained;                                            // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFuelRestored;                                           // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               REP_FX_Override;                                          // 0x06D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	TArray<struct FName>                               EmitterNames;                                             // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StartThrusterSoundEventName;                              // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StopThrusterSoundEventName;                               // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       UseSuppressionId_Fuel;                                    // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UseSuppressionId_ControlOverride;                         // 0x0718(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thruster_BASE.Thruster_BASE_C");
		return ptr;
	}


	void Set_Use_Context(bool Condition);
	void Set_Initial_Use_Context();
	void OnRep_REP_FX_Override();
	void SetThrusterControlOverride(bool Override);
	void GetAvailableFuel_Internal(float* Fuel);
	void GetAvailableFuel(float* Fuel);
	void CheckFuelStateChanged(bool HasFuelCurrent);
	void TakeFuelAmount_Internal(int Amount, int* Taken);
	void TakeFuelAmount(int Amount, int* Taken);
	void GetThrusterParticles(TArray<class UParticleSystemComponent*>* NewParam);
	void Take_Fuel_Internal(float Rate, int* Taken);
	void GetHasFuel_Internal(bool* HasFuel);
	bool GetHasFuel();
	struct FVector GetOffsetFromOwner();
	void UpdateThrusterMotion();
	void UpdateFuelState();
	class UChildSlotComponent* GetBodySlotLegacy();
	void Take_Fuel(float Rate, int* Taken);
	void Set_FX(bool Enable);
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveDestroyed();
	void BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature();
	void BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature();
	void BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Push_Use_Suppression(class AThruster_BASE_C* Thruster);
	void Pop_Use_Suppression(class AThruster_BASE_C* Thruster);
	void ExecuteUbergraph_Thruster_BASE(int EntryPoint);
	void OnFuelRestored__DelegateSignature(class AThruster_BASE_C* Thruster);
	void OnFuelDrained__DelegateSignature(class AThruster_BASE_C* Thruster);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
