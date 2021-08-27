
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

// Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassisPad_Medium_Unpowered_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.UserConstructionScript");

	AChassisPad_Medium_Unpowered_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.ReceiveHit
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

void AChassisPad_Medium_Unpowered_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.ReceiveHit");

	AChassisPad_Medium_Unpowered_C_ReceiveHit_Params params;
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


// Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.ExecuteUbergraph_ChassisPad_Medium_Unpowered
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Medium_Unpowered_C::ExecuteUbergraph_ChassisPad_Medium_Unpowered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Medium_Unpowered.ChassisPad_Medium_Unpowered_C.ExecuteUbergraph_ChassisPad_Medium_Unpowered");

	AChassisPad_Medium_Unpowered_C_ExecuteUbergraph_ChassisPad_Medium_Unpowered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
