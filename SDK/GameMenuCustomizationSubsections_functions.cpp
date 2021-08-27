
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

// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Hat Option Used
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterHatCategory          Hat_Category                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAstroCharacterHatDisplayOption> Hat_like_Display_Options       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UGameMenuEntryDoubleText_C*> Hat_like_Selection_Entities    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGameMenuCustomizationSubsections_C::Hat_Option_Used(class UObject* Object, ECharacterHatCategory Hat_Category, TArray<struct FAstroCharacterHatDisplayOption>* Hat_like_Display_Options, TArray<class UGameMenuEntryDoubleText_C*>* Hat_like_Selection_Entities)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Hat Option Used");

	UGameMenuCustomizationSubsections_C_Hat_Option_Used_Params params;
	params.Object = Object;
	params.Hat_Category = Hat_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hat_like_Display_Options != nullptr)
		*Hat_like_Display_Options = params.Hat_like_Display_Options;
	if (Hat_like_Selection_Entities != nullptr)
		*Hat_like_Selection_Entities = params.Hat_like_Selection_Entities;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.HatOptionFocusChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Is_Focused                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* Focusable_Widget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     Focus_Change_Cause             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterHatCategory          Hat_Category                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAstroCharacterHatDisplayOption> Hat_like_Display_Options       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGameMenuCustomizationSubsections_C::HatOptionFocusChanged(bool New_Is_Focused, class UAstroGameMenuFocusItemWidget* Focusable_Widget, EFocusItemFocusChangeCause Focus_Change_Cause, ECharacterHatCategory Hat_Category, TArray<struct FAstroCharacterHatDisplayOption>* Hat_like_Display_Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.HatOptionFocusChanged");

	UGameMenuCustomizationSubsections_C_HatOptionFocusChanged_Params params;
	params.New_Is_Focused = New_Is_Focused;
	params.Focusable_Widget = Focusable_Widget;
	params.Focus_Change_Cause = Focus_Change_Cause;
	params.Hat_Category = Hat_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hat_like_Display_Options != nullptr)
		*Hat_like_Display_Options = params.Hat_like_Display_Options;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeHatSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Suit_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterHatCategory          Hat_Category                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAstroCharacterHatDisplayOption> Hat_like_Display_Options       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UGameMenuEntryDoubleText_C*> Hat_like_Selection_Entities    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGameMenuCustomizationSubsections_C::ChangeHatSelection(int Suit_Index, ECharacterHatCategory Hat_Category, TArray<struct FAstroCharacterHatDisplayOption>* Hat_like_Display_Options, TArray<class UGameMenuEntryDoubleText_C*>* Hat_like_Selection_Entities)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeHatSelection");

	UGameMenuCustomizationSubsections_C_ChangeHatSelection_Params params;
	params.Suit_Index = Suit_Index;
	params.Hat_Category = Hat_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hat_like_Display_Options != nullptr)
		*Hat_like_Display_Options = params.Hat_like_Display_Options;
	if (Hat_like_Selection_Entities != nullptr)
		*Hat_like_Selection_Entities = params.Hat_like_Selection_Entities;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.InvalidateCosmeticDelayPreview
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::InvalidateCosmeticDelayPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.InvalidateCosmeticDelayPreview");

	UGameMenuCustomizationSubsections_C_InvalidateCosmeticDelayPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchEmotePreviewRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroEmoteDefinition*   emoteDefinition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNonAchievementUnlock         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::DispatchEmotePreviewRequest(class UAstroEmoteDefinition* emoteDefinition, bool isLocked, bool IsNonAchievementUnlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchEmotePreviewRequest");

	UGameMenuCustomizationSubsections_C_DispatchEmotePreviewRequest_Params params;
	params.emoteDefinition = emoteDefinition;
	params.isLocked = isLocked;
	params.IsNonAchievementUnlock = IsNonAchievementUnlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchCharacterCustomizationPreviewRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroCharacterCustomization PreviewCustomization           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   CustomizationDisplayName       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   UnlockRequirements             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsNonAchievementUnlock         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::DispatchCharacterCustomizationPreviewRequest(bool isLocked, const struct FAstroCharacterCustomization& PreviewCustomization, const struct FText& CustomizationDisplayName, const struct FText& UnlockRequirements, bool IsNonAchievementUnlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchCharacterCustomizationPreviewRequest");

	UGameMenuCustomizationSubsections_C_DispatchCharacterCustomizationPreviewRequest_Params params;
	params.isLocked = isLocked;
	params.PreviewCustomization = PreviewCustomization;
	params.CustomizationDisplayName = CustomizationDisplayName;
	params.UnlockRequirements = UnlockRequirements;
	params.IsNonAchievementUnlock = IsNonAchievementUnlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.GetNumCustomizationOptionsSansEmotes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumCustomizationOptionsSansEmotes (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::GetNumCustomizationOptionsSansEmotes(int* NumCustomizationOptionsSansEmotes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.GetNumCustomizationOptionsSansEmotes");

	UGameMenuCustomizationSubsections_C_GetNumCustomizationOptionsSansEmotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumCustomizationOptionsSansEmotes != nullptr)
		*NumCustomizationOptionsSansEmotes = params.NumCustomizationOptionsSansEmotes;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.RefreshPreviewOfCommitedCustomizationOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::RefreshPreviewOfCommitedCustomizationOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.RefreshPreviewOfCommitedCustomizationOptions");

	UGameMenuCustomizationSubsections_C_RefreshPreviewOfCommitedCustomizationOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.CheckAwardChangeSuitAchievement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewSuit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::CheckAwardChangeSuitAchievement(class APlayController* Player, class UObject* NewSuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.CheckAwardChangeSuitAchievement");

	UGameMenuCustomizationSubsections_C_CheckAwardChangeSuitAchievement_Params params;
	params.Player = Player;
	params.NewSuit = NewSuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangePaletteSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PaletteIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::ChangePaletteSelection(int PaletteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangePaletteSelection");

	UGameMenuCustomizationSubsections_C_ChangePaletteSelection_Params params;
	params.PaletteIndex = PaletteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeVisorSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VisorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::ChangeVisorSelection(int VisorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeVisorSelection");

	UGameMenuCustomizationSubsections_C_ChangeVisorSelection_Params params;
	params.VisorIndex = VisorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeSuitSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuitIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::ChangeSuitSelection(int SuitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ChangeSuitSelection");

	UGameMenuCustomizationSubsections_C_ChangeSuitSelection_Params params;
	params.SuitIndex = SuitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuCustomizationSubsections_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.LayoutWidget");

	UGameMenuCustomizationSubsections_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.Construct");

	UGameMenuCustomizationSubsections_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnSuitSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionMade");

	UGameMenuCustomizationSubsections_C_OnSuitSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnPaletteSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionMade");

	UGameMenuCustomizationSubsections_C_OnPaletteSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnVisorSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionMade");

	UGameMenuCustomizationSubsections_C_OnVisorSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnEmotePopoutSelectionMade(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutSelectionMade");

	UGameMenuCustomizationSubsections_C_OnEmotePopoutSelectionMade_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteSlotUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* EmoteOption                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnEmoteSlotUsed(class UAstroGameMenuFocusItemWidget* EmoteOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteSlotUsed");

	UGameMenuCustomizationSubsections_C_OnEmoteSlotUsed_Params params;
	params.EmoteOption = EmoteOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionChangedFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnSuitSelectionChangedFocus(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSuitSelectionChangedFocus");

	UGameMenuCustomizationSubsections_C_OnSuitSelectionChangedFocus_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionChangedFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnPaletteSelectionChangedFocus(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnPaletteSelectionChangedFocus");

	UGameMenuCustomizationSubsections_C_OnPaletteSelectionChangedFocus_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionFocusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnVisorSelectionFocusChanged(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnVisorSelectionFocusChanged");

	UGameMenuCustomizationSubsections_C_OnVisorSelectionFocusChanged_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutOptionsFocusStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnEmotePopoutOptionsFocusStateChanged(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmotePopoutOptionsFocusStateChanged");

	UGameMenuCustomizationSubsections_C_OnEmotePopoutOptionsFocusStateChanged_Params params;
	params.IsFocused = IsFocused;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnDismissedEmotePopout
// (BlueprintCallable, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::OnDismissedEmotePopout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnDismissedEmotePopout");

	UGameMenuCustomizationSubsections_C_OnDismissedEmotePopout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteOptionFocusStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnEmoteOptionFocusStateChanged(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusItem, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnEmoteOptionFocusStateChanged");

	UGameMenuCustomizationSubsections_C_OnEmoteOptionFocusStateChanged_Params params;
	params.IsFocused = IsFocused;
	params.FocusItem = FocusItem;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__RedeemCode_K2Node_ComponentBoundEvent_56_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__RevokeArid_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__EmoteUnseen_K2Node_ComponentBoundEvent_364_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__MarkSuitUnseen_K2Node_ComponentBoundEvent_547_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__MarkPaletteUnseen_K2Node_ComponentBoundEvent_250_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCustomizationSubsections_C_BndEvt__MarkVisorUnseen_K2Node_ComponentBoundEvent_307_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchDelayedCustomizationPreviewData
// (BlueprintCallable, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::DispatchDelayedCustomizationPreviewData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.DispatchDelayedCustomizationPreviewData");

	UGameMenuCustomizationSubsections_C_DispatchDelayedCustomizationPreviewData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedSuitSelectionAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedSuitSelectionAttempted(class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedSuitSelectionAttempted");

	UGameMenuCustomizationSubsections_C_OnLockedSuitSelectionAttempted_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedPaletteSelectionAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedPaletteSelectionAttempted(class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedPaletteSelectionAttempted");

	UGameMenuCustomizationSubsections_C_OnLockedPaletteSelectionAttempted_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedVisorSelectionAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedVisorSelectionAttempted(class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedVisorSelectionAttempted");

	UGameMenuCustomizationSubsections_C_OnLockedVisorSelectionAttempted_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedEmotePopoutSelectionAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedEmotePopoutSelectionAttempted(int SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedEmotePopoutSelectionAttempted");

	UGameMenuCustomizationSubsections_C_OnLockedEmotePopoutSelectionAttempted_Params params;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnHatSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionMade");

	UGameMenuCustomizationSubsections_C_OnHatSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedHatSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedHatSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedHatSelectionMade");

	UGameMenuCustomizationSubsections_C_OnLockedHatSelectionMade_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionChangedFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnHatSelectionChangedFocus(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnHatSelectionChangedFocus");

	UGameMenuCustomizationSubsections_C_OnHatSelectionChangedFocus_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnMaskSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionMade");

	UGameMenuCustomizationSubsections_C_OnMaskSelectionMade_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionChangedFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnMaskSelectionChangedFocus(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnMaskSelectionChangedFocus");

	UGameMenuCustomizationSubsections_C_OnMaskSelectionChangedFocus_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedMaskSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::OnLockedMaskSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnLockedMaskSelectionMade");

	UGameMenuCustomizationSubsections_C_OnLockedMaskSelectionMade_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeHatSelectionOptions
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::MakeHatSelectionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeHatSelectionOptions");

	UGameMenuCustomizationSubsections_C_MakeHatSelectionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeMaskSelectionOptions
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::MakeMaskSelectionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeMaskSelectionOptions");

	UGameMenuCustomizationSubsections_C_MakeMaskSelectionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeVisorSelectionOptions
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::MakeVisorSelectionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeVisorSelectionOptions");

	UGameMenuCustomizationSubsections_C_MakeVisorSelectionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeSuitSelectionOptions
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::MakeSuitSelectionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakeSuitSelectionOptions");

	UGameMenuCustomizationSubsections_C_MakeSuitSelectionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakePaletteSelectionOptions
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::MakePaletteSelectionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.MakePaletteSelectionOptions");

	UGameMenuCustomizationSubsections_C_MakePaletteSelectionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateVisorSelectionOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdateVisorSelectionOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateVisorSelectionOption");

	UGameMenuCustomizationSubsections_C_UpdateVisorSelectionOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateSuitSelectionOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdateSuitSelectionOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateSuitSelectionOption");

	UGameMenuCustomizationSubsections_C_UpdateSuitSelectionOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdatePaletteSelectionOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdatePaletteSelectionOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdatePaletteSelectionOption");

	UGameMenuCustomizationSubsections_C_UpdatePaletteSelectionOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateMaskSelectionOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdateMaskSelectionOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateMaskSelectionOption");

	UGameMenuCustomizationSubsections_C_UpdateMaskSelectionOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateHatSelectionOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdateHatSelectionOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateHatSelectionOption");

	UGameMenuCustomizationSubsections_C_UpdateHatSelectionOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateEmoteSlots
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithLayout                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::UpdateEmoteSlots(bool WithLayout)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.UpdateEmoteSlots");

	UGameMenuCustomizationSubsections_C_UpdateEmoteSlots_Params params;
	params.WithLayout = WithLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.SetupEmoteSlots
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::SetupEmoteSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.SetupEmoteSlots");

	UGameMenuCustomizationSubsections_C_SetupEmoteSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSubsectionClosed
// (Event, Protected, BlueprintEvent)

void UGameMenuCustomizationSubsections_C::OnSubsectionClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.OnSubsectionClosed");

	UGameMenuCustomizationSubsections_C_OnSubsectionClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ExecuteUbergraph_GameMenuCustomizationSubsections
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubsections_C::ExecuteUbergraph_GameMenuCustomizationSubsections(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubsections.GameMenuCustomizationSubsections_C.ExecuteUbergraph_GameMenuCustomizationSubsections");

	UGameMenuCustomizationSubsections_C_ExecuteUbergraph_GameMenuCustomizationSubsections_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
