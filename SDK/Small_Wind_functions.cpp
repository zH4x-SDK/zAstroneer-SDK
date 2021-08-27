
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

// Function Small_Wind.Small_Wind_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASmall_Wind_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.GetBodySlotLegacy");

	ASmall_Wind_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Small_Wind.Small_Wind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASmall_Wind_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.UserConstructionScript");

	ASmall_Wind_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASmall_Wind_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.ReceiveBeginPlay");

	ASmall_Wind_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.ReceiveHit
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

void ASmall_Wind_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.ReceiveHit");

	ASmall_Wind_C_ReceiveHit_Params params;
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


// Function Small_Wind.Small_Wind_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmall_Wind_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.DroppedInWorld");

	ASmall_Wind_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASmall_Wind_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.PickedUpFromWorld");

	ASmall_Wind_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmall_Wind_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.ReceiveEndPlay");

	ASmall_Wind_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.OnPickedUpFromWorld_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicalMovement               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmall_Wind_C::OnPickedUpFromWorld_Event_1(bool PhysicalMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.OnPickedUpFromWorld_Event_1");

	ASmall_Wind_C_OnPickedUpFromWorld_Event_1_Params params;
	params.PhysicalMovement = PhysicalMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmall_Wind_C::CustomEvent_1(bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.CustomEvent_1");

	ASmall_Wind_C_CustomEvent_1_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ASmall_Wind_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.CustomEvent_2");

	ASmall_Wind_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void ASmall_Wind_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.CustomEvent_3");

	ASmall_Wind_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 WindNormal                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          WindSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmall_Wind_C::BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature(const struct FVector& WindNormal, float WindSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature");

	ASmall_Wind_C_BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature_Params params;
	params.WindNormal = WindNormal;
	params.WindSpeed = WindSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.UnblockRotationAnim
// (BlueprintCallable, BlueprintEvent)

void ASmall_Wind_C::UnblockRotationAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.UnblockRotationAnim");

	ASmall_Wind_C_UnblockRotationAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.UpdateWindPowerAnim
// (BlueprintCallable, BlueprintEvent)

void ASmall_Wind_C::UpdateWindPowerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.UpdateWindPowerAnim");

	ASmall_Wind_C_UpdateWindPowerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.CustomEvent_4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmall_Wind_C::CustomEvent_4(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.CustomEvent_4");

	ASmall_Wind_C_CustomEvent_4_Params params;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Small_Wind.Small_Wind_C.ExecuteUbergraph_Small_Wind
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmall_Wind_C::ExecuteUbergraph_Small_Wind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Small_Wind.Small_Wind_C.ExecuteUbergraph_Small_Wind");

	ASmall_Wind_C_ExecuteUbergraph_Small_Wind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
