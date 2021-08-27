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

// WidgetBlueprintGeneratedClass TooltipDescriptionWidget.TooltipDescriptionWidget_C
// 0x0020 (0x0230 - 0x0210)
class UTooltipDescriptionWidget_C : public UUserWidgetBlueprintDesignable
{
public:
	class UTextBlock*                                  DescriptionTextBlock;                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Descriptiontext;                                          // 0x0218(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TooltipDescriptionWidget.TooltipDescriptionWidget_C");
		return ptr;
	}


	void GetContentBounds(struct FVector2D* ContentBounds);
	bool LayoutWidget();
	void SetDescriptionText(const struct FText& Description);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
