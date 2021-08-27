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

// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.PreConstruct
struct UWBP_PlatformAwareKeyImage_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.Construct
struct UWBP_PlatformAwareKeyImage_C_Construct_Params
{
};

// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.OnInputDeviceChanged
struct UWBP_PlatformAwareKeyImage_C_OnInputDeviceChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.ExecuteUbergraph_WBP_PlatformAwareKeyImage
struct UWBP_PlatformAwareKeyImage_C_ExecuteUbergraph_WBP_PlatformAwareKeyImage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
