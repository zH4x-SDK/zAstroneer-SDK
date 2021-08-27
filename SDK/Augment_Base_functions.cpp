
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

// Function Augment_Base.Augment_Base_C.PlayAugmentDetachSound
// (Public, BlueprintCallable, BlueprintEvent)

void AAugment_Base_C::PlayAugmentDetachSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.PlayAugmentDetachSound");

	AAugment_Base_C_PlayAugmentDetachSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.PlayAugmentAttachSound
// (Public, BlueprintCallable, BlueprintEvent)

void AAugment_Base_C::PlayAugmentAttachSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.PlayAugmentAttachSound");

	AAugment_Base_C_PlayAugmentAttachSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AAugment_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.GetBodySlotLegacy");

	AAugment_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Augment_Base.Augment_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAugment_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.UserConstructionScript");

	AAugment_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AAugment_Base_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AAugment_Base_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAugment_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.ReceiveBeginPlay");

	AAugment_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.ReceiveHit
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

void AAugment_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.ReceiveHit");

	AAugment_Base_C_ReceiveHit_Params params;
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


// Function Augment_Base.Augment_Base_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AAugment_Base_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.PickedUpFromWorld");

	AAugment_Base_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAugment_Base_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.DroppedInWorld");

	AAugment_Base_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void AAugment_Base_C::BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
// (BlueprintEvent)

void AAugment_Base_C::BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature");

	AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature
// (BlueprintEvent)

void AAugment_Base_C::BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature");

	AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature
// (BlueprintEvent)

void AAugment_Base_C::BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature");

	AAugment_Base_C_BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Augment_Base.Augment_Base_C.ExecuteUbergraph_Augment_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAugment_Base_C::ExecuteUbergraph_Augment_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Augment_Base.Augment_Base_C.ExecuteUbergraph_Augment_Base");

	AAugment_Base_C_ExecuteUbergraph_Augment_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
