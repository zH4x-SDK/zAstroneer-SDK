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

// Function WBP_ControlHint.WBP_ControlHint_C.SetNewDescriptionText
struct UWBP_ControlHint_C_SetNewDescriptionText_Params
{
	struct FText                                       NewDesc;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ControlHint.WBP_ControlHint_C.PreConstruct
struct UWBP_ControlHint_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlHint.WBP_ControlHint_C.Construct
struct UWBP_ControlHint_C_Construct_Params
{
};

// Function WBP_ControlHint.WBP_ControlHint_C.ExecuteUbergraph_WBP_ControlHint
struct UWBP_ControlHint_C_ExecuteUbergraph_WBP_ControlHint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
