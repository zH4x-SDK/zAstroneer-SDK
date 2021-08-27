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

// Class AstroPlayFabBPL.AstroPlayFabBPL
// 0x0000 (0x0028 - 0x0028)
class UAstroPlayFabBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFabBPL.AstroPlayFabBPL");
		return ptr;
	}


	void STATIC_UpdateEmoteSelections(class UObject* WorldContextObject, TArray<class UAstroEmoteDefinition*> EmoteSet);
	void STATIC_UpdateCharacterCustomization(class UObject* WorldContextObject, const struct FAstroCharacterCustomization& Customization);
	void STATIC_MarkItemUnseen(class UObject* WorldContextObject, class UObject* Asset);
	void STATIC_MarkItemSeen(class UObject* WorldContextObject, class UObject* Asset);
	bool STATIC_HasAnyUnseenEmotes();
	bool STATIC_HasAnyUnseenCosmetics();
	TArray<struct FAstroVisorMaterialDisplayOption> STATIC_GetVisorMaterialOptionsForDisplay();
	TArray<struct FAstroSuitDisplayOption> STATIC_GetSuitOptionsForDisplay();
	TArray<struct FGuid> STATIC_GetSubmittedItemDriveGuids();
	class UAstroVisorMaterial* STATIC_GetSelectedVisorMaterial();
	class UAstroCharacterSuit* STATIC_GetSelectedSuit();
	class UAstroCharacterPalette* STATIC_GetSelectedCharacterPalette();
	class UAstroCharacterOverlayPattern* STATIC_GetSelectedCharacterOverlayPattern();
	class UAstroCharacterHat* STATIC_GetSelectedCharacterHat(ECharacterHatCategory Category);
	TArray<struct FAstroPhotoFilterDisplayOption> STATIC_GetPhotoFiltersForDisplay();
	TArray<struct FAstroEmoteDisplayOption> STATIC_GetEmoteOptionsForDisplay();
	TArray<class UAstroEmoteDefinition*> STATIC_GetCurrentEmoteSet();
	struct FAstroCharacterCustomization STATIC_GetCurrentCharacterCustomization();
	TArray<struct FAstroCharacterPaletteDisplayOption> STATIC_GetCharacterPaletteOptionsForDisplay();
	TArray<struct FAstroCharacterOverlayPatternDisplayOption> STATIC_GetCharacterOverlayPatternOptionsForDisplay();
	TArray<struct FAstroCharacterHatDisplayOption> STATIC_GetCharacterHatOptionsForDisplay(ECharacterHatCategory Category);
	void STATIC_AddSubmittedItemDriveGuid(class UObject* WorldContextObject, const struct FGuid& Guid);
};


// Class AstroPlayFabBPL.GetUpdatedClientDataTask
// 0x0040 (0x0068 - 0x0028)
class UGetUpdatedClientDataTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFabBPL.GetUpdatedClientDataTask");
		return ptr;
	}


	class UGetUpdatedClientDataTask* STATIC_GetUpdatedClientData(class UObject* WorldContextObject, float Timeout);
};


// Class AstroPlayFabBPL.GetUpdatedServerListTask
// 0x0040 (0x0068 - 0x0028)
class UGetUpdatedServerListTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFabBPL.GetUpdatedServerListTask");
		return ptr;
	}


	class UGetUpdatedServerListTask* STATIC_GetUpdatedServerList(class UObject* WorldContextObject, float Timeout);
};


// Class AstroPlayFabBPL.RedeemCodeTask
// 0x0058 (0x0080 - 0x0028)
class URedeemCodeTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnRedeemFinished;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFabBPL.RedeemCodeTask");
		return ptr;
	}


	class URedeemCodeTask* STATIC_RedeemCode(class UObject* WorldContextObject, class AAstroPlayerController* PlayerController, const struct FString& CodeToRedeem, float Timeout);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
