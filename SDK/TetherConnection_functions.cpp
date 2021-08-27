
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

// Function TetherConnection.TetherConnection_C.OnRep_Rep Flow
// (BlueprintCallable, BlueprintEvent)

void ATetherConnection_C::OnRep_Rep_Flow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnRep_Rep Flow");

	ATetherConnection_C_OnRep_Rep_Flow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.OnPreDisconnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASlotConnection*         connnection                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherConnection_C::OnPreDisconnection(class ASlotConnection* connnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnPreDisconnection");

	ATetherConnection_C_OnPreDisconnection_Params params;
	params.connnection = connnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.OnRep_REP Oxygen
// (BlueprintCallable, BlueprintEvent)

void ATetherConnection_C::OnRep_REP_Oxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnRep_REP Oxygen");

	ATetherConnection_C_OnRep_REP_Oxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.Set Oxygen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherConnection_C::Set_Oxygen(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.Set Oxygen");

	ATetherConnection_C_Set_Oxygen_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.Update Power Flow Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Flow                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherConnection_C::Update_Power_Flow_Animation(float Flow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.Update Power Flow Animation");

	ATetherConnection_C_Update_Power_Flow_Animation_Params params;
	params.Flow = Flow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATetherConnection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.UserConstructionScript");

	ATetherConnection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.OnConnected
// (Event, Public, BlueprintEvent)

void ATetherConnection_C::OnConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnConnected");

	ATetherConnection_C_OnConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.OnDisconnected
// (Event, Public, BlueprintEvent)

void ATetherConnection_C::OnDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnDisconnected");

	ATetherConnection_C_OnDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.OnUpdateTetherAttachPowerFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PowerFlow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherConnection_C::OnUpdateTetherAttachPowerFlow(float PowerFlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.OnUpdateTetherAttachPowerFlow");

	ATetherConnection_C_OnUpdateTetherAttachPowerFlow_Params params;
	params.PowerFlow = PowerFlow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherConnection.TetherConnection_C.ExecuteUbergraph_TetherConnection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherConnection_C::ExecuteUbergraph_TetherConnection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherConnection.TetherConnection_C.ExecuteUbergraph_TetherConnection");

	ATetherConnection_C_ExecuteUbergraph_TetherConnection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
