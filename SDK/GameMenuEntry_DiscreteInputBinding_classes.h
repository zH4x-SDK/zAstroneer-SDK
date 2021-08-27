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

// WidgetBlueprintGeneratedClass GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C
// 0x0020 (0x06B8 - 0x0698)
class UGameMenuEntry_DiscreteInputBinding_C : public UGameMenuEntryDoubleText_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0698(0x0008) (Transient, DuplicateTransient)
	EAstroDiscreteInputOptionPlayerFacing              ActionMappingToBind;                                      // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWaitingForInput;                                        // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06A2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeyboardBindingChanged;                                 // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C");
		return ptr;
	}


	bool LayoutWidget();
	void Construct();
	void CustomEvent_3(const struct FKey& KeyPressed, class UAstroGameMenuFocusItemWidget* FocusableWidget);
	void CustomEvent_11(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void OnFocusItemDiscreteEditCommitted_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void OnFocusItemDiscreteEditCanceled_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding(int EntryPoint);
	void OnKeyboardBindingChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
