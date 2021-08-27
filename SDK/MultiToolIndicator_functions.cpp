
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

// Function MultiToolIndicator.MultiToolIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMultiToolIndicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiToolIndicator.MultiToolIndicator_C.UserConstructionScript");

	AMultiToolIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiToolIndicator.MultiToolIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMultiToolIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiToolIndicator.MultiToolIndicator_C.ReceiveBeginPlay");

	AMultiToolIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiToolIndicator.MultiToolIndicator_C.ExecuteUbergraph_MultiToolIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMultiToolIndicator_C::ExecuteUbergraph_MultiToolIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiToolIndicator.MultiToolIndicator_C.ExecuteUbergraph_MultiToolIndicator");

	AMultiToolIndicator_C_ExecuteUbergraph_MultiToolIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
