
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

// Function TeleporterControlPanel.TeleporterControlPanel_C.GetControlledActorTeleportationTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              TeleportationTransform         (Parm, OutParm, IsPlainOldData)

void ATeleporterControlPanel_C::GetControlledActorTeleportationTransform(struct FTransform* TeleportationTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.GetControlledActorTeleportationTransform");

	ATeleporterControlPanel_C_GetControlledActorTeleportationTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportationTransform != nullptr)
		*TeleportationTransform = params.TeleportationTransform;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleporterControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.UserConstructionScript");

	ATeleporterControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATeleporterControlPanel_C::InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1");

	ATeleporterControlPanel_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeClick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGateObjectControlNode  clickedControlNode             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeleporterControlPanel_C::HandleControlNodeClick(const struct FGateObjectControlNode& clickedControlNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeClick");

	ATeleporterControlPanel_C_HandleControlNodeClick_Params params;
	params.clickedControlNode = clickedControlNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.ServerActivateTeleportation
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroCharacter*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DestinationControlNodeIndex    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ATeleporterControlPanel_C::ServerActivateTeleportation(class AAstroCharacter* Character, int DestinationControlNodeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.ServerActivateTeleportation");

	ATeleporterControlPanel_C_ServerActivateTeleportation_Params params;
	params.Character = Character;
	params.DestinationControlNodeIndex = DestinationControlNodeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleporterControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature");

	ATeleporterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.ActivateNodeTeleport
// (BlueprintCallable, BlueprintEvent)

void ATeleporterControlPanel_C::ActivateNodeTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.ActivateNodeTeleport");

	ATeleporterControlPanel_C_ActivateNodeTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleporterControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature");

	ATeleporterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeBeginHover
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGateObjectControlNode  hoveredControlNode             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeleporterControlPanel_C::HandleControlNodeBeginHover(const struct FGateObjectControlNode& hoveredControlNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeBeginHover");

	ATeleporterControlPanel_C_HandleControlNodeBeginHover_Params params;
	params.hoveredControlNode = hoveredControlNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeEndHover
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGateObjectControlNode  hoveredControlNode             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeleporterControlPanel_C::HandleControlNodeEndHover(const struct FGateObjectControlNode& hoveredControlNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.HandleControlNodeEndHover");

	ATeleporterControlPanel_C_HandleControlNodeEndHover_Params params;
	params.hoveredControlNode = hoveredControlNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleporterControlPanel.TeleporterControlPanel_C.ExecuteUbergraph_TeleporterControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleporterControlPanel_C::ExecuteUbergraph_TeleporterControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleporterControlPanel.TeleporterControlPanel_C.ExecuteUbergraph_TeleporterControlPanel");

	ATeleporterControlPanel_C_ExecuteUbergraph_TeleporterControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
