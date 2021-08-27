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

// BlueprintGeneratedClass SplitterControlPanel.SplitterControlPanel_C
// 0x0120 (0x0598 - 0x0478)
class ASplitterControlPanel_C : public ASplitterControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SliderCollider3;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               SliderCollider2;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               SliderCollider1;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SliderWrapper;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PowerReadoutScreen3;                                      // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PowerReadoutScreen2;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PowerReadoutScreen1;                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             UIWidgetWrapper;                                          // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentInteractingSliderIndex;                            // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SliderTravelDistance;                                     // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SliderPositions;                                          // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            ConnectorMaterials;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       SliderInteractionBlocked;                                 // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UWidgetComponent*>                    PowerReadoutScreens;                                      // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    PanelMaterialInstance;                                    // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LinkedSliderIndex;                                        // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<bool>                                       ConnectedCables;                                          // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CanPlaySliderAudioTick;                                   // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	TArray<int>                                        PrevQuantizedSliderPositions;                             // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SliderTickSoundInterval;                                  // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputJustBegan;                                           // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	int                                                PrevQuantizedSliderPositionTickSoundWasPlayedAt;          // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	struct FStreamingPowerSplitterReplicationData      LastReceivedSplitterRepData;                              // 0x0558(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SplitterControlPanel.SplitterControlPanel_C");
		return ptr;
	}


	void SetupVisualsForClosedState();
	void AttemptToPlaySliderTickSound(int SliderIndex);
	void CalculateLinkedSliderIndex();
	void IsCableConnected(int Index, bool* Connected);
	void UpdateCableConnectionState(struct FStreamingPowerSplitterReplicationData* RepData);
	void SetInteractingSliderIndices(int SliderIndex);
	void UpdateSliderInteractionBlockedState(struct FStreamingPowerSplitterReplicationData* RepData);
	void UpdateWithSplitterReplicationData(const struct FStreamingPowerSplitterReplicationData& RepData);
	void UpdatePanelLights(struct FStreamingPowerSplitterReplicationData* RepData);
	void ProcessPanelSliderInput();
	void UpdatePowerDisplayScreens(struct FStreamingPowerSplitterReplicationData* RepData);
	void SetLinkedSliderPosition(int SliderIndex, float Position);
	void UpdateCableMaterials(struct FStreamingPowerSplitterReplicationData* RepData);
	void GetSliderPosition(int CableIndex, float* SliderPosition);
	void GetCursorProjectedOntoSliderWrapperPlane(struct FVector* Location, bool* HitSuccess);
	void UserConstructionScript();
	void BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void RPCUpdateSplittersPowerSplitRatios(TArray<float> SplitRatios);
	void ProcessSplitterControlPanelInput();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SplitterControlPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
