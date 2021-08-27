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

// WidgetBlueprintGeneratedClass AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C
// 0x0030 (0x02A8 - 0x0278)
class UAstroMenuScrollBarContainer_C : public UAstroGameMenuFocusItemContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	class UAstroMenuScrollBar_C*                       AstroMenuScrollBar;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ScrollbarDragStarted;                                     // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScrollbarDragEnded;                                       // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C");
		return ptr;
	}


	void BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_AstroMenuScrollBarContainer(int EntryPoint);
	void ScrollbarDragEnded__DelegateSignature();
	void ScrollbarDragStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
