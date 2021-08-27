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

// BlueprintGeneratedClass TeleporterControlPanel.TeleporterControlPanel_C
// 0x0018 (0x05C8 - 0x05B0)
class ATeleporterControlPanel_C : public AGateObjectControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             CrackedOrientation;                                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TeleportationBubbleType;                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeleporterControlPanel.TeleporterControlPanel_C");
		return ptr;
	}


	void GetControlledActorTeleportationTransform(struct FTransform* TeleportationTransform);
	void UserConstructionScript();
	void InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key);
	void HandleControlNodeClick(const struct FGateObjectControlNode& clickedControlNode);
	void ServerActivateTeleportation(class AAstroCharacter* Character, int DestinationControlNodeIndex);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void ActivateNodeTeleport();
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void HandleControlNodeBeginHover(const struct FGateObjectControlNode& hoveredControlNode);
	void HandleControlNodeEndHover(const struct FGateObjectControlNode& hoveredControlNode);
	void ExecuteUbergraph_TeleporterControlPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
