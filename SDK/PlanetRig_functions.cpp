
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

// Function PlanetRig.PlanetRig_C.GetViewTargetUp
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector APlanetRig_C::GetViewTargetUp(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetRig.PlanetRig_C.GetViewTargetUp");

	APlanetRig_C_GetViewTargetUp_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanetRig.PlanetRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlanetRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetRig.PlanetRig_C.UserConstructionScript");

	APlanetRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetRig.PlanetRig_C.OnSetView
// (Event, Public, BlueprintEvent)

void APlanetRig_C::OnSetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetRig.PlanetRig_C.OnSetView");

	APlanetRig_C_OnSetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetRig.PlanetRig_C.OnRemoveView
// (Event, Public, BlueprintEvent)

void APlanetRig_C::OnRemoveView()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetRig.PlanetRig_C.OnRemoveView");

	APlanetRig_C_OnRemoveView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetRig.PlanetRig_C.ExecuteUbergraph_PlanetRig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetRig_C::ExecuteUbergraph_PlanetRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetRig.PlanetRig_C.ExecuteUbergraph_PlanetRig");

	APlanetRig_C_ExecuteUbergraph_PlanetRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
