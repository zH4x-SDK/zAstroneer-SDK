
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

// Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agate_engine_floating_diamond_structure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.UserConstructionScript");

	Agate_engine_floating_diamond_structure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Agate_engine_floating_diamond_structure_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.ReceiveBeginPlay");

	Agate_engine_floating_diamond_structure_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.ExecuteUbergraph_gate_engine_floating_diamond_structure
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agate_engine_floating_diamond_structure_C::ExecuteUbergraph_gate_engine_floating_diamond_structure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gate_engine_floating_diamond_structure.gate_engine_floating_diamond_structure_C.ExecuteUbergraph_gate_engine_floating_diamond_structure");

	Agate_engine_floating_diamond_structure_C_ExecuteUbergraph_gate_engine_floating_diamond_structure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
