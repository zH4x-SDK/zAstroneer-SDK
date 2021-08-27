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

// BlueprintGeneratedClass PowerCable_Streaming.PowerCable_Streaming_C
// 0x0055 (0x0735 - 0x06E0)
class APowerCable_Streaming_C : public ASlotConnection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class USlotsComponent*                             slots;                                                    // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ExtenderIndicatorSlot;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ExenderSlotRoot;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerCableComponent*          ActorStreamingPowerCable;                                 // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BaseMaterialMID;                                          // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DefaultCableMaterial;                                     // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MergedConnectionCableMID;                                 // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DirectionalConnectionCableMID;                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                OxygenLightBitIndex;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECableConnectionState                              CurrentlyDisplayedCableConnectionType;                    // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerCable_Streaming.PowerCable_Streaming_C");
		return ptr;
	}


	void UpdateDirectionalCableMaterial(float FlowSpeed);
	void UpdateMergedCableMaterial(float ConsumptionRatio, float GenerationRatio);
	void SetupDirectionalConnectionCableVisuals();
	void SetupMergedConnectionCableVisuals();
	void RestoreOriginalCableVisuals();
	void UserConstructionScript();
	void BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature(const struct FStreamingPowerCableVisualizationData& PowerCableVisualizationData);
	void OnIsCarryingOxygenChanged(bool bIsCarryingOxygen);
	void ReceiveBeginPlay();
	void HandleApproximateCableLengthChanged(float ApproximateSplineMeshLength);
	void OnConnected();
	void OnDisconnected();
	void ExecuteUbergraph_PowerCable_Streaming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
