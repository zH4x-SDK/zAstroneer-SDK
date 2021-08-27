
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

// Function Wind_Medium.Wind_Medium_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AWind_Medium_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.GetBodySlotLegacy");

	AWind_Medium_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wind_Medium.Wind_Medium_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWind_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.UserConstructionScript");

	AWind_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWind_Medium_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature");

	AWind_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_17_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AWind_Medium_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.PickedUpFromWorld");

	AWind_Medium_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWind_Medium_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.DroppedInWorld");

	AWind_Medium_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWind_Medium_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.ReceiveBeginPlay");

	AWind_Medium_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWind_Medium_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.ReceiveEndPlay");

	AWind_Medium_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.ReceiveHit
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

void AWind_Medium_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.ReceiveHit");

	AWind_Medium_C_ReceiveHit_Params params;
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


// Function Wind_Medium.Wind_Medium_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 WindNormal                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          WindSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWind_Medium_C::BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature(const struct FVector& WindNormal, float WindSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature");

	AWind_Medium_C_BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_1_OnWindPowerAnimationDataChanged__DelegateSignature_Params params;
	params.WindNormal = WindNormal;
	params.WindSpeed = WindSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wind_Medium.Wind_Medium_C.ExecuteUbergraph_Wind_Medium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWind_Medium_C::ExecuteUbergraph_Wind_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind_Medium.Wind_Medium_C.ExecuteUbergraph_Wind_Medium");

	AWind_Medium_C_ExecuteUbergraph_Wind_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
