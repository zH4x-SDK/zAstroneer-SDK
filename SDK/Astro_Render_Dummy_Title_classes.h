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

// BlueprintGeneratedClass Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C
// 0x0090 (0x0438 - 0x03A8)
class AAstro_Render_Dummy_Title_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mask;                                                     // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Hat;                                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           LockedCustomizationTooltip;                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroActionComponent*                       AstroAction;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DeformTool;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Backpack;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterCustomization                ActiveCustomizationPreview;                               // 0x03F8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   ObfuscatedCustomizationMaterial;                          // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C");
		return ptr;
	}


	void ApplyHatCustomization(struct FAstroCharacterCustomization* AstroCharacterCustomization);
	void SetCustomizationMaterials(class UMaterialInstance* SuitMaterial, class UMaterialInstance* VisorMaterial, class UMaterialInstanceDynamic* AccessoriesMaterial);
	void ManageLockedTooltip(bool isLocked, const struct FTooltipWidgetDisplayData& DisplayData);
	void PreviewEmoteCustomization(class UAstroEmoteDefinition* PreviewEmote);
	void PreviewCharacterVisorCustomization(class UAstroVisorMaterial* PreviewVisor);
	void PreviewCharacterPaletteCustomization(class UAstroCharacterPalette* PreviewPalette);
	void PreviewCharacterSuitCustomization(class UAstroCharacterSuit* PreviewSuit);
	class ADeformTool* GetDeformTool();
	void CreateMaterialsForCustomization(const struct FAstroCharacterCustomization& AstroCustomization, class UMaterialInstanceDynamic** SuitMaterial, class UMaterialInstanceDynamic** VisorMaterial, class UMaterialInstanceDynamic** AccessoriesMaterial);
	void GetBackpack(class ABackpackRail_Dummy_Title_C** Backpack);
	void UserConstructionScript();
	void OnLoaded_6C6D802841D391EBB76FA59285C503A1(class UObject* Loaded);
	void ReceiveBeginPlay();
	void UpdateActiveCharacterCustomizationPreview(const struct FAstroCharacterCustomization& CharacterCustomization);
	void EventPreviewEmote(class UAstroEmoteDefinition* EmoteDef, bool isLocked, const struct FTooltipWidgetDisplayData& lockedTooltipDisplayData);
	void HandleCustomizationPreviewRequested(const struct FAstroCharacterCustomization& CharacterCustomization, bool isLocked, const struct FTooltipWidgetDisplayData& lockedTooltipDisplayData);
	void OnStartingDropshipSpawned();
	void RemoveUnlockTooltip();
	void DisableDummy();
	void ExecuteUbergraph_Astro_Render_Dummy_Title(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
