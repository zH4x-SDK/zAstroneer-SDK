
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

// Function Generator_Medium.Generator_Medium_C.LoadSoundBank
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::LoadSoundBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.LoadSoundBank");

	AGenerator_Medium_C_LoadSoundBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.DestroyPartialInputItem
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::DestroyPartialInputItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.DestroyPartialInputItem");

	AGenerator_Medium_C_DestroyPartialInputItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.UpdateUseContext");

	AGenerator_Medium_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.OnRep_REP GeneratorEnabled
// (BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::OnRep_REP_GeneratorEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.OnRep_REP GeneratorEnabled");

	AGenerator_Medium_C_OnRep_REP_GeneratorEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.SetGeneratorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::SetGeneratorEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.SetGeneratorEnabled");

	AGenerator_Medium_C_SetGeneratorEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.TryGetFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::TryGetFuel(bool* HasFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.TryGetFuel");

	AGenerator_Medium_C_TryGetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFuel != nullptr)
		*HasFuel = params.HasFuel;
}


// Function Generator_Medium.Generator_Medium_C.StopGenerating
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::StopGenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.StopGenerating");

	AGenerator_Medium_C_StopGenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.StartGenerating
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::StartGenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.StartGenerating");

	AGenerator_Medium_C_StartGenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.OnRep_REP IsGenerating
// (BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::OnRep_REP_IsGenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.OnRep_REP IsGenerating");

	AGenerator_Medium_C_OnRep_REP_IsGenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.UpdateGeneratingAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::UpdateGeneratingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.UpdateGeneratingAudio");

	AGenerator_Medium_C_UpdateGeneratingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.UpdateFuelIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowFuelIndicator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::UpdateFuelIndicator(bool ShowFuelIndicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.UpdateFuelIndicator");

	AGenerator_Medium_C_UpdateFuelIndicator_Params params;
	params.ShowFuelIndicator = ShowFuelIndicator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.CheckShowFuelIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenerator_Medium_C::CheckShowFuelIndicator(const struct FSlotReference& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.CheckShowFuelIndicator");

	AGenerator_Medium_C_CheckShowFuelIndicator_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.Can Use
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::Can_Use(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.Can Use");

	AGenerator_Medium_C_Can_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function Generator_Medium.Generator_Medium_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AGenerator_Medium_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.GetBodySlotLegacy");

	AGenerator_Medium_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Generator_Medium.Generator_Medium_C.CheckPowered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Powered                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::CheckPowered(bool* Powered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.CheckPowered");

	AGenerator_Medium_C_CheckPowered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Powered != nullptr)
		*Powered = params.Powered;
}


// Function Generator_Medium.Generator_Medium_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.UserConstructionScript");

	AGenerator_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenerator_Medium_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AGenerator_Medium_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReceiveTick");

	AGenerator_Medium_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.On Powered
// (BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::On_Powered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.On Powered");

	AGenerator_Medium_C_On_Powered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.OnUnpowered
// (BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::OnUnpowered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.OnUnpowered");

	AGenerator_Medium_C_OnUnpowered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature");

	AGenerator_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGenerator_Medium_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReceiveBeginPlay");

	AGenerator_Medium_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.PlacedInSlot");

	AGenerator_Medium_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGenerator_Medium_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.DroppedInWorld");

	AGenerator_Medium_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AGenerator_Medium_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.PickedUpFromWorld");

	AGenerator_Medium_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReleasedFromSlot");

	AGenerator_Medium_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReceiveEndPlay");

	AGenerator_Medium_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.PowerButtonToggled
// (BlueprintCallable, BlueprintEvent)

void AGenerator_Medium_C::PowerButtonToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.PowerButtonToggled");

	AGenerator_Medium_C_PowerButtonToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGenerator_Medium_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReceiveDestroyed");

	AGenerator_Medium_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.ReceiveHit
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

void AGenerator_Medium_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ReceiveHit");

	AGenerator_Medium_C_ReceiveHit_Params params;
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


// Function Generator_Medium.Generator_Medium_C.ExecuteUbergraph_Generator_Medium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::ExecuteUbergraph_Generator_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.ExecuteUbergraph_Generator_Medium");

	AGenerator_Medium_C_ExecuteUbergraph_Generator_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.OnGeneratorPoweredChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Powered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::OnGeneratorPoweredChanged__DelegateSignature(bool Powered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.OnGeneratorPoweredChanged__DelegateSignature");

	AGenerator_Medium_C_OnGeneratorPoweredChanged__DelegateSignature_Params params;
	params.Powered = Powered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Generator_Medium.Generator_Medium_C.OnGeneratorEnabledChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenerator_Medium_C::OnGeneratorEnabledChanged__DelegateSignature(bool NewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_Medium.Generator_Medium_C.OnGeneratorEnabledChanged__DelegateSignature");

	AGenerator_Medium_C_OnGeneratorEnabledChanged__DelegateSignature_Params params;
	params.NewEnabled = NewEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
