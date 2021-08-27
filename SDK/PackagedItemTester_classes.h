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

// BlueprintGeneratedClass PackagedItemTester.PackagedItemTester_C
// 0x0064 (0x06C4 - 0x0660)
class APackagedItemTester_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UButtonComponent*                            dispense_button;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            prev_button;                                              // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            next_button;                                              // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        item_text;                                                // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ControlsWrapper;                                          // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Printer_Slot;                                             // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              PrinterSlotRef;                                           // 0x06A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                              DispenseList;                                             // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DispenseIndex;                                            // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItemTester.PackagedItemTester_C");
		return ptr;
	}


	void UpdateDisplayText();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature();
	void BndEvt__prev_button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature();
	void BndEvt__next_button_K2Node_ComponentBoundEvent_1_ComponentOnButtonClicked__DelegateSignature();
	void OnSetItem(class APhysicalItem* Item);
	void OnReleaseItem(class APhysicalItem* Item);
	void ExecuteUbergraph_PackagedItemTester(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
