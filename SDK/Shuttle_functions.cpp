
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

// Function Shuttle.Shuttle_C.ExecuteLaunchSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::ExecuteLaunchSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ExecuteLaunchSequence");

	AShuttle_C_ExecuteLaunchSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.UpdatePilotSeatTooltipOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::UpdatePilotSeatTooltipOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.UpdatePilotSeatTooltipOverride");

	AShuttle_C_UpdatePilotSeatTooltipOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.HandleLaunchRequest
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::HandleLaunchRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.HandleLaunchRequest");

	AShuttle_C_HandleLaunchRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.UpgradeOldFuelTank
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::UpgradeOldFuelTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.UpgradeOldFuelTank");

	AShuttle_C_UpgradeOldFuelTank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Setup Legs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Setup_Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Setup Legs");

	AShuttle_C_Setup_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CLIENT Update Legs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::CLIENT_Update_Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CLIENT Update Legs");

	AShuttle_C_CLIENT_Update_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Do Launch
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Do_Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Do Launch");

	AShuttle_C_Do_Launch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Do Launch End
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Do_Launch_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Do Launch End");

	AShuttle_C_Do_Launch_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Update Save Game Permitted
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Update_Save_Game_Permitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Update Save Game Permitted");

	AShuttle_C_Update_Save_Game_Permitted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Show Indicators
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Show_Indicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Show Indicators");

	AShuttle_C_Show_Indicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ExpendFuel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::ExpendFuel(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ExpendFuel");

	AShuttle_C_ExpendFuel_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AShuttle_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.GetBodySlotLegacy");

	AShuttle_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shuttle.Shuttle_C.Launch View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Launch_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Launch View");

	AShuttle_C_Launch_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CLIENT Set Bars
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::CLIENT_Set_Bars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CLIENT Set Bars");

	AShuttle_C_CLIENT_Set_Bars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.SERVER Create Default Equipment
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::SERVER_Create_Default_Equipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.SERVER Create Default Equipment");

	AShuttle_C_SERVER_Create_Default_Equipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Can Launch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::Can_Launch(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Can Launch");

	AShuttle_C_Can_Launch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function Shuttle.Shuttle_C.Take Fuel
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Take_Fuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Take Fuel");

	AShuttle_C_Take_Fuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CLIENT Launch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::CLIENT_Launch(bool Launched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CLIENT Launch");

	AShuttle_C_CLIENT_Launch_Params params;
	params.Launched = Launched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShuttle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.UserConstructionScript");

	AShuttle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShuttle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ReceiveBeginPlay");

	AShuttle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.OnLaunchEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void AShuttle_C::OnLaunchEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.OnLaunchEnd_Event_1");

	AShuttle_C_OnLaunchEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             ClickQuery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature");

	AShuttle_C_BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature_Params params;
	params.ClickQuery = ClickQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.MULTI DoLaunch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::MULTI_DoLaunch(bool Launched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.MULTI DoLaunch");

	AShuttle_C_MULTI_DoLaunch_Params params;
	params.Launched = Launched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Save Game
// (BlueprintCallable, BlueprintEvent)

void AShuttle_C::Save_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Save Game");

	AShuttle_C_Save_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Orbiting                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::CustomEvent_1(bool Can, bool Orbiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CustomEvent_1");

	AShuttle_C_CustomEvent_1_Params params;
	params.Can = Can;
	params.Orbiting = Orbiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.OnLaunch_Event_1
// (BlueprintCallable, BlueprintEvent)

void AShuttle_C::OnLaunch_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.OnLaunch_Event_1");

	AShuttle_C_OnLaunch_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ReceiveTick");

	AShuttle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature");

	AShuttle_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Save Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveGameOperationResult       saveOperationResult            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::Save_Completed(ESaveGameOperationResult saveOperationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Save Completed");

	AShuttle_C_Save_Completed_Params params;
	params.saveOperationResult = saveOperationResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.VehicleLostPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.VehicleLostPilotInSeat");

	AShuttle_C_VehicleLostPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.VehicleGainedPilotInSeat
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Driver                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeatBase*               Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.VehicleGainedPilotInSeat");

	AShuttle_C_VehicleGainedPilotInSeat_Params params;
	params.Driver = Driver;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void AShuttle_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CustomEvent_2");

	AShuttle_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  OriginatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::CustomEvent_3(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.CustomEvent_3");

	AShuttle_C_CustomEvent_3_Params params;
	params.OriginatingController = OriginatingController;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ExecuteLaunchSequenceServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AShuttle_C::ExecuteLaunchSequenceServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ExecuteLaunchSequenceServer");

	AShuttle_C_ExecuteLaunchSequenceServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.Multi PlayTakeFuelFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AShuttle_C::Multi_PlayTakeFuelFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.Multi PlayTakeFuelFX");

	AShuttle_C_Multi_PlayTakeFuelFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AShuttle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ReceiveDestroyed");

	AShuttle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature");

	AShuttle_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle.Shuttle_C.ExecuteUbergraph_Shuttle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_C::ExecuteUbergraph_Shuttle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle.Shuttle_C.ExecuteUbergraph_Shuttle");

	AShuttle_C_ExecuteUbergraph_Shuttle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
