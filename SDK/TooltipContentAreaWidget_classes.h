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

// WidgetBlueprintGeneratedClass TooltipContentAreaWidget.TooltipContentAreaWidget_C
// 0x00B0 (0x02C0 - 0x0210)
class UTooltipContentAreaWidget_C : public UInputRespondingWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                TooltipContentWrapper;                                    // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTooltipWidgetDisplayData                   TooltipWidgetDisplayData;                                 // 0x0220(0x0088) (Edit, BlueprintVisible)
	TArray<class UTooltipInteractionPromptWidget_C*>   DynamicInteractionPrompts;                                // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTooltipDescriptionWidget_C*                 TooltipDescriptionWidget;                                 // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TooltipContentAreaWidget.TooltipContentAreaWidget_C");
		return ptr;
	}


	void CreateDescriptionWidget();
	void OnTextContentChanged(const struct FTooltipWidgetDisplayData& NewDisplayData);
	void UpdateTooltipDataForInteractionPromptsWithoutChangingLayout(const struct FTooltipWidgetDisplayData& DisplayData);
	void InteractionPromptInputComplete(class UTooltipInteractionPromptWidget_C* InteractionPrompt, const struct FName& InputName, bool InputSucceeded, bool* InputHandled);
	void InteractionPromptInputStarted(class UTooltipInteractionPromptWidget_C* InteractionPrompt, const struct FName& InputName, bool* InputHandled);
	bool LayoutWidget();
	void GetContentSize(struct FVector2D* Size);
	void InputStarted(const struct FName& ActionOrAxisName);
	void InputComplete(const struct FName& ActionOrAxisName, bool InputSucceeded);
	void ExecuteUbergraph_TooltipContentAreaWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
