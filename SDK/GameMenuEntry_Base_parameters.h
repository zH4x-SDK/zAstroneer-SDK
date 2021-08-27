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

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetBadgeVisibility
struct UGameMenuEntry_Base_C_SetBadgeVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnLockedUseAttemptAudioEvent
struct UGameMenuEntry_Base_C_PlayOnLockedUseAttemptAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.UpdateColors
struct UGameMenuEntry_Base_C_UpdateColors_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditValueChangedAudioEvent
struct UGameMenuEntry_Base_C_PlayOnEditValueChangedAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditCompletedAudioEvent
struct UGameMenuEntry_Base_C_PlayOnEditCompletedAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditStartedAudioEvent
struct UGameMenuEntry_Base_C_PlayOnEditStartedAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnFocusGainedAudioEvent
struct UGameMenuEntry_Base_C_PlayOnFocusGainedAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnUsedAudioEvent
struct UGameMenuEntry_Base_C_PlayOnUsedAudioEvent_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseFocusGained
struct UGameMenuEntry_Base_C_CustomEvent_BaseFocusGained_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.Construct
struct UGameMenuEntry_Base_C_Construct_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseUsed
struct UGameMenuEntry_Base_C_CustomEvent_BaseUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetupStylingData
struct UGameMenuEntry_Base_C_SetupStylingData_Params
{
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.OnFocusItemFocusStateChangedDelegate_Base
struct UGameMenuEntry_Base_C_OnFocusItemFocusStateChangedDelegate_Base_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetInteractionBlocked
struct UGameMenuEntry_Base_C_SetInteractionBlocked_Params
{
	bool                                               IsInteractionBlocked;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseLockedUseAttempted
struct UGameMenuEntry_Base_C_CustomEvent_BaseLockedUseAttempted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.ExecuteUbergraph_GameMenuEntry_Base
struct UGameMenuEntry_Base_C_ExecuteUbergraph_GameMenuEntry_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
