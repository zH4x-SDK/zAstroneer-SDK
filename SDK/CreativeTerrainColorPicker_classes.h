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

// WidgetBlueprintGeneratedClass CreativeTerrainColorPicker.CreativeTerrainColorPicker_C
// 0x0078 (0x0288 - 0x0210)
class UCreativeTerrainColorPicker_C : public UUserWidgetBlueprintDesignable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UUniformGridPanel*                           ColorPickerWrapper;                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              MinDesiredSlotWidth;                                      // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ColorArray;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumColumns;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnColorSelected;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FMargin                                     SlotPadding;                                              // 0x0250(0x0010) (Edit, BlueprintVisible)
	EPaintIndexType                                    PaintType;                                                // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnColorSelectedWithType;                                  // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UMaterialInterface*>                  ButtonMaterialsArray;                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreativeTerrainColorPicker.CreativeTerrainColorPicker_C");
		return ptr;
	}


	void UpdateWithNewColorArray(TArray<struct FLinearColor>* InColorArray, TArray<class UMaterialInterface*>* ButtonMaterialArray);
	void Construct();
	void OnColorButtonPressed(int ClickedColorIndex);
	void ExecuteUbergraph_CreativeTerrainColorPicker(int EntryPoint);
	void OnColorSelectedWithType__DelegateSignature(const struct FLinearColor& SelectedColor, int SelectedColorIndex, EPaintIndexType PaintType);
	void OnColorSelected__DelegateSignature(const struct FLinearColor& SelectedColor, int SelectedColorIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
