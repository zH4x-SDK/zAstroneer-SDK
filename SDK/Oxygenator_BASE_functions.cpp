
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

// Function Oxygenator_BASE.Oxygenator_BASE_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AOxygenator_BASE_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.GetBodySlotLegacy");

	AOxygenator_BASE_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOxygenator_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.UserConstructionScript");

	AOxygenator_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AOxygenator_BASE_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AOxygenator_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOxygenator_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveBeginPlay");

	AOxygenator_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOxygenatorComponent*    oxygenator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOxygenator_BASE_C::BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature(class UOxygenatorComponent* oxygenator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature");

	AOxygenator_BASE_C_BndEvt__Oxygenator_K2Node_ComponentBoundEvent_0_OxygenatorSignal__DelegateSignature_Params params;
	params.oxygenator = oxygenator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOxygenator_BASE_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.DroppedInWorld");

	AOxygenator_BASE_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AOxygenator_BASE_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.PickedUpFromWorld");

	AOxygenator_BASE_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveHit
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

void AOxygenator_BASE_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveHit");

	AOxygenator_BASE_C_ReceiveHit_Params params;
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


// Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOxygenator_BASE_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.ReceiveEndPlay");

	AOxygenator_BASE_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_BASE.Oxygenator_BASE_C.ExecuteUbergraph_Oxygenator_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOxygenator_BASE_C::ExecuteUbergraph_Oxygenator_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_BASE.Oxygenator_BASE_C.ExecuteUbergraph_Oxygenator_BASE");

	AOxygenator_BASE_C_ExecuteUbergraph_Oxygenator_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
