
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

// Function Hazard_Popper_01.Hazard_Popper_01_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Popper_01_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.HandleOnDeformationEvent");

	AHazard_Popper_01_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.UserConstructionScript");

	AHazard_Popper_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_Popper_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveBeginPlay");

	AHazard_Popper_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_Popper_01_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature");

	AHazard_Popper_01_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_222_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_01_C::DestroyParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyParticle");

	AHazard_Popper_01_C_DestroyParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_01_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.DestroyFinished");

	AHazard_Popper_01_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_01_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.ReceiveEndPlay");

	AHazard_Popper_01_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.MULTI Seed Spawn SFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_01_C::MULTI_Seed_Spawn_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.MULTI Seed Spawn SFX");

	AHazard_Popper_01_C_MULTI_Seed_Spawn_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_Popper_01_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature");

	AHazard_Popper_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_1_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Popper_01.Hazard_Popper_01_C.ExecuteUbergraph_Hazard_Popper_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Popper_01_C::ExecuteUbergraph_Hazard_Popper_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_01.Hazard_Popper_01_C.ExecuteUbergraph_Hazard_Popper_01");

	AHazard_Popper_01_C_ExecuteUbergraph_Hazard_Popper_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
