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

// Function BackpackRail.BackpackRail_C.GetLeftAuxSlotUnbundleItemCastOrigin
struct ABackpackRail_C_GetLeftAuxSlotUnbundleItemCastOrigin_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.GetRightAuxSlotUnbundleItemCastOrigin
struct ABackpackRail_C_GetRightAuxSlotUnbundleItemCastOrigin_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.CanPrinterReserveSlotAcceptItem
struct ABackpackRail_C_CanPrinterReserveSlotAcceptItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAcceptItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.ShouldSpawnWithTerrainTool
struct ABackpackRail_C_ShouldSpawnWithTerrainTool_Params
{
	bool                                               ShouldSpawnTerrainTool;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.AddDeformToolSlotsToSlotRefs
struct ABackpackRail_C_AddDeformToolSlotsToSlotRefs_Params
{
};

// Function BackpackRail.BackpackRail_C.UpdateStorageSlotRefs
struct ABackpackRail_C_UpdateStorageSlotRefs_Params
{
};

// Function BackpackRail.BackpackRail_C.SetBackpackLightVisibility
struct ABackpackRail_C_SetBackpackLightVisibility_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.GetAstro
struct ABackpackRail_C_GetAstro_Params
{
	class ADesignAstro_C*                              Astro;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.GetSedimentHoseRef
struct ABackpackRail_C_GetSedimentHoseRef_Params
{
	bool                                               SuccesfullyRetrieved;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.SERVER UpdateSedimentHose
struct ABackpackRail_C_SERVER_UpdateSedimentHose_Params
{
};

// Function BackpackRail.BackpackRail_C.GetBackpackMesh
struct ABackpackRail_C_GetBackpackMesh_Params
{
	class UMeshComponent*                              BackpackMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.ApplyPlayerColor
struct ABackpackRail_C_ApplyPlayerColor_Params
{
};

// Function BackpackRail.BackpackRail_C.GetDeformToolRef
struct ABackpackRail_C_GetDeformToolRef_Params
{
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.ShowAllItems
struct ABackpackRail_C_ShowAllItems_Params
{
	bool                                               show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.Set Control Slot
struct ABackpackRail_C_Set_Control_Slot_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.Finish Print
struct ABackpackRail_C_Finish_Print_Params
{
};

// Function BackpackRail.BackpackRail_C.CLIENT Printer View
struct ABackpackRail_C_CLIENT_Printer_View_Params
{
};

// Function BackpackRail.BackpackRail_C.SERVER Bind Printer
struct ABackpackRail_C_SERVER_Bind_Printer_Params
{
};

// Function BackpackRail.BackpackRail_C.Get Character
struct ABackpackRail_C_Get_Character_Params
{
	class ADesignAstro_C*                              Astro;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.Is Powered
struct ABackpackRail_C_Is_Powered_Params
{
	bool                                               Powered;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.CLIENT Set Indicator
struct ABackpackRail_C_CLIENT_Set_Indicator_Params
{
};

// Function BackpackRail.BackpackRail_C.Backpack Closed
struct ABackpackRail_C_Backpack_Closed_Params
{
};

// Function BackpackRail.BackpackRail_C.Backpack Cracked
struct ABackpackRail_C_Backpack_Cracked_Params
{
};

// Function BackpackRail.BackpackRail_C.Prereq
struct ABackpackRail_C_Prereq_Params
{
};

// Function BackpackRail.BackpackRail_C.CLIENT Do Resources
struct ABackpackRail_C_CLIENT_Do_Resources_Params
{
};

// Function BackpackRail.BackpackRail_C.SERVER Do Resources
struct ABackpackRail_C_SERVER_Do_Resources_Params
{
};

// Function BackpackRail.BackpackRail_C.CreateTerrainTool
struct ABackpackRail_C_CreateTerrainTool_Params
{
};

// Function BackpackRail.BackpackRail_C.UserConstructionScript
struct ABackpackRail_C_UserConstructionScript_Params
{
};

// Function BackpackRail.BackpackRail_C.InpActEvt_NavigateLeft_K2Node_InputActionEvent_3
struct ABackpackRail_C_InpActEvt_NavigateLeft_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackRail.BackpackRail_C.InpActEvt_NavigateRight_K2Node_InputActionEvent_2
struct ABackpackRail_C_InpActEvt_NavigateRight_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackRail.BackpackRail_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
struct ABackpackRail_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackRail.BackpackRail_C.ReceiveBeginPlay
struct ABackpackRail_C_ReceiveBeginPlay_Params
{
};

// Function BackpackRail.BackpackRail_C.ReceiveTick
struct ABackpackRail_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.Bind Cracked
struct ABackpackRail_C_Bind_Cracked_Params
{
};

// Function BackpackRail.BackpackRail_C.OnActivate_Event_1
struct ABackpackRail_C_OnActivate_Event_1_Params
{
};

// Function BackpackRail.BackpackRail_C.OnDeactivate_Event_1
struct ABackpackRail_C_OnDeactivate_Event_1_Params
{
};

// Function BackpackRail.BackpackRail_C.OnClicked_Event_1
struct ABackpackRail_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackRail.BackpackRail_C.On Power Depleted
struct ABackpackRail_C_On_Power_Depleted_Params
{
};

// Function BackpackRail.BackpackRail_C.On Power Restored
struct ABackpackRail_C_On_Power_Restored_Params
{
};

// Function BackpackRail.BackpackRail_C.On Low Power
struct ABackpackRail_C_On_Low_Power_Params
{
};

// Function BackpackRail.BackpackRail_C.On Fully Charged
struct ABackpackRail_C_On_Fully_Charged_Params
{
};

// Function BackpackRail.BackpackRail_C.Bind Printer
struct ABackpackRail_C_Bind_Printer_Params
{
};

// Function BackpackRail.BackpackRail_C.OnFinishPrint_Event_1
struct ABackpackRail_C_OnFinishPrint_Event_1_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.OnStartPrint_Event_1
struct ABackpackRail_C_OnStartPrint_Event_1_Params
{
};

// Function BackpackRail.BackpackRail_C.OnCancelPrint
struct ABackpackRail_C_OnCancelPrint_Params
{
};

// Function BackpackRail.BackpackRail_C.OnOxygenTankPropertiesChanged
struct ABackpackRail_C_OnOxygenTankPropertiesChanged_Params
{
};

// Function BackpackRail.BackpackRail_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
struct ABackpackRail_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.PlayFinishPrintFX
struct ABackpackRail_C_PlayFinishPrintFX_Params
{
};

// Function BackpackRail.BackpackRail_C.PlayStartPrintFX
struct ABackpackRail_C_PlayStartPrintFX_Params
{
};

// Function BackpackRail.BackpackRail_C.PlayCancelPrintFX
struct ABackpackRail_C_PlayCancelPrintFX_Params
{
};

// Function BackpackRail.BackpackRail_C.HandleCreativeModeChanged
struct ABackpackRail_C_HandleCreativeModeChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackRail.BackpackRail_C.ExecuteUbergraph_BackpackRail
struct ABackpackRail_C_ExecuteUbergraph_BackpackRail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
