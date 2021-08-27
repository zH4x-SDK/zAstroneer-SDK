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

// BlueprintGeneratedClass RoverT2B.RoverT2B_C
// 0x0030 (0x09E8 - 0x09B8)
class ARoverT2B_C : public ARover_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Power_Slot_Back;                                          // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Power_Slot_Front;                                         // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            InteractSphere;                                           // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URoverT3_animBP_C*                           AnimBP;                                                   // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RoverT2B.RoverT2B_C");
		return ptr;
	}


	bool GetUnbundleOriginFromAuxSlot(const struct FSlotReference& AuxSlot, int SubslotIndex, struct FVector* OutLocation, struct FVector* OutForward);
	void SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef);
	void UserConstructionScript();
	void SetupAnimBP();
	void SetupAuxSlots();
	void SetupCableSlots();
	void UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex);
	void BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery);
	void ExecuteUbergraph_RoverT2B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
