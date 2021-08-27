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

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.LayoutWidget
struct URenameOrDuplicateSaveGamePopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ValidateEnteredSaveName
struct URenameOrDuplicateSaveGamePopoutContents_C_ValidateEnteredSaveName_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     saveName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature
struct URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature
struct URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.HandleNavigationBackRequest
struct URenameOrDuplicateSaveGamePopoutContents_C_HandleNavigationBackRequest_Params
{
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
struct URenameOrDuplicateSaveGamePopoutContents_C_BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params
{
	class UGameMenuEntryDoubleText_Edit_C*             TextEditWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents
struct URenameOrDuplicateSaveGamePopoutContents_C_ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveCanceled__DelegateSignature
struct URenameOrDuplicateSaveGamePopoutContents_C_OnRenameSaveCanceled__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               PopoutOwningFocusItem;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C.OnRenameSaveConfirmed__DelegateSignature
struct URenameOrDuplicateSaveGamePopoutContents_C_OnRenameSaveConfirmed__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SaveFileInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     NewSaveFileDescriptiveName;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
