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

// BlueprintGeneratedClass GenericSelectorUI.GenericSelectorUI_C
// 0x0081 (0x0429 - 0x03A8)
class AGenericSelectorUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UControlComponent*                           Control;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Activation_Button;                                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Right_Button;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Left_Button;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           Printer;                                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActivationButtonVisible;                                  // 0x03F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnIncrementSelection;                                     // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActivated;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDecrementSelection;                                     // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SelectionButtonsVisible;                                  // 0x0428(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericSelectorUI.GenericSelectorUI_C");
		return ptr;
	}


	void UpdateStatusText(const struct FText& NewDisplayText);
	void ShowButtons(bool ActivationButtonVisible, bool SelectorButtonsVisible);
	void Set_UI_View();
	void UserConstructionScript();
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature();
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature();
	void BndEvt__New_Print_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature();
	void OnShowButtons(bool ShowActivationButton, bool ShowSelectorButtons);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericSelectorUI(int EntryPoint);
	void OnDecrementSelection__DelegateSignature();
	void OnActivated__DelegateSignature();
	void OnIncrementSelection__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
