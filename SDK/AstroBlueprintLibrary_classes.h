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

// BlueprintGeneratedClass AstroBlueprintLibrary.AstroBlueprintLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAstroBlueprintLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AstroBlueprintLibrary.AstroBlueprintLibrary_C");
		return ptr;
	}


	void STATIC_AstroGameMenuMakeEmoteComboSelectionData(class UObject* __WorldContext, TArray<struct FGameMenuComboBoxOptionData>* EmoteComboPopoutData);
	void STATIC_AstroGameMenuMakeWindowModeComboData(class UObject* __WorldContext, TArray<EAstroWindowMode>* SupportedWindowModes, TArray<struct FGameMenuComboBoxOptionData>* WindowModeDisplayData);
	void STATIC_AstroGameMenuMakeResolutionComboData(class UObject* __WorldContext, TArray<struct FIntPoint>* AvailableResolutions, TArray<struct FGameMenuComboBoxOptionData>* ComboOptions);
	void STATIC_AstroGameMenuPresentComboBox(class UObject* WorldContextObject, class UAstroGameMenuFocusItemWidget* OwningFocusItem, bool DismissOnSelection, class UObject* __WorldContext, TArray<struct FGameMenuComboBoxOptionData>* ComboOptions, class UAstroGameMenuPopoutWidget** PopoutWidget);
	void STATIC_CreateOrbitalDropOrigin(class USceneComponent* OrbitalDropDestination, class UObject* __WorldContext, struct FTransform* OrbitalDropOriginTransform, struct FVector* OrbitalDropOriginLocation);
	void STATIC_AnimateStreamingPowerCablePlugGauge(class UMaterialInstanceDynamic* GenerationGauge, class UMaterialInstanceDynamic* ConsumptionGauge, float ConsumptionRatio, float GenerationRatio, float SurplusRatio, class UObject* __WorldContext);
	void STATIC_Set_Power_Bar_View_Battery_Offset(class UPowerComponent* Battery, class UChildActorComponent* Bar, float Offset, float Count, class UObject* __WorldContext);
	void STATIC_Set_Power_Bar_View(float Alpha, class UChildActorComponent* Bar, class UObject* __WorldContext);
	void STATIC_Priority_Slot_Query(const struct FSlotReference& Slot, class UClickQuery* Query, class UObject* __WorldContext, bool* Set);
	void STATIC_Set_Power_Bar_View_Source(class UPowerComponent* Source, class UChildActorComponent* Bar, float Max_Output, bool Use_Actual_Load, class UObject* __WorldContext);
	void STATIC_Set_Power_Bar_View_Battery(class UPowerComponent* Battery, class UChildActorComponent* Bar, class UObject* __WorldContext);
	void STATIC_Item_Chassis_Pad_Power_Slot(class UItemPad* Pad, class UObject* __WorldContext, struct FSlotReference* Slot);
	void STATIC_Set_Crane_Rig(class UPrimitiveComponent* Head_Component, class USkeletalMeshComponent* Skinned_Component, const struct FVector& V, const struct FVector& A1, bool bPickA, class AActor* Actor, class UObject* __WorldContext, struct FTransform* B);
	void STATIC_Get_Play_Widget(class UObject* __WorldContext, class UPlayWidgetInstance_C** Widget);
	void STATIC_Set_Chassis_Power_Slot_Click_Result(class UClickQuery* Query, class UItemPad* Pad, class UObject* __WorldContext);
	void STATIC_Set_Click_Camera_Target(bool Target, class AActor* Actor, class UObject* __WorldContext);
	void STATIC_DrawCameraDebugLine(const struct FVector& Start, const struct FVector& End, float Size, const struct FLinearColor& Color, class UObject* Object, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
