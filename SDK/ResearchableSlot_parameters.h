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

// Function ResearchableSlot.ResearchableSlot_C.SaveGameFixup
struct AResearchableSlot_C_SaveGameFixup_Params
{
};

// Function ResearchableSlot.ResearchableSlot_C.Get Parent
struct AResearchableSlot_C_Get_Parent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchableSlot.ResearchableSlot_C.UserConstructionScript
struct AResearchableSlot_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
