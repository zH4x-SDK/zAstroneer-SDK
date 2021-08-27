
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

// Function Solar_Medium.Solar_Medium_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASolar_Medium_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.GetBodySlotLegacy");

	ASolar_Medium_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solar_Medium.Solar_Medium_C.Update Power Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Medium_C::Update_Power_Bar(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.Update Power Bar");

	ASolar_Medium_C_Update_Power_Bar_Params params;
	params.IsPowered = IsPowered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASolar_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.UserConstructionScript");

	ASolar_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASolar_Medium_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.PickedUpFromWorld");

	ASolar_Medium_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Medium_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.ReleasedFromSlot");

	ASolar_Medium_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASolar_Medium_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.DroppedInWorld");

	ASolar_Medium_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Medium_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.PlacedInSlot");

	ASolar_Medium_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.On Begin Folding
// (BlueprintCallable, BlueprintEvent)

void ASolar_Medium_C::On_Begin_Folding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.On Begin Folding");

	ASolar_Medium_C_On_Begin_Folding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.On Begin Unfolding
// (BlueprintCallable, BlueprintEvent)

void ASolar_Medium_C::On_Begin_Unfolding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.On Begin Unfolding");

	ASolar_Medium_C_On_Begin_Unfolding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASolar_Medium_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.ReceiveBeginPlay");

	ASolar_Medium_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Medium_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.ReceiveEndPlay");

	ASolar_Medium_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.ReceiveHit
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

void ASolar_Medium_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.ReceiveHit");

	ASolar_Medium_C_ReceiveHit_Params params;
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


// Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ASolar_Medium_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ASolar_Medium_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ASolar_Medium_C::BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ASolar_Medium_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solar_Medium.Solar_Medium_C.ExecuteUbergraph_Solar_Medium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASolar_Medium_C::ExecuteUbergraph_Solar_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solar_Medium.Solar_Medium_C.ExecuteUbergraph_Solar_Medium");

	ASolar_Medium_C_ExecuteUbergraph_Solar_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
