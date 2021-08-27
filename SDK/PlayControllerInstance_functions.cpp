
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

// Function PlayControllerInstance.PlayControllerInstance_C.ToggleCreativeModeDeformMenu
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayControllerInstance_C::ToggleCreativeModeDeformMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.ToggleCreativeModeDeformMenu");

	APlayControllerInstance_C_ToggleCreativeModeDeformMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayControllerInstance.PlayControllerInstance_C.IsCreativeModeDeformMenuActive
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayControllerInstance_C::IsCreativeModeDeformMenuActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.IsCreativeModeDeformMenuActive");

	APlayControllerInstance_C_IsCreativeModeDeformMenuActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayControllerInstance.PlayControllerInstance_C.GetTerrainTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASmallDeform_C*          SmallDeform                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::GetTerrainTool(class ASmallDeform_C** SmallDeform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.GetTerrainTool");

	APlayControllerInstance_C_GetTerrainTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SmallDeform != nullptr)
		*SmallDeform = params.SmallDeform;
}


// Function PlayControllerInstance.PlayControllerInstance_C.SetCreativeMenuEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::SetCreativeMenuEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.SetCreativeMenuEnabled");

	APlayControllerInstance_C_SetCreativeMenuEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.FadeInFadeScreen
// (Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::FadeInFadeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.FadeInFadeScreen");

	APlayControllerInstance_C_FadeInFadeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.DestroyFadeScreen
// (Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::DestroyFadeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.DestroyFadeScreen");

	APlayControllerInstance_C_DestroyFadeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.CreateFadeScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::CreateFadeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.CreateFadeScreen");

	APlayControllerInstance_C_CreateFadeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.OnHideHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::OnHideHelpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.OnHideHelpMenu");

	APlayControllerInstance_C_OnHideHelpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.DoDropshipSpawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         DropTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              StartTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           RelaunchOnExit                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowPlanetSelection           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADropship_C*             SpawnedDropship                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::DoDropshipSpawn(class USceneComponent* DropTarget, const struct FTransform& StartTransform, bool RelaunchOnExit, bool AllowPlanetSelection, class ADropship_C** SpawnedDropship)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.DoDropshipSpawn");

	APlayControllerInstance_C_DoDropshipSpawn_Params params;
	params.DropTarget = DropTarget;
	params.StartTransform = StartTransform;
	params.RelaunchOnExit = RelaunchOnExit;
	params.AllowPlanetSelection = AllowPlanetSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedDropship != nullptr)
		*SpawnedDropship = params.SpawnedDropship;
}


// Function PlayControllerInstance.PlayControllerInstance_C.CLIENT Sound FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::CLIENT_Sound_FX(const struct FTransform& Transform, class USoundBase* Sound, class UParticleSystem* Particle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.CLIENT Sound FX");

	APlayControllerInstance_C_CLIENT_Sound_FX_Params params;
	params.Transform = Transform;
	params.Sound = Sound;
	params.Particle = Particle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.Set Hardware Cursor
// (Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::Set_Hardware_Cursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.Set Hardware Cursor");

	APlayControllerInstance_C_Set_Hardware_Cursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.Set Cursor 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::Set_Cursor_(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.Set Cursor ");

	APlayControllerInstance_C_Set_Cursor__Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.Set Audio Listener
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::Set_Audio_Listener()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.Set Audio Listener");

	APlayControllerInstance_C_Set_Audio_Listener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.UserConstructionScript");

	APlayControllerInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Comma_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_Comma_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Comma_K2Node_InputKeyEvent_5");

	APlayControllerInstance_C_InpActEvt_Comma_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Period_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_Period_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Period_K2Node_InputKeyEvent_4");

	APlayControllerInstance_C_InpActEvt_Period_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Slash_K2Node_InputKeyEvent_3");

	APlayControllerInstance_C_InpActEvt_Slash_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenu_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_HelpMenu_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenu_K2Node_InputActionEvent_3");

	APlayControllerInstance_C_InpActEvt_HelpMenu_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2");

	APlayControllerInstance_C_InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Shift_F12_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_Shift_F12_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Shift_F12_K2Node_InputKeyEvent_2");

	APlayControllerInstance_C_InpActEvt_Shift_F12_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_TerrainTool_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_TerrainTool_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_TerrainTool_K2Node_InputActionEvent_1");

	APlayControllerInstance_C_InpActEvt_TerrainTool_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayControllerInstance_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_1");

	APlayControllerInstance_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.ReceiveTick");

	APlayControllerInstance_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayControllerInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.ReceiveBeginPlay");

	APlayControllerInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.SERVER Tertiary Use
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStorageChassisComponent* Chassis                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::SERVER_Tertiary_Use(class UStorageChassisComponent* Chassis)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.SERVER Tertiary Use");

	APlayControllerInstance_C_SERVER_Tertiary_Use_Params params;
	params.Chassis = Chassis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.MULTI Sound FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         FX                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::MULTI_Sound_FX(const struct FTransform& Transform, class USoundBase* Sound, class UParticleSystem* FX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.MULTI Sound FX");

	APlayControllerInstance_C_MULTI_Sound_FX_Params params;
	params.Transform = Transform;
	params.Sound = Sound;
	params.FX = FX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.SERVER_SetFreePower
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FreePower                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::SERVER_SetFreePower(bool FreePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.SERVER_SetFreePower");

	APlayControllerInstance_C_SERVER_SetFreePower_Params params;
	params.FreePower = FreePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.SERVER_UnlockAllResearchDebug
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::SERVER_UnlockAllResearchDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.SERVER_UnlockAllResearchDebug");

	APlayControllerInstance_C_SERVER_UnlockAllResearchDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::PlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.PlayerDied");

	APlayControllerInstance_C_PlayerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::PlayerRespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.PlayerRespawned");

	APlayControllerInstance_C_PlayerRespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::CustomEvent_1(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.CustomEvent_1");

	APlayControllerInstance_C_CustomEvent_1_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.OnDeformToolEquippedStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::OnDeformToolEquippedStateChanged_Event_1(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.OnDeformToolEquippedStateChanged_Event_1");

	APlayControllerInstance_C_OnDeformToolEquippedStateChanged_Event_1_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.HandleDeformToolMenuCloseRequested
// (BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::HandleDeformToolMenuCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.HandleDeformToolMenuCloseRequested");

	APlayControllerInstance_C_HandleDeformToolMenuCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.HandleGameplayStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartedInExistingSavedGame     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::HandleGameplayStarted(bool StartedInExistingSavedGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.HandleGameplayStarted");

	APlayControllerInstance_C_HandleGameplayStarted_Params params;
	params.StartedInExistingSavedGame = StartedInExistingSavedGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.OnAutoLaunchedCreativeTutorialClosed
// (BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::OnAutoLaunchedCreativeTutorialClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.OnAutoLaunchedCreativeTutorialClosed");

	APlayControllerInstance_C_OnAutoLaunchedCreativeTutorialClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.OnCreativeModeEnabledChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::OnCreativeModeEnabledChanged(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.OnCreativeModeEnabledChanged");

	APlayControllerInstance_C_OnCreativeModeEnabledChanged_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.AutoShowCreativeModeTutorial
// (BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::AutoShowCreativeModeTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.AutoShowCreativeModeTutorial");

	APlayControllerInstance_C_AutoShowCreativeModeTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.RestoreAudioListener
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayControllerInstance_C::RestoreAudioListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.RestoreAudioListener");

	APlayControllerInstance_C_RestoreAudioListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayControllerInstance.PlayControllerInstance_C.ExecuteUbergraph_PlayControllerInstance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayControllerInstance_C::ExecuteUbergraph_PlayControllerInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayControllerInstance.PlayControllerInstance_C.ExecuteUbergraph_PlayControllerInstance");

	APlayControllerInstance_C_ExecuteUbergraph_PlayControllerInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
