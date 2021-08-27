
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

// Function DeployableLandingPad.DeployableLandingPad_C.SetIndicatorMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::SetIndicatorMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.SetIndicatorMaterial");

	ADeployableLandingPad_C_SetIndicatorMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.SetDeployedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Deploy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::SetDeployedState(bool Deploy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.SetDeployedState");

	ADeployableLandingPad_C_SetDeployedState_Params params;
	params.Deploy = Deploy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.OnRep_Deployed
// (BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::OnRep_Deployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.OnRep_Deployed");

	ADeployableLandingPad_C_OnRep_Deployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.SERVER_UpdateUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::SERVER_UpdateUseSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.SERVER_UpdateUseSuppression");

	ADeployableLandingPad_C_SERVER_UpdateUseSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.UpdateUseContext");

	ADeployableLandingPad_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.OnRep_LandingPadCanDeploy
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::OnRep_LandingPadCanDeploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.OnRep_LandingPadCanDeploy");

	ADeployableLandingPad_C_OnRep_LandingPadCanDeploy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.SetAllLandingLightsOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AreLightsOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::SetAllLandingLightsOn(bool AreLightsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.SetAllLandingLightsOn");

	ADeployableLandingPad_C_SetAllLandingLightsOn_Params params;
	params.AreLightsOn = AreLightsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.MotionStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::MotionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.MotionStateChanged");

	ADeployableLandingPad_C_MotionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ADeployableLandingPad_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.GetBodySlotLegacy");

	ADeployableLandingPad_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeployableLandingPad.DeployableLandingPad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeployableLandingPad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.UserConstructionScript");

	ADeployableLandingPad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__FinishedFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__FinishedFunc");

	ADeployableLandingPad_C_LandingLightsAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__UpdateFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__UpdateFunc");

	ADeployableLandingPad_C_LandingLightsAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOff__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOff__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn5__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOn5__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn5__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOn5__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn4__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOn4__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn4__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOn4__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn3__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOn3__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn3__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOn3__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn2__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOn2__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn2__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOn2__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn1__EventFunc
// (BlueprintEvent)

void ADeployableLandingPad_C::LandingLightsAnim__LightsOn1__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn1__EventFunc");

	ADeployableLandingPad_C_LandingLightsAnim__LightsOn1__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADeployableLandingPad_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ADeployableLandingPad_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeployableLandingPad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ReceiveBeginPlay");

	ADeployableLandingPad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ADeployableLandingPad_C::BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ADeployableLandingPad_C_BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ADeployableLandingPad_C::BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ADeployableLandingPad_C_BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ReceiveTick");

	ADeployableLandingPad_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.ItemSetOnPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::ItemSetOnPad(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ItemSetOnPad");

	ADeployableLandingPad_C_ItemSetOnPad_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.ItemRemovedFromPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::ItemRemovedFromPad(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ItemRemovedFromPad");

	ADeployableLandingPad_C_ItemRemovedFromPad_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADeployableLandingPad_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.DroppedInWorld");

	ADeployableLandingPad_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ADeployableLandingPad_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.PickedUpFromWorld");

	ADeployableLandingPad_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveHit
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

void ADeployableLandingPad_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ReceiveHit");

	ADeployableLandingPad_C_ReceiveHit_Params params;
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


// Function DeployableLandingPad.DeployableLandingPad_C.ExecuteUbergraph_DeployableLandingPad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeployableLandingPad_C::ExecuteUbergraph_DeployableLandingPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeployableLandingPad.DeployableLandingPad_C.ExecuteUbergraph_DeployableLandingPad");

	ADeployableLandingPad_C_ExecuteUbergraph_DeployableLandingPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
