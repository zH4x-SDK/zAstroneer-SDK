
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

// Function Beacon_Small_Item.Beacon_Small_Item_C.DisableBeacon
// (Public, BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::DisableBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.DisableBeacon");

	ABeacon_Small_Item_C_DisableBeacon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_IsSlottedToCrackable
// (BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::OnRep_IsSlottedToCrackable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_IsSlottedToCrackable");

	ABeacon_Small_Item_C_OnRep_IsSlottedToCrackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.UpdateBeaconVisualsLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::UpdateBeaconVisualsLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.UpdateBeaconVisualsLocal");

	ABeacon_Small_Item_C_UpdateBeaconVisualsLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_BeaconColorIndex
// (BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::OnRep_BeaconColorIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.OnRep_BeaconColorIndex");

	ABeacon_Small_Item_C_OnRep_BeaconColorIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.CycleBeaconColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::CycleBeaconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.CycleBeaconColor");

	ABeacon_Small_Item_C_CycleBeaconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ABeacon_Small_Item_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.GetBodySlotLegacy");

	ABeacon_Small_Item_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABeacon_Small_Item_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.UserConstructionScript");

	ABeacon_Small_Item_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABeacon_Small_Item_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ABeacon_Small_Item_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ABeacon_Small_Item_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.PickedUpFromWorld");

	ABeacon_Small_Item_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABeacon_Small_Item_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.DroppedInWorld");

	ABeacon_Small_Item_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABeacon_Small_Item_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveBeginPlay");

	ABeacon_Small_Item_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABeacon_Small_Item_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveEndPlay");

	ABeacon_Small_Item_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABeacon_Small_Item_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.PlacedInSlot");

	ABeacon_Small_Item_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABeacon_Small_Item_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.ReleasedFromSlot");

	ABeacon_Small_Item_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveHit
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

void ABeacon_Small_Item_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.ReceiveHit");

	ABeacon_Small_Item_C_ReceiveHit_Params params;
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


// Function Beacon_Small_Item.Beacon_Small_Item_C.ExecuteUbergraph_Beacon_Small_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABeacon_Small_Item_C::ExecuteUbergraph_Beacon_Small_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beacon_Small_Item.Beacon_Small_Item_C.ExecuteUbergraph_Beacon_Small_Item");

	ABeacon_Small_Item_C_ExecuteUbergraph_Beacon_Small_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
