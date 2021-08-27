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

// Function TetherSlot.TetherSlot_C.AcceptsConnection
struct ATetherSlot_C_AcceptsConnection_Params
{
};

// Function TetherSlot.TetherSlot_C.UserConstructionScript
struct ATetherSlot_C_UserConstructionScript_Params
{
};

// Function TetherSlot.TetherSlot_C.OnConnectionBuilt
struct ATetherSlot_C_OnConnectionBuilt_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherSlot.TetherSlot_C.OnConnectionDestroyed
struct ATetherSlot_C_OnConnectionDestroyed_Params
{
	class UChildSlotComponent*                         Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TetherSlot.TetherSlot_C.ExecuteUbergraph_TetherSlot
struct ATetherSlot_C_ExecuteUbergraph_TetherSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
