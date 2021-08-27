
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

// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DestroyOxygenatorIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::DestroyOxygenatorIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DestroyOxygenatorIndicator");

	AShuttle_T2_ThrusterSlot_C_DestroyOxygenatorIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CreateOxygenatorIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::CreateOxygenatorIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CreateOxygenatorIndicator");

	AShuttle_T2_ThrusterSlot_C_CreateOxygenatorIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupJets
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::SetupJets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupJets");

	AShuttle_T2_ThrusterSlot_C_SetupJets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_InvisibleSeatRef
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::OnRep_REP_InvisibleSeatRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_InvisibleSeatRef");

	AShuttle_T2_ThrusterSlot_C_OnRep_REP_InvisibleSeatRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetShuttleAnimationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::SetShuttleAnimationState(bool Occupied, bool Launched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetShuttleAnimationState");

	AShuttle_T2_ThrusterSlot_C_SetShuttleAnimationState_Params params;
	params.Occupied = Occupied;
	params.Launched = Launched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupBlueprintAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::SetupBlueprintAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupBlueprintAnimation");

	AShuttle_T2_ThrusterSlot_C_SetupBlueprintAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterParticlesActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::UpdateThrusterParticlesActive(class AThruster_BASE_C* Thruster, bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterParticlesActive");

	AShuttle_T2_ThrusterSlot_C_UpdateThrusterParticlesActive_Params params;
	params.Thruster = Thruster;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterRef
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::OnRep_REP_ThrusterRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterRef");

	AShuttle_T2_ThrusterSlot_C_OnRep_REP_ThrusterRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterActive
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::OnRep_REP_ThrusterActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnRep_REP_ThrusterActive");

	AShuttle_T2_ThrusterSlot_C_OnRep_REP_ThrusterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterActive
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::UpdateThrusterActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateThrusterActive");

	AShuttle_T2_ThrusterSlot_C_UpdateThrusterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThruster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::SetupThruster(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThruster");

	AShuttle_T2_ThrusterSlot_C_SetupThruster_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetTotalAvailableFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TotalFuel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::GetTotalAvailableFuel(float* TotalFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetTotalAvailableFuel");

	AShuttle_T2_ThrusterSlot_C_GetTotalAvailableFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalFuel != nullptr)
		*TotalFuel = params.TotalFuel;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ConsumeThrusterFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TakeAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShuttle_T2_ThrusterSlot_C::ConsumeThrusterFuel(int TakeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ConsumeThrusterFuel");

	AShuttle_T2_ThrusterSlot_C_ConsumeThrusterFuel_Params params;
	params.TakeAmount = TakeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleItemRemovedFromThrusterSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::HandleItemRemovedFromThrusterSlot(class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleItemRemovedFromThrusterSlot");

	AShuttle_T2_ThrusterSlot_C_HandleItemRemovedFromThrusterSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThrusterParticles
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::SetupThrusterParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SetupThrusterParticles");

	AShuttle_T2_ThrusterSlot_C_SetupThrusterParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SERVER Create Default Equipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::SERVER_Create_Default_Equipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.SERVER Create Default Equipment");

	AShuttle_T2_ThrusterSlot_C_SERVER_Create_Default_Equipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::ExecuteLaunchSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequence");

	AShuttle_T2_ThrusterSlot_C_ExecuteLaunchSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdatePilotSeatTooltipOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::UpdatePilotSeatTooltipOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdatePilotSeatTooltipOverride");

	AShuttle_T2_ThrusterSlot_C_UpdatePilotSeatTooltipOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleLaunchRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::HandleLaunchRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleLaunchRequest");

	AShuttle_T2_ThrusterSlot_C_HandleLaunchRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::Do_Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch");

	AShuttle_T2_ThrusterSlot_C_Do_Launch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch End
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::Do_Launch_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Do Launch End");

	AShuttle_T2_ThrusterSlot_C_Do_Launch_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Update Save Game Permitted
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::Update_Save_Game_Permitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Update Save Game Permitted");

	AShuttle_T2_ThrusterSlot_C_Update_Save_Game_Permitted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExpendFuel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ExpendFuel(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExpendFuel");

	AShuttle_T2_ThrusterSlot_C_ExpendFuel_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AShuttle_T2_ThrusterSlot_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.GetBodySlotLegacy");

	AShuttle_T2_ThrusterSlot_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Launch View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::Launch_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Launch View");

	AShuttle_T2_ThrusterSlot_C_Launch_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Set Bars
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::CLIENT_Set_Bars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Set Bars");

	AShuttle_T2_ThrusterSlot_C_CLIENT_Set_Bars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Can Launch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FAstroNotificationTagAuthoringData ErrorNotification              (Parm, OutParm)

void AShuttle_T2_ThrusterSlot_C::Can_Launch(bool* Can, struct FAstroNotificationTagAuthoringData* ErrorNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Can Launch");

	AShuttle_T2_ThrusterSlot_C_Can_Launch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (ErrorNotification != nullptr)
		*ErrorNotification = params.ErrorNotification;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Launch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroNotificationTagAuthoringData ErrorNotification              (BlueprintVisible, BlueprintReadOnly, Parm)

void AShuttle_T2_ThrusterSlot_C::CLIENT_Launch(bool Launched, const struct FAstroNotificationTagAuthoringData& ErrorNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CLIENT Launch");

	AShuttle_T2_ThrusterSlot_C_CLIENT_Launch_Params params;
	params.Launched = Launched;
	params.ErrorNotification = ErrorNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UserConstructionScript");

	AShuttle_T2_ThrusterSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AShuttle_T2_ThrusterSlot_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AShuttle_T2_ThrusterSlot_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveBeginPlay");

	AShuttle_T2_ThrusterSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunchEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::OnLaunchEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunchEnd_Event_1");

	AShuttle_T2_ThrusterSlot_C_OnLaunchEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             ClickQuery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature");

	AShuttle_T2_ThrusterSlot_C_BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature_Params params;
	params.ClickQuery = ClickQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.MULTI DoLaunch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroNotificationTagAuthoringData ErrorNotification              (BlueprintVisible, BlueprintReadOnly, Parm)

void AShuttle_T2_ThrusterSlot_C::MULTI_DoLaunch(bool Launched, const struct FAstroNotificationTagAuthoringData& ErrorNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.MULTI DoLaunch");

	AShuttle_T2_ThrusterSlot_C_MULTI_DoLaunch_Params params;
	params.Launched = Launched;
	params.ErrorNotification = ErrorNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Game
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::Save_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Game");

	AShuttle_T2_ThrusterSlot_C_Save_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateCanLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Orbiting                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::UpdateCanLaunch(bool Can, bool Orbiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.UpdateCanLaunch");

	AShuttle_T2_ThrusterSlot_C_UpdateCanLaunch_Params params;
	params.Can = Can;
	params.Orbiting = Orbiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunch_Event_1
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::OnLaunch_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnLaunch_Event_1");

	AShuttle_T2_ThrusterSlot_C_OnLaunch_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveTick");

	AShuttle_T2_ThrusterSlot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature");

	AShuttle_T2_ThrusterSlot_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveGameOperationResult       saveOperationResult            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::Save_Completed(ESaveGameOperationResult saveOperationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.Save Completed");

	AShuttle_T2_ThrusterSlot_C_Save_Completed_Params params;
	params.saveOperationResult = saveOperationResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleLostPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleLostPilotInSeat");

	AShuttle_T2_ThrusterSlot_C_VehicleLostPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleGainedPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.VehicleGainedPilotInSeat");

	AShuttle_T2_ThrusterSlot_C_VehicleGainedPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_2");

	AShuttle_T2_ThrusterSlot_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  OriginatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::CustomEvent_3(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CustomEvent_3");

	AShuttle_T2_ThrusterSlot_C_CustomEvent_3_Params params;
	params.OriginatingController = OriginatingController;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequenceServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::ExecuteLaunchSequenceServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteLaunchSequenceServer");

	AShuttle_T2_ThrusterSlot_C_ExecuteLaunchSequenceServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnThrusterAttached(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterAttached");

	AShuttle_T2_ThrusterSlot_C_OnThrusterAttached_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ThrusterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterDestroyed");

	AShuttle_T2_ThrusterSlot_C_ThrusterDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ThrusterRemoved(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ThrusterRemoved");

	AShuttle_T2_ThrusterSlot_C_ThrusterRemoved_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterDrained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnThrusterDrained(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterDrained");

	AShuttle_T2_ThrusterSlot_C_OnThrusterDrained_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterRestored
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnThrusterRestored(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnThrusterRestored");

	AShuttle_T2_ThrusterSlot_C_OnThrusterRestored_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnShuttleEnterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnShuttleEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnShuttleEnterExit");

	AShuttle_T2_ThrusterSlot_C_OnShuttleEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveEndPlay");

	AShuttle_T2_ThrusterSlot_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnOxygenatorSlotItemSet(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemSet");

	AShuttle_T2_ThrusterSlot_C_OnOxygenatorSlotItemSet_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::OnOxygenatorSlotItemReleased(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.OnOxygenatorSlotItemReleased");

	AShuttle_T2_ThrusterSlot_C_OnOxygenatorSlotItemReleased_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.DroppedInWorld");

	AShuttle_T2_ThrusterSlot_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.PickedUpFromWorld");

	AShuttle_T2_ThrusterSlot_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveHit
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

void AShuttle_T2_ThrusterSlot_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ReceiveHit");

	AShuttle_T2_ThrusterSlot_C_ReceiveHit_Params params;
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


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature");

	AShuttle_T2_ThrusterSlot_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleVehicleUnmanned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  VehicleDriver                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::HandleVehicleUnmanned(class AAstroPlayerController* VehicleDriver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleVehicleUnmanned");

	AShuttle_T2_ThrusterSlot_C_HandleVehicleUnmanned_Params params;
	params.VehicleDriver = VehicleDriver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::HandleDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.HandleDestroyed");

	AShuttle_T2_ThrusterSlot_C_HandleDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CheckIfShuttleIsAbandonedInSpace
// (BlueprintCallable, BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::CheckIfShuttleIsAbandonedInSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.CheckIfShuttleIsAbandonedInSpace");

	AShuttle_T2_ThrusterSlot_C_CheckIfShuttleIsAbandonedInSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AShuttle_T2_ThrusterSlot_C::BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AShuttle_T2_ThrusterSlot_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteUbergraph_Shuttle_T2_ThrusterSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T2_ThrusterSlot_C::ExecuteUbergraph_Shuttle_T2_ThrusterSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T2_ThrusterSlot.Shuttle_T2_ThrusterSlot_C.ExecuteUbergraph_Shuttle_T2_ThrusterSlot");

	AShuttle_T2_ThrusterSlot_C_ExecuteUbergraph_Shuttle_T2_ThrusterSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
