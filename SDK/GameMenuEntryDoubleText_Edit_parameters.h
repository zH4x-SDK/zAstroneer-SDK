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

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetEditableText
struct UGameMenuEntryDoubleText_Edit_C_GetEditableText_Params
{
	struct FText                                       EditableText;                                             // (Parm, OutParm)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetIsRightTextBold
struct UGameMenuEntryDoubleText_Edit_C_SetIsRightTextBold_Params
{
	bool                                               IsBold;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetEditableText
struct UGameMenuEntryDoubleText_Edit_C_SetEditableText_Params
{
	struct FText                                       EditableText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetStaticText
struct UGameMenuEntryDoubleText_Edit_C_SetStaticText_Params
{
	struct FText                                       StaticText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.PlayUsedAudioEvent
struct UGameMenuEntryDoubleText_Edit_C_PlayUsedAudioEvent_Params
{
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateTextWidgets
struct UGameMenuEntryDoubleText_Edit_C_UpdateTextWidgets_Params
{
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.GetMenuFocusWidgetSize
struct UGameMenuEntryDoubleText_Edit_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.LayoutWidget
struct UGameMenuEntryDoubleText_Edit_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.SetupStylingData
struct UGameMenuEntryDoubleText_Edit_C_SetupStylingData_Params
{
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.UpdateColors
struct UGameMenuEntryDoubleText_Edit_C_UpdateColors_Params
{
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.Construct
struct UGameMenuEntryDoubleText_Edit_C_Construct_Params
{
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UGameMenuEntryDoubleText_Edit_C_BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnFocusItemDiscreteEditStarted_Event_1
struct UGameMenuEntryDoubleText_Edit_C_OnFocusItemDiscreteEditStarted_Event_1_Params
{
	struct FVector2D                                   MousePosition;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UGameMenuEntryDoubleText_Edit_C_BndEvt__EditableRightOption_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnDiscreteEditCommitedOrCanceled
struct UGameMenuEntryDoubleText_Edit_C_OnDiscreteEditCommitedOrCanceled_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.ExecuteUbergraph_GameMenuEntryDoubleText_Edit
struct UGameMenuEntryDoubleText_Edit_C_ExecuteUbergraph_GameMenuEntryDoubleText_Edit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText_Edit.GameMenuEntryDoubleText_Edit_C.OnTextEntryCompleted__DelegateSignature
struct UGameMenuEntryDoubleText_Edit_C_OnTextEntryCompleted__DelegateSignature_Params
{
	class UGameMenuEntryDoubleText_Edit_C*             TextEditWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
