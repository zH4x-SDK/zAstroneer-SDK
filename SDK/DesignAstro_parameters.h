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

// Function DesignAstro.DesignAstro_C.ApplyHatCustomization
struct ADesignAstro_C_ApplyHatCustomization_Params
{
	struct FAstroCharacterCustomization                AstroCharacterCustomization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SetCustomizationMaterials
struct ADesignAstro_C_SetCustomizationMaterials_Params
{
	class UMaterialInterface*                          SuitMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Visor_Material;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AccessoriesMaterial;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.HideCustomizationUnlockTooltip
struct ADesignAstro_C_HideCustomizationUnlockTooltip_Params
{
};

// Function DesignAstro.DesignAstro_C.ShowCustomizationUnlockTooltip
struct ADesignAstro_C_ShowCustomizationUnlockTooltip_Params
{
	struct FTooltipWidgetDisplayData                   DisplayData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.GetDeformTool
struct ADesignAstro_C_GetDeformTool_Params
{
	class ADeformTool*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.CreateMaterialsForCustomization
struct ADesignAstro_C_CreateMaterialsForCustomization_Params
{
	struct FAstroCharacterCustomization                Customization;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SuitMaterial;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    VisorMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AccessoriesMaterial;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.UpdateLowPowerLight
struct ADesignAstro_C_UpdateLowPowerLight_Params
{
};

// Function DesignAstro.DesignAstro_C.UpdateControlSymbol
struct ADesignAstro_C_UpdateControlSymbol_Params
{
};

// Function DesignAstro.DesignAstro_C.IsItemTypeAuxItem
struct ADesignAstro_C_IsItemTypeAuxItem_Params
{
	class UClass*                                      ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAuxItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.BuildCompositeEquipmentSlotArray
struct ADesignAstro_C_BuildCompositeEquipmentSlotArray_Params
{
	bool                                               PrioritizeAuxSlots;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeBackpackPrinterReserveSlot;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      CharacterEquipmentSlots;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function DesignAstro.DesignAstro_C.BuildQuickClickSlotArrayForItem
struct ADesignAstro_C_BuildQuickClickSlotArrayForItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      QuickSlots;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function DesignAstro.DesignAstro_C.ApplyPowerExternal
struct ADesignAstro_C_ApplyPowerExternal_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ApplyOxygenExternal
struct ADesignAstro_C_ApplyOxygenExternal_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Spawn Corpse
struct ADesignAstro_C_Spawn_Corpse_Params
{
	class AAstroCorpse_C*                              Corpse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Deform Tool Active
struct ADesignAstro_C_Deform_Tool_Active_Params
{
	bool                                               active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Apply Power
struct ADesignAstro_C_Apply_Power_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Remaining;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SetRestrained
struct ADesignAstro_C_SetRestrained_Params
{
	bool                                               IsRestrained;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Slot Is Powering
struct ADesignAstro_C_Slot_Is_Powering_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Powering;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.QuickItemClick
struct ADesignAstro_C_QuickItemClick_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Toggle Deform
struct ADesignAstro_C_Toggle_Deform_Params
{
};

// Function DesignAstro.DesignAstro_C.Apply Oxygen
struct ADesignAstro_C_Apply_Oxygen_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.GetHeadLocation
struct ADesignAstro_C_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Fill Corpse
struct ADesignAstro_C_Fill_Corpse_Params
{
	class AAstroCorpse_C*                              Corpse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SetBiomeAmbience
struct ADesignAstro_C_SetBiomeAmbience_Params
{
	struct FString                                     NewAmbientAudioEvent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DesignAstro.DesignAstro_C.CanSprint
struct ADesignAstro_C_CanSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Set Planet Survival
struct ADesignAstro_C_Set_Planet_Survival_Params
{
	bool                                               Notify;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Deal Damage
struct ADesignAstro_C_Deal_Damage_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Revive
struct ADesignAstro_C_Revive_Params
{
};

// Function DesignAstro.DesignAstro_C.Set Interaction
struct ADesignAstro_C_Set_Interaction_Params
{
};

// Function DesignAstro.DesignAstro_C.Get Backpack
struct ADesignAstro_C_Get_Backpack_Params
{
	class ABackpackRail_C*                             Backpack;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ToggleLights
struct ADesignAstro_C_ToggleLights_Params
{
};

// Function DesignAstro.DesignAstro_C.Init Backpack
struct ADesignAstro_C_Init_Backpack_Params
{
};

// Function DesignAstro.DesignAstro_C.UserConstructionScript
struct ADesignAstro_C_UserConstructionScript_Params
{
};

// Function DesignAstro.DesignAstro_C.InpActEvt_Home_K2Node_InputKeyEvent_10
struct ADesignAstro_C_InpActEvt_Home_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_End_K2Node_InputKeyEvent_9
struct ADesignAstro_C_InpActEvt_End_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
struct ADesignAstro_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7
struct ADesignAstro_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6
struct ADesignAstro_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5
struct ADesignAstro_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_4
struct ADesignAstro_C_InpActEvt_LeftBracket_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_3
struct ADesignAstro_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_2
struct ADesignAstro_C_InpActEvt_RightBracket_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1
struct ADesignAstro_C_InpActEvt_Backslash_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3
struct ADesignAstro_C_OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ReceiveBeginPlay
struct ADesignAstro_C_ReceiveBeginPlay_Params
{
};

// Function DesignAstro.DesignAstro_C.Make Connections
struct ADesignAstro_C_Make_Connections_Params
{
};

// Function DesignAstro.DesignAstro_C.Setup Death
struct ADesignAstro_C_Setup_Death_Params
{
};

// Function DesignAstro.DesignAstro_C.SERVER Do Death
struct ADesignAstro_C_SERVER_Do_Death_Params
{
};

// Function DesignAstro.DesignAstro_C.SERVER Start Death
struct ADesignAstro_C_SERVER_Start_Death_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature
struct ADesignAstro_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature_Params
{
};

// Function DesignAstro.DesignAstro_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature
struct ADesignAstro_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature_Params
{
};

// Function DesignAstro.DesignAstro_C.SERVER SendControlSwitch
struct ADesignAstro_C_SERVER_SendControlSwitch_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SERVER Tether
struct ADesignAstro_C_SERVER_Tether_Params
{
};

// Function DesignAstro.DesignAstro_C.Assign Buddy Click
struct ADesignAstro_C_Assign_Buddy_Click_Params
{
};

// Function DesignAstro.DesignAstro_C.OnClicked_Event_1
struct ADesignAstro_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DesignAstro.DesignAstro_C.OnParentAttach
struct ADesignAstro_C_OnParentAttach_Params
{
	class AActor*                                      Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Entering;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ReceiveAnyDamage
struct ADesignAstro_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.MULTICAST Set Revive Spawn
struct ADesignAstro_C_MULTICAST_Set_Revive_Spawn_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.MULTICAST Client Death
struct ADesignAstro_C_MULTICAST_Client_Death_Params
{
};

// Function DesignAstro.DesignAstro_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
struct ADesignAstro_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ClickUnhandled_Event_1
struct ADesignAstro_C_ClickUnhandled_Event_1_Params
{
};

// Function DesignAstro.DesignAstro_C.SlotIndicatorClicked
struct ADesignAstro_C_SlotIndicatorClicked_Params
{
	struct FSlotReference                              Slot;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.QuickItemClickView
struct ADesignAstro_C_QuickItemClickView_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SERVER Toggle Lights
struct ADesignAstro_C_SERVER_Toggle_Lights_Params
{
};

// Function DesignAstro.DesignAstro_C.SERVER Set Anim
struct ADesignAstro_C_SERVER_Set_Anim_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Set Anim
struct ADesignAstro_C_Set_Anim_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Delay Anim Reset
struct ADesignAstro_C_Delay_Anim_Reset_Params
{
};

// Function DesignAstro.DesignAstro_C.SlotIndicatorClickedView
struct ADesignAstro_C_SlotIndicatorClickedView_Params
{
};

// Function DesignAstro.DesignAstro_C.ToggleDeformTool
struct ADesignAstro_C_ToggleDeformTool_Params
{
};

// Function DesignAstro.DesignAstro_C.ReceiveEndPlay
struct ADesignAstro_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ReceivePossessed
struct ADesignAstro_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.OnOxygenLevelChanged
struct ADesignAstro_C_OnOxygenLevelChanged_Params
{
	float                                              NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.SuffocatingChanged
struct ADesignAstro_C_SuffocatingChanged_Params
{
	bool                                               Suffocating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Power State Changed
struct ADesignAstro_C_Power_State_Changed_Params
{
	bool                                               Powered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.Light State Changed
struct ADesignAstro_C_Light_State_Changed_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.OnlineNicknameChanged
struct ADesignAstro_C_OnlineNicknameChanged_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NickName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DesignAstro.DesignAstro_C.OnLandedOnGround
struct ADesignAstro_C_OnLandedOnGround_Params
{
	TEnumAsByte<EPhysicalSurface>                      GroundSurface;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ApplyCharacterCustomization
struct ADesignAstro_C_ApplyCharacterCustomization_Params
{
	struct FAstroCharacterCustomization                Customization;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.OnRep_FreeOxygen
struct ADesignAstro_C_OnRep_FreeOxygen_Params
{
};

// Function DesignAstro.DesignAstro_C.AuthorityForceKillAstro
struct ADesignAstro_C_AuthorityForceKillAstro_Params
{
};

// Function DesignAstro.DesignAstro_C.OnBrushColorChanged
struct ADesignAstro_C_OnBrushColorChanged_Params
{
	struct FTerrainMaterial                            TerrainMaterial;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DesignAstro.DesignAstro_C.PlaceTetherFromBackpack
struct ADesignAstro_C_PlaceTetherFromBackpack_Params
{
};

// Function DesignAstro.DesignAstro_C.HandleDroneCameraPerspectiveChanged
struct ADesignAstro_C_HandleDroneCameraPerspectiveChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesignAstro.DesignAstro_C.ExecuteUbergraph_DesignAstro
struct ADesignAstro_C_ExecuteUbergraph_DesignAstro_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
