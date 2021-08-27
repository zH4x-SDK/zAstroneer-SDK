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

// BlueprintGeneratedClass PrintheadSelector.PrintheadSelector_C
// 0x0043 (0x03EB - 0x03A8)
class APrintheadSelector_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PanelBG;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChildActor_PrintButton;                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChildActor_RightButton;                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChildActor_LeftButton;                  // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           Printer;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonsVisible;                                           // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TableBlocked;                                             // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePrintButtonForCancel;                                  // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrintheadSelector.PrintheadSelector_C");
		return ptr;
	}


	void SpoofNavRightPress();
	void SpoofNavLeftPress();
	void SpoofPrintPress();
	void Confirm();
	void NavigateRight();
	void NavigateLeft();
	void UpdateStatusText(class UPrinterComponent* Printer);
	void ShowButtons(bool Visible);
	void Set_Printing_View(class UPrinterComponent* Printer);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Bind_Printer(class UPrinterComponent* Printer);
	void OnSetIndicatorView_Event_1();
	void OnSetIndicatorView_Event_2();
	void BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void ExecuteUbergraph_PrintheadSelector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
