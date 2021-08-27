
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

// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ApplyHatCustomization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization AstroCharacterCustomization    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::ApplyHatCustomization(struct FAstroCharacterCustomization* AstroCharacterCustomization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ApplyHatCustomization");

	AAstro_Render_Dummy_Title_C_ApplyHatCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AstroCharacterCustomization != nullptr)
		*AstroCharacterCustomization = params.AstroCharacterCustomization;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.SetCustomizationMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       SuitMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       VisorMaterial                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* AccessoriesMaterial            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::SetCustomizationMaterials(class UMaterialInstance* SuitMaterial, class UMaterialInstance* VisorMaterial, class UMaterialInstanceDynamic* AccessoriesMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.SetCustomizationMaterials");

	AAstro_Render_Dummy_Title_C_SetCustomizationMaterials_Params params;
	params.SuitMaterial = SuitMaterial;
	params.VisorMaterial = VisorMaterial;
	params.AccessoriesMaterial = AccessoriesMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ManageLockedTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTooltipWidgetDisplayData DisplayData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstro_Render_Dummy_Title_C::ManageLockedTooltip(bool isLocked, const struct FTooltipWidgetDisplayData& DisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ManageLockedTooltip");

	AAstro_Render_Dummy_Title_C_ManageLockedTooltip_Params params;
	params.isLocked = isLocked;
	params.DisplayData = DisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewEmoteCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroEmoteDefinition*   PreviewEmote                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::PreviewEmoteCustomization(class UAstroEmoteDefinition* PreviewEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewEmoteCustomization");

	AAstro_Render_Dummy_Title_C_PreviewEmoteCustomization_Params params;
	params.PreviewEmote = PreviewEmote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterVisorCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroVisorMaterial*     PreviewVisor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::PreviewCharacterVisorCustomization(class UAstroVisorMaterial* PreviewVisor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterVisorCustomization");

	AAstro_Render_Dummy_Title_C_PreviewCharacterVisorCustomization_Params params;
	params.PreviewVisor = PreviewVisor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterPaletteCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroCharacterPalette*  PreviewPalette                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::PreviewCharacterPaletteCustomization(class UAstroCharacterPalette* PreviewPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterPaletteCustomization");

	AAstro_Render_Dummy_Title_C_PreviewCharacterPaletteCustomization_Params params;
	params.PreviewPalette = PreviewPalette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterSuitCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroCharacterSuit*     PreviewSuit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::PreviewCharacterSuitCustomization(class UAstroCharacterSuit* PreviewSuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.PreviewCharacterSuitCustomization");

	AAstro_Render_Dummy_Title_C_PreviewCharacterSuitCustomization_Params params;
	params.PreviewSuit = PreviewSuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetDeformTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeformTool*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADeformTool* AAstro_Render_Dummy_Title_C::GetDeformTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetDeformTool");

	AAstro_Render_Dummy_Title_C_GetDeformTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.CreateMaterialsForCustomization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization AstroCustomization             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMaterialInstanceDynamic* SuitMaterial                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* VisorMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* AccessoriesMaterial            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::CreateMaterialsForCustomization(const struct FAstroCharacterCustomization& AstroCustomization, class UMaterialInstanceDynamic** SuitMaterial, class UMaterialInstanceDynamic** VisorMaterial, class UMaterialInstanceDynamic** AccessoriesMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.CreateMaterialsForCustomization");

	AAstro_Render_Dummy_Title_C_CreateMaterialsForCustomization_Params params;
	params.AstroCustomization = AstroCustomization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuitMaterial != nullptr)
		*SuitMaterial = params.SuitMaterial;
	if (VisorMaterial != nullptr)
		*VisorMaterial = params.VisorMaterial;
	if (AccessoriesMaterial != nullptr)
		*AccessoriesMaterial = params.AccessoriesMaterial;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetBackpack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABackpackRail_Dummy_Title_C* Backpack                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::GetBackpack(class ABackpackRail_Dummy_Title_C** Backpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.GetBackpack");

	AAstro_Render_Dummy_Title_C_GetBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Backpack != nullptr)
		*Backpack = params.Backpack;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAstro_Render_Dummy_Title_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UserConstructionScript");

	AAstro_Render_Dummy_Title_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnLoaded_6C6D802841D391EBB76FA59285C503A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::OnLoaded_6C6D802841D391EBB76FA59285C503A1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnLoaded_6C6D802841D391EBB76FA59285C503A1");

	AAstro_Render_Dummy_Title_C_OnLoaded_6C6D802841D391EBB76FA59285C503A1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAstro_Render_Dummy_Title_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ReceiveBeginPlay");

	AAstro_Render_Dummy_Title_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UpdateActiveCharacterCustomizationPreview
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization CharacterCustomization         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::UpdateActiveCharacterCustomizationPreview(const struct FAstroCharacterCustomization& CharacterCustomization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.UpdateActiveCharacterCustomizationPreview");

	AAstro_Render_Dummy_Title_C_UpdateActiveCharacterCustomizationPreview_Params params;
	params.CharacterCustomization = CharacterCustomization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.EventPreviewEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroEmoteDefinition*   EmoteDef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTooltipWidgetDisplayData lockedTooltipDisplayData       (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstro_Render_Dummy_Title_C::EventPreviewEmote(class UAstroEmoteDefinition* EmoteDef, bool isLocked, const struct FTooltipWidgetDisplayData& lockedTooltipDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.EventPreviewEmote");

	AAstro_Render_Dummy_Title_C_EventPreviewEmote_Params params;
	params.EmoteDef = EmoteDef;
	params.isLocked = isLocked;
	params.lockedTooltipDisplayData = lockedTooltipDisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.HandleCustomizationPreviewRequested
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization CharacterCustomization         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           isLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTooltipWidgetDisplayData lockedTooltipDisplayData       (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstro_Render_Dummy_Title_C::HandleCustomizationPreviewRequested(const struct FAstroCharacterCustomization& CharacterCustomization, bool isLocked, const struct FTooltipWidgetDisplayData& lockedTooltipDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.HandleCustomizationPreviewRequested");

	AAstro_Render_Dummy_Title_C_HandleCustomizationPreviewRequested_Params params;
	params.CharacterCustomization = CharacterCustomization;
	params.isLocked = isLocked;
	params.lockedTooltipDisplayData = lockedTooltipDisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnStartingDropshipSpawned
// (BlueprintCallable, BlueprintEvent)

void AAstro_Render_Dummy_Title_C::OnStartingDropshipSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.OnStartingDropshipSpawned");

	AAstro_Render_Dummy_Title_C_OnStartingDropshipSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.RemoveUnlockTooltip
// (BlueprintCallable, BlueprintEvent)

void AAstro_Render_Dummy_Title_C::RemoveUnlockTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.RemoveUnlockTooltip");

	AAstro_Render_Dummy_Title_C_RemoveUnlockTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.DisableDummy
// (BlueprintCallable, BlueprintEvent)

void AAstro_Render_Dummy_Title_C::DisableDummy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.DisableDummy");

	AAstro_Render_Dummy_Title_C_DisableDummy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ExecuteUbergraph_Astro_Render_Dummy_Title
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Render_Dummy_Title_C::ExecuteUbergraph_Astro_Render_Dummy_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Render_Dummy_Title.Astro_Render_Dummy_Title_C.ExecuteUbergraph_Astro_Render_Dummy_Title");

	AAstro_Render_Dummy_Title_C_ExecuteUbergraph_Astro_Render_Dummy_Title_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
