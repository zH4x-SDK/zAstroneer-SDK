
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

// Function Paver_T2.Paver_T2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APaver_T2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.UserConstructionScript");

	APaver_T2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__FinishedFunc
// (BlueprintEvent)

void APaver_T2_C::PaverRollerSpinAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__FinishedFunc");

	APaver_T2_C_PaverRollerSpinAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__UpdateFunc
// (BlueprintEvent)

void APaver_T2_C::PaverRollerSpinAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__UpdateFunc");

	APaver_T2_C_PaverRollerSpinAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APaver_T2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.ReceiveBeginPlay");

	APaver_T2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.UpdateDeformationNormal
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                 DeformationNormal              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APaver_T2_C::UpdateDeformationNormal(const struct FVector& DeformationNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.UpdateDeformationNormal");

	APaver_T2_C_UpdateDeformationNormal_Params params;
	params.DeformationNormal = DeformationNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.CHILD_UpdateToolVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void APaver_T2_C::CHILD_UpdateToolVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.CHILD_UpdateToolVisualState");

	APaver_T2_C_CHILD_UpdateToolVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.CHILD_UpdateSedimentGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSedimentAvailable       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentSedimentCapacity        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APaver_T2_C::CHILD_UpdateSedimentGauge(float CurrentSedimentAvailable, float CurrentSedimentCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.CHILD_UpdateSedimentGauge");

	APaver_T2_C_CHILD_UpdateSedimentGauge_Params params;
	params.CurrentSedimentAvailable = CurrentSedimentAvailable;
	params.CurrentSedimentCapacity = CurrentSedimentCapacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.PlayDrillStartWithInsufficientSoilEffect
// (Event, Protected, BlueprintEvent)

void APaver_T2_C::PlayDrillStartWithInsufficientSoilEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.PlayDrillStartWithInsufficientSoilEffect");

	APaver_T2_C_PlayDrillStartWithInsufficientSoilEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paver_T2.Paver_T2_C.ExecuteUbergraph_Paver_T2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APaver_T2_C::ExecuteUbergraph_Paver_T2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paver_T2.Paver_T2_C.ExecuteUbergraph_Paver_T2");

	APaver_T2_C_ExecuteUbergraph_Paver_T2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
