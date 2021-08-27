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

// Function IconRig.IconRig_C.UserConstructionScript
struct AIconRig_C_UserConstructionScript_Params
{
};

// Function IconRig.IconRig_C.ReceiveBeginPlay
struct AIconRig_C_ReceiveBeginPlay_Params
{
};

// Function IconRig.IconRig_C.DoTeriaryIcons
struct AIconRig_C_DoTeriaryIcons_Params
{
	bool                                               astroVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               backpackVisible;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               astroSeated;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconRig.IconRig_C.ExecuteUbergraph_IconRig
struct AIconRig_C_ExecuteUbergraph_IconRig_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
