
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateWantsToTick
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::UpdateWantsToTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateWantsToTick");

	AChamber_PowerFlow_Base_C_UpdateWantsToTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLocalPlayerInProximity
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::InitializeLocalPlayerInProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLocalPlayerInProximity");

	AChamber_PowerFlow_Base_C_InitializeLocalPlayerInProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateChamberMusicState
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::UpdateChamberMusicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UpdateChamberMusicState");

	AChamber_PowerFlow_Base_C_UpdateChamberMusicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnRep_State");

	AChamber_PowerFlow_Base_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::OnPowerSocketDisconnected(const struct FSlotReference& Slot, class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketDisconnected");

	AChamber_PowerFlow_Base_C_OnPowerSocketDisconnected_Params params;
	params.Slot = Slot;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::OnPowerSocketConnected(const struct FSlotReference& Slot, class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerSocketConnected");

	AChamber_PowerFlow_Base_C_OnPowerSocketConnected_Params params;
	params.Slot = Slot;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializePowerSocketDelegates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::InitializePowerSocketDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializePowerSocketDelegates");

	AChamber_PowerFlow_Base_C_InitializePowerSocketDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerFlowCompletionRatioChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::OnPowerFlowCompletionRatioChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnPowerFlowCompletionRatioChanged");

	AChamber_PowerFlow_Base_C_OnPowerFlowCompletionRatioChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLockingMechanismCallbacks
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::InitializeLockingMechanismCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeLockingMechanismCallbacks");

	AChamber_PowerFlow_Base_C_InitializeLockingMechanismCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::InitializeDynamicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.InitializeDynamicMaterials");

	AChamber_PowerFlow_Base_C_InitializeDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.UserConstructionScript");

	AChamber_PowerFlow_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__FinishedFunc
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::Powered_Up_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__FinishedFunc");

	AChamber_PowerFlow_Base_C_Powered_Up_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__UpdateFunc
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::Powered_Up_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__UpdateFunc");

	AChamber_PowerFlow_Base_C_Powered_Up_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__DestroyBeaconEvent__EventFunc
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::Powered_Up_Timeline__DestroyBeaconEvent__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.Powered Up Timeline__DestroyBeaconEvent__EventFunc");

	AChamber_PowerFlow_Base_C_Powered_Up_Timeline__DestroyBeaconEvent__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChamber_PowerFlow_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveBeginPlay");

	AChamber_PowerFlow_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroCharacter*         CharacterInProximity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature_Params params;
	params.CharacterInProximity = CharacterInProximity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroCharacter*         CharacterInProximity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature_Params params;
	params.CharacterInProximity = CharacterInProximity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChamber_PowerFlow_Base_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ReceiveTick");

	AChamber_PowerFlow_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
// (BlueprintEvent)

void AChamber_PowerFlow_Base_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature");

	AChamber_PowerFlow_Base_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnChamberFullyActivated
// (BlueprintCallable, BlueprintEvent)

void AChamber_PowerFlow_Base_C::OnChamberFullyActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.OnChamberFullyActivated");

	AChamber_PowerFlow_Base_C_OnChamberFullyActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ExecuteUbergraph_Chamber_PowerFlow_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChamber_PowerFlow_Base_C::ExecuteUbergraph_Chamber_PowerFlow_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chamber_PowerFlow_Base.Chamber_PowerFlow_Base_C.ExecuteUbergraph_Chamber_PowerFlow_Base");

	AChamber_PowerFlow_Base_C_ExecuteUbergraph_Chamber_PowerFlow_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
