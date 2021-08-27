
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

// Function Breadboard_BASE.Breadboard_BASE_C.OnRep_HasOxygen
// (BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::OnRep_HasOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.OnRep_HasOxygen");

	ABreadboard_BASE_C_OnRep_HasOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.SetupCableSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.SetupCableSlots");

	ABreadboard_BASE_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.SetupSecondarySlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::SetupSecondarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.SetupSecondarySlots");

	ABreadboard_BASE_C_SetupSecondarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.SetupPrimarySlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::SetupPrimarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.SetupPrimarySlots");

	ABreadboard_BASE_C_SetupPrimarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.DisableTetherConnections
// (Public, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::DisableTetherConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.DisableTetherConnections");

	ABreadboard_BASE_C_DisableTetherConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.AttemptToMakeTetherConnections
// (Public, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::AttemptToMakeTetherConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.AttemptToMakeTetherConnections");

	ABreadboard_BASE_C_AttemptToMakeTetherConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ABreadboard_BASE_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.GetBodySlotLegacy");

	ABreadboard_BASE_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Breadboard_BASE.Breadboard_BASE_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.UserConstructionScript");

	ABreadboard_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABreadboard_BASE_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature");

	ABreadboard_BASE_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ABreadboard_BASE_C::BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ABreadboard_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABreadboard_BASE_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature");

	ABreadboard_BASE_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABreadboard_BASE_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	ABreadboard_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.ReceiveHit
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

void ABreadboard_BASE_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.ReceiveHit");

	ABreadboard_BASE_C_ReceiveHit_Params params;
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


// Function Breadboard_BASE.Breadboard_BASE_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABreadboard_BASE_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.DroppedInWorld");

	ABreadboard_BASE_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ABreadboard_BASE_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.PickedUpFromWorld");

	ABreadboard_BASE_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABreadboard_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.ReceiveBeginPlay");

	ABreadboard_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.HandleItemUnpacked
// (BlueprintCallable, BlueprintEvent)

void ABreadboard_BASE_C::HandleItemUnpacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.HandleItemUnpacked");

	ABreadboard_BASE_C_HandleItemUnpacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.HandleDroppedInWorld
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABreadboard_BASE_C::HandleDroppedInWorld(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.HandleDroppedInWorld");

	ABreadboard_BASE_C_HandleDroppedInWorld_Params params;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.HandlePickedUpFromWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicalMovement               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABreadboard_BASE_C::HandlePickedUpFromWorld(bool PhysicalMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.HandlePickedUpFromWorld");

	ABreadboard_BASE_C_HandlePickedUpFromWorld_Params params;
	params.PhysicalMovement = PhysicalMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Breadboard_BASE.Breadboard_BASE_C.ExecuteUbergraph_Breadboard_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABreadboard_BASE_C::ExecuteUbergraph_Breadboard_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breadboard_BASE.Breadboard_BASE_C.ExecuteUbergraph_Breadboard_BASE");

	ABreadboard_BASE_C_ExecuteUbergraph_Breadboard_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
