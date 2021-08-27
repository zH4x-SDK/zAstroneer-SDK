
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

// Function MineralExtractor.MineralExtractor_C.GetConversionProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::GetConversionProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.GetConversionProgress");

	AMineralExtractor_C_GetConversionProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function MineralExtractor.MineralExtractor_C.GetEffectiveOutputCountForCurrentConversion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::GetEffectiveOutputCountForCurrentConversion(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.GetEffectiveOutputCountForCurrentConversion");

	AMineralExtractor_C_GetEffectiveOutputCountForCurrentConversion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function MineralExtractor.MineralExtractor_C.GetMaxOutputCountForCurrentConversion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::GetMaxOutputCountForCurrentConversion(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.GetMaxOutputCountForCurrentConversion");

	AMineralExtractor_C_GetMaxOutputCountForCurrentConversion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function MineralExtractor.MineralExtractor_C.SERVER Try Pull Cannister To Input
// (Public, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::SERVER_Try_Pull_Cannister_To_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SERVER Try Pull Cannister To Input");

	AMineralExtractor_C_SERVER_Try_Pull_Cannister_To_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.CLIENT Enable Input Indicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::CLIENT_Enable_Input_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.CLIENT Enable Input Indicator");

	AMineralExtractor_C_CLIENT_Enable_Input_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.CheckIfNeedsTick
// (Public, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::CheckIfNeedsTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.CheckIfNeedsTick");

	AMineralExtractor_C_CheckIfNeedsTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.UpdateModuleActiveAnimState
// (Public, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::UpdateModuleActiveAnimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UpdateModuleActiveAnimState");

	AMineralExtractor_C_UpdateModuleActiveAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.TryFillNextCan
// (Public, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::TryFillNextCan()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.TryFillNextCan");

	AMineralExtractor_C_TryFillNextCan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.UpdateSpinAnimationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpinRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::UpdateSpinAnimationSpeed(float SpinRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UpdateSpinAnimationSpeed");

	AMineralExtractor_C_UpdateSpinAnimationSpeed_Params params;
	params.SpinRate = SpinRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.DestroyPartialOutputs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::DestroyPartialOutputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.DestroyPartialOutputs");

	AMineralExtractor_C_DestroyPartialOutputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.UpdateControlPanelDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMineralExtractorControlPanelPrimary_C* DisplayWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::UpdateControlPanelDisplay(class UMineralExtractorControlPanelPrimary_C* DisplayWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UpdateControlPanelDisplay");

	AMineralExtractor_C_UpdateControlPanelDisplay_Params params;
	params.DisplayWidget = DisplayWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.TryTakeOutputResourceToStorage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          outputSlot                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AMineralExtractor_C::TryTakeOutputResourceToStorage(const struct FSlotReference& outputSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.TryTakeOutputResourceToStorage");

	AMineralExtractor_C_TryTakeOutputResourceToStorage_Params params;
	params.outputSlot = outputSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.UpdateSpeedBasedSpinnerRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::UpdateSpeedBasedSpinnerRotation(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UpdateSpeedBasedSpinnerRotation");

	AMineralExtractor_C_UpdateSpeedBasedSpinnerRotation_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.InitializeGaugeMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::InitializeGaugeMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.InitializeGaugeMaterials");

	AMineralExtractor_C_InitializeGaugeMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.HandleRemovedOutputResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::HandleRemovedOutputResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.HandleRemovedOutputResource");

	AMineralExtractor_C_HandleRemovedOutputResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.UpdateTankView
// (Protected, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::UpdateTankView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UpdateTankView");

	AMineralExtractor_C_UpdateTankView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.SERVER TakeSediment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::SERVER_TakeSediment(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SERVER TakeSediment");

	AMineralExtractor_C_SERVER_TakeSediment_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AMineralExtractor_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.GetBodySlotLegacy");

	AMineralExtractor_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MineralExtractor.MineralExtractor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.UserConstructionScript");

	AMineralExtractor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__FinishedFunc
// (BlueprintEvent)

void AMineralExtractor_C::RotateSpinnerAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__FinishedFunc");

	AMineralExtractor_C_RotateSpinnerAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__UpdateFunc
// (BlueprintEvent)

void AMineralExtractor_C::RotateSpinnerAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__UpdateFunc");

	AMineralExtractor_C_RotateSpinnerAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.FIllCanAnim__FinishedFunc
// (BlueprintEvent)

void AMineralExtractor_C::FIllCanAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.FIllCanAnim__FinishedFunc");

	AMineralExtractor_C_FIllCanAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.FIllCanAnim__UpdateFunc
// (BlueprintEvent)

void AMineralExtractor_C::FIllCanAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.FIllCanAnim__UpdateFunc");

	AMineralExtractor_C_FIllCanAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__FinishedFunc
// (BlueprintEvent)

void AMineralExtractor_C::ProduceResourcesAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__FinishedFunc");

	AMineralExtractor_C_ProduceResourcesAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__UpdateFunc
// (BlueprintEvent)

void AMineralExtractor_C::ProduceResourcesAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__UpdateFunc");

	AMineralExtractor_C_ProduceResourcesAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__FinishedFunc
// (BlueprintEvent)

void AMineralExtractor_C::SpinnerStartAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__FinishedFunc");

	AMineralExtractor_C_SpinnerStartAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__UpdateFunc
// (BlueprintEvent)

void AMineralExtractor_C::SpinnerStartAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__UpdateFunc");

	AMineralExtractor_C_SpinnerStartAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__FinishedFunc
// (BlueprintEvent)

void AMineralExtractor_C::SpinnerStopAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__FinishedFunc");

	AMineralExtractor_C_SpinnerStopAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__UpdateFunc
// (BlueprintEvent)

void AMineralExtractor_C::SpinnerStopAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__UpdateFunc");

	AMineralExtractor_C_SpinnerStopAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ReceiveTick");

	AMineralExtractor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMineralExtractor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ReceiveBeginPlay");

	AMineralExtractor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnReleaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnReleaseItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnReleaseItem");

	AMineralExtractor_C_OnReleaseItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.IncrementSelection
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::IncrementSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.IncrementSelection");

	AMineralExtractor_C_IncrementSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.DecrementSelection
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::DecrementSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.DecrementSelection");

	AMineralExtractor_C_DecrementSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ActivateSelection
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::ActivateSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ActivateSelection");

	AMineralExtractor_C_ActivateSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.RotateSpinnerToAngle
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::RotateSpinnerToAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.RotateSpinnerToAngle");

	AMineralExtractor_C_RotateSpinnerToAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.FillCan
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::FillCan()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.FillCan");

	AMineralExtractor_C_FillCan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AMineralExtractor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ReceiveDestroyed");

	AMineralExtractor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ReceiveEndPlay");

	AMineralExtractor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnControlPanelReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnControlPanelReady(class AControlPanel* ControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnControlPanelReady");

	AMineralExtractor_C_OnControlPanelReady_Params params;
	params.ControlPanel = ControlPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnUpdateControlPanelScreenInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ScreenWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnUpdateControlPanelScreenInfo(class UUserWidget* ScreenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnUpdateControlPanelScreenInfo");

	AMineralExtractor_C_OnUpdateControlPanelScreenInfo_Params params;
	params.ScreenWidget = ScreenWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.StartSpinner
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::StartSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.StartSpinner");

	AMineralExtractor_C_StartSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.StopSpinner
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::StopSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.StopSpinner");

	AMineralExtractor_C_StopSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.LoopSpinner
// (BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::LoopSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.LoopSpinner");

	AMineralExtractor_C_LoopSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMineralExtractor_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.DroppedInWorld");

	AMineralExtractor_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AMineralExtractor_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.PickedUpFromWorld");

	AMineralExtractor_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ReceiveHit
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

void AMineralExtractor_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ReceiveHit");

	AMineralExtractor_C_ReceiveHit_Params params;
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


// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EItemConverterState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            prevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature");

	AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature_Params params;
	params.NewState = NewState;
	params.prevState = prevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AMineralExtractor_C::BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FActiveItemConversionProgress> newActiveConversions           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMineralExtractor_C::BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature");

	AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params params;
	params.newActiveConversions = newActiveConversions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FActiveItemConversionProgress> newActiveConversions           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMineralExtractor_C::BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature");

	AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params params;
	params.newActiveConversions = newActiveConversions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AMineralExtractor_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AMineralExtractor_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnInputSetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnInputSetItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnInputSetItem");

	AMineralExtractor_C_OnInputSetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ControlPanelCrackedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCracked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::ControlPanelCrackedChanged(class AControlPanel* ControlPanel, bool IsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ControlPanelCrackedChanged");

	AMineralExtractor_C_ControlPanelCrackedChanged_Params params;
	params.ControlPanel = ControlPanel;
	params.IsCracked = IsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnSetItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnSetItem");

	AMineralExtractor_C_OnSetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.InitializeConversion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMineralExtractor_C::InitializeConversion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.InitializeConversion");

	AMineralExtractor_C_InitializeConversion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AMineralExtractor_C::BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.HandleStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemConverterState            New_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::HandleStateChanged(EItemConverterState New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.HandleStateChanged");

	AMineralExtractor_C_HandleStateChanged_Params params;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.OnInputReleaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::OnInputReleaseItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.OnInputReleaseItem");

	AMineralExtractor_C_OnInputReleaseItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MineralExtractor.MineralExtractor_C.ExecuteUbergraph_MineralExtractor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMineralExtractor_C::ExecuteUbergraph_MineralExtractor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MineralExtractor.MineralExtractor_C.ExecuteUbergraph_MineralExtractor");

	AMineralExtractor_C_ExecuteUbergraph_MineralExtractor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
