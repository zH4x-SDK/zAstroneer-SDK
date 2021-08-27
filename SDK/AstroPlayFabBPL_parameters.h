#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateEmoteSelections
struct UAstroPlayFabBPL_UpdateEmoteSelections_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAstroEmoteDefinition*>               EmoteSet;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.UpdateCharacterCustomization
struct UAstroPlayFabBPL_UpdateCharacterCustomization_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterCustomization                Customization;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemUnseen
struct UAstroPlayFabBPL_MarkItemUnseen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.MarkItemSeen
struct UAstroPlayFabBPL_MarkItemSeen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenEmotes
struct UAstroPlayFabBPL_HasAnyUnseenEmotes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.HasAnyUnseenCosmetics
struct UAstroPlayFabBPL_HasAnyUnseenCosmetics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetVisorMaterialOptionsForDisplay
struct UAstroPlayFabBPL_GetVisorMaterialOptionsForDisplay_Params
{
	TArray<struct FAstroVisorMaterialDisplayOption>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSuitOptionsForDisplay
struct UAstroPlayFabBPL_GetSuitOptionsForDisplay_Params
{
	TArray<struct FAstroSuitDisplayOption>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSubmittedItemDriveGuids
struct UAstroPlayFabBPL_GetSubmittedItemDriveGuids_Params
{
	TArray<struct FGuid>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedVisorMaterial
struct UAstroPlayFabBPL_GetSelectedVisorMaterial_Params
{
	class UAstroVisorMaterial*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedSuit
struct UAstroPlayFabBPL_GetSelectedSuit_Params
{
	class UAstroCharacterSuit*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterPalette
struct UAstroPlayFabBPL_GetSelectedCharacterPalette_Params
{
	class UAstroCharacterPalette*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterOverlayPattern
struct UAstroPlayFabBPL_GetSelectedCharacterOverlayPattern_Params
{
	class UAstroCharacterOverlayPattern*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetSelectedCharacterHat
struct UAstroPlayFabBPL_GetSelectedCharacterHat_Params
{
	ECharacterHatCategory                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterHat*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetPhotoFiltersForDisplay
struct UAstroPlayFabBPL_GetPhotoFiltersForDisplay_Params
{
	TArray<struct FAstroPhotoFilterDisplayOption>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetEmoteOptionsForDisplay
struct UAstroPlayFabBPL_GetEmoteOptionsForDisplay_Params
{
	TArray<struct FAstroEmoteDisplayOption>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentEmoteSet
struct UAstroPlayFabBPL_GetCurrentEmoteSet_Params
{
	TArray<class UAstroEmoteDefinition*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCurrentCharacterCustomization
struct UAstroPlayFabBPL_GetCurrentCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterPaletteOptionsForDisplay
struct UAstroPlayFabBPL_GetCharacterPaletteOptionsForDisplay_Params
{
	TArray<struct FAstroCharacterPaletteDisplayOption> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterOverlayPatternOptionsForDisplay
struct UAstroPlayFabBPL_GetCharacterOverlayPatternOptionsForDisplay_Params
{
	TArray<struct FAstroCharacterOverlayPatternDisplayOption> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.GetCharacterHatOptionsForDisplay
struct UAstroPlayFabBPL_GetCharacterHatOptionsForDisplay_Params
{
	ECharacterHatCategory                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroCharacterHatDisplayOption>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFabBPL.AstroPlayFabBPL.AddSubmittedItemDriveGuid
struct UAstroPlayFabBPL_AddSubmittedItemDriveGuid_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (Parm, IsPlainOldData)
};

// Function AstroPlayFabBPL.GetUpdatedClientDataTask.GetUpdatedClientData
struct UGetUpdatedClientDataTask_GetUpdatedClientData_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetUpdatedClientDataTask*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.GetUpdatedServerListTask.GetUpdatedServerList
struct UGetUpdatedServerListTask_GetUpdatedServerList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetUpdatedServerListTask*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFabBPL.RedeemCodeTask.RedeemCode
struct URedeemCodeTask_RedeemCode_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAstroPlayerController*                      PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CodeToRedeem;                                             // (Parm, ZeroConstructor)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class URedeemCodeTask*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
