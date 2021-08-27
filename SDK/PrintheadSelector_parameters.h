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

// Function PrintheadSelector.PrintheadSelector_C.SpoofNavRightPress
struct APrintheadSelector_C_SpoofNavRightPress_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.SpoofNavLeftPress
struct APrintheadSelector_C_SpoofNavLeftPress_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.SpoofPrintPress
struct APrintheadSelector_C_SpoofPrintPress_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.Confirm
struct APrintheadSelector_C_Confirm_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.NavigateRight
struct APrintheadSelector_C_NavigateRight_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.NavigateLeft
struct APrintheadSelector_C_NavigateLeft_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.UpdateStatusText
struct APrintheadSelector_C_UpdateStatusText_Params
{
	class UPrinterComponent*                           Printer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrintheadSelector.PrintheadSelector_C.ShowButtons
struct APrintheadSelector_C_ShowButtons_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrintheadSelector.PrintheadSelector_C.Set Printing View
struct APrintheadSelector_C_Set_Printing_View_Params
{
	class UPrinterComponent*                           Printer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrintheadSelector.PrintheadSelector_C.UserConstructionScript
struct APrintheadSelector_C_UserConstructionScript_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.ReceiveBeginPlay
struct APrintheadSelector_C_ReceiveBeginPlay_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.Bind Printer
struct APrintheadSelector_C_Bind_Printer_Params
{
	class UPrinterComponent*                           Printer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_1
struct APrintheadSelector_C_OnSetIndicatorView_Event_1_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_2
struct APrintheadSelector_C_OnSetIndicatorView_Event_2_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function PrintheadSelector.PrintheadSelector_C.ExecuteUbergraph_PrintheadSelector
struct APrintheadSelector_C_ExecuteUbergraph_PrintheadSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
