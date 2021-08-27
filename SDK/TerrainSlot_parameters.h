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

// Function TerrainSlot.TerrainSlot_C.SaveGameFixup
struct ATerrainSlot_C_SaveGameFixup_Params
{
};

// Function TerrainSlot.TerrainSlot_C.Get Parent
struct ATerrainSlot_C_Get_Parent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainSlot.TerrainSlot_C.UserConstructionScript
struct ATerrainSlot_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
