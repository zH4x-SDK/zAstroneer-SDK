
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

// Function Jetpack_BASE.Jetpack_BASE_C.UpdateNozzleTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetNozzleDir                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AJetpack_BASE_C::UpdateNozzleTarget(const struct FVector& TargetNozzleDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.UpdateNozzleTarget");

	AJetpack_BASE_C_UpdateNozzleTarget_Params params;
	params.TargetNozzleDir = TargetNozzleDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SFX_Stowed
// (Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::SFX_Stowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SFX_Stowed");

	AJetpack_BASE_C_SFX_Stowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SFX_Deployed
// (Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::SFX_Deployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SFX_Deployed");

	AJetpack_BASE_C_SFX_Deployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SFX_SuccessfulActivation
// (Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::SFX_SuccessfulActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SFX_SuccessfulActivation");

	AJetpack_BASE_C_SFX_SuccessfulActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SFX_FailedActivation
// (Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::SFX_FailedActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SFX_FailedActivation");

	AJetpack_BASE_C_SFX_FailedActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.UpdateCurrentNozzleDir
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AJetpack_BASE_C::UpdateCurrentNozzleDir(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.UpdateCurrentNozzleDir");

	AJetpack_BASE_C_UpdateCurrentNozzleDir_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.InterpolateNozzleDir
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::InterpolateNozzleDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.InterpolateNozzleDir");

	AJetpack_BASE_C_InterpolateNozzleDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleNeutralHeading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SnapToNeutralHeading           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetNozzleNeutralHeading(bool SnapToNeutralHeading)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleNeutralHeading");

	AJetpack_BASE_C_SetNozzleNeutralHeading_Params params;
	params.SnapToNeutralHeading = SnapToNeutralHeading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.CreateLowFuelLightMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::CreateLowFuelLightMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.CreateLowFuelLightMaterialInstance");

	AJetpack_BASE_C_CreateLowFuelLightMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetLowFuelStateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StateActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetLowFuelStateActive(bool StateActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetLowFuelStateActive");

	AJetpack_BASE_C_SetLowFuelStateActive_Params params;
	params.StateActive = StateActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetFuelLightEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetFuelLightEnabled(bool LightEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetFuelLightEnabled");

	AJetpack_BASE_C_SetFuelLightEnabled_Params params;
	params.LightEnabled = LightEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackThrustActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ThrustActive                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetJetpackThrustActive(bool ThrustActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackThrustActive");

	AJetpack_BASE_C_SetJetpackThrustActive_Params params;
	params.ThrustActive = ThrustActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleTargetHeading
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetHeading                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           SnapToTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetNozzleTargetHeading(const struct FVector& TargetHeading, bool SnapToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetNozzleTargetHeading");

	AJetpack_BASE_C_SetNozzleTargetHeading_Params params;
	params.TargetHeading = TargetHeading;
	params.SnapToTarget = SnapToTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackDeployed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Deployed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Mirrored                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetJetpackDeployed(bool Deployed, bool Mirrored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackDeployed");

	AJetpack_BASE_C_SetJetpackDeployed_Params params;
	params.Deployed = Deployed;
	params.Mirrored = Mirrored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackOrientation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mirrored                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::SetJetpackOrientation(bool Mirrored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.SetJetpackOrientation");

	AJetpack_BASE_C_SetJetpackOrientation_Params params;
	params.Mirrored = Mirrored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.UserConstructionScript");

	AJetpack_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__FinishedFunc
// (BlueprintEvent)

void AJetpack_BASE_C::LowFuelLightBlinkLoop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__FinishedFunc");

	AJetpack_BASE_C_LowFuelLightBlinkLoop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__UpdateFunc
// (BlueprintEvent)

void AJetpack_BASE_C::LowFuelLightBlinkLoop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__UpdateFunc");

	AJetpack_BASE_C_LowFuelLightBlinkLoop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__DisableLight__EventFunc
// (BlueprintEvent)

void AJetpack_BASE_C::LowFuelLightBlinkLoop__DisableLight__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__DisableLight__EventFunc");

	AJetpack_BASE_C_LowFuelLightBlinkLoop__DisableLight__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__EnableLight__EventFunc
// (BlueprintEvent)

void AJetpack_BASE_C::LowFuelLightBlinkLoop__EnableLight__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.LowFuelLightBlinkLoop__EnableLight__EventFunc");

	AJetpack_BASE_C_LowFuelLightBlinkLoop__EnableLight__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AJetpack_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.ReceiveBeginPlay");

	AJetpack_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.StartLowFuelLightLoop
// (BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::StartLowFuelLightLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.StartLowFuelLightLoop");

	AJetpack_BASE_C_StartLowFuelLightLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.StopLowFuelLightLoop
// (BlueprintCallable, BlueprintEvent)

void AJetpack_BASE_C::StopLowFuelLightLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.StopLowFuelLightLoop");

	AJetpack_BASE_C_StopLowFuelLightLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackActived
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::OnJetpackActived(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackActived");

	AJetpack_BASE_C_OnJetpackActived_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnAttemptedActivationNoFuel
// (Event, Public, BlueprintEvent)

void AJetpack_BASE_C::OnAttemptedActivationNoFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnAttemptedActivationNoFuel");

	AJetpack_BASE_C_OnAttemptedActivationNoFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnUpdateNozzleDirection
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                 NewNozzleDirection             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AJetpack_BASE_C::OnUpdateNozzleDirection(const struct FVector& NewNozzleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnUpdateNozzleDirection");

	AJetpack_BASE_C_OnUpdateNozzleDirection_Params params;
	params.NewNozzleDirection = NewNozzleDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackDeployed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                 NeutralPosition                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bMirrored                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::OnJetpackDeployed(const struct FVector& NeutralPosition, bool bMirrored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackDeployed");

	AJetpack_BASE_C_OnJetpackDeployed_Params params;
	params.NeutralPosition = NeutralPosition;
	params.bMirrored = bMirrored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackStowed
// (Event, Public, BlueprintEvent)

void AJetpack_BASE_C::OnJetpackStowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnJetpackStowed");

	AJetpack_BASE_C_OnJetpackStowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.OnFuelIsLow
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsLow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::OnFuelIsLow(bool bIsLow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.OnFuelIsLow");

	AJetpack_BASE_C_OnFuelIsLow_Params params;
	params.bIsLow = bIsLow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AJetpack_BASE_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.PickedUpFromWorld");

	AJetpack_BASE_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AJetpack_BASE_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.DroppedInWorld");

	AJetpack_BASE_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jetpack_BASE.Jetpack_BASE_C.ReceiveHit
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

void AJetpack_BASE_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.ReceiveHit");

	AJetpack_BASE_C_ReceiveHit_Params params;
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


// Function Jetpack_BASE.Jetpack_BASE_C.ExecuteUbergraph_Jetpack_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJetpack_BASE_C::ExecuteUbergraph_Jetpack_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jetpack_BASE.Jetpack_BASE_C.ExecuteUbergraph_Jetpack_BASE");

	AJetpack_BASE_C_ExecuteUbergraph_Jetpack_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
