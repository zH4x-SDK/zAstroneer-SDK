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

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.UserConstructionScript
struct AResourceInfoMesh_Desc_C_UserConstructionScript_Params
{
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveBeginPlay
struct AResourceInfoMesh_Desc_C_ReceiveBeginPlay_Params
{
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveTick
struct AResourceInfoMesh_Desc_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetDescription_Event_1
struct AResourceInfoMesh_Desc_C_SetDescription_Event_1_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.OnSpawn
struct AResourceInfoMesh_Desc_C_OnSpawn_Params
{
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetTextVisible
struct AResourceInfoMesh_Desc_C_SetTextVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ExecuteUbergraph_ResourceInfoMesh_Desc
struct AResourceInfoMesh_Desc_C_ExecuteUbergraph_ResourceInfoMesh_Desc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
