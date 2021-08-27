
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

// Function Rover_Base.Rover_Base_C.OnMouseZoomLevelChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Zoom_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnMouseZoomLevelChanged(float Zoom_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnMouseZoomLevelChanged");

	ARover_Base_C_OnMouseZoomLevelChanged_Params params;
	params.Zoom_Value = Zoom_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnRep_REP_PlayerAttached
// (BlueprintCallable, BlueprintEvent)

void ARover_Base_C::OnRep_REP_PlayerAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnRep_REP_PlayerAttached");

	ARover_Base_C_OnRep_REP_PlayerAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Local_UpdateWheelFrictionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoverBrakeState        NewFrictionState               (BlueprintVisible, BlueprintReadOnly, Parm)

void ARover_Base_C::Local_UpdateWheelFrictionState(const struct FRoverBrakeState& NewFrictionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Local_UpdateWheelFrictionState");

	ARover_Base_C_Local_UpdateWheelFrictionState_Params params;
	params.NewFrictionState = NewFrictionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.CheckPlayerAttachedOnCaravan
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::CheckPlayerAttachedOnCaravan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.CheckPlayerAttachedOnCaravan");

	ARover_Base_C_CheckPlayerAttachedOnCaravan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnRep_REP_WheelFrictionState
// (BlueprintCallable, BlueprintEvent)

void ARover_Base_C::OnRep_REP_WheelFrictionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnRep_REP_WheelFrictionState");

	ARover_Base_C_OnRep_REP_WheelFrictionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.UpdateAndGetTunnelBoringOrigin
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          slotDrillIsIn                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USceneComponent* ARover_Base_C::UpdateAndGetTunnelBoringOrigin(const struct FSlotReference& slotDrillIsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.UpdateAndGetTunnelBoringOrigin");

	ARover_Base_C_UpdateAndGetTunnelBoringOrigin_Params params;
	params.slotDrillIsIn = slotDrillIsIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rover_Base.Rover_Base_C.ExecuteFlip
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::ExecuteFlip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.ExecuteFlip");

	ARover_Base_C_ExecuteFlip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SetupGenerationGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupGenerationGaugeMaterial");

	ARover_Base_C_SetupGenerationGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function Rover_Base.Rover_Base_C.SetupConsumptionGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupConsumptionGaugeMaterial");

	ARover_Base_C_SetupConsumptionGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function Rover_Base.Rover_Base_C.UpdateAuxSlotAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlotEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AuxSlotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.UpdateAuxSlotAnims");

	ARover_Base_C_UpdateAuxSlotAnims_Params params;
	params.SlotEnabled = SlotEnabled;
	params.AuxSlotIndex = AuxSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SetupCableSlotEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::SetupCableSlotEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupCableSlotEvents");

	ARover_Base_C_SetupCableSlotEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.InitializeAuxSlotsEnabled
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::InitializeAuxSlotsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.InitializeAuxSlotsEnabled");

	ARover_Base_C_InitializeAuxSlotsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.HandleAuxSlotEnabledChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlotEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::HandleAuxSlotEnabledChanged(bool SlotEnabled, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.HandleAuxSlotEnabledChanged");

	ARover_Base_C_HandleAuxSlotEnabledChanged_Params params;
	params.SlotEnabled = SlotEnabled;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SERVER_EjectItemFromAuxSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          AuxSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ARover_Base_C::SERVER_EjectItemFromAuxSlot(const struct FSlotReference& AuxSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SERVER_EjectItemFromAuxSlot");

	ARover_Base_C_SERVER_EjectItemFromAuxSlot_Params params;
	params.AuxSlot = AuxSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupCableSlots");

	ARover_Base_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SetupAuxSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::SetupAuxSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupAuxSlots");

	ARover_Base_C_SetupAuxSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnPowerCableConnectionChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          cableSlot                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ConnectionMade                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnPowerCableConnectionChanged(const struct FSlotReference& cableSlot, bool ConnectionMade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnPowerCableConnectionChanged");

	ARover_Base_C_OnPowerCableConnectionChanged_Params params;
	params.cableSlot = cableSlot;
	params.ConnectionMade = ConnectionMade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnAuxSlotAttachmentChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          AuxSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ItemSlotted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnAuxSlotAttachmentChanged(const struct FSlotReference& AuxSlot, bool ItemSlotted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnAuxSlotAttachmentChanged");

	ARover_Base_C_OnAuxSlotAttachmentChanged_Params params;
	params.AuxSlot = AuxSlot;
	params.ItemSlotted = ItemSlotted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.SetupAnimBP");

	ARover_Base_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.PostSubclassConstruction
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::PostSubclassConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.PostSubclassConstruction");

	ARover_Base_C_PostSubclassConstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Do Update Friction
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::Do_Update_Friction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Do Update Friction");

	ARover_Base_C_Do_Update_Friction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ARover_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.GetBodySlotLegacy");

	ARover_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rover_Base.Rover_Base_C.Eject Players
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::Eject_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Eject Players");

	ARover_Base_C_Eject_Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Power UI
// (Public, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::Power_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Power UI");

	ARover_Base_C_Power_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Create Default Equipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::Create_Default_Equipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Create Default Equipment");

	ARover_Base_C_Create_Default_Equipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARover_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.UserConstructionScript");

	ARover_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ARover_Base_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ARover_Base_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARover_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.ReceiveBeginPlay");

	ARover_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ARover_Base_C::BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void ARover_Base_C::BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.PlacedInSlot");

	ARover_Base_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             ClickQuery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature");

	ARover_Base_C_BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature_Params params;
	params.ClickQuery = ClickQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature");

	ARover_Base_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_11_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Bind Trailers
// (BlueprintCallable, BlueprintEvent)

void ARover_Base_C::Bind_Trailers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Bind Trailers");

	ARover_Base_C_Bind_Trailers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnConnectionBuild_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnConnectionBuild_Event_1(const struct FSlotReference& Slot, class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnConnectionBuild_Event_1");

	ARover_Base_C_OnConnectionBuild_Event_1_Params params;
	params.Slot = Slot;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
// (BlueprintEvent)

void ARover_Base_C::BndEvt__Power_Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature");

	ARover_Base_C_BndEvt__Power_Battery_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature
// (BlueprintEvent)

void ARover_Base_C::BndEvt__Power_Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__Power Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature");

	ARover_Base_C_BndEvt__Power_Battery_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ARover_Base_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	ARover_Base_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnConnectionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnConnectionComplete(const struct FSlotReference& Slot, class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnConnectionComplete");

	ARover_Base_C_OnConnectionComplete_Params params;
	params.Slot = Slot;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.OnConnectionDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::OnConnectionDestroy(const struct FSlotReference& Slot, class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.OnConnectionDestroy");

	ARover_Base_C_OnConnectionDestroy_Params params;
	params.Slot = Slot;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ARover_Base_C::BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ARover_Base_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature");

	ARover_Base_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           ParkingBrakeEngaged            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature(bool ParkingBrakeEngaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature");

	ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_0_ParkingBrakeEvent__DelegateSignature_Params params;
	params.ParkingBrakeEngaged = ParkingBrakeEngaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           ParkingBrakeEngaged            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature(bool ParkingBrakeEngaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature");

	ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_1_ParkingBrakeEvent__DelegateSignature_Params params;
	params.ParkingBrakeEngaged = ParkingBrakeEngaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            REP_ResistanceLevel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature(int REP_ResistanceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature");

	ARover_Base_C_BndEvt__PhysicsMovement_K2Node_ComponentBoundEvent_2_ResistanceChangeEvent__DelegateSignature_Params params;
	params.REP_ResistanceLevel = REP_ResistanceLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.Server_UpdateClientBrakesState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoverBrakeState        ClientFrictionState            (BlueprintVisible, BlueprintReadOnly, Parm)

void ARover_Base_C::Server_UpdateClientBrakesState(const struct FRoverBrakeState& ClientFrictionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.Server_UpdateClientBrakesState");

	ARover_Base_C_Server_UpdateClientBrakesState_Params params;
	params.ClientFrictionState = ClientFrictionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.VehicleGainedPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.VehicleGainedPilotInSeat");

	ARover_Base_C_VehicleGainedPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.VehicleLostPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.VehicleLostPilotInSeat");

	ARover_Base_C_VehicleLostPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.HandleInternalBatteryChargeLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewCharge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::HandleInternalBatteryChargeLevelChanged(float NewCharge, float ChargeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.HandleInternalBatteryChargeLevelChanged");

	ARover_Base_C_HandleInternalBatteryChargeLevelChanged_Params params;
	params.NewCharge = NewCharge;
	params.ChargeDelta = ChargeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           facingBackward                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature(bool facingBackward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature");

	ARover_Base_C_BndEvt__WheeledChassis_K2Node_ComponentBoundEvent_0_VehicleFacingSet__DelegateSignature_Params params;
	params.facingBackward = facingBackward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rover_Base.Rover_Base_C.ExecuteUbergraph_Rover_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARover_Base_C::ExecuteUbergraph_Rover_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rover_Base.Rover_Base_C.ExecuteUbergraph_Rover_Base");

	ARover_Base_C_ExecuteUbergraph_Rover_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
