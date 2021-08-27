
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

// Function DebrisBundle.DebrisBundle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADebrisBundle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.UserConstructionScript");

	ADebrisBundle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADebrisBundle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.ReceiveBeginPlay");

	ADebrisBundle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.OnChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void ADebrisBundle_C::OnChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.OnChanged_Event_1");

	ADebrisBundle_C_OnChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADebrisBundle_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.DroppedInWorld");

	ADebrisBundle_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ADebrisBundle_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.PickedUpFromWorld");

	ADebrisBundle_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.PerformUnbundlingBehaviorOnUse
// (Public, BlueprintCallable, BlueprintEvent)

void ADebrisBundle_C::PerformUnbundlingBehaviorOnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.PerformUnbundlingBehaviorOnUse");

	ADebrisBundle_C_PerformUnbundlingBehaviorOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebrisBundle.DebrisBundle_C.ReceiveHit
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

void ADebrisBundle_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.ReceiveHit");

	ADebrisBundle_C_ReceiveHit_Params params;
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


// Function DebrisBundle.DebrisBundle_C.ExecuteUbergraph_DebrisBundle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADebrisBundle_C::ExecuteUbergraph_DebrisBundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebrisBundle.DebrisBundle_C.ExecuteUbergraph_DebrisBundle");

	ADebrisBundle_C_ExecuteUbergraph_DebrisBundle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
