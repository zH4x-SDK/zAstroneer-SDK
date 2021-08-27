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

// Function MessageOfTheDay.AstroMessageOfTheDayManager.SetDefaultMessage
struct UAstroMessageOfTheDayManager_SetDefaultMessage_Params
{
	class UMessageOfTheDay*                            Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageOfTheDay.AstroMessageOfTheDayManager.GetForCurrentCulture
struct UAstroMessageOfTheDayManager_GetForCurrentCulture_Params
{
	class UMessageOfTheDay*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageOfTheDay.AstroMessageOfTheDayManager.ForceRefresh
struct UAstroMessageOfTheDayManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageOfTheDay.AstroMessageOfTheDayManager.EnableAutoRefresh
struct UAstroMessageOfTheDayManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageOfTheDay.AstroMessageOfTheDayManager.DisableAutoRefresh
struct UAstroMessageOfTheDayManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
