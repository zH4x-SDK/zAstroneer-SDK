
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateEmoteSelections
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAstroEmoteDefinition*> EmoteSet                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAstroPlayFabBPL::STATIC_UpdateEmoteSelections(class UObject* WorldContextObject, TArray<class UAstroEmoteDefinition*> EmoteSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateEmoteSelections");

	UAstroPlayFabBPL_UpdateEmoteSelections_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmoteSet = EmoteSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateCharacterCustomization
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroCharacterCustomization Customization                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAstroPlayFabBPL::STATIC_UpdateCharacterCustomization(class UObject* WorldContextObject, const struct FAstroCharacterCustomization& Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateCharacterCustomization");

	UAstroPlayFabBPL_UpdateCharacterCustomization_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemUnseen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UAstroPlayFabBPL::STATIC_MarkItemUnseen(class UObject* WorldContextObject, class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemUnseen");

	UAstroPlayFabBPL_MarkItemUnseen_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemSeen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UAstroPlayFabBPL::STATIC_MarkItemSeen(class UObject* WorldContextObject, class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemSeen");

	UAstroPlayFabBPL_MarkItemSeen_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenEmotes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroPlayFabBPL::STATIC_HasAnyUnseenEmotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenEmotes");

	UAstroPlayFabBPL_HasAnyUnseenEmotes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenCosmetics
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroPlayFabBPL::STATIC_HasAnyUnseenCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenCosmetics");

	UAstroPlayFabBPL_HasAnyUnseenCosmetics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetVisorMaterialOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroVisorMaterialDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroVisorMaterialDisplayOption> UAstroPlayFabBPL::STATIC_GetVisorMaterialOptionsForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetVisorMaterialOptionsForDisplay");

	UAstroPlayFabBPL_GetVisorMaterialOptionsForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSuitOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroSuitDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroSuitDisplayOption> UAstroPlayFabBPL::STATIC_GetSuitOptionsForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSuitOptionsForDisplay");

	UAstroPlayFabBPL_GetSuitOptionsForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSubmittedItemDriveGuids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FGuid>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGuid> UAstroPlayFabBPL::STATIC_GetSubmittedItemDriveGuids()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSubmittedItemDriveGuids");

	UAstroPlayFabBPL_GetSubmittedItemDriveGuids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedVisorMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAstroVisorMaterial*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroVisorMaterial* UAstroPlayFabBPL::STATIC_GetSelectedVisorMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedVisorMaterial");

	UAstroPlayFabBPL_GetSelectedVisorMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedSuit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAstroCharacterSuit*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroCharacterSuit* UAstroPlayFabBPL::STATIC_GetSelectedSuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedSuit");

	UAstroPlayFabBPL_GetSelectedSuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterPalette
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAstroCharacterPalette*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroCharacterPalette* UAstroPlayFabBPL::STATIC_GetSelectedCharacterPalette()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterPalette");

	UAstroPlayFabBPL_GetSelectedCharacterPalette_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterOverlayPattern
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAstroCharacterOverlayPattern* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroCharacterOverlayPattern* UAstroPlayFabBPL::STATIC_GetSelectedCharacterOverlayPattern()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterOverlayPattern");

	UAstroPlayFabBPL_GetSelectedCharacterOverlayPattern_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterHat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECharacterHatCategory          Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAstroCharacterHat*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroCharacterHat* UAstroPlayFabBPL::STATIC_GetSelectedCharacterHat(ECharacterHatCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterHat");

	UAstroPlayFabBPL_GetSelectedCharacterHat_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetPhotoFiltersForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroPhotoFilterDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroPhotoFilterDisplayOption> UAstroPlayFabBPL::STATIC_GetPhotoFiltersForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetPhotoFiltersForDisplay");

	UAstroPlayFabBPL_GetPhotoFiltersForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetEmoteOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroEmoteDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroEmoteDisplayOption> UAstroPlayFabBPL::STATIC_GetEmoteOptionsForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetEmoteOptionsForDisplay");

	UAstroPlayFabBPL_GetEmoteOptionsForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentEmoteSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UAstroEmoteDefinition*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAstroEmoteDefinition*> UAstroPlayFabBPL::STATIC_GetCurrentEmoteSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentEmoteSet");

	UAstroPlayFabBPL_GetCurrentEmoteSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentCharacterCustomization
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAstroCharacterCustomization ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FAstroCharacterCustomization UAstroPlayFabBPL::STATIC_GetCurrentCharacterCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentCharacterCustomization");

	UAstroPlayFabBPL_GetCurrentCharacterCustomization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterPaletteOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroCharacterPaletteDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroCharacterPaletteDisplayOption> UAstroPlayFabBPL::STATIC_GetCharacterPaletteOptionsForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterPaletteOptionsForDisplay");

	UAstroPlayFabBPL_GetCharacterPaletteOptionsForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterOverlayPatternOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroCharacterOverlayPatternDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroCharacterOverlayPatternDisplayOption> UAstroPlayFabBPL::STATIC_GetCharacterOverlayPatternOptionsForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterOverlayPatternOptionsForDisplay");

	UAstroPlayFabBPL_GetCharacterOverlayPatternOptionsForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterHatOptionsForDisplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECharacterHatCategory          Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAstroCharacterHatDisplayOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroCharacterHatDisplayOption> UAstroPlayFabBPL::STATIC_GetCharacterHatOptionsForDisplay(ECharacterHatCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterHatOptionsForDisplay");

	UAstroPlayFabBPL_GetCharacterHatOptionsForDisplay_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.AstroPlayFabBPL.AddSubmittedItemDriveGuid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (Parm, IsPlainOldData)

void UAstroPlayFabBPL::STATIC_AddSubmittedItemDriveGuid(class UObject* WorldContextObject, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.AstroPlayFabBPL.AddSubmittedItemDriveGuid");

	UAstroPlayFabBPL_AddSubmittedItemDriveGuid_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFabBPL.GetUpdatedClientDataTask.GetUpdatedClientData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// class UGetUpdatedClientDataTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUpdatedClientDataTask* UGetUpdatedClientDataTask::STATIC_GetUpdatedClientData(class UObject* WorldContextObject, float Timeout)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.GetUpdatedClientDataTask.GetUpdatedClientData");

	UGetUpdatedClientDataTask_GetUpdatedClientData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.GetUpdatedServerListTask.GetUpdatedServerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// class UGetUpdatedServerListTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUpdatedServerListTask* UGetUpdatedServerListTask::STATIC_GetUpdatedServerList(class UObject* WorldContextObject, float Timeout)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.GetUpdatedServerListTask.GetUpdatedServerList");

	UGetUpdatedServerListTask_GetUpdatedServerList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFabBPL.RedeemCodeTask.RedeemCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AAstroPlayerController*  PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CodeToRedeem                   (Parm, ZeroConstructor)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// class URedeemCodeTask*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URedeemCodeTask* URedeemCodeTask::STATIC_RedeemCode(class UObject* WorldContextObject, class AAstroPlayerController* PlayerController, const struct FString& CodeToRedeem, float Timeout)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFabBPL.RedeemCodeTask.RedeemCode");

	URedeemCodeTask_RedeemCode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.CodeToRedeem = CodeToRedeem;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
