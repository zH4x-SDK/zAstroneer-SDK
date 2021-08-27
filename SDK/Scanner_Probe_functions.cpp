
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

// Function Scanner_Probe.Scanner_Probe_C.UpdateScannerMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::UpdateScannerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.UpdateScannerMaterial");

	AScanner_Probe_C_UpdateScannerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.GetMidRangeLightState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DistancePercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LightIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EProximityLightState           BlinkState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EProximityLightState           LightState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::GetMidRangeLightState(float DistancePercentage, int LightIndex, EProximityLightState BlinkState, EProximityLightState* LightState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.GetMidRangeLightState");

	AScanner_Probe_C_GetMidRangeLightState_Params params;
	params.DistancePercentage = DistancePercentage;
	params.LightIndex = LightIndex;
	params.BlinkState = BlinkState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightState != nullptr)
		*LightState = params.LightState;
}


// Function Scanner_Probe.Scanner_Probe_C.SpawnPingEffect
// (Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::SpawnPingEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.SpawnPingEffect");

	AScanner_Probe_C_SpawnPingEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.OnBlinkChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::OnBlinkChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.OnBlinkChanged");

	AScanner_Probe_C_OnBlinkChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.UpdateLightsOn
// (Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::UpdateLightsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.UpdateLightsOn");

	AScanner_Probe_C_UpdateLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.GetIsLightOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProximityLightState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::GetIsLightOn(EProximityLightState State, bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.GetIsLightOn");

	AScanner_Probe_C_GetIsLightOn_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function Scanner_Probe.Scanner_Probe_C.SetLightStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProximityLightState           LightOneState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EProximityLightState           LightTwoState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EProximityLightState           LightThreeState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::SetLightStates(EProximityLightState LightOneState, EProximityLightState LightTwoState, EProximityLightState LightThreeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.SetLightStates");

	AScanner_Probe_C_SetLightStates_Params params;
	params.LightOneState = LightOneState;
	params.LightTwoState = LightTwoState;
	params.LightThreeState = LightThreeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.SetLightsOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOneOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LightTwoOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LightThreeOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::SetLightsOn(bool LightOneOn, bool LightTwoOn, bool LightThreeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.SetLightsOn");

	AScanner_Probe_C_SetLightsOn_Params params;
	params.LightOneOn = LightOneOn;
	params.LightTwoOn = LightTwoOn;
	params.LightThreeOn = LightThreeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.UpdateLightStates
// (Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::UpdateLightStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.UpdateLightStates");

	AScanner_Probe_C_UpdateLightStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AScanner_Probe_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.GetBodySlotLegacy");

	AScanner_Probe_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scanner_Probe.Scanner_Probe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.UserConstructionScript");

	AScanner_Probe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AScanner_Probe_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AScanner_Probe_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.ReceiveHit
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

void AScanner_Probe_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.ReceiveHit");

	AScanner_Probe_C_ReceiveHit_Params params;
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


// Function Scanner_Probe.Scanner_Probe_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AScanner_Probe_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.PickedUpFromWorld");

	AScanner_Probe_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AScanner_Probe_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.DroppedInWorld");

	AScanner_Probe_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AScanner_Probe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.ReceiveBeginPlay");

	AScanner_Probe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.Ping
// (BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.Ping");

	AScanner_Probe_C_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.ScanFailed
// (BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::ScanFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.ScanFailed");

	AScanner_Probe_C_ScanFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)

void AScanner_Probe_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.OnStateChanged");

	AScanner_Probe_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AScanner_Probe_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AScanner_Probe_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.ReceiveEndPlay");

	AScanner_Probe_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scanner_Probe.Scanner_Probe_C.ExecuteUbergraph_Scanner_Probe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AScanner_Probe_C::ExecuteUbergraph_Scanner_Probe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scanner_Probe.Scanner_Probe_C.ExecuteUbergraph_Scanner_Probe");

	AScanner_Probe_C_ExecuteUbergraph_Scanner_Probe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
