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

// WidgetBlueprintGeneratedClass TooltipBadgeWidget.TooltipBadgeWidget_C
// 0x00A4 (0x02B4 - 0x0210)
class UTooltipBadgeWidget_C : public UUserWidgetBlueprintDesignable
{
public:
	class UBorder*                                     BadgeBackground;                                          // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      BadgeImage;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTooltipWidgetDisplayData                   TooltipWidgetData;                                        // 0x0220(0x0088) (Edit, BlueprintVisible)
	struct FVector2D                                   DefaultBadgeSize;                                         // 0x02A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BadgeInnerImageRelativeScale;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TooltipBadgeWidget.TooltipBadgeWidget_C");
		return ptr;
	}


	void GetBadgeSizeRatioComparedToDefaultSize(float* NewParam);
	void GetWidgetSize(struct FVector2D* OutSize);
	bool LayoutWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
