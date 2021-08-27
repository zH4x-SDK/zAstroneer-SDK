
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

// Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStartingPointCandidateMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.UserConstructionScript");

	AStartingPointCandidateMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStartingPointCandidateMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.ReceiveBeginPlay");

	AStartingPointCandidateMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.ExecuteUbergraph_StartingPointCandidateMarker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStartingPointCandidateMarker_C::ExecuteUbergraph_StartingPointCandidateMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StartingPointCandidateMarker.StartingPointCandidateMarker_C.ExecuteUbergraph_StartingPointCandidateMarker");

	AStartingPointCandidateMarker_C_ExecuteUbergraph_StartingPointCandidateMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
