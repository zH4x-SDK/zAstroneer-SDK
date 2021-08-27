
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

// Function Hazard_BT_Parent.Hazard_BT_Parent_C.HandleDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_BT_Parent_C::HandleDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.HandleDeformationEvent");

	AHazard_BT_Parent_C_HandleDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Death and Seed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHazard_BT_Parent_C::Death_and_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.Death and Seed");

	AHazard_BT_Parent_C_Death_and_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Check Plucked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play_Sound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_BT_Parent_C::Check_Plucked(bool Play_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.Check Plucked");

	AHazard_BT_Parent_C_Check_Plucked_Params params;
	params.Play_Sound = Play_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.OnRep_Plucked
// (BlueprintCallable, BlueprintEvent)

void AHazard_BT_Parent_C::OnRep_Plucked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.OnRep_Plucked");

	AHazard_BT_Parent_C_OnRep_Plucked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_BT_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.UserConstructionScript");

	AHazard_BT_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHazard_BT_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.ReceiveBeginPlay");

	AHazard_BT_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AHazard_BT_Parent_C::BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AHazard_BT_Parent_C_BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void AHazard_BT_Parent_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.Destroy Particle");

	AHazard_BT_Parent_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_BT_Parent_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.DestroyFinished");

	AHazard_BT_Parent_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.MULTI Seed Spawn SFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHazard_BT_Parent_C::MULTI_Seed_Spawn_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.MULTI Seed Spawn SFX");

	AHazard_BT_Parent_C_MULTI_Seed_Spawn_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHazard_BT_Parent_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature");

	AHazard_BT_Parent_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_0_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_BT_Parent.Hazard_BT_Parent_C.ExecuteUbergraph_Hazard_BT_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_BT_Parent_C::ExecuteUbergraph_Hazard_BT_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_BT_Parent.Hazard_BT_Parent_C.ExecuteUbergraph_Hazard_BT_Parent");

	AHazard_BT_Parent_C_ExecuteUbergraph_Hazard_BT_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
