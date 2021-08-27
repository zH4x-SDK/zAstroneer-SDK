#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Shuttle.Shuttle_C.ExecuteLaunchSequence
struct AShuttle_C_ExecuteLaunchSequence_Params
{
};

// Function Shuttle.Shuttle_C.UpdatePilotSeatTooltipOverride
struct AShuttle_C_UpdatePilotSeatTooltipOverride_Params
{
};

// Function Shuttle.Shuttle_C.HandleLaunchRequest
struct AShuttle_C_HandleLaunchRequest_Params
{
};

// Function Shuttle.Shuttle_C.UpgradeOldFuelTank
struct AShuttle_C_UpgradeOldFuelTank_Params
{
};

// Function Shuttle.Shuttle_C.Setup Legs
struct AShuttle_C_Setup_Legs_Params
{
};

// Function Shuttle.Shuttle_C.CLIENT Update Legs
struct AShuttle_C_CLIENT_Update_Legs_Params
{
};

// Function Shuttle.Shuttle_C.Do Launch
struct AShuttle_C_Do_Launch_Params
{
};

// Function Shuttle.Shuttle_C.Do Launch End
struct AShuttle_C_Do_Launch_End_Params
{
};

// Function Shuttle.Shuttle_C.Update Save Game Permitted
struct AShuttle_C_Update_Save_Game_Permitted_Params
{
};

// Function Shuttle.Shuttle_C.Show Indicators
struct AShuttle_C_Show_Indicators_Params
{
};

// Function Shuttle.Shuttle_C.ExpendFuel
struct AShuttle_C_ExpendFuel_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.GetBodySlotLegacy
struct AShuttle_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.Launch View
struct AShuttle_C_Launch_View_Params
{
};

// Function Shuttle.Shuttle_C.CLIENT Set Bars
struct AShuttle_C_CLIENT_Set_Bars_Params
{
};

// Function Shuttle.Shuttle_C.SERVER Create Default Equipment
struct AShuttle_C_SERVER_Create_Default_Equipment_Params
{
};

// Function Shuttle.Shuttle_C.Can Launch
struct AShuttle_C_Can_Launch_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.Take Fuel
struct AShuttle_C_Take_Fuel_Params
{
};

// Function Shuttle.Shuttle_C.CLIENT Launch
struct AShuttle_C_CLIENT_Launch_Params
{
	bool                                               Launched;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.UserConstructionScript
struct AShuttle_C_UserConstructionScript_Params
{
};

// Function Shuttle.Shuttle_C.ReceiveBeginPlay
struct AShuttle_C_ReceiveBeginPlay_Params
{
};

// Function Shuttle.Shuttle_C.OnLaunchEnd_Event_1
struct AShuttle_C_OnLaunchEnd_Event_1_Params
{
};

// Function Shuttle.Shuttle_C.BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature
struct AShuttle_C_BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.MULTI DoLaunch
struct AShuttle_C_MULTI_DoLaunch_Params
{
	bool                                               Launched;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.Save Game
struct AShuttle_C_Save_Game_Params
{
};

// Function Shuttle.Shuttle_C.CustomEvent_1
struct AShuttle_C_CustomEvent_1_Params
{
	bool                                               Can;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Orbiting;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.OnLaunch_Event_1
struct AShuttle_C_OnLaunch_Event_1_Params
{
};

// Function Shuttle.Shuttle_C.ReceiveTick
struct AShuttle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature
struct AShuttle_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.Save Completed
struct AShuttle_C_Save_Completed_Params
{
	ESaveGameOperationResult                           saveOperationResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.VehicleLostPilotInSeat
struct AShuttle_C_VehicleLostPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.VehicleGainedPilotInSeat
struct AShuttle_C_VehicleGainedPilotInSeat_Params
{
	class AAstroPlayerController*                      Driver;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.CustomEvent_2
struct AShuttle_C_CustomEvent_2_Params
{
};

// Function Shuttle.Shuttle_C.CustomEvent_3
struct AShuttle_C_CustomEvent_3_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.ExecuteLaunchSequenceServer
struct AShuttle_C_ExecuteLaunchSequenceServer_Params
{
};

// Function Shuttle.Shuttle_C.Multi PlayTakeFuelFX
struct AShuttle_C_Multi_PlayTakeFuelFX_Params
{
};

// Function Shuttle.Shuttle_C.ReceiveDestroyed
struct AShuttle_C_ReceiveDestroyed_Params
{
};

// Function Shuttle.Shuttle_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature
struct AShuttle_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shuttle.Shuttle_C.ExecuteUbergraph_Shuttle
struct AShuttle_C_ExecuteUbergraph_Shuttle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
