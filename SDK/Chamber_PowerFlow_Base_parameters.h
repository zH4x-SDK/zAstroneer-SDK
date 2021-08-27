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

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateWantsToTick
struct AChamber_PowerFlow_Base_C_UpdateWantsToTick_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLocalPlayerInProximity
struct AChamber_PowerFlow_Base_C_InitializeLocalPlayerInProximity_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateChamberMusicState
struct AChamber_PowerFlow_Base_C_UpdateChamberMusicState_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnRep_State
struct AChamber_PowerFlow_Base_C_OnRep_State_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketDisconnected
struct AChamber_PowerFlow_Base_C_OnPowerSocketDisconnected_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketConnected
struct AChamber_PowerFlow_Base_C_OnPowerSocketConnected_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializePowerSocketDelegates
struct AChamber_PowerFlow_Base_C_InitializePowerSocketDelegates_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerFlowCompletionRatioChanged
struct AChamber_PowerFlow_Base_C_OnPowerFlowCompletionRatioChanged_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLockingMechanismCallbacks
struct AChamber_PowerFlow_Base_C_InitializeLockingMechanismCallbacks_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeDynamicMaterials
struct AChamber_PowerFlow_Base_C_InitializeDynamicMaterials_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UserConstructionScript
struct AChamber_PowerFlow_Base_C_UserConstructionScript_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__FinishedFunc
struct AChamber_PowerFlow_Base_C_Powered_Up_Timeline__FinishedFunc_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__UpdateFunc
struct AChamber_PowerFlow_Base_C_Powered_Up_Timeline__UpdateFunc_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__DestroyBeaconEvent__EventFunc
struct AChamber_PowerFlow_Base_C_Powered_Up_Timeline__DestroyBeaconEvent__EventFunc_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveBeginPlay
struct AChamber_PowerFlow_Base_C_ReceiveBeginPlay_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature_Params
{
	class AAstroCharacter*                             CharacterInProximity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveTick
struct AChamber_PowerFlow_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
struct AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnChamberFullyActivated
struct AChamber_PowerFlow_Base_C_OnChamberFullyActivated_Params
{
};

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ExecuteUbergraph_Chamber_PowerFlow_Base
struct AChamber_PowerFlow_Base_C_ExecuteUbergraph_Chamber_PowerFlow_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
