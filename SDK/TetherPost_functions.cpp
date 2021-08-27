
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

// Function TetherPost.TetherPost_C.OnRep_REP_DecorationOptionIndex
// (BlueprintCallable, BlueprintEvent)

void ATetherPost_C::OnRep_REP_DecorationOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.OnRep_REP_DecorationOptionIndex");

	ATetherPost_C_OnRep_REP_DecorationOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.InitializeDecoration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         ActiveEventNames               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATetherPost_C::InitializeDecoration(TArray<struct FString>* ActiveEventNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.InitializeDecoration");

	ATetherPost_C_InitializeDecoration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveEventNames != nullptr)
		*ActiveEventNames = params.ActiveEventNames;
}


// Function TetherPost.TetherPost_C.UpdateDecorationMaterialAndLightColor
// (Public, BlueprintCallable, BlueprintEvent)

void ATetherPost_C::UpdateDecorationMaterialAndLightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.UpdateDecorationMaterialAndLightColor");

	ATetherPost_C_UpdateDecorationMaterialAndLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.SetTetherDecorationActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDecorationActive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectNewDecorationOption      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTetherDecorationConfig* DecorationConfig               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::SetTetherDecorationActive(bool IsDecorationActive, bool SelectNewDecorationOption, class UTetherDecorationConfig* DecorationConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.SetTetherDecorationActive");

	ATetherPost_C_SetTetherDecorationActive_Params params;
	params.IsDecorationActive = IsDecorationActive;
	params.SelectNewDecorationOption = SelectNewDecorationOption;
	params.DecorationConfig = DecorationConfig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.Set Oxygen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::Set_Oxygen(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.Set Oxygen");

	ATetherPost_C_Set_Oxygen_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.OnRep_REP Oxygen
// (BlueprintCallable, BlueprintEvent)

void ATetherPost_C::OnRep_REP_Oxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.OnRep_REP Oxygen");

	ATetherPost_C_OnRep_REP_Oxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ATetherPost_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.GetBodySlotLegacy");

	ATetherPost_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TetherPost.TetherPost_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATetherPost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.UserConstructionScript");

	ATetherPost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATetherPost_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.DroppedInWorld");

	ATetherPost_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ATetherPost_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.PickedUpFromWorld");

	ATetherPost_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature");

	ATetherPost_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.StartInWorld
// (Event, Public, BlueprintEvent)

void ATetherPost_C::StartInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.StartInWorld");

	ATetherPost_C_StartInWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATetherPost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.ReceiveBeginPlay");

	ATetherPost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.ReceiveHit
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

void ATetherPost_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.ReceiveHit");

	ATetherPost_C_ReceiveHit_Params params;
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


// Function TetherPost.TetherPost_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature");

	ATetherPost_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsEventActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature(const struct FString& EventName, bool bIsEventActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature");

	ATetherPost_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature_Params params;
	params.EventName = EventName;
	params.bIsEventActive = bIsEventActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         activeEventsOfInterest         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATetherPost_C::BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature(TArray<struct FString>* activeEventsOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature");

	ATetherPost_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (activeEventsOfInterest != nullptr)
		*activeEventsOfInterest = params.activeEventsOfInterest;
}


// Function TetherPost.TetherPost_C.ExecuteUbergraph_TetherPost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherPost_C::ExecuteUbergraph_TetherPost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherPost.TetherPost_C.ExecuteUbergraph_TetherPost");

	ATetherPost_C_ExecuteUbergraph_TetherPost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
