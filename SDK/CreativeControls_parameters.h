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

// Function CreativeControls.CreativeControls_C.Construct
struct UCreativeControls_C_Construct_Params
{
};

// Function CreativeControls.CreativeControls_C.CustomEvent_1
struct UCreativeControls_C_CustomEvent_1_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeControls.CreativeControls_C.SetupStylingData
struct UCreativeControls_C_SetupStylingData_Params
{
};

// Function CreativeControls.CreativeControls_C.ExecuteUbergraph_CreativeControls
struct UCreativeControls_C_ExecuteUbergraph_CreativeControls_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
