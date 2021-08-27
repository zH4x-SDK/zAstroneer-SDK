
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

// Function LodAnchorPost.LodAnchorPost_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ALodAnchorPost_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.GetBodySlotLegacy");

	ALodAnchorPost_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LodAnchorPost.LodAnchorPost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALodAnchorPost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.UserConstructionScript");

	ALodAnchorPost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALodAnchorPost_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ALodAnchorPost_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALodAnchorPost_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.DroppedInWorld");

	ALodAnchorPost_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ALodAnchorPost_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.PickedUpFromWorld");

	ALodAnchorPost_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALodAnchorPost_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.ReleasedFromSlot");

	ALodAnchorPost_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALodAnchorPost_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.PlacedInSlot");

	ALodAnchorPost_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ALodAnchorPost_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature");

	ALodAnchorPost_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALodAnchorPost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.ReceiveBeginPlay");

	ALodAnchorPost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.HandleCreativeShowLODAnchorRangeVisualizationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALodAnchorPost_C::HandleCreativeShowLODAnchorRangeVisualizationChanged(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.HandleCreativeShowLODAnchorRangeVisualizationChanged");

	ALodAnchorPost_C_HandleCreativeShowLODAnchorRangeVisualizationChanged_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALodAnchorPost_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.ReceiveEndPlay");

	ALodAnchorPost_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LodAnchorPost.LodAnchorPost_C.ReceiveHit
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

void ALodAnchorPost_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.ReceiveHit");

	ALodAnchorPost_C_ReceiveHit_Params params;
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


// Function LodAnchorPost.LodAnchorPost_C.ExecuteUbergraph_LodAnchorPost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALodAnchorPost_C::ExecuteUbergraph_LodAnchorPost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LodAnchorPost.LodAnchorPost_C.ExecuteUbergraph_LodAnchorPost");

	ALodAnchorPost_C_ExecuteUbergraph_LodAnchorPost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
