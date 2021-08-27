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

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UpdateUseContext
struct APrinter_Breadboards_Vehicles_C_UpdateUseContext_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ManageUseSuppression
struct APrinter_Breadboards_Vehicles_C_ManageUseSuppression_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.GetAlignedPlatformCableSlot
struct APrinter_Breadboards_Vehicles_C_GetAlignedPlatformCableSlot_Params
{
	TArray<struct FSlotReference>                      PlatformCableSlots;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSlotReference                              AlignedCableSlot;                                         // (Parm, OutParm)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.SetupAnimBP
struct APrinter_Breadboards_Vehicles_C_SetupAnimBP_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Get Power Slot
struct APrinter_Breadboards_Vehicles_C_Get_Power_Slot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm, OutParm)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Check Printer Slot
struct APrinter_Breadboards_Vehicles_C_Check_Printer_Slot_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UserConstructionScript
struct APrinter_Breadboards_Vehicles_C_UserConstructionScript_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct APrinter_Breadboards_Vehicles_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveBeginPlay
struct APrinter_Breadboards_Vehicles_C_ReceiveBeginPlay_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI End View
struct APrinter_Breadboards_Vehicles_C_MULTI_End_View_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PlacedInSlot
struct APrinter_Breadboards_Vehicles_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.DroppedInWorld
struct APrinter_Breadboards_Vehicles_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PickedUpFromWorld
struct APrinter_Breadboards_Vehicles_C_PickedUpFromWorld_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveTick
struct APrinter_Breadboards_Vehicles_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI ToggleAudioLoop
struct APrinter_Breadboards_Vehicles_C_MULTI_ToggleAudioLoop_Params
{
	bool                                               LoopEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.HandleSetPrintingView
struct APrinter_Breadboards_Vehicles_C_HandleSetPrintingView_Params
{
};

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ExecuteUbergraph_Printer_Breadboards_Vehicles
struct APrinter_Breadboards_Vehicles_C_ExecuteUbergraph_Printer_Breadboards_Vehicles_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
