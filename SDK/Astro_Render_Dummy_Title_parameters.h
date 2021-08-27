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

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ApplyHatCustomization
struct AAstro_Render_Dummy_Title_C_ApplyHatCustomization_Params
{
	struct FAstroCharacterCustomization                AstroCharacterCustomization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.SetCustomizationMaterials
struct AAstro_Render_Dummy_Title_C_SetCustomizationMaterials_Params
{
	class UMaterialInstance*                           SuitMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           VisorMaterial;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AccessoriesMaterial;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ManageLockedTooltip
struct AAstro_Render_Dummy_Title_C_ManageLockedTooltip_Params
{
	bool                                               isLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   DisplayData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewEmoteCustomization
struct AAstro_Render_Dummy_Title_C_PreviewEmoteCustomization_Params
{
	class UAstroEmoteDefinition*                       PreviewEmote;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterVisorCustomization
struct AAstro_Render_Dummy_Title_C_PreviewCharacterVisorCustomization_Params
{
	class UAstroVisorMaterial*                         PreviewVisor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterPaletteCustomization
struct AAstro_Render_Dummy_Title_C_PreviewCharacterPaletteCustomization_Params
{
	class UAstroCharacterPalette*                      PreviewPalette;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterSuitCustomization
struct AAstro_Render_Dummy_Title_C_PreviewCharacterSuitCustomization_Params
{
	class UAstroCharacterSuit*                         PreviewSuit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetDeformTool
struct AAstro_Render_Dummy_Title_C_GetDeformTool_Params
{
	class ADeformTool*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.CreateMaterialsForCustomization
struct AAstro_Render_Dummy_Title_C_CreateMaterialsForCustomization_Params
{
	struct FAstroCharacterCustomization                AstroCustomization;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SuitMaterial;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    VisorMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AccessoriesMaterial;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetBackpack
struct AAstro_Render_Dummy_Title_C_GetBackpack_Params
{
	class ABackpackRail_Dummy_Title_C*                 Backpack;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UserConstructionScript
struct AAstro_Render_Dummy_Title_C_UserConstructionScript_Params
{
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnLoaded_6C6D802841D391EBB76FA59285C503A1
struct AAstro_Render_Dummy_Title_C_OnLoaded_6C6D802841D391EBB76FA59285C503A1_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ReceiveBeginPlay
struct AAstro_Render_Dummy_Title_C_ReceiveBeginPlay_Params
{
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UpdateActiveCharacterCustomizationPreview
struct AAstro_Render_Dummy_Title_C_UpdateActiveCharacterCustomizationPreview_Params
{
	struct FAstroCharacterCustomization                CharacterCustomization;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.EventPreviewEmote
struct AAstro_Render_Dummy_Title_C_EventPreviewEmote_Params
{
	class UAstroEmoteDefinition*                       EmoteDef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   lockedTooltipDisplayData;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.HandleCustomizationPreviewRequested
struct AAstro_Render_Dummy_Title_C_HandleCustomizationPreviewRequested_Params
{
	struct FAstroCharacterCustomization                CharacterCustomization;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               isLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   lockedTooltipDisplayData;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnStartingDropshipSpawned
struct AAstro_Render_Dummy_Title_C_OnStartingDropshipSpawned_Params
{
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.RemoveUnlockTooltip
struct AAstro_Render_Dummy_Title_C_RemoveUnlockTooltip_Params
{
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.DisableDummy
struct AAstro_Render_Dummy_Title_C_DisableDummy_Params
{
};

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ExecuteUbergraph_Astro_Render_Dummy_Title
struct AAstro_Render_Dummy_Title_C_ExecuteUbergraph_Astro_Render_Dummy_Title_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
