
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

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnGameplayStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartedInSavedGame             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::OnGameplayStarted(bool StartedInSavedGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnGameplayStarted");

	AExoSatalliteIntro_C_OnGameplayStarted_Params params;
	params.StartedInSavedGame = StartedInSavedGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.StartNewGame
// (Public, BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::StartNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.StartNewGame");

	AExoSatalliteIntro_C_StartNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetTitleMenuCustomizationState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETitleMenuCustomizationPreviewState NewCustomizationState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::SetTitleMenuCustomizationState(ETitleMenuCustomizationPreviewState NewCustomizationState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetTitleMenuCustomizationState");

	AExoSatalliteIntro_C_SetTitleMenuCustomizationState_Params params;
	params.NewCustomizationState = NewCustomizationState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetLandingLocations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALanding_Locations_C*    LandingLocations               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::SetLandingLocations(class ALanding_Locations_C* LandingLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetLandingLocations");

	AExoSatalliteIntro_C_SetLandingLocations_Params params;
	params.LandingLocations = LandingLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.PrepareStartingLocation
// (Public, BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::PrepareStartingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.PrepareStartingLocation");

	AExoSatalliteIntro_C_PrepareStartingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetupStartingLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALanding_Locations_C*    Starting_Location              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::SetupStartingLocation(class ALanding_Locations_C* Starting_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetupStartingLocation");

	AExoSatalliteIntro_C_SetupStartingLocation_Params params;
	params.Starting_Location = Starting_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.GetClientInitialSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         LocationComponent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::GetClientInitialSpawnLocation(class APlayController* Controller, class USceneComponent** LocationComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.GetClientInitialSpawnLocation");

	AExoSatalliteIntro_C_GetClientInitialSpawnLocation_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationComponent != nullptr)
		*LocationComponent = params.LocationComponent;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::OnClientLaunch(class APlayController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientLaunch");

	AExoSatalliteIntro_C_OnClientLaunch_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnLocalPlayerLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::OnLocalPlayerLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnLocalPlayerLaunch");

	AExoSatalliteIntro_C_OnLocalPlayerLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.PlayTutorialIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::PlayTutorialIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.PlayTutorialIntroCinematic");

	AExoSatalliteIntro_C_PlayTutorialIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.LaunchDropship
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Drop_Target                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RelaunchOnExit                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::LaunchDropship(class APlayController* Controller, class USceneComponent* Drop_Target, bool RelaunchOnExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.LaunchDropship");

	AExoSatalliteIntro_C_LaunchDropship_Params params;
	params.Controller = Controller;
	params.Drop_Target = Drop_Target;
	params.RelaunchOnExit = RelaunchOnExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.UserConstructionScript");

	AExoSatalliteIntro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExoSatalliteIntro_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveBeginPlay");

	AExoSatalliteIntro_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnNewGameSetupComplete
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::OnNewGameSetupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnNewGameSetupComplete");

	AExoSatalliteIntro_C_OnNewGameSetupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialIntroCinematicComplete
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::OnTutorialIntroCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialIntroCinematicComplete");

	AExoSatalliteIntro_C_OnTutorialIntroCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialStart
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::OnTutorialStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialStart");

	AExoSatalliteIntro_C_OnTutorialStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::OnClientSelected(class APlayController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientSelected");

	AExoSatalliteIntro_C_OnClientSelected_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationCanceled
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::HandleTitleScreenCharacterCustomizationCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationCanceled");

	AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationStarted
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::HandleTitleScreenCharacterCustomizationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationStarted");

	AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ApplyTargetMenuCustomizationState
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::ApplyTargetMenuCustomizationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.ApplyTargetMenuCustomizationState");

	AExoSatalliteIntro_C_ApplyTargetMenuCustomizationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.AnimateCharacterPreviewLight
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::AnimateCharacterPreviewLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.AnimateCharacterPreviewLight");

	AExoSatalliteIntro_C_AnimateCharacterPreviewLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationCanceled
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::HandleTitleScreenCharacterCustomizationFinalizationCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationCanceled");

	AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationFinalizationCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationStarted
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::HandleTitleScreenCharacterCustomizationFinalizationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationStarted");

	AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationFinalizationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AExoSatalliteIntro_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveDestroyed");

	AExoSatalliteIntro_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnRealDropshipSpawned
// (BlueprintCallable, BlueprintEvent)

void AExoSatalliteIntro_C::OnRealDropshipSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnRealDropshipSpawned");

	AExoSatalliteIntro_C_OnRealDropshipSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ExecuteUbergraph_ExoSatalliteIntro
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoSatalliteIntro_C::ExecuteUbergraph_ExoSatalliteIntro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSatalliteIntro.ExoSatalliteIntro_C.ExecuteUbergraph_ExoSatalliteIntro");

	AExoSatalliteIntro_C_ExecuteUbergraph_ExoSatalliteIntro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
