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

// WidgetBlueprintGeneratedClass GameMenuVerticalSpacerHalf.GameMenuVerticalSpacerHalf_C
// 0x0008 (0x0468 - 0x0460)
class UGameMenuVerticalSpacerHalf_C : public UAstroGameMenuFocusItemWidget
{
public:
	class USpacer*                                     Spacer_1;                                                 // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuVerticalSpacerHalf.GameMenuVerticalSpacerHalf_C");
		return ptr;
	}


	struct FVector2D GetMenuFocusWidgetSize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
