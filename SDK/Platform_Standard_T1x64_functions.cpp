
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

// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.GetLinearTetherAttachPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearAttachPoint> Array                          (Parm, OutParm, ZeroConstructor)

void APlatform_Standard_T1x64_C::GetLinearTetherAttachPoints(TArray<struct FLinearAttachPoint>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.GetLinearTetherAttachPoints");

	APlatform_Standard_T1x64_C_GetLinearTetherAttachPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T1x64_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.UserConstructionScript");

	APlatform_Standard_T1x64_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T1x64_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.SetupCableSlots");

	APlatform_Standard_T1x64_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ReceiveHit
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

void APlatform_Standard_T1x64_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ReceiveHit");

	APlatform_Standard_T1x64_C_ReceiveHit_Params params;
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


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlatform_Standard_T1x64_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.DroppedInWorld");

	APlatform_Standard_T1x64_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APlatform_Standard_T1x64_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.PickedUpFromWorld");

	APlatform_Standard_T1x64_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlatform_Standard_T1x64_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ReceiveBeginPlay");

	APlatform_Standard_T1x64_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ExecuteUbergraph_Platform_Standard_T1x64
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlatform_Standard_T1x64_C::ExecuteUbergraph_Platform_Standard_T1x64(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T1x64.Platform_Standard_T1x64_C.ExecuteUbergraph_Platform_Standard_T1x64");

	APlatform_Standard_T1x64_C_ExecuteUbergraph_Platform_Standard_T1x64_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
