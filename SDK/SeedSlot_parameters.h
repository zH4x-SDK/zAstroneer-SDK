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

// Function SeedSlot.SeedSlot_C.SaveGameFixup
struct ASeedSlot_C_SaveGameFixup_Params
{
};

// Function SeedSlot.SeedSlot_C.Get Parent
struct ASeedSlot_C_Get_Parent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SeedSlot.SeedSlot_C.UserConstructionScript
struct ASeedSlot_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
