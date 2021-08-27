
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

// Function Solar_Array_T4.Solar_Array_T4_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASolar_Array_T4_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.GetBodySlotLegacy");

	ASolar_Array_T4_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solar_Array_T4.Solar_Array_T4_C.Disable Tether Connections
// (Public, BlueprintCallable, BlueprintEvent)

void ASolar_Array_T4_C::Disable_Tether_Connections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.Disable Tether Connections");

	ASolar_Array_T4_C_Disable_Tether_Connections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.Attempt to make Tether Connections
// (Public, BlueprintCallable, BlueprintEvent)

void ASolar_Array_T4_C::Attempt_to_make_Tether_Connections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.Attempt to make Tether Connections");

	ASolar_Array_T4_C_Attempt_to_make_Tether_Connections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.OnRep_HasOxygen
// (BlueprintCallable, BlueprintEvent)

void ASolar_Array_T4_C::OnRep_HasOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.OnRep_HasOxygen");

	ASolar_Array_T4_C_OnRep_HasOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.Setup Cable Slots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASolar_Array_T4_C::Setup_Cable_Slots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.Setup Cable Slots");

	ASolar_Array_T4_C_Setup_Cable_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASolar_Array_T4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.UserConstructionScript");

	ASolar_Array_T4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.ReceiveHit
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

void ASolar_Array_T4_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.ReceiveHit");

	ASolar_Array_T4_C_ReceiveHit_Params params;
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


// Function Solar_Array_T4.Solar_Array_T4_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASolar_Array_T4_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.DroppedInWorld");

	ASolar_Array_T4_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASolar_Array_T4_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.PickedUpFromWorld");

	ASolar_Array_T4_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASolar_Array_T4_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	ASolar_Array_T4_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASolar_Array_T4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.ReceiveBeginPlay");

	ASolar_Array_T4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Array_T4_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature");

	ASolar_Array_T4_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Array_T4.Solar_Array_T4_C.ExecuteUbergraph_Solar_Array_T4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Array_T4_C::ExecuteUbergraph_Solar_Array_T4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Array_T4.Solar_Array_T4_C.ExecuteUbergraph_Solar_Array_T4");

	ASolar_Array_T4_C_ExecuteUbergraph_Solar_Array_T4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
