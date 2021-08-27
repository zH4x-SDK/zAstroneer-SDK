
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

// Function Staging_T2.Staging_T2_C.SetupOutroCinematicBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*     SequenceActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStaging_T2_C::SetupOutroCinematicBindings(class ALevelSequenceActor* SequenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.SetupOutroCinematicBindings");

	AStaging_T2_C_SetupOutroCinematicBindings_Params params;
	params.SequenceActor = SequenceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.DisplayWatermark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DisplayWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldDisplay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStaging_T2_C::DisplayWatermark(class UClass* DisplayWidget, bool ShouldDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.DisplayWatermark");

	AStaging_T2_C_DisplayWatermark_Params params;
	params.DisplayWidget = DisplayWidget;
	params.ShouldDisplay = ShouldDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.Raycast Drill Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::Raycast_Drill_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.Raycast Drill Location");

	AStaging_T2_C_Raycast_Drill_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.Set Character Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStaging_T2_C::Set_Character_Start(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.Set Character Start");

	AStaging_T2_C_Set_Character_Start_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.Raycast Rover Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::Raycast_Rover_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.Raycast Rover Location");

	AStaging_T2_C_Raycast_Rover_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.Raycast Shuttle Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::Raycast_Shuttle_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.Raycast Shuttle Location");

	AStaging_T2_C_Raycast_Shuttle_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AStaging_T2_C::InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1");

	AStaging_T2_C_InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStaging_T2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.ReceiveBeginPlay");

	AStaging_T2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.OnPlayerJoin_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStaging_T2_C::OnPlayerJoin_Event_1(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.OnPlayerJoin_Event_1");

	AStaging_T2_C_OnPlayerJoin_Event_1_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.IntroMaster_ResetPlanets
// (BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::IntroMaster_ResetPlanets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.IntroMaster_ResetPlanets");

	AStaging_T2_C_IntroMaster_ResetPlanets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.PlayGateMovie
// (BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::PlayGateMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.PlayGateMovie");

	AStaging_T2_C_PlayGateMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.PlayAnomolyMovie
// (BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::PlayAnomolyMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.PlayAnomolyMovie");

	AStaging_T2_C_PlayAnomolyMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.PlayComputerMovie
// (BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::PlayComputerMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.PlayComputerMovie");

	AStaging_T2_C_PlayComputerMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.Tutorial_PlaySFX
// (BlueprintCallable, BlueprintEvent)

void AStaging_T2_C::Tutorial_PlaySFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.Tutorial_PlaySFX");

	AStaging_T2_C_Tutorial_PlaySFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Staging_T2.Staging_T2_C.ExecuteUbergraph_Staging_T2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStaging_T2_C::ExecuteUbergraph_Staging_T2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Staging_T2.Staging_T2_C.ExecuteUbergraph_Staging_T2");

	AStaging_T2_C_ExecuteUbergraph_Staging_T2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
