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

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature
struct UServerSaveGamePopoutContents_C_BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
struct UServerSaveGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
struct UServerSaveGamePopoutContents_C_BndEvt__SaveGameName_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params
{
	class UGameMenuEntryDoubleText_Edit_C*             TextEditWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       newText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.ExecuteUbergraph_ServerSaveGamePopoutContents
struct UServerSaveGamePopoutContents_C_ExecuteUbergraph_ServerSaveGamePopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerSaveGamePopoutContents.ServerSaveGamePopoutContents_C.OnSaveGameConfirm__DelegateSignature
struct UServerSaveGamePopoutContents_C_OnSaveGameConfirm__DelegateSignature_Params
{
	struct FString                                     SaveGameName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
