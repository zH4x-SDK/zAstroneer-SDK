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

// Function PlanetInfoMesh.PlanetInfoMesh_C.Get Owner Component
struct APlanetInfoMesh_C_Get_Owner_Component_Params
{
	class USceneComponent*                             Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.Set Position
struct APlanetInfoMesh_C_Set_Position_Params
{
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.Ping
struct APlanetInfoMesh_C_Ping_Params
{
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.UserConstructionScript
struct APlanetInfoMesh_C_UserConstructionScript_Params
{
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.ReceiveTick
struct APlanetInfoMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.SetTextVisible
struct APlanetInfoMesh_C_SetTextVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.OnSpawn
struct APlanetInfoMesh_C_OnSpawn_Params
{
};

// Function PlanetInfoMesh.PlanetInfoMesh_C.ExecuteUbergraph_PlanetInfoMesh
struct APlanetInfoMesh_C_ExecuteUbergraph_PlanetInfoMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
