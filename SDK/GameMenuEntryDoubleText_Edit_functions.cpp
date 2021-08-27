
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

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetEditableText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   EditableText                   (Parm, OutParm)

void UGameMenuEntryDoubleText_Edit_C::GetEditableText(struct FText* EditableText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetEditableText");

	UGameMenuEntryDoubleText_Edit_C_GetEditableText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EditableText != nullptr)
		*EditableText = params.EditableText;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetIsRightTextBold
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBold                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_Edit_C::SetIsRightTextBold(bool IsBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetIsRightTextBold");

	UGameMenuEntryDoubleText_Edit_C_SetIsRightTextBold_Params params;
	params.IsBold = IsBold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetEditableText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EditableText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_Edit_C::SetEditableText(const struct FText& EditableText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetEditableText");

	UGameMenuEntryDoubleText_Edit_C_SetEditableText_Params params;
	params.EditableText = EditableText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetStaticText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StaticText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_Edit_C::SetStaticText(const struct FText& StaticText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetStaticText");

	UGameMenuEntryDoubleText_Edit_C_SetStaticText_Params params;
	params.StaticText = StaticText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.PlayUsedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_Edit_C::PlayUsedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.PlayUsedAudioEvent");

	UGameMenuEntryDoubleText_Edit_C_PlayUsedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateTextWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_Edit_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateTextWidgets");

	UGameMenuEntryDoubleText_Edit_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuEntryDoubleText_Edit_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetMenuFocusWidgetSize");

	UGameMenuEntryDoubleText_Edit_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuEntryDoubleText_Edit_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.LayoutWidget");

	UGameMenuEntryDoubleText_Edit_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_Edit_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetupStylingData");

	UGameMenuEntryDoubleText_Edit_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_Edit_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateColors");

	UGameMenuEntryDoubleText_Edit_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntryDoubleText_Edit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.Construct");

	UGameMenuEntryDoubleText_Edit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_Edit_C::BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UGameMenuEntryDoubleText_Edit_C_BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnFocusItemDiscreteEditStarted_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_Edit_C::OnFocusItemDiscreteEditStarted_Event_1(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnFocusItemDiscreteEditStarted_Event_1");

	UGameMenuEntryDoubleText_Edit_C_OnFocusItemDiscreteEditStarted_Event_1_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameMenuEntryDoubleText_Edit_C::BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UGameMenuEntryDoubleText_Edit_C_BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnDiscreteEditCommitedOrCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_Edit_C::OnDiscreteEditCommitedOrCanceled(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnDiscreteEditCommitedOrCanceled");

	UGameMenuEntryDoubleText_Edit_C_OnDiscreteEditCommitedOrCanceled_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.ExecuteUbergraph_GameMenuEntryDoubleText_Edit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_Edit_C::ExecuteUbergraph_GameMenuEntryDoubleText_Edit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.ExecuteUbergraph_GameMenuEntryDoubleText_Edit");

	UGameMenuEntryDoubleText_Edit_C_ExecuteUbergraph_GameMenuEntryDoubleText_Edit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnTextEntryCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_Edit_C::OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnTextEntryCompleted__DelegateSignature");

	UGameMenuEntryDoubleText_Edit_C_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
