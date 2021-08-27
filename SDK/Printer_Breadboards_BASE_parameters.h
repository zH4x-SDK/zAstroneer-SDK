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

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.CheckAwardAchievements
struct APrinter_Breadboards_BASE_C_CheckAwardAchievements_Params
{
	class APhysicalItem*                               PrintedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AwardAchievements
struct APrinter_Breadboards_BASE_C_AwardAchievements_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.OnRep_AudioLoopActive
struct APrinter_Breadboards_BASE_C_OnRep_AudioLoopActive_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupPrinterSlots
struct APrinter_Breadboards_BASE_C_SetupPrinterSlots_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupAnimBP
struct APrinter_Breadboards_BASE_C_SetupAnimBP_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UpdateAnim_Printing
struct APrinter_Breadboards_BASE_C_UpdateAnim_Printing_Params
{
	bool                                               Printing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Get Power Slot
struct APrinter_Breadboards_BASE_C_Get_Power_Slot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm, OutParm)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Check Printer Slot
struct APrinter_Breadboards_BASE_C_Check_Printer_Slot_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UserConstructionScript
struct APrinter_Breadboards_BASE_C_UserConstructionScript_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct APrinter_Breadboards_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveBeginPlay
struct APrinter_Breadboards_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature
struct APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.MULTI End View
struct APrinter_Breadboards_BASE_C_MULTI_End_View_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PlacedInSlot
struct APrinter_Breadboards_BASE_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.DroppedInWorld
struct APrinter_Breadboards_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PickedUpFromWorld
struct APrinter_Breadboards_BASE_C_PickedUpFromWorld_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AnimationStateChanged
struct APrinter_Breadboards_BASE_C_AnimationStateChanged_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveEndPlay
struct APrinter_Breadboards_BASE_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
struct APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params
{
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature
struct APrinter_Breadboards_BASE_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ExecuteUbergraph_Printer_Breadboards_BASE
struct APrinter_Breadboards_BASE_C_ExecuteUbergraph_Printer_Breadboards_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
