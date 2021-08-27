
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

// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADefaultSpaceshipRig_C::GetViewTargetLocation(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetLocation");

	ADefaultSpaceshipRig_C_GetViewTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetUp
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADefaultSpaceshipRig_C::GetViewTargetUp(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetUp");

	ADefaultSpaceshipRig_C_GetViewTargetUp_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADefaultSpaceshipRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.UserConstructionScript");

	ADefaultSpaceshipRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
