
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

// Function SmallDeform.SmallDeform_C.StopTerrainStreamingEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::StopTerrainStreamingEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.StopTerrainStreamingEffect");

	ASmallDeform_C_StopTerrainStreamingEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.StartTerrainStreamingEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::StartTerrainStreamingEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.StartTerrainStreamingEffect");

	ASmallDeform_C_StartTerrainStreamingEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.GetTerrainHardnessSwitchValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TerrainHardness                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TerrainHardnessSwitchValue     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::GetTerrainHardnessSwitchValue(int TerrainHardness, int* TerrainHardnessSwitchValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.GetTerrainHardnessSwitchValue");

	ASmallDeform_C_GetTerrainHardnessSwitchValue_Params params;
	params.TerrainHardness = TerrainHardness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TerrainHardnessSwitchValue != nullptr)
		*TerrainHardnessSwitchValue = params.TerrainHardnessSwitchValue;
}


// Function SmallDeform.SmallDeform_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASmallDeform_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.GetBodySlotLegacy");

	ASmallDeform_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallDeform.SmallDeform_C.Stop Effects
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Stop_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Stop Effects");

	ASmallDeform_C_Stop_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Start Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDeformType                    Op                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::Start_Effects(EDeformType Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Start Effects");

	ASmallDeform_C_Start_Effects_Params params;
	params.Op = Op;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.UpdateDeformEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::UpdateDeformEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.UpdateDeformEffects");

	ASmallDeform_C_UpdateDeformEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.End Audio
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::End_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.End Audio");

	ASmallDeform_C_End_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Apply Power
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Store                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::Apply_Power(int Amount, bool* Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Apply Power");

	ASmallDeform_C_Apply_Power_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Store != nullptr)
		*Store = params.Store;
}


// Function SmallDeform.SmallDeform_C.Apply Oxygen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Store                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::Apply_Oxygen(int Amount, bool* Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Apply Oxygen");

	ASmallDeform_C_Apply_Oxygen_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Store != nullptr)
		*Store = params.Store;
}


// Function SmallDeform.SmallDeform_C.OnRep_Rep Switched On
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::OnRep_Rep_Switched_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.OnRep_Rep Switched On");

	ASmallDeform_C_OnRep_Rep_Switched_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.GetIsActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASmallDeform_C::GetIsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.GetIsActive");

	ASmallDeform_C_GetIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallDeform.SmallDeform_C.GetPercentNuggetMined
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmallDeform_C::GetPercentNuggetMined()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.GetPercentNuggetMined");

	ASmallDeform_C_GetPercentNuggetMined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallDeform.SmallDeform_C.Update Deform Audio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Update_Deform_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Update Deform Audio");

	ASmallDeform_C_Update_Deform_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.StartAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDeformType                    Op                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::StartAudio(EDeformType Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.StartAudio");

	ASmallDeform_C_StartAudio_Params params;
	params.Op = Op;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Update Operation View
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Update_Operation_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Update Operation View");

	ASmallDeform_C_Update_Operation_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.TakeTerrainResource
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ASmallDeform_C::TakeTerrainResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.TakeTerrainResource");

	ASmallDeform_C_TakeTerrainResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallDeform.SmallDeform_C.Set Power Indicator
// (Public, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Set_Power_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Set Power Indicator");

	ASmallDeform_C_Set_Power_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.UserConstructionScript");

	ASmallDeform_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.InpActEvt_Add_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmallDeform_C::InpActEvt_Add_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.InpActEvt_Add_K2Node_InputKeyEvent_4");

	ASmallDeform_C_InpActEvt_Add_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.InpActEvt_Subtract_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmallDeform_C::InpActEvt_Subtract_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.InpActEvt_Subtract_K2Node_InputKeyEvent_3");

	ASmallDeform_C_InpActEvt_Subtract_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.InpActEvt_Nine_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmallDeform_C::InpActEvt_Nine_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.InpActEvt_Nine_K2Node_InputKeyEvent_2");

	ASmallDeform_C_InpActEvt_Nine_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.InpActEvt_Zero_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmallDeform_C::InpActEvt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.InpActEvt_Zero_K2Node_InputKeyEvent_1");

	ASmallDeform_C_InpActEvt_Zero_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASmallDeform_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.ReceiveBeginPlay");

	ASmallDeform_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.CLIENT Ping Symbol
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BackpackAddSucceeded           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::CLIENT_Ping_Symbol(class UClass* ItemType, bool BackpackAddSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.CLIENT Ping Symbol");

	ASmallDeform_C_CLIENT_Ping_Symbol_Params params;
	params.ItemType = ItemType;
	params.BackpackAddSucceeded = BackpackAddSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.OnInteraction
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FClickResult            Click                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASmallDeform_C::OnInteraction(const struct FClickResult& Click)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.OnInteraction");

	ASmallDeform_C_OnInteraction_Params params;
	params.Click = Click;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Bind Audio
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Bind_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Bind Audio");

	ASmallDeform_C_Bind_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Using Start
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Using_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Using Start");

	ASmallDeform_C_Using_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Using End
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Using_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Using End");

	ASmallDeform_C_Using_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Mined Timer
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Mined_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Mined Timer");

	ASmallDeform_C_Mined_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Control Activate
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Control_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Control Activate");

	ASmallDeform_C_Control_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.Control Deactivate
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::Control_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.Control Deactivate");

	ASmallDeform_C_Control_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.SERVER Start FX
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDeformType                    Op                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::SERVER_Start_FX(EDeformType Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.SERVER Start FX");

	ASmallDeform_C_SERVER_Start_FX_Params params;
	params.Op = Op;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.MULTI Start FX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDeformType                    Op                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::MULTI_Start_FX(EDeformType Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.MULTI Start FX");

	ASmallDeform_C_MULTI_Start_FX_Params params;
	params.Op = Op;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.SERVER End FX
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::SERVER_End_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.SERVER End FX");

	ASmallDeform_C_SERVER_End_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.MULTI End FX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::MULTI_End_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.MULTI End FX");

	ASmallDeform_C_MULTI_End_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature(class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature");

	ASmallDeform_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature(class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature");

	ASmallDeform_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature");

	ASmallDeform_C_BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.HandleCreativeModeEnabledChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::HandleCreativeModeEnabledChanged(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.HandleCreativeModeEnabledChanged");

	ASmallDeform_C_HandleCreativeModeEnabledChanged_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.HandleActiveCreativeTerrainColorChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PickedWithEyedropperTool       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::HandleActiveCreativeTerrainColorChanged(bool PickedWithEyedropperTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.HandleActiveCreativeTerrainColorChanged");

	ASmallDeform_C_HandleActiveCreativeTerrainColorChanged_Params params;
	params.PickedWithEyedropperTool = PickedWithEyedropperTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.UpdateActiveTerrainColor
// (BlueprintCallable, BlueprintEvent)

void ASmallDeform_C::UpdateActiveTerrainColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.UpdateActiveTerrainColor");

	ASmallDeform_C_UpdateActiveTerrainColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.OnAttemptedToPickColor
// (Event, Public, BlueprintEvent)

void ASmallDeform_C::OnAttemptedToPickColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.OnAttemptedToPickColor");

	ASmallDeform_C_OnAttemptedToPickColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.HandleCreativeTerrainLightChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Light_Active                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::HandleCreativeTerrainLightChanged(bool Light_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.HandleCreativeTerrainLightChanged");

	ASmallDeform_C_HandleCreativeTerrainLightChanged_Params params;
	params.Light_Active = Light_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallDeform.SmallDeform_C.ExecuteUbergraph_SmallDeform
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmallDeform_C::ExecuteUbergraph_SmallDeform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallDeform.SmallDeform_C.ExecuteUbergraph_SmallDeform");

	ASmallDeform_C_ExecuteUbergraph_SmallDeform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
