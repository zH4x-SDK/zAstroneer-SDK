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

// Function ControllingUserDisplay.ControllingUserDisplay_C.GetFriendsInGameSizeY
struct UControllingUserDisplay_C_GetFriendsInGameSizeY_Params
{
	float                                              SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.GetWidestFriendInGameSizeX
struct UControllingUserDisplay_C_GetWidestFriendInGameSizeX_Params
{
	float                                              SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSizing
struct UControllingUserDisplay_C_UpdateSizing_Params
{
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.Construct
struct UControllingUserDisplay_C_Construct_Params
{
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSessionText
struct UControllingUserDisplay_C_UpdateSessionText_Params
{
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.Destruct
struct UControllingUserDisplay_C_Destruct_Params
{
};

// Function ControllingUserDisplay.ControllingUserDisplay_C.ExecuteUbergraph_ControllingUserDisplay
struct UControllingUserDisplay_C_ExecuteUbergraph_ControllingUserDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
