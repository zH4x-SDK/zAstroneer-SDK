
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

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void AResourceCanister_Reusable_C::UpdateTankVisuals_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals_Internal");

	AResourceCanister_Reusable_C_UpdateTankVisuals_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceCanister_Reusable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UserConstructionScript");

	AResourceCanister_Reusable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AResourceCanister_Reusable_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AResourceCanister_Reusable_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AResourceCanister_Reusable_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AResourceCanister_Reusable_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayDrainedAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AResourceCanister_Reusable_C::PlayDrainedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayDrainedAudio");

	AResourceCanister_Reusable_C_PlayDrainedAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayFilledAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AResourceCanister_Reusable_C::PlayFilledAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayFilledAudio");

	AResourceCanister_Reusable_C_PlayFilledAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AResourceCanister_Reusable_C::UpdateTankVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals");

	AResourceCanister_Reusable_C_UpdateTankVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ReceiveHit
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

void AResourceCanister_Reusable_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ReceiveHit");

	AResourceCanister_Reusable_C_ReceiveHit_Params params;
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


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AResourceCanister_Reusable_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.DroppedInWorld");

	AResourceCanister_Reusable_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AResourceCanister_Reusable_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PickedUpFromWorld");

	AResourceCanister_Reusable_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ExecuteUbergraph_ResourceCanister_Reusable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCanister_Reusable_C::ExecuteUbergraph_ResourceCanister_Reusable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ExecuteUbergraph_ResourceCanister_Reusable");

	AResourceCanister_Reusable_C_ExecuteUbergraph_ResourceCanister_Reusable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
