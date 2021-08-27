
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

// Function Splitter_3Way.Splitter_3Way_C.GetControlPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASplitterControlPanel_C* ControlPanel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASplitter_3Way_C::GetControlPanel(class ASplitterControlPanel_C** ControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.GetControlPanel");

	ASplitter_3Way_C_GetControlPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControlPanel != nullptr)
		*ControlPanel = params.ControlPanel;
}


// Function Splitter_3Way.Splitter_3Way_C.UpdateSplitterLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData SplitterRepData                (BlueprintVisible, BlueprintReadOnly, Parm)

void ASplitter_3Way_C::UpdateSplitterLights(const struct FStreamingPowerSplitterReplicationData& SplitterRepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.UpdateSplitterLights");

	ASplitter_3Way_C_UpdateSplitterLights_Params params;
	params.SplitterRepData = SplitterRepData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASplitter_3Way_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.GetBodySlotLegacy");

	ASplitter_3Way_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Splitter_3Way.Splitter_3Way_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASplitter_3Way_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.UserConstructionScript");

	ASplitter_3Way_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitter_3Way_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	ASplitter_3Way_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASplitter_3Way_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.ReceiveHit");

	ASplitter_3Way_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASplitter_3Way_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.PickedUpFromWorld");

	ASplitter_3Way_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASplitter_3Way_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.DroppedInWorld");

	ASplitter_3Way_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitter_3Way_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature");

	ASplitter_3Way_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASplitter_3Way_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.ReceiveBeginPlay");

	ASplitter_3Way_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.OnControlPanelCrackedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitter_3Way_C::OnControlPanelCrackedChanged(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.OnControlPanelCrackedChanged");

	ASplitter_3Way_C_OnControlPanelCrackedChanged_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.HandleSplitterVisualizationUpdate
// (BlueprintCallable, BlueprintEvent)

void ASplitter_3Way_C::HandleSplitterVisualizationUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.HandleSplitterVisualizationUpdate");

	ASplitter_3Way_C_HandleSplitterVisualizationUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Splitter_3Way.Splitter_3Way_C.ExecuteUbergraph_Splitter_3Way
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitter_3Way_C::ExecuteUbergraph_Splitter_3Way(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Splitter_3Way.Splitter_3Way_C.ExecuteUbergraph_Splitter_3Way");

	ASplitter_3Way_C_ExecuteUbergraph_Splitter_3Way_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
