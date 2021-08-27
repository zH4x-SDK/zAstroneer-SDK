
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

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AConsumableLiquidCanister_C::UpdateCanisterVisuals_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals_Internal");

	AConsumableLiquidCanister_C_UpdateCanisterVisuals_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConsumableLiquidCanister_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UserConstructionScript");

	AConsumableLiquidCanister_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableLiquidCanister_C::UpdateCanisterVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals");

	AConsumableLiquidCanister_C_UpdateCanisterVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ReceiveHit
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

void AConsumableLiquidCanister_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ReceiveHit");

	AConsumableLiquidCanister_C_ReceiveHit_Params params;
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


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AConsumableLiquidCanister_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.DroppedInWorld");

	AConsumableLiquidCanister_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AConsumableLiquidCanister_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.PickedUpFromWorld");

	AConsumableLiquidCanister_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ExecuteUbergraph_ConsumableLiquidCanister
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableLiquidCanister_C::ExecuteUbergraph_ConsumableLiquidCanister(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ExecuteUbergraph_ConsumableLiquidCanister");

	AConsumableLiquidCanister_C_ExecuteUbergraph_ConsumableLiquidCanister_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
