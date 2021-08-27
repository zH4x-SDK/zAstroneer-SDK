
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

// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ValidateContainedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::ValidateContainedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ValidateContainedItem");

	AStorageCanister_Reusable_Base_C_ValidateContainedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateTankVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::UpdateTankVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateTankVisuals");

	AStorageCanister_Reusable_Base_C_UpdateTankVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateItemData
// (Public, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::UpdateItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateItemData");

	AStorageCanister_Reusable_Base_C_UpdateItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateVolatility
// (Public, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::UpdateVolatility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UpdateVolatility");

	AStorageCanister_Reusable_Base_C_UpdateVolatility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.UserConstructionScript");

	AStorageCanister_Reusable_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveBeginPlay");

	AStorageCanister_Reusable_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.SetView");

	AStorageCanister_Reusable_Base_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AStorageCanister_Reusable_Base_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.DroppedInWorld");

	AStorageCanister_Reusable_Base_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorageCanister_Reusable_Base_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PlacedInSlot");

	AStorageCanister_Reusable_Base_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorageCanister_Reusable_Base_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReleasedFromSlot");

	AStorageCanister_Reusable_Base_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.PickedUpFromWorld");

	AStorageCanister_Reusable_Base_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnIemValueChanged
// (BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::OnIemValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnIemValueChanged");

	AStorageCanister_Reusable_Base_C_OnIemValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnUpdateVisuals
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AStorageCanister_Reusable_Base_C::OnUpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.OnUpdateVisuals");

	AStorageCanister_Reusable_Base_C_OnUpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveHit
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

void AStorageCanister_Reusable_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ReceiveHit");

	AStorageCanister_Reusable_Base_C_ReceiveHit_Params params;
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


// Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ExecuteUbergraph_StorageCanister_Reusable_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorageCanister_Reusable_Base_C::ExecuteUbergraph_StorageCanister_Reusable_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageCanister_Reusable_Base.StorageCanister_Reusable_Base_C.ExecuteUbergraph_StorageCanister_Reusable_Base");

	AStorageCanister_Reusable_Base_C_ExecuteUbergraph_StorageCanister_Reusable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
