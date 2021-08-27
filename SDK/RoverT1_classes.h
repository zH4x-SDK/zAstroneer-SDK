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

// BlueprintGeneratedClass RoverT1.RoverT1_C
// 0x0048 (0x0A00 - 0x09B8)
class ARoverT1_C : public ARover_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B8(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         Power_Slot_Back;                                          // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GenerationGauge;                                          // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            InteractSphere;                                           // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABuiltInVehicleSeat_C*                       REP_INIT_BuiltInSeatRef;                                  // 0x09E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BuiltInSeatType;                                          // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              BuiltInSeatSlotRef;                                       // 0x09F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RoverT1.RoverT1_C");
		return ptr;
	}


	void UpdateUseContext(bool Flipped, bool SeatOccupied);
	void OnRep_REP_INIT_BuiltInSeatRef();
	void SERVER_CreateBuiltInSeat();
	bool GetUnbundleOriginFromAuxSlot(const struct FSlotReference& AuxSlot, int SubslotIndex, struct FVector* OutLocation, struct FVector* OutForward);
	void SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void SetupAuxSlots();
	void SetupCableSlots();
	void OnBuiltInSeatEnterExit(bool Entered);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPowerCableConnectionChanged(const struct FSlotReference& cableSlot, bool ConnectionMade);
	void UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex);
	void SetupAnimBP();
	void InitializeAuxSlotsEnabled();
	void UpdateUseSuppression(bool ShouldBeSuppressed);
	void ExecuteUbergraph_RoverT1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
