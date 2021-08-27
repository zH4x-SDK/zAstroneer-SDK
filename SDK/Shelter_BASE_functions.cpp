
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

// Function Shelter_BASE.Shelter_BASE_C.ApplyFullPlatform
// (Private, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::ApplyFullPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.ApplyFullPlatform");

	AShelter_BASE_C_ApplyFullPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.UpdatePlatformAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::UpdatePlatformAnimation(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.UpdatePlatformAnimation");

	AShelter_BASE_C_UpdatePlatformAnimation_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CalculatePlatformRadiusStepDelta
// (Private, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CalculatePlatformRadiusStepDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CalculatePlatformRadiusStepDelta");

	AShelter_BASE_C_CalculatePlatformRadiusStepDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlotMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_SetupCableSlotMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlotMaterials");

	AShelter_BASE_C_CHILD_SetupCableSlotMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimUnpackedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPreUnpacked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::CHILD_SetAnimUnpackedState(bool IsPreUnpacked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimUnpackedState");

	AShelter_BASE_C_CHILD_SetAnimUnpackedState_Params params;
	params.IsPreUnpacked = IsPreUnpacked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_GetTetherCircularAttachPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCircularAttachPoint> Array                          (Parm, OutParm, ZeroConstructor)

void AShelter_BASE_C::CHILD_GetTetherCircularAttachPoints(TArray<struct FCircularAttachPoint>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_GetTetherCircularAttachPoints");

	AShelter_BASE_C_CHILD_GetTetherCircularAttachPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Shelter_BASE.Shelter_BASE_C.PopExitTooltip
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::PopExitTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.PopExitTooltip");

	AShelter_BASE_C_PopExitTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.PushExitTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::PushExitTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.PushExitTooltip");

	AShelter_BASE_C_PushExitTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleStartSetupAnimationSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_HandleStartSetupAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleStartSetupAnimationSequence");

	AShelter_BASE_C_CHILD_HandleStartSetupAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleCompleteSetupAnimationSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_HandleCompleteSetupAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_HandleCompleteSetupAnimationSequence");

	AShelter_BASE_C_CHILD_HandleCompleteSetupAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CompleteSetupAnimationSequence
// (Private, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CompleteSetupAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CompleteSetupAnimationSequence");

	AShelter_BASE_C_CompleteSetupAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayPowerSoundLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_PlayPowerSoundLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayPowerSoundLoop");

	AShelter_BASE_C_CHILD_PlayPowerSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayOxygenSoundLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_PlayOxygenSoundLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_PlayOxygenSoundLoop");

	AShelter_BASE_C_CHILD_PlayOxygenSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.StartSetupAnimationSequence
// (Private, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::StartSetupAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.StartSetupAnimationSequence");

	AShelter_BASE_C_StartSetupAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.InitializeUnpacked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPreUnpacked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::InitializeUnpacked(bool IsPreUnpacked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.InitializeUnpacked");

	AShelter_BASE_C_InitializeUnpacked_Params params;
	params.IsPreUnpacked = IsPreUnpacked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupAnimRef
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_SetupAnimRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupAnimRef");

	AShelter_BASE_C_CHILD_SetupAnimRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimDoorOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDoorOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::CHILD_SetAnimDoorOpen(bool IsDoorOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_SetAnimDoorOpen");

	AShelter_BASE_C_CHILD_SetAnimDoorOpen_Params params;
	params.IsDoorOpen = IsDoorOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.SERVER_UpdateUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::SERVER_UpdateUseSuppression(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.SERVER_UpdateUseSuppression");

	AShelter_BASE_C_SERVER_UpdateUseSuppression_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.SERVER_SetPlayerOnDoorstep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerOnDoorstep               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::SERVER_SetPlayerOnDoorstep(bool PlayerOnDoorstep)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.SERVER_SetPlayerOnDoorstep");

	AShelter_BASE_C_SERVER_SetPlayerOnDoorstep_Params params;
	params.PlayerOnDoorstep = PlayerOnDoorstep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.SERVER_SetCanEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanEnter                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::SERVER_SetCanEnter(bool CanEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.SERVER_SetCanEnter");

	AShelter_BASE_C_SERVER_SetCanEnter_Params params;
	params.CanEnter = CanEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.UpdateUseContext");

	AShelter_BASE_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.SetLightsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::SetLightsEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.SetLightsEnabled");

	AShelter_BASE_C_SetLightsEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.ProvideRespawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         RespawnPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::ProvideRespawnPoint(class USceneComponent** RespawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.ProvideRespawnPoint");

	AShelter_BASE_C_ProvideRespawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RespawnPoint != nullptr)
		*RespawnPoint = params.RespawnPoint;
}


// Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::CHILD_SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.CHILD_SetupCableSlots");

	AShelter_BASE_C_CHILD_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.OnRep_REP_DoorOpen
// (BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::OnRep_REP_DoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.OnRep_REP_DoorOpen");

	AShelter_BASE_C_OnRep_REP_DoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AShelter_BASE_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.GetBodySlotLegacy");

	AShelter_BASE_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shelter_BASE.Shelter_BASE_C.SetupSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::SetupSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.SetupSpawnPoint");

	AShelter_BASE_C_SetupSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShelter_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.UserConstructionScript");

	AShelter_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AShelter_BASE_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AShelter_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShelter_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.ReceiveBeginPlay");

	AShelter_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AShelter_BASE_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AShelter_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShelter_BASE_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AShelter_BASE_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	AShelter_BASE_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature");

	AShelter_BASE_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AShelter_BASE_C::BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AShelter_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BASE.Shelter_BASE_C.ExecuteUbergraph_Shelter_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BASE_C::ExecuteUbergraph_Shelter_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BASE.Shelter_BASE_C.ExecuteUbergraph_Shelter_BASE");

	AShelter_BASE_C_ExecuteUbergraph_Shelter_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
