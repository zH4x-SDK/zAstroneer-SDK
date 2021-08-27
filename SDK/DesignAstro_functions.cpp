
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

// Function DesignAstro.DesignAstro_C.ApplyHatCustomization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization AstroCharacterCustomization    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADesignAstro_C::ApplyHatCustomization(struct FAstroCharacterCustomization* AstroCharacterCustomization)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ApplyHatCustomization");

	ADesignAstro_C_ApplyHatCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AstroCharacterCustomization != nullptr)
		*AstroCharacterCustomization = params.AstroCharacterCustomization;
}


// Function DesignAstro.DesignAstro_C.SetCustomizationMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      SuitMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Visor_Material                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      AccessoriesMaterial            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SetCustomizationMaterials(class UMaterialInterface* SuitMaterial, class UMaterialInterface* Visor_Material, class UMaterialInterface* AccessoriesMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SetCustomizationMaterials");

	ADesignAstro_C_SetCustomizationMaterials_Params params;
	params.SuitMaterial = SuitMaterial;
	params.Visor_Material = Visor_Material;
	params.AccessoriesMaterial = AccessoriesMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.HideCustomizationUnlockTooltip
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::HideCustomizationUnlockTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.HideCustomizationUnlockTooltip");

	ADesignAstro_C_HideCustomizationUnlockTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ShowCustomizationUnlockTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTooltipWidgetDisplayData DisplayData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::ShowCustomizationUnlockTooltip(const struct FTooltipWidgetDisplayData& DisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ShowCustomizationUnlockTooltip");

	ADesignAstro_C_ShowCustomizationUnlockTooltip_Params params;
	params.DisplayData = DisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.GetDeformTool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADeformTool*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADeformTool* ADesignAstro_C::GetDeformTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.GetDeformTool");

	ADesignAstro_C_GetDeformTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.CreateMaterialsForCustomization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization Customization                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* SuitMaterial                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* VisorMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* AccessoriesMaterial            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::CreateMaterialsForCustomization(struct FAstroCharacterCustomization* Customization, class UMaterialInstanceDynamic** SuitMaterial, class UMaterialInstanceDynamic** VisorMaterial, class UMaterialInstanceDynamic** AccessoriesMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.CreateMaterialsForCustomization");

	ADesignAstro_C_CreateMaterialsForCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Customization != nullptr)
		*Customization = params.Customization;
	if (SuitMaterial != nullptr)
		*SuitMaterial = params.SuitMaterial;
	if (VisorMaterial != nullptr)
		*VisorMaterial = params.VisorMaterial;
	if (AccessoriesMaterial != nullptr)
		*AccessoriesMaterial = params.AccessoriesMaterial;
}


// Function DesignAstro.DesignAstro_C.UpdateLowPowerLight
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::UpdateLowPowerLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.UpdateLowPowerLight");

	ADesignAstro_C_UpdateLowPowerLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.UpdateControlSymbol
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::UpdateControlSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.UpdateControlSymbol");

	ADesignAstro_C_UpdateControlSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.IsItemTypeAuxItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAuxItem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::IsItemTypeAuxItem(class UClass* ItemType, bool* IsAuxItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.IsItemTypeAuxItem");

	ADesignAstro_C_IsItemTypeAuxItem_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAuxItem != nullptr)
		*IsAuxItem = params.IsAuxItem;
}


// Function DesignAstro.DesignAstro_C.BuildCompositeEquipmentSlotArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PrioritizeAuxSlots             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeBackpackPrinterReserveSlot (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSlotReference>  CharacterEquipmentSlots        (Parm, OutParm, ZeroConstructor)

void ADesignAstro_C::BuildCompositeEquipmentSlotArray(bool PrioritizeAuxSlots, bool IncludeBackpackPrinterReserveSlot, TArray<struct FSlotReference>* CharacterEquipmentSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.BuildCompositeEquipmentSlotArray");

	ADesignAstro_C_BuildCompositeEquipmentSlotArray_Params params;
	params.PrioritizeAuxSlots = PrioritizeAuxSlots;
	params.IncludeBackpackPrinterReserveSlot = IncludeBackpackPrinterReserveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterEquipmentSlots != nullptr)
		*CharacterEquipmentSlots = params.CharacterEquipmentSlots;
}


// Function DesignAstro.DesignAstro_C.BuildQuickClickSlotArrayForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSlotReference>  QuickSlots                     (Parm, OutParm, ZeroConstructor)

void ADesignAstro_C::BuildQuickClickSlotArrayForItem(class APhysicalItem* Item, TArray<struct FSlotReference>* QuickSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.BuildQuickClickSlotArrayForItem");

	ADesignAstro_C_BuildQuickClickSlotArrayForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuickSlots != nullptr)
		*QuickSlots = params.QuickSlots;
}


// Function DesignAstro.DesignAstro_C.ApplyPowerExternal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesignAstro_C::ApplyPowerExternal(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ApplyPowerExternal");

	ADesignAstro_C_ApplyPowerExternal_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.ApplyOxygenExternal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADesignAstro_C::ApplyOxygenExternal(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ApplyOxygenExternal");

	ADesignAstro_C_ApplyOxygenExternal_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.Spawn Corpse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroCorpse_C*          Corpse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Spawn_Corpse(class AAstroCorpse_C** Corpse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Spawn Corpse");

	ADesignAstro_C_Spawn_Corpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Corpse != nullptr)
		*Corpse = params.Corpse;
}


// Function DesignAstro.DesignAstro_C.Deform Tool Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Deform_Tool_Active(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Deform Tool Active");

	ADesignAstro_C_Deform_Tool_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (active != nullptr)
		*active = params.active;
}


// Function DesignAstro.DesignAstro_C.Apply Power
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Remaining                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Apply_Power(float Amount, float* Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Apply Power");

	ADesignAstro_C_Apply_Power_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Remaining != nullptr)
		*Remaining = params.Remaining;
}


// Function DesignAstro.DesignAstro_C.SetRestrained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRestrained                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SetRestrained(bool IsRestrained)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SetRestrained");

	ADesignAstro_C_SetRestrained_Params params;
	params.IsRestrained = IsRestrained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Slot Is Powering
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Powering                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Slot_Is_Powering(const struct FSlotReference& Slot, bool* Powering)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Slot Is Powering");

	ADesignAstro_C_Slot_Is_Powering_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Powering != nullptr)
		*Powering = params.Powering;
}


// Function DesignAstro.DesignAstro_C.QuickItemClick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesignAstro_C::QuickItemClick(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.QuickItemClick");

	ADesignAstro_C_QuickItemClick_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.Toggle Deform
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Toggle_Deform()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Toggle Deform");

	ADesignAstro_C_Toggle_Deform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Apply Oxygen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADesignAstro_C::Apply_Oxygen(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Apply Oxygen");

	ADesignAstro_C_Apply_Oxygen_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.GetHeadLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADesignAstro_C::GetHeadLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.GetHeadLocation");

	ADesignAstro_C_GetHeadLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.Fill Corpse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroCorpse_C*          Corpse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Fill_Corpse(class AAstroCorpse_C* Corpse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Fill Corpse");

	ADesignAstro_C_Fill_Corpse_Params params;
	params.Corpse = Corpse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SetBiomeAmbience
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewAmbientAudioEvent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ADesignAstro_C::SetBiomeAmbience(const struct FString& NewAmbientAudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SetBiomeAmbience");

	ADesignAstro_C_SetBiomeAmbience_Params params;
	params.NewAmbientAudioEvent = NewAmbientAudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.CanSprint
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesignAstro_C::CanSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.CanSprint");

	ADesignAstro_C_CanSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesignAstro.DesignAstro_C.Set Planet Survival
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Notify                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Set_Planet_Survival(bool Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Set Planet Survival");

	ADesignAstro_C_Set_Planet_Survival_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Deal Damage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Deal_Damage(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Deal Damage");

	ADesignAstro_C_Deal_Damage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Revive
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Revive");

	ADesignAstro_C_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Set Interaction
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Set_Interaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Set Interaction");

	ADesignAstro_C_Set_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Get Backpack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABackpackRail_C*         Backpack                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Get_Backpack(class ABackpackRail_C** Backpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Get Backpack");

	ADesignAstro_C_Get_Backpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Backpack != nullptr)
		*Backpack = params.Backpack;
}


// Function DesignAstro.DesignAstro_C.ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::ToggleLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ToggleLights");

	ADesignAstro_C_ToggleLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Init Backpack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Init_Backpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Init Backpack");

	ADesignAstro_C_Init_Backpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.UserConstructionScript");

	ADesignAstro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_Home_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_Home_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_Home_K2Node_InputKeyEvent_10");

	ADesignAstro_C_InpActEvt_Home_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_End_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_End_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_End_K2Node_InputKeyEvent_9");

	ADesignAstro_C_InpActEvt_End_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8");

	ADesignAstro_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7");

	ADesignAstro_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6");

	ADesignAstro_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5");

	ADesignAstro_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_LeftBracket_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_4");

	ADesignAstro_C_InpActEvt_LeftBracket_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_3");

	ADesignAstro_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_RightBracket_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_2");

	ADesignAstro_C_InpActEvt_RightBracket_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::InpActEvt_Backslash_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1");

	ADesignAstro_C_InpActEvt_Backslash_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3");

	ADesignAstro_C_OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADesignAstro_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ReceiveBeginPlay");

	ADesignAstro_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Make Connections
// (BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Make_Connections()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Make Connections");

	ADesignAstro_C_Make_Connections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Setup Death
// (BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Setup_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Setup Death");

	ADesignAstro_C_Setup_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER Do Death
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::SERVER_Do_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER Do Death");

	ADesignAstro_C_SERVER_Do_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER Start Death
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SERVER_Start_Death(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER Start Death");

	ADesignAstro_C_SERVER_Start_Death_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature
// (BlueprintEvent)

void ADesignAstro_C::BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature");

	ADesignAstro_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature
// (BlueprintEvent)

void ADesignAstro_C::BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature");

	ADesignAstro_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER SendControlSwitch
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SERVER_SendControlSwitch(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER SendControlSwitch");

	ADesignAstro_C_SERVER_SendControlSwitch_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER Tether
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::SERVER_Tether()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER Tether");

	ADesignAstro_C_SERVER_Tether_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Assign Buddy Click
// (BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Assign_Buddy_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Assign Buddy Click");

	ADesignAstro_C_Assign_Buddy_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ADesignAstro_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnClicked_Event_1");

	ADesignAstro_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnParentAttach
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Entering                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::OnParentAttach(class AActor* Parent, bool Entering)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnParentAttach");

	ADesignAstro_C_OnParentAttach_Params params;
	params.Parent = Parent;
	params.Entering = Entering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ReceiveAnyDamage");

	ADesignAstro_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.MULTICAST Set Revive Spawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADesignAstro_C::MULTICAST_Set_Revive_Spawn(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.MULTICAST Set Revive Spawn");

	ADesignAstro_C_MULTICAST_Set_Revive_Spawn_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.MULTICAST Client Death
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::MULTICAST_Client_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.MULTICAST Client Death");

	ADesignAstro_C_MULTICAST_Client_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature");

	ADesignAstro_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ClickUnhandled_Event_1
// (BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::ClickUnhandled_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ClickUnhandled_Event_1");

	ADesignAstro_C_ClickUnhandled_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SlotIndicatorClicked
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SlotIndicatorClicked(const struct FSlotReference& Slot, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SlotIndicatorClicked");

	ADesignAstro_C_SlotIndicatorClicked_Params params;
	params.Slot = Slot;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.QuickItemClickView
// (Event, Public, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::QuickItemClickView(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.QuickItemClickView");

	ADesignAstro_C_QuickItemClickView_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER Toggle Lights
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::SERVER_Toggle_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER Toggle Lights");

	ADesignAstro_C_SERVER_Toggle_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SERVER Set Anim
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SERVER_Set_Anim(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SERVER Set Anim");

	ADesignAstro_C_SERVER_Set_Anim_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Set Anim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Set_Anim(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Set Anim");

	ADesignAstro_C_Set_Anim_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Delay Anim Reset
// (BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::Delay_Anim_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Delay Anim Reset");

	ADesignAstro_C_Delay_Anim_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SlotIndicatorClickedView
// (Event, Public, BlueprintEvent)

void ADesignAstro_C::SlotIndicatorClickedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SlotIndicatorClickedView");

	ADesignAstro_C_SlotIndicatorClickedView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ToggleDeformTool
// (Event, Public, BlueprintEvent)

void ADesignAstro_C::ToggleDeformTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ToggleDeformTool");

	ADesignAstro_C_ToggleDeformTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ReceiveEndPlay");

	ADesignAstro_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ReceivePossessed");

	ADesignAstro_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnOxygenLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::OnOxygenLevelChanged(float NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnOxygenLevelChanged");

	ADesignAstro_C_OnOxygenLevelChanged_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.SuffocatingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Suffocating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::SuffocatingChanged(bool Suffocating)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.SuffocatingChanged");

	ADesignAstro_C_SuffocatingChanged_Params params;
	params.Suffocating = Suffocating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Power State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Powered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Power_State_Changed(bool Powered)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Power State Changed");

	ADesignAstro_C_Power_State_Changed_Params params;
	params.Powered = Powered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.Light State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::Light_State_Changed(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.Light State Changed");

	ADesignAstro_C_Light_State_Changed_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnlineNicknameChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NickName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ADesignAstro_C::OnlineNicknameChanged(bool Visible, const struct FString& NickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnlineNicknameChanged");

	ADesignAstro_C_OnlineNicknameChanged_Params params;
	params.Visible = Visible;
	params.NickName = NickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnLandedOnGround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  GroundSurface                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::OnLandedOnGround(TEnumAsByte<EPhysicalSurface> GroundSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnLandedOnGround");

	ADesignAstro_C_OnLandedOnGround_Params params;
	params.GroundSurface = GroundSurface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ApplyCharacterCustomization
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAstroCharacterCustomization Customization                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADesignAstro_C::ApplyCharacterCustomization(const struct FAstroCharacterCustomization& Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ApplyCharacterCustomization");

	ADesignAstro_C_ApplyCharacterCustomization_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnRep_FreeOxygen
// (Event, Protected, BlueprintEvent)

void ADesignAstro_C::OnRep_FreeOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnRep_FreeOxygen");

	ADesignAstro_C_OnRep_FreeOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.AuthorityForceKillAstro
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void ADesignAstro_C::AuthorityForceKillAstro()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.AuthorityForceKillAstro");

	ADesignAstro_C_AuthorityForceKillAstro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.OnBrushColorChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTerrainMaterial        TerrainMaterial                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADesignAstro_C::OnBrushColorChanged(const struct FTerrainMaterial& TerrainMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.OnBrushColorChanged");

	ADesignAstro_C_OnBrushColorChanged_Params params;
	params.TerrainMaterial = TerrainMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.PlaceTetherFromBackpack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADesignAstro_C::PlaceTetherFromBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.PlaceTetherFromBackpack");

	ADesignAstro_C_PlaceTetherFromBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.HandleDroneCameraPerspectiveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::HandleDroneCameraPerspectiveChanged(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.HandleDroneCameraPerspectiveChanged");

	ADesignAstro_C_HandleDroneCameraPerspectiveChanged_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesignAstro.DesignAstro_C.ExecuteUbergraph_DesignAstro
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADesignAstro_C::ExecuteUbergraph_DesignAstro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesignAstro.DesignAstro_C.ExecuteUbergraph_DesignAstro");

	ADesignAstro_C_ExecuteUbergraph_DesignAstro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
