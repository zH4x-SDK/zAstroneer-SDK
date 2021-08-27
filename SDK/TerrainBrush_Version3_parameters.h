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

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Change Ring Color
struct ATerrainBrush_Version3_C_Change_Ring_Color_Params
{
	struct FLinearColor                                Current_Terrain_Tint;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Show Light
struct ATerrainBrush_Version3_C_Show_Light_Params
{
	bool                                               bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Spawn Ping
struct ATerrainBrush_Version3_C_Spawn_Ping_Params
{
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.GetResourceNodeTooltip
struct ATerrainBrush_Version3_C_GetResourceNodeTooltip_Params
{
	class UTooltipComponent*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Get Subtract Particle Effect
struct ATerrainBrush_Version3_C_Get_Subtract_Particle_Effect_Params
{
	int                                                HardnessDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Deactivate Deform Effect
struct ATerrainBrush_Version3_C_Deactivate_Deform_Effect_Params
{
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Activate Deform Effect
struct ATerrainBrush_Version3_C_Activate_Deform_Effect_Params
{
	EDeformType                                        Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HardnessTier;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Set View
struct ATerrainBrush_Version3_C_Set_View_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Using;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.UserConstructionScript
struct ATerrainBrush_Version3_C_UserConstructionScript_Params
{
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveTick
struct ATerrainBrush_Version3_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveBeginPlay
struct ATerrainBrush_Version3_C_ReceiveBeginPlay_Params
{
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnBrushColorChanged
struct ATerrainBrush_Version3_C_OnBrushColorChanged_Params
{
	struct FTerrainMaterial                            TerrainMaterial;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnActivate
struct ATerrainBrush_Version3_C_OnActivate_Params
{
};

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ExecuteUbergraph_TerrainBrush_Version3
struct ATerrainBrush_Version3_C_ExecuteUbergraph_TerrainBrush_Version3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
