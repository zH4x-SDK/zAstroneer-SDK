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

// Function TitleBanner.TitleBanner_C.ShowMOTD
struct UTitleBanner_C_ShowMOTD_Params
{
};

// Function TitleBanner.TitleBanner_C.SetupEventBindings
struct UTitleBanner_C_SetupEventBindings_Params
{
};

// Function TitleBanner.TitleBanner_C.ClearEventBindings
struct UTitleBanner_C_ClearEventBindings_Params
{
};

// Function TitleBanner.TitleBanner_C.FadeInMOTD
struct UTitleBanner_C_FadeInMOTD_Params
{
	float                                              AnimDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TitleBanner.TitleBanner_C.FadeOutMOTD
struct UTitleBanner_C_FadeOutMOTD_Params
{
	float                                              AnimDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TitleBanner.TitleBanner_C.UpdateMOTD
struct UTitleBanner_C_UpdateMOTD_Params
{
	class UMessageOfTheDay*                            MOTD;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TitleBanner.TitleBanner_C.ExecuteUbergraph_TitleBanner
struct UTitleBanner_C_ExecuteUbergraph_TitleBanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
