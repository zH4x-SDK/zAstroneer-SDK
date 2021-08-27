#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct GameMenuCustomizationPreviewData.GameMenuCustomizationPreviewData
// 0x0089
struct FGameMenuCustomizationPreviewData
{
	bool                                               IsLocked_1_211C763C43CFC12FCCF402AF34012407;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAstroCharacterCustomization                CharacterCustomization_4_B93DA382474BA12B53EED9ABF9A0C5BE;// 0x0008(0x0038) (Edit, BlueprintVisible, IsPlainOldData)
	class UAstroEmoteDefinition*                       EmoteToPreview_18_A332171542B5FFB6E7C69D90EE8334E3;       // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CustomizationDisplayName_7_A2233E4645938184E836728B96329953;// 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FText                                       UnlockRequirements_9_8396CA5C46FD559F778FFCAA9586331E;    // 0x0060(0x0018) (Edit, BlueprintVisible)
	class UObject*                                     CustomizationOptionToMarkSeen_12_623AF8D7472DAF5398D66A960BF527DB;// 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGameMenuEntry_Base_C*                       MenuEntryForThisCosmetic_15_279266994919B7A52C08DBAD50E0ADF1;// 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNonAchievementUnlock_21_2DB361074E3B9AEFED2220800AB276B4;// 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
