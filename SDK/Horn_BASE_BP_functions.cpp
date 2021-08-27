
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

// Function Horn_BASE_BP.Horn_BASE_BP_C.UpdateMaterialPulse
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PulseStrength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHorn_BASE_BP_C::UpdateMaterialPulse(float PulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.UpdateMaterialPulse");

	AHorn_BASE_BP_C_UpdateMaterialPulse_Params params;
	params.PulseStrength = PulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AHorn_BASE_BP_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.GetBodySlotLegacy");

	AHorn_BASE_BP_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHorn_BASE_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.UserConstructionScript");

	AHorn_BASE_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHorn_BASE_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveBeginPlay");

	AHorn_BASE_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AHorn_BASE_BP_C::BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AHorn_BASE_BP_C::BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void AHorn_BASE_BP_C::BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AHorn_BASE_BP_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.PickedUpFromWorld");

	AHorn_BASE_BP_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHorn_BASE_BP_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.DroppedInWorld");

	AHorn_BASE_BP_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveHit
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

void AHorn_BASE_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveHit");

	AHorn_BASE_BP_C_ReceiveHit_Params params;
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


// Function Horn_BASE_BP.Horn_BASE_BP_C.ExecuteUbergraph_Horn_BASE_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHorn_BASE_BP_C::ExecuteUbergraph_Horn_BASE_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.ExecuteUbergraph_Horn_BASE_BP");

	AHorn_BASE_BP_C_ExecuteUbergraph_Horn_BASE_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.OnStopPulseAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AHorn_BASE_BP_C::OnStopPulseAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.OnStopPulseAnim__DelegateSignature");

	AHorn_BASE_BP_C_OnStopPulseAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_BASE_BP.Horn_BASE_BP_C.OnStartPulseAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Looping                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHorn_BASE_BP_C::OnStartPulseAnim__DelegateSignature(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_BASE_BP.Horn_BASE_BP_C.OnStartPulseAnim__DelegateSignature");

	AHorn_BASE_BP_C_OnStartPulseAnim__DelegateSignature_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
