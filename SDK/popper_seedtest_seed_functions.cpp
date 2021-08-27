
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

// Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Movable
// (BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::OnRep_REP_Movable()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Movable");

	Apopper_seedtest_seed_C_OnRep_REP_Movable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Growth
// (BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::OnRep_REP_Growth()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.OnRep_REP Growth");

	Apopper_seedtest_seed_C_OnRep_REP_Growth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.Update View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::Update_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.Update View");

	Apopper_seedtest_seed_C_Update_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* Apopper_seedtest_seed_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.GetBodySlotLegacy");

	Apopper_seedtest_seed_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.UserConstructionScript");

	Apopper_seedtest_seed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Apopper_seedtest_seed_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.DroppedInWorld");

	Apopper_seedtest_seed_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.Spawn Spiker
// (BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::Spawn_Spiker()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.Spawn Spiker");

	Apopper_seedtest_seed_C_Spawn_Spiker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void Apopper_seedtest_seed_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.PickedUpFromWorld");

	Apopper_seedtest_seed_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apopper_seedtest_seed_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveTick");

	Apopper_seedtest_seed_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Apopper_seedtest_seed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.ReceiveBeginPlay");

	Apopper_seedtest_seed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.Initial Kill
// (BlueprintCallable, BlueprintEvent)

void Apopper_seedtest_seed_C::Initial_Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.Initial Kill");

	Apopper_seedtest_seed_C_Initial_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apopper_seedtest_seed_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.PlacedInSlot");

	Apopper_seedtest_seed_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popper_seedtest_seed.popper_seedtest_seed_C.ExecuteUbergraph_popper_seedtest_seed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apopper_seedtest_seed_C::ExecuteUbergraph_popper_seedtest_seed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function popper_seedtest_seed.popper_seedtest_seed_C.ExecuteUbergraph_popper_seedtest_seed");

	Apopper_seedtest_seed_C_ExecuteUbergraph_popper_seedtest_seed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
