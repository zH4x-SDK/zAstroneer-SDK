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

// BlueprintGeneratedClass ConsumableCanister.ConsumableCanister_C
// 0x0050 (0x06F8 - 0x06A8)
class AConsumableCanister_C : public AResourceBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        FullnessIndicatorRingGauge;                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VisibleContainerMesh;                                     // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         Explosive;                                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemSpawnScaleCurve_ItemScale_A436D0264076A6C4465B8F830BD1B0EC;// 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ItemSpawnScaleCurve__Direction_A436D0264076A6C4465B8F830BD1B0EC;// 0x06CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ItemSpawnScaleCurve;                                      // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GasMaterialInstance;                                      // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IndicatorRingMaterialInstance;                            // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmptyRingColor;                                           // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsumableCanister.ConsumableCanister_C");
		return ptr;
	}


	void UpdateCanisterVisuals();
	void UpdateItemData();
	void UpdateVolatility();
	void UserConstructionScript();
	void ItemSpawnScaleCurve__FinishedFunc();
	void ItemSpawnScaleCurve__UpdateFunc();
	void OnSpawnedInSlot_Event();
	void ReceiveBeginPlay();
	void SetView();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void ExecuteUbergraph_ConsumableCanister(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
