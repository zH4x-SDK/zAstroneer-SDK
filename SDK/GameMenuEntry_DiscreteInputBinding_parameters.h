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

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.LayoutWidget
struct UGameMenuEntry_DiscreteInputBinding_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.Construct
struct UGameMenuEntry_DiscreteInputBinding_C_Construct_Params
{
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_3
struct UGameMenuEntry_DiscreteInputBinding_C_CustomEvent_3_Params
{
	struct FKey                                        KeyPressed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_11
struct UGameMenuEntry_DiscreteInputBinding_C_CustomEvent_11_Params
{
	struct FVector2D                                   MousePosition;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCommitted_Event_1
struct UGameMenuEntry_DiscreteInputBinding_C_OnFocusItemDiscreteEditCommitted_Event_1_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCanceled_Event_1
struct UGameMenuEntry_DiscreteInputBinding_C_OnFocusItemDiscreteEditCanceled_Event_1_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding
struct UGameMenuEntry_DiscreteInputBinding_C_ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnKeyboardBindingChanged__DelegateSignature
struct UGameMenuEntry_DiscreteInputBinding_C_OnKeyboardBindingChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
