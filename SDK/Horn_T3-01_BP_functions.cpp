
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

// Function Horn_T3-01_BP.Horn_T3-01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHorn_T3_01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.UserConstructionScript");

	AHorn_T3_01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.PulseAnim__FinishedFunc
// (BlueprintEvent)

void AHorn_T3_01_BP_C::PulseAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.PulseAnim__FinishedFunc");

	AHorn_T3_01_BP_C_PulseAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.PulseAnim__UpdateFunc
// (BlueprintEvent)

void AHorn_T3_01_BP_C::PulseAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.PulseAnim__UpdateFunc");

	AHorn_T3_01_BP_C_PulseAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHorn_T3_01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.ReceiveBeginPlay");

	AHorn_T3_01_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.StartPulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Looping                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHorn_T3_01_BP_C::StartPulse(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.StartPulse");

	AHorn_T3_01_BP_C_StartPulse_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.StopPulse
// (BlueprintCallable, BlueprintEvent)

void AHorn_T3_01_BP_C::StopPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.StopPulse");

	AHorn_T3_01_BP_C_StopPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horn_T3-01_BP.Horn_T3-01_BP_C.ExecuteUbergraph_Horn_T3-01_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHorn_T3_01_BP_C::ExecuteUbergraph_Horn_T3_01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horn_T3-01_BP.Horn_T3-01_BP_C.ExecuteUbergraph_Horn_T3-01_BP");

	AHorn_T3_01_BP_C_ExecuteUbergraph_Horn_T3_01_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
