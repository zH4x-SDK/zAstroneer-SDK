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

// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Offset Distance
struct AResourceInfoMesh_C_Get_Offset_Distance_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.GetOwnerTransform
struct AResourceInfoMesh_C_GetOwnerTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Slot
struct AResourceInfoMesh_C_Get_Slot_Params
{
	struct FSlotReference                              Slot;                                                     // (Parm, OutParm)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Owner Component
struct AResourceInfoMesh_C_Get_Owner_Component_Params
{
	class UActorComponent*                             Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.Set Position
struct AResourceInfoMesh_C_Set_Position_Params
{
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.UserConstructionScript
struct AResourceInfoMesh_C_UserConstructionScript_Params
{
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.ReceiveTick
struct AResourceInfoMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.SetTextVisible
struct AResourceInfoMesh_C_SetTextVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.OnSpawn
struct AResourceInfoMesh_C_OnSpawn_Params
{
};

// Function ResourceInfoMesh.ResourceInfoMesh_C.ExecuteUbergraph_ResourceInfoMesh
struct AResourceInfoMesh_C_ExecuteUbergraph_ResourceInfoMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
