
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

// Function hazard_tumbler.hazard_tumbler_C.DropItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Spawn_Transform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class APhysicalItem*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APhysicalItem* Ahazard_tumbler_C::DropItem(const struct FTransform& Spawn_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.DropItem");

	Ahazard_tumbler_C_DropItem_Params params;
	params.Spawn_Transform = Spawn_Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function hazard_tumbler.hazard_tumbler_C.ConstrainObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_tumbler_C::ConstrainObject(class UPrimitiveComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.ConstrainObject");

	Ahazard_tumbler_C_ConstrainObject_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.ReleaseItems
// (Public, BlueprintCallable, BlueprintEvent)

void Ahazard_tumbler_C::ReleaseItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.ReleaseItems");

	Ahazard_tumbler_C_ReleaseItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.AttachTo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_tumbler_C::AttachTo(class APhysicalItem* Actor, class UPrimitiveComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.AttachTo");

	Ahazard_tumbler_C_AttachTo_Params params;
	params.Actor = Actor;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.SetDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ahazard_tumbler_C::SetDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.SetDirection");

	Ahazard_tumbler_C_SetDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void Ahazard_tumbler_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.Destroy");

	Ahazard_tumbler_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ahazard_tumbler_C::Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.Move");

	Ahazard_tumbler_C_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ahazard_tumbler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.UserConstructionScript");

	Ahazard_tumbler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_tumbler_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.ReceiveTick");

	Ahazard_tumbler_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.ReceiveHit
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

void Ahazard_tumbler_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.ReceiveHit");

	Ahazard_tumbler_C_ReceiveHit_Params params;
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


// Function hazard_tumbler.hazard_tumbler_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ahazard_tumbler_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature");

	Ahazard_tumbler_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.OnSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_tumbler_C::OnSpawn(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.OnSpawn");

	Ahazard_tumbler_C_OnSpawn_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_tumbler.hazard_tumbler_C.ExecuteUbergraph_hazard_tumbler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_tumbler_C::ExecuteUbergraph_hazard_tumbler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_tumbler.hazard_tumbler_C.ExecuteUbergraph_hazard_tumbler");

	Ahazard_tumbler_C_ExecuteUbergraph_hazard_tumbler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
