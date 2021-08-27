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

// WidgetBlueprintGeneratedClass GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C
// 0x000E (0x0500 - 0x04F2)
class UGameMenuTabBarButtonCoopClientTitle_C : public UGameMenuTabBarButton_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04F2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C");
		return ptr;
	}


	void Construct();
	void CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_GameMenuTabBarButtonCoopClientTitle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
