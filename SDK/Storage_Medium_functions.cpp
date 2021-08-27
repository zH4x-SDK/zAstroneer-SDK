
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

// Function Storage_Medium.Storage_Medium_C.OnRep_REP_ShouldExpand
// (BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::OnRep_REP_ShouldExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.OnRep_REP_ShouldExpand");

	AStorage_Medium_C_OnRep_REP_ShouldExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.UpdateUseContext");

	AStorage_Medium_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.ToggleShouldExpand
// (Public, BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::ToggleShouldExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ToggleShouldExpand");

	AStorage_Medium_C_ToggleShouldExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.UpdateUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewCanExpand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::UpdateUseSuppression(bool NewCanExpand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.UpdateUseSuppression");

	AStorage_Medium_C_UpdateUseSuppression_Params params;
	params.NewCanExpand = NewCanExpand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.Set Body Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::Set_Body_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.Set Body Slot");

	AStorage_Medium_C_Set_Body_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.Get Cracked Value Aux
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::Get_Cracked_Value_Aux(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.Get Cracked Value Aux");

	AStorage_Medium_C_Get_Cracked_Value_Aux_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Storage_Medium.Storage_Medium_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AStorage_Medium_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.GetBodySlotLegacy");

	AStorage_Medium_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Storage_Medium.Storage_Medium_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.UserConstructionScript");

	AStorage_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AStorage_Medium_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AStorage_Medium_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ReceiveTick");

	AStorage_Medium_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature");

	AStorage_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AStorage_Medium_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.PickedUpFromWorld");

	AStorage_Medium_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AStorage_Medium_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.DroppedInWorld");

	AStorage_Medium_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.PlacedInSlot");

	AStorage_Medium_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ReleasedFromSlot");

	AStorage_Medium_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.ReceiveHit
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

void AStorage_Medium_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ReceiveHit");

	AStorage_Medium_C_ReceiveHit_Params params;
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


// Function Storage_Medium.Storage_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStorage_Medium_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ReceiveBeginPlay");

	AStorage_Medium_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.AnimateExpansionToggle
// (BlueprintCallable, BlueprintEvent)

void AStorage_Medium_C::AnimateExpansionToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.AnimateExpansionToggle");

	AStorage_Medium_C_AnimateExpansionToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Storage_Medium.Storage_Medium_C.ExecuteUbergraph_Storage_Medium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorage_Medium_C::ExecuteUbergraph_Storage_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Storage_Medium.Storage_Medium_C.ExecuteUbergraph_Storage_Medium");

	AStorage_Medium_C_ExecuteUbergraph_Storage_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
