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

// BlueprintGeneratedClass Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C
// 0x01C1 (0x05A1 - 0x03E0)
class AChamber_PowerFlow_Base_C : public AGateChamber
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        ControlPanel;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_pattern_lines;                           // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         PowerSocket3;                                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         PowerSocket2;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_eneregy_beacon;                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         PowerSocket1;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_step3;                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_step2;                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_step1;                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_tunnel;                           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_door3;                            // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_door2;                            // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_door1;                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_socket3;                          // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_socket2;                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gate_chamber_001_puzzle_socket1;                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      gate_chamber_skeleton_puzzle;                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DeformSphereCenter;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockComponent*                         ActorLock;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockableComponent*                     ActorLockable;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Powered_Up_Timeline_Trenches_Brightness_2E461F6C41E6FD600F6420A728BF5D25;// 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Powered_Up_Timeline_LightArray_Intensity_2E461F6C41E6FD600F6420A728BF5D25;// 0x04AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Powered_Up_Timeline_Shell_MaskContrast_2E461F6C41E6FD600F6420A728BF5D25;// 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Powered_Up_Timeline_Glyph_Opacity_2E461F6C41E6FD600F6420A728BF5D25;// 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Powered_Up_Timeline__Direction_2E461F6C41E6FD600F6420A728BF5D25;// 0x04B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Powered_Up_Timeline;                                      // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName_Trenches;                                // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_CrawlingLines;                           // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_LightArray;                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_Shell;                                   // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_Symbol;                                  // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Trenches_MID;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CrawlingLines_MID;                                        // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightArray_MID;                                           // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Shell_MID;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Symbol_MID;                                               // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_PowerBars;                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            PowerGauges;                                              // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FSlotReference>                      PowerSockets;                                             // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPowerFlowChamberState>                State;                                                    // 0x0540(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	int                                                PowerSocketsConnected;                                    // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UPowerFlowLockingMechanismView*              PowerFlowLockingMechanismView;                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Symbol_Fade_Curve;                                        // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CrawlingLines_Fade_Curve;                                 // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LightArray_Intensity_Curve;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stage1Progress;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPowerGeneration;                                   // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stage2Progress;                                           // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_Intensity_Floor;                               // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_Intensity_Ceiling;                             // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_CurrentEvalPoint;                              // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_Period_Floor;                                  // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_Period_Ceiling;                                // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LightArray_Period_Curve;                                  // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightArray_Pulse_AccumulatedTime;                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightArray_DoUpdate;                                      // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class UClass*                                      ControlPanelType;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalPlayerInProximity;                                   // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C");
		return ptr;
	}


	void UpdateWantsToTick();
	void InitializeLocalPlayerInProximity();
	void UpdateChamberMusicState();
	void OnRep_State();
	void OnPowerSocketDisconnected(const struct FSlotReference& Slot, class ASlotConnection* Connection);
	void OnPowerSocketConnected(const struct FSlotReference& Slot, class ASlotConnection* Connection);
	void InitializePowerSocketDelegates();
	void OnPowerFlowCompletionRatioChanged();
	void InitializeLockingMechanismCallbacks();
	void InitializeDynamicMaterials();
	void UserConstructionScript();
	void Powered_Up_Timeline__FinishedFunc();
	void Powered_Up_Timeline__UpdateFunc();
	void Powered_Up_Timeline__DestroyBeaconEvent__EventFunc();
	void ReceiveBeginPlay();
	void BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable);
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity);
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity);
	void BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature();
	void OnChamberFullyActivated();
	void ExecuteUbergraph_Chamber_PowerFlow_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
