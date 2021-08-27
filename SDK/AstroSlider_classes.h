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

// WidgetBlueprintGeneratedClass AstroSlider.AstroSlider_C
// 0x0044 (0x0254 - 0x0210)
class UAstroSlider_C : public UUserWidgetBlueprintDesignable
{
public:
	class UTextBlock*                                  SliderText;                                               // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              SliderMin;                                                // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrSliderValue;                                          // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditing;                                                // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FSlateColor                                 TextColor;                                                // 0x0228(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumFractionalDigits;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AstroSlider.AstroSlider_C");
		return ptr;
	}


	void GetIsEditing(bool* IsEditing);
	void GetIntSliderSize(struct FVector2D* SliderSize);
	void SetTextColor(const struct FSlateColor& NewColor);
	void SetIsEditing(bool NewIsEditing);
	void SetSliderValue(float NewVal, bool* DidChange);
	void GetSliderValue(float* SliderVal);
	bool LayoutWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
