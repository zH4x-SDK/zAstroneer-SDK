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

// BlueprintGeneratedClass ResourceCanister_Reusable_T2.ResourceCanister_Reusable_T2_C
// 0x00D1 (0x07B1 - 0x06E0)
class AResourceCanister_Reusable_T2_C : public AStorageCanister_Reusable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UT2CanisterComponent*                        T2Canister;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OutputSlotRefPoint;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             InputSlotRefPoint;                                        // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         T1CanisterSlot;                                           // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              T1CanisterSlotRef;                                        // 0x0710(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DrainRate;                                                // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UClass*                                      ContentsType;                                             // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        DepositSlotUseContext;                                    // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        WithdrawalSlotUseContext;                                 // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_DispenseContents;                                     // 0x0732(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0733(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FillGaugeMat;                                             // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FillLightMat;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmptyRingColor;                                           // 0x0748(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TooltipOverrideName;                                      // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DepositTooltipDescription;                                // 0x0760(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       WithdrawalTooltipDescription;                             // 0x0778(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     DepositSound;                                             // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     WithdrawalSound;                                          // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsTransferring;                                           // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceCanister_Reusable_T2.ResourceCanister_Reusable_T2_C");
		return ptr;
	}


	void GenerateTooltipOverride();
	void ToggleMode();
	void UpdateTankVisuals_Internal();
	void UpdateCanisterState();
	void OnRep_DispenseContents();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void PlayDrainedAudio();
	void PlayFilledAudio();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void UpdateTankVisuals();
	void MULTI_PlayToggleSound(bool Dispensing);
	void MULTI_PlayTransferSound();
	void OnItemAttached(class APhysicalItem* Item);
	void BndEvt__T2Canister_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature();
	void BndEvt__T2Canister_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature();
	void ExecuteUbergraph_ResourceCanister_Reusable_T2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
