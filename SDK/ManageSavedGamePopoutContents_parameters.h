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

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.UpdateTextWidgets
struct UManageSavedGamePopoutContents_C_UpdateTextWidgets_Params
{
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.LayoutWidget
struct UManageSavedGamePopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature
struct UManageSavedGamePopoutContents_C_BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
struct UManageSavedGamePopoutContents_C_BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature
struct UManageSavedGamePopoutContents_C_BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.CustomEvent_1
struct UManageSavedGamePopoutContents_C_CustomEvent_1_Params
{
	ESaveGameOperationResult                           saveOperationResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DoSaveFileLoad
struct UManageSavedGamePopoutContents_C_DoSaveFileLoad_Params
{
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature
struct UManageSavedGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UManageSavedGamePopoutContents_C_BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.ExecuteUbergraph_ManageSavedGamePopoutContents
struct UManageSavedGamePopoutContents_C_ExecuteUbergraph_ManageSavedGamePopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DuplicateSaveFileSelected__DelegateSignature
struct UManageSavedGamePopoutContents_C_DuplicateSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.RenameSaveFileSelected__DelegateSignature
struct UManageSavedGamePopoutContents_C_RenameSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManageSavedGamePopoutContents.ManageSavedGamePopoutContents_C.DeleteSaveFileSelected__DelegateSignature
struct UManageSavedGamePopoutContents_C_DeleteSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
