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

// WidgetBlueprintGeneratedClass WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C
// 0x0042 (0x024A - 0x0208)
class UWBP_PlatformAwareKeyImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      KeyImage;                                                 // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                        GamepadKey;                                               // 0x0218(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        KeyboardKey;                                              // 0x0230(0x0018) (Edit, BlueprintVisible)
	bool                                               UseGamepadKeyForPreview;                                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroColor                                        ImageAstroColor;                                          // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInputDeviceChanged(bool UsingGamepad);
	void ExecuteUbergraph_WBP_PlatformAwareKeyImage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
