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

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Hat Option Used
struct UGameMenuCustomizationSubsections_C_Hat_Option_Used_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterHatCategory                              Hat_Category;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroCharacterHatDisplayOption>     Hat_like_Display_Options;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UGameMenuEntryDoubleText_C*>          Hat_like_Selection_Entities;                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.HatOptionFocusChanged
struct UGameMenuCustomizationSubsections_C_HatOptionFocusChanged_Params
{
	bool                                               New_Is_Focused;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               Focusable_Widget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         Focus_Change_Cause;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterHatCategory                              Hat_Category;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroCharacterHatDisplayOption>     Hat_like_Display_Options;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeHatSelection
struct UGameMenuCustomizationSubsections_C_ChangeHatSelection_Params
{
	int                                                Suit_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterHatCategory                              Hat_Category;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroCharacterHatDisplayOption>     Hat_like_Display_Options;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UGameMenuEntryDoubleText_C*>          Hat_like_Selection_Entities;                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.InvalidateCosmeticDelayPreview
struct UGameMenuCustomizationSubsections_C_InvalidateCosmeticDelayPreview_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchEmotePreviewRequest
struct UGameMenuCustomizationSubsections_C_DispatchEmotePreviewRequest_Params
{
	class UAstroEmoteDefinition*                       emoteDefinition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNonAchievementUnlock;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchCharacterCustomizationPreviewRequest
struct UGameMenuCustomizationSubsections_C_DispatchCharacterCustomizationPreviewRequest_Params
{
	bool                                               isLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroCharacterCustomization                PreviewCustomization;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       CustomizationDisplayName;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       UnlockRequirements;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsNonAchievementUnlock;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.GetNumCustomizationOptionsSansEmotes
struct UGameMenuCustomizationSubsections_C_GetNumCustomizationOptionsSansEmotes_Params
{
	int                                                NumCustomizationOptionsSansEmotes;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.RefreshPreviewOfCommitedCustomizationOptions
struct UGameMenuCustomizationSubsections_C_RefreshPreviewOfCommitedCustomizationOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.CheckAwardChangeSuitAchievement
struct UGameMenuCustomizationSubsections_C_CheckAwardChangeSuitAchievement_Params
{
	class APlayController*                             Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewSuit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangePaletteSelection
struct UGameMenuCustomizationSubsections_C_ChangePaletteSelection_Params
{
	int                                                PaletteIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeVisorSelection
struct UGameMenuCustomizationSubsections_C_ChangeVisorSelection_Params
{
	int                                                VisorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeSuitSelection
struct UGameMenuCustomizationSubsections_C_ChangeSuitSelection_Params
{
	int                                                SuitIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.LayoutWidget
struct UGameMenuCustomizationSubsections_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Construct
struct UGameMenuCustomizationSubsections_C_Construct_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionMade
struct UGameMenuCustomizationSubsections_C_OnSuitSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionMade
struct UGameMenuCustomizationSubsections_C_OnPaletteSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionMade
struct UGameMenuCustomizationSubsections_C_OnVisorSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutSelectionMade
struct UGameMenuCustomizationSubsections_C_OnEmotePopoutSelectionMade_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteSlotUsed
struct UGameMenuCustomizationSubsections_C_OnEmoteSlotUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               EmoteOption;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionChangedFocus
struct UGameMenuCustomizationSubsections_C_OnSuitSelectionChangedFocus_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionChangedFocus
struct UGameMenuCustomizationSubsections_C_OnPaletteSelectionChangedFocus_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionFocusChanged
struct UGameMenuCustomizationSubsections_C_OnVisorSelectionFocusChanged_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutOptionsFocusStateChanged
struct UGameMenuCustomizationSubsections_C_OnEmotePopoutOptionsFocusStateChanged_Params
{
	bool                                               IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnDismissedEmotePopout
struct UGameMenuCustomizationSubsections_C_OnDismissedEmotePopout_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteOptionFocusStateChanged
struct UGameMenuCustomizationSubsections_C_OnEmoteOptionFocusStateChanged_Params
{
	bool                                               IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCustomizationSubsections_C_BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchDelayedCustomizationPreviewData
struct UGameMenuCustomizationSubsections_C_DispatchDelayedCustomizationPreviewData_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedSuitSelectionAttempted
struct UGameMenuCustomizationSubsections_C_OnLockedSuitSelectionAttempted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedPaletteSelectionAttempted
struct UGameMenuCustomizationSubsections_C_OnLockedPaletteSelectionAttempted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedVisorSelectionAttempted
struct UGameMenuCustomizationSubsections_C_OnLockedVisorSelectionAttempted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedEmotePopoutSelectionAttempted
struct UGameMenuCustomizationSubsections_C_OnLockedEmotePopoutSelectionAttempted_Params
{
	int                                                SelectionIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionMade
struct UGameMenuCustomizationSubsections_C_OnHatSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedHatSelectionMade
struct UGameMenuCustomizationSubsections_C_OnLockedHatSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionChangedFocus
struct UGameMenuCustomizationSubsections_C_OnHatSelectionChangedFocus_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionMade
struct UGameMenuCustomizationSubsections_C_OnMaskSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionChangedFocus
struct UGameMenuCustomizationSubsections_C_OnMaskSelectionChangedFocus_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedMaskSelectionMade
struct UGameMenuCustomizationSubsections_C_OnLockedMaskSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeHatSelectionOptions
struct UGameMenuCustomizationSubsections_C_MakeHatSelectionOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeMaskSelectionOptions
struct UGameMenuCustomizationSubsections_C_MakeMaskSelectionOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeVisorSelectionOptions
struct UGameMenuCustomizationSubsections_C_MakeVisorSelectionOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeSuitSelectionOptions
struct UGameMenuCustomizationSubsections_C_MakeSuitSelectionOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakePaletteSelectionOptions
struct UGameMenuCustomizationSubsections_C_MakePaletteSelectionOptions_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateVisorSelectionOption
struct UGameMenuCustomizationSubsections_C_UpdateVisorSelectionOption_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateSuitSelectionOption
struct UGameMenuCustomizationSubsections_C_UpdateSuitSelectionOption_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdatePaletteSelectionOption
struct UGameMenuCustomizationSubsections_C_UpdatePaletteSelectionOption_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateMaskSelectionOption
struct UGameMenuCustomizationSubsections_C_UpdateMaskSelectionOption_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateHatSelectionOption
struct UGameMenuCustomizationSubsections_C_UpdateHatSelectionOption_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateEmoteSlots
struct UGameMenuCustomizationSubsections_C_UpdateEmoteSlots_Params
{
	bool                                               WithLayout;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.SetupEmoteSlots
struct UGameMenuCustomizationSubsections_C_SetupEmoteSlots_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSubsectionClosed
struct UGameMenuCustomizationSubsections_C_OnSubsectionClosed_Params
{
};

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ExecuteUbergraph_GameMenuCustomizationSubsections
struct UGameMenuCustomizationSubsections_C_ExecuteUbergraph_GameMenuCustomizationSubsections_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
