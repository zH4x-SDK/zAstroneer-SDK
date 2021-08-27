
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

// Function Popper_Seedtest.Popper_Seedtest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APopper_Seedtest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.UserConstructionScript");

	APopper_Seedtest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APopper_Seedtest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.ReceiveBeginPlay");

	APopper_Seedtest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature
// (BlueprintEvent)

void APopper_Seedtest_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature");

	APopper_Seedtest_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.DestroyParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APopper_Seedtest_C::DestroyParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.DestroyParticle");

	APopper_Seedtest_C_DestroyParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopper_Seedtest_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.DestroyFinished");

	APopper_Seedtest_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopper_Seedtest_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.ReceiveEndPlay");

	APopper_Seedtest_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.MULTI Spawn Seeds
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APopper_Seedtest_C::MULTI_Spawn_Seeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.MULTI Spawn Seeds");

	APopper_Seedtest_C_MULTI_Spawn_Seeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popper_Seedtest.Popper_Seedtest_C.ExecuteUbergraph_Popper_Seedtest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopper_Seedtest_C::ExecuteUbergraph_Popper_Seedtest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popper_Seedtest.Popper_Seedtest_C.ExecuteUbergraph_Popper_Seedtest");

	APopper_Seedtest_C_ExecuteUbergraph_Popper_Seedtest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
