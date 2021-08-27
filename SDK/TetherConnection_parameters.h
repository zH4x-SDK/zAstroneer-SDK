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

// Function TetherConnection.TetherConnection_C.OnRep_Rep Flow
struct ATetherConnection_C_OnRep_Rep_Flow_Params
{
};

// Function TetherConnection.TetherConnection_C.OnPreDisconnection
struct ATetherConnection_C_OnPreDisconnection_Params
{
	class ASlotConnection*                             connnection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherConnection.TetherConnection_C.OnRep_REP Oxygen
struct ATetherConnection_C_OnRep_REP_Oxygen_Params
{
};

// Function TetherConnection.TetherConnection_C.Set Oxygen
struct ATetherConnection_C_Set_Oxygen_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherConnection.TetherConnection_C.Update Power Flow Animation
struct ATetherConnection_C_Update_Power_Flow_Animation_Params
{
	float                                              Flow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherConnection.TetherConnection_C.UserConstructionScript
struct ATetherConnection_C_UserConstructionScript_Params
{
};

// Function TetherConnection.TetherConnection_C.OnConnected
struct ATetherConnection_C_OnConnected_Params
{
};

// Function TetherConnection.TetherConnection_C.OnDisconnected
struct ATetherConnection_C_OnDisconnected_Params
{
};

// Function TetherConnection.TetherConnection_C.OnUpdateTetherAttachPowerFlow
struct ATetherConnection_C_OnUpdateTetherAttachPowerFlow_Params
{
	float                                              PowerFlow;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherConnection.TetherConnection_C.ExecuteUbergraph_TetherConnection
struct ATetherConnection_C_ExecuteUbergraph_TetherConnection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
