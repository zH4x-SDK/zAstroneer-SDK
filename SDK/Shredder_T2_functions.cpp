
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

// Function Shredder_T2.Shredder_T2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShredder_T2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.UserConstructionScript");

	AShredder_T2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShredder_T2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.ReceiveBeginPlay");

	AShredder_T2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShredderState>    NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_T2_C::UpdateShredderAnimState(TEnumAsByte<EShredderState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimState");

	AShredder_T2_C_UpdateShredderAnimState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPowerLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_T2_C::UpdateShredderAnimSpeed(float NewPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimSpeed");

	AShredder_T2_C_UpdateShredderAnimSpeed_Params params;
	params.NewPowerLevel = NewPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.OnAnimationInactive
// (BlueprintCallable, BlueprintEvent)

void AShredder_T2_C::OnAnimationInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.OnAnimationInactive");

	AShredder_T2_C_OnAnimationInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.ReceiveHit
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

void AShredder_T2_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.ReceiveHit");

	AShredder_T2_C_ReceiveHit_Params params;
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


// Function Shredder_T2.Shredder_T2_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShredder_T2_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.DroppedInWorld");

	AShredder_T2_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AShredder_T2_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.PickedUpFromWorld");

	AShredder_T2_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_T2.Shredder_T2_C.ExecuteUbergraph_Shredder_T2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_T2_C::ExecuteUbergraph_Shredder_T2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_T2.Shredder_T2_C.ExecuteUbergraph_Shredder_T2");

	AShredder_T2_C_ExecuteUbergraph_Shredder_T2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
