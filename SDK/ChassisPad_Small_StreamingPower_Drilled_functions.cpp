
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

// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.OnRep_REP_HasOxygen
// (BlueprintCallable, BlueprintEvent)

void AChassisPad_Small_StreamingPower_Drilled_C::OnRep_REP_HasOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.OnRep_REP_HasOxygen");

	AChassisPad_Small_StreamingPower_Drilled_C_OnRep_REP_HasOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassisPad_Small_StreamingPower_Drilled_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.UserConstructionScript");

	AChassisPad_Small_StreamingPower_Drilled_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChassisPad_Small_StreamingPower_Drilled_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ReceiveBeginPlay");

	AChassisPad_Small_StreamingPower_Drilled_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ReceiveHit
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

void AChassisPad_Small_StreamingPower_Drilled_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ReceiveHit");

	AChassisPad_Small_StreamingPower_Drilled_C_ReceiveHit_Params params;
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


// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ToggleOxygenRail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Small_StreamingPower_Drilled_C::ToggleOxygenRail(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ToggleOxygenRail");

	AChassisPad_Small_StreamingPower_Drilled_C_ToggleOxygenRail_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ExecuteUbergraph_ChassisPad_Small_StreamingPower_Drilled
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Small_StreamingPower_Drilled_C::ExecuteUbergraph_ChassisPad_Small_StreamingPower_Drilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C.ExecuteUbergraph_ChassisPad_Small_StreamingPower_Drilled");

	AChassisPad_Small_StreamingPower_Drilled_C_ExecuteUbergraph_ChassisPad_Small_StreamingPower_Drilled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
