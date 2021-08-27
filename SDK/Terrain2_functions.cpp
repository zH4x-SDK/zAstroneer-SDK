
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Terrain2.VoxelVolumeComponent.GetSurfaceHeightAtLocation
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVoxelVolumeComponent::GetSurfaceHeightAtLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Terrain2.VoxelVolumeComponent.GetSurfaceHeightAtLocation");

	UVoxelVolumeComponent_GetSurfaceHeightAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction Terrain2.VoxelVolumeComponent.DeformationT2CompleteEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDeformationParamsT2    params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UVoxelVolumeComponent::DeformationT2CompleteEvent__DelegateSignature(const struct FDeformationParamsT2& params)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Terrain2.VoxelVolumeComponent.DeformationT2CompleteEvent__DelegateSignature");

	UVoxelVolumeComponent_DeformationT2CompleteEvent__DelegateSignature_Params params;
	params.params = params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
