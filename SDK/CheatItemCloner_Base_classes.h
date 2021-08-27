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

// BlueprintGeneratedClass CheatItemCloner_Base.CheatItemCloner_Base_C
// 0x0070 (0x06D0 - 0x0660)
class ACheatItemCloner_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        OutputPlatform;                                           // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         InvisibleOutputSlot;                                      // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OutputSlotWrapper;                                        // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChildActor;                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ButtonWrapper;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         InvisibleInputSlot;                                       // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Platform;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              InputSlotRef;                                             // 0x06B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              OutputSlotRef;                                            // 0x06C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheatItemCloner_Base.CheatItemCloner_Base_C");
		return ptr;
	}


	void UpdateButtonEnabledStatus();
	void AttemptToCloneItem();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ControlPanelButtonChildActor_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void CustomEvent_1(class APhysicalItem* Item);
	void OnReleaseItem_Event_1(class APhysicalItem* Item);
	void CustomEvent_2(class APhysicalItem* Item);
	void ExecuteUbergraph_CheatItemCloner_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
