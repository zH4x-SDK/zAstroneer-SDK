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

// WidgetBlueprintGeneratedClass GameMenuServerAdminSubmenu.GameMenuServerAdminSubmenu_C
// 0x0008 (0x0280 - 0x0278)
class UGameMenuServerAdminSubmenu_C : public UAstroGameMenuSubPaneWidget
{
public:
	class UGameMenuServerAdminSubsection_C*            GameMenuServerAdminSubsection;                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuServerAdminSubmenu.GameMenuServerAdminSubmenu_C");
		return ptr;
	}


	bool LayoutWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
