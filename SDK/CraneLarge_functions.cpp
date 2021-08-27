
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

// Function CraneLarge.CraneLarge_C.UpdateToolOwner
// (Public, BlueprintCallable, BlueprintEvent)

void ACraneLarge_C::UpdateToolOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.UpdateToolOwner");

	ACraneLarge_C_UpdateToolOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.UpdateAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ACraneLarge_C::UpdateAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.UpdateAudio");

	ACraneLarge_C_UpdateAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.Move Head By Transform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACraneLarge_C::Move_Head_By_Transform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.Move Head By Transform");

	ACraneLarge_C_Move_Head_By_Transform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.Update Head
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACraneLarge_C::Update_Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.Update Head");

	ACraneLarge_C_Update_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.Move Head
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACraneLarge_C::Move_Head(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.Move Head");

	ACraneLarge_C_Move_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function CraneLarge.CraneLarge_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACraneLarge_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.GetBodySlotLegacy");

	ACraneLarge_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraneLarge.CraneLarge_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACraneLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.UserConstructionScript");

	ACraneLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ACraneLarge_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ACraneLarge_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.ReceiveTick");

	ACraneLarge_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class APlayController*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              toolHit                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FClickResult            ClickResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           startedInteraction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           usingTool                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           justActivated                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature(class APlayController* Controller, const struct FHitResult& toolHit, const struct FClickResult& ClickResult, bool startedInteraction, bool usingTool, bool justActivated, bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature");

	ACraneLarge_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_HandleToolSignal__DelegateSignature_Params params;
	params.Controller = Controller;
	params.toolHit = toolHit;
	params.ClickResult = ClickResult;
	params.startedInteraction = startedInteraction;
	params.usingTool = usingTool;
	params.justActivated = justActivated;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACraneLarge_C::BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature");

	ACraneLarge_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_ReceiveToolLocation__DelegateSignature_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACraneLarge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.ReceiveBeginPlay");

	ACraneLarge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.ReceiveEndPlay");

	ACraneLarge_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature");

	ACraneLarge_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachEnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::OnSetItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.OnSetItem");

	ACraneLarge_C_OnSetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.OnReleaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::OnReleaseItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.OnReleaseItem");

	ACraneLarge_C_OnReleaseItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACraneLarge_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.DroppedInWorld");

	ACraneLarge_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ACraneLarge_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.PickedUpFromWorld");

	ACraneLarge_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.ReceiveHit
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

void ACraneLarge_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.ReceiveHit");

	ACraneLarge_C_ReceiveHit_Params params;
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


// Function CraneLarge.CraneLarge_C.BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void ACraneLarge_C::BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	ACraneLarge_C_BndEvt__Damage_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraneLarge.CraneLarge_C.ExecuteUbergraph_CraneLarge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACraneLarge_C::ExecuteUbergraph_CraneLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraneLarge.CraneLarge_C.ExecuteUbergraph_CraneLarge");

	ACraneLarge_C_ExecuteUbergraph_CraneLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
