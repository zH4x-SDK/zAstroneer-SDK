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

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.UpdateTextWidgets
struct UServerAdminManageSavedGamePopoutContents_C_UpdateTextWidgets_Params
{
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.LayoutWidget
struct UServerAdminManageSavedGamePopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_BndEvt__BackEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_BndEvt__LoadEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_BndEvt__DeleteEntry_K2Node_ComponentBoundEvent_2_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_88_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_BndEvt__DuplicateEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.ExecuteUbergraph_ServerAdminManageSavedGamePopoutContents
struct UServerAdminManageSavedGamePopoutContents_C_ExecuteUbergraph_ServerAdminManageSavedGamePopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.LoadSaveFileSelected__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_LoadSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.DuplicateSaveFileSelected__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_DuplicateSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.RenameSaveFileSelected__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_RenameSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerAdminManageSavedGamePopoutContents.ServerAdminManageSavedGamePopoutContents_C.DeleteSaveFileSelected__DelegateSignature
struct UServerAdminManageSavedGamePopoutContents_C_DeleteSaveFileSelected__DelegateSignature_Params
{
	struct FAstroSaveFileInformation                   SelectedSaveFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
