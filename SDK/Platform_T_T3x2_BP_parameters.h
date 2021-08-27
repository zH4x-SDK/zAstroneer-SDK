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

// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.GetTetherAttachPoints
struct APlatform_T_T3x2_BP_C_GetTetherAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                AttachPoints;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.UserConstructionScript
struct APlatform_T_T3x2_BP_C_UserConstructionScript_Params
{
};

// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.SetupSecondarySlots
struct APlatform_T_T3x2_BP_C_SetupSecondarySlots_Params
{
};

// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.ExecuteUbergraph_Platform_T_T3x2_BP
struct APlatform_T_T3x2_BP_C_ExecuteUbergraph_Platform_T_T3x2_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
