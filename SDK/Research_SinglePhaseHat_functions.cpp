
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

// Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Local_Progress                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearch_SinglePhaseHat_C::UpdateProgress(float Local_Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.UpdateProgress");

	UResearch_SinglePhaseHat_C_UpdateProgress_Params params;
	params.Local_Progress = Local_Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResearch_SinglePhaseHat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.Construct");

	UResearch_SinglePhaseHat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.ExecuteUbergraph_Research_SinglePhaseHat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResearch_SinglePhaseHat_C::ExecuteUbergraph_Research_SinglePhaseHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_SinglePhaseHat.Research_SinglePhaseHat_C.ExecuteUbergraph_Research_SinglePhaseHat");

	UResearch_SinglePhaseHat_C_ExecuteUbergraph_Research_SinglePhaseHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
