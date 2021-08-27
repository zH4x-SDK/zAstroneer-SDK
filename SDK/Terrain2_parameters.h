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

// Function Terrain2.VoxelVolumeComponent.GetSurfaceHeightAtLocation
struct UVoxelVolumeComponent_GetSurfaceHeightAtLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Terrain2.VoxelVolumeComponent.DeformationT2CompleteEvent__DelegateSignature
struct UVoxelVolumeComponent_DeformationT2CompleteEvent__DelegateSignature_Params
{
	struct FDeformationParamsT2                        params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
