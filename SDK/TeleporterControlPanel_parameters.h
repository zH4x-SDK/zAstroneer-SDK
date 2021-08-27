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

// Function TeleporterControlPanel.TeleporterControlPanel_C.GetControlledActorTeleportationTransform
struct ATeleporterControlPanel_C_GetControlledActorTeleportationTransform_Params
{
	struct FTransform                                  TeleportationTransform;                                   // (Parm, OutParm, IsPlainOldData)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.UserConstructionScript
struct ATeleporterControlPanel_C_UserConstructionScript_Params
{
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
struct ATeleporterControlPanel_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeClick
struct ATeleporterControlPanel_C_HandleControlNodeClick_Params
{
	struct FGateObjectControlNode                      clickedControlNode;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.ServerActivateTeleportation
struct ATeleporterControlPanel_C_ServerActivateTeleportation_Params
{
	class AAstroCharacter*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DestinationControlNodeIndex;                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
struct ATeleporterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.ActivateNodeTeleport
struct ATeleporterControlPanel_C_ActivateNodeTeleport_Params
{
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
struct ATeleporterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeBeginHover
struct ATeleporterControlPanel_C_HandleControlNodeBeginHover_Params
{
	struct FGateObjectControlNode                      hoveredControlNode;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeEndHover
struct ATeleporterControlPanel_C_HandleControlNodeEndHover_Params
{
	struct FGateObjectControlNode                      hoveredControlNode;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeleporterControlPanel.TeleporterControlPanel_C.ExecuteUbergraph_TeleporterControlPanel
struct ATeleporterControlPanel_C_ExecuteUbergraph_TeleporterControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
