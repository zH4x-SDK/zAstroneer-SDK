
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

// Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResearch_T2Static_Shooterv2_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.UserConstructionScript");

	AResearch_T2Static_Shooterv2_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AResearch_T2Static_Shooterv2_01_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.DroppedInWorld");

	AResearch_T2Static_Shooterv2_01_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AResearch_T2Static_Shooterv2_01_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.PickedUpFromWorld");

	AResearch_T2Static_Shooterv2_01_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.ReceiveHit
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

void AResearch_T2Static_Shooterv2_01_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.ReceiveHit");

	AResearch_T2Static_Shooterv2_01_C_ReceiveHit_Params params;
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


// Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.ExecuteUbergraph_Research_T2Static_Shooterv2_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearch_T2Static_Shooterv2_01_C::ExecuteUbergraph_Research_T2Static_Shooterv2_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_T2Static_Shooterv2_01.Research_T2Static_Shooterv2_01_C.ExecuteUbergraph_Research_T2Static_Shooterv2_01");

	AResearch_T2Static_Shooterv2_01_C_ExecuteUbergraph_Research_T2Static_Shooterv2_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
