
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

// Function Seed_Generic.Seed_Generic_C.Replace Seed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Replace_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Replace Seed");

	ASeed_Generic_C_Replace_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Check_Uprooted
// (Public, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Check_Uprooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Check_Uprooted");

	ASeed_Generic_C_Check_Uprooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.OnRep_Uprooted
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::OnRep_Uprooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.OnRep_Uprooted");

	ASeed_Generic_C_OnRep_Uprooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.GetSpawnedPlantTransform
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              SpawnedPlantTransform          (Parm, OutParm, IsPlainOldData)

void ASeed_Generic_C::GetSpawnedPlantTransform(struct FTransform* SpawnedPlantTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.GetSpawnedPlantTransform");

	ASeed_Generic_C_GetSpawnedPlantTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedPlantTransform != nullptr)
		*SpawnedPlantTransform = params.SpawnedPlantTransform;
}


// Function Seed_Generic.Seed_Generic_C.Apply Planted Tooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Apply_Planted_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Apply Planted Tooltip");

	ASeed_Generic_C_Apply_Planted_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.OnRep_SERVER Growing
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::OnRep_SERVER_Growing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.OnRep_SERVER Growing");

	ASeed_Generic_C_OnRep_SERVER_Growing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.SERVER_UpdateUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::SERVER_UpdateUseSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.SERVER_UpdateUseSuppression");

	ASeed_Generic_C_SERVER_UpdateUseSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.GetSeedFamilyItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  SeedFamily                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASeed_Generic_C::GetSeedFamilyItemType(class UClass** SeedFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.GetSeedFamilyItemType");

	ASeed_Generic_C_GetSeedFamilyItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeedFamily != nullptr)
		*SeedFamily = params.SeedFamily;
}


// Function Seed_Generic.Seed_Generic_C.SERVER_RecordPlantedTelemetryAndAchievements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::SERVER_RecordPlantedTelemetryAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.SERVER_RecordPlantedTelemetryAndAchievements");

	ASeed_Generic_C_SERVER_RecordPlantedTelemetryAndAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.SERVER Replace Seed W Plant
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::SERVER_Replace_Seed_W_Plant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.SERVER Replace Seed W Plant");

	ASeed_Generic_C_SERVER_Replace_Seed_W_Plant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.OnRep_REP Movable
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::OnRep_REP_Movable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.OnRep_REP Movable");

	ASeed_Generic_C_OnRep_REP_Movable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.OnRep_REP Growth
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::OnRep_REP_Growth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.OnRep_REP Growth");

	ASeed_Generic_C_OnRep_REP_Growth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Update View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Update_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Update View");

	ASeed_Generic_C_Update_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASeed_Generic_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.GetBodySlotLegacy");

	ASeed_Generic_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Seed_Generic.Seed_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.UserConstructionScript");

	ASeed_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.GrowthAnim__FinishedFunc
// (BlueprintEvent)

void ASeed_Generic_C::GrowthAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.GrowthAnim__FinishedFunc");

	ASeed_Generic_C_GrowthAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.GrowthAnim__UpdateFunc
// (BlueprintEvent)

void ASeed_Generic_C::GrowthAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.GrowthAnim__UpdateFunc");

	ASeed_Generic_C_GrowthAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASeed_Generic_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ASeed_Generic_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASeed_Generic_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.DroppedInWorld");

	ASeed_Generic_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Spawn Plant
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Spawn_Plant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Spawn Plant");

	ASeed_Generic_C_Spawn_Plant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASeed_Generic_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.PickedUpFromWorld");

	ASeed_Generic_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASeed_Generic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.ReceiveBeginPlay");

	ASeed_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Initial Kill
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Initial_Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Initial Kill");

	ASeed_Generic_C_Initial_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeed_Generic_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.PlacedInSlot");

	ASeed_Generic_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.ResumeSeedGrowth
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::ResumeSeedGrowth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.ResumeSeedGrowth");

	ASeed_Generic_C_ResumeSeedGrowth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASeed_Generic_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.ReceiveHit");

	ASeed_Generic_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Play BuryEffect
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Play_BuryEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Play BuryEffect");

	ASeed_Generic_C_Play_BuryEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.DestroyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeed_Generic_C::DestroyFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.DestroyFinished");

	ASeed_Generic_C_DestroyFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Destroy Particle
// (BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Destroy_Particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Destroy Particle");

	ASeed_Generic_C_Destroy_Particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.MULTI Seed Spawn SFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::MULTI_Seed_Spawn_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.MULTI Seed Spawn SFX");

	ASeed_Generic_C_MULTI_Seed_Spawn_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ASeed_Generic_C::BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ASeed_Generic_C_BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.Multicast Plant Failure FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASeed_Generic_C::Multicast_Plant_Failure_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.Multicast Plant Failure FX");

	ASeed_Generic_C_Multicast_Plant_Failure_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seed_Generic.Seed_Generic_C.ExecuteUbergraph_Seed_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeed_Generic_C::ExecuteUbergraph_Seed_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Generic.Seed_Generic_C.ExecuteUbergraph_Seed_Generic");

	ASeed_Generic_C_ExecuteUbergraph_Seed_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
