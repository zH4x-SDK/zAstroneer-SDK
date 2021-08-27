
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

// Function ResourceCombiner.ResourceCombiner_C.HandleConverterStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemConverterState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            prevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::HandleConverterStateChanged(EItemConverterState NewState, EItemConverterState prevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.HandleConverterStateChanged");

	AResourceCombiner_C_HandleConverterStateChanged_Params params;
	params.NewState = NewState;
	params.prevState = prevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.RemoveInvalidOutputItem
// (Public, BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::RemoveInvalidOutputItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.RemoveInvalidOutputItem");

	AResourceCombiner_C_RemoveInvalidOutputItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.SetDrawerOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DrawerOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::SetDrawerOpen(bool DrawerOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.SetDrawerOpen");

	AResourceCombiner_C_SetDrawerOpen_Params params;
	params.DrawerOpen = DrawerOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.SetPumpActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PumpActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::SetPumpActive(bool PumpActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.SetPumpActive");

	AResourceCombiner_C_SetPumpActive_Params params;
	params.PumpActive = PumpActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.UpdateHeatingAnimationSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::UpdateHeatingAnimationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.UpdateHeatingAnimationSpeed");

	AResourceCombiner_C_UpdateHeatingAnimationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.UpdateControlPanelDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCombinerControlPanelPrimary_C* DisplayPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::UpdateControlPanelDisplay(class UCombinerControlPanelPrimary_C* DisplayPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.UpdateControlPanelDisplay");

	AResourceCombiner_C_UpdateControlPanelDisplay_Params params;
	params.DisplayPanel = DisplayPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AResourceCombiner_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.GetBodySlotLegacy");

	AResourceCombiner_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResourceCombiner.ResourceCombiner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.UserConstructionScript");

	AResourceCombiner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__FinishedFunc
// (BlueprintEvent)

void AResourceCombiner_C::RefiningStartAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__FinishedFunc");

	AResourceCombiner_C_RefiningStartAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__UpdateFunc
// (BlueprintEvent)

void AResourceCombiner_C::RefiningStartAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__UpdateFunc");

	AResourceCombiner_C_RefiningStartAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__FinishedFunc
// (BlueprintEvent)

void AResourceCombiner_C::DrawerCloseAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__FinishedFunc");

	AResourceCombiner_C_DrawerCloseAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__UpdateFunc
// (BlueprintEvent)

void AResourceCombiner_C::DrawerCloseAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__UpdateFunc");

	AResourceCombiner_C_DrawerCloseAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__FinishedFunc
// (BlueprintEvent)

void AResourceCombiner_C::RefiningEndAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__FinishedFunc");

	AResourceCombiner_C_RefiningEndAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__UpdateFunc
// (BlueprintEvent)

void AResourceCombiner_C::RefiningEndAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__UpdateFunc");

	AResourceCombiner_C_RefiningEndAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResourceCombiner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.ReceiveBeginPlay");

	AResourceCombiner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.StartProductionAnimation
// (BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::StartProductionAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.StartProductionAnimation");

	AResourceCombiner_C_StartProductionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.PlayHeatUpAnim
// (BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::PlayHeatUpAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.PlayHeatUpAnim");

	AResourceCombiner_C_PlayHeatUpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AResourceCombiner_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.ReceiveDestroyed");

	AResourceCombiner_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.OnActivatedThroughControlPanel
// (BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::OnActivatedThroughControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.OnActivatedThroughControlPanel");

	AResourceCombiner_C_OnActivatedThroughControlPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.CycleLeft
// (BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::CycleLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.CycleLeft");

	AResourceCombiner_C_CycleLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.CycleRight
// (BlueprintCallable, BlueprintEvent)

void AResourceCombiner_C::CycleRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.CycleRight");

	AResourceCombiner_C_CycleRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.SetDisplayInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ScreenWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::SetDisplayInfo(class UUserWidget* ScreenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.SetDisplayInfo");

	AResourceCombiner_C_SetDisplayInfo_Params params;
	params.ScreenWidget = ScreenWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.OnControlPanelReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::OnControlPanelReady(class AControlPanel* ControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.OnControlPanelReady");

	AResourceCombiner_C_OnControlPanelReady_Params params;
	params.ControlPanel = ControlPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EItemConverterState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            prevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature");

	AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature_Params params;
	params.NewState = NewState;
	params.prevState = prevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.StopProductionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OpenDrawerAtEnd                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::StopProductionAnimation(bool OpenDrawerAtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.StopProductionAnimation");

	AResourceCombiner_C_StopProductionAnimation_Params params;
	params.OpenDrawerAtEnd = OpenDrawerAtEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AResourceCombiner_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.OnControlPanelCrackedStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCracked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::OnControlPanelCrackedStateChanged(class AControlPanel* ControlPanel, bool IsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.OnControlPanelCrackedStateChanged");

	AResourceCombiner_C_OnControlPanelCrackedStateChanged_Params params;
	params.ControlPanel = ControlPanel;
	params.IsCracked = IsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          outputItemTypes                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AResourceCombiner_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature(TArray<class UClass*> outputItemTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature");

	AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature_Params params;
	params.outputItemTypes = outputItemTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AResourceCombiner_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.DroppedInWorld");

	AResourceCombiner_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AResourceCombiner_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.PickedUpFromWorld");

	AResourceCombiner_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.ReceiveHit
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

void AResourceCombiner_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.ReceiveHit");

	AResourceCombiner_C_ReceiveHit_Params params;
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


// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AResourceCombiner_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceCombiner.ResourceCombiner_C.ExecuteUbergraph_ResourceCombiner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceCombiner_C::ExecuteUbergraph_ResourceCombiner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceCombiner.ResourceCombiner_C.ExecuteUbergraph_ResourceCombiner");

	AResourceCombiner_C_ExecuteUbergraph_ResourceCombiner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
