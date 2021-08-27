
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

// Function ChassisPad_Base.ChassisPad_Base_C.Undrill Terrain
// (Public, BlueprintCallable, BlueprintEvent)

void AChassisPad_Base_C::Undrill_Terrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.Undrill Terrain");

	AChassisPad_Base_C_Undrill_Terrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.Set Owner Physics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Base_C::Set_Owner_Physics(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.Set Owner Physics");

	AChassisPad_Base_C_Set_Owner_Physics_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.SaveGameFixup
// (Public, BlueprintCallable, BlueprintEvent)

void AChassisPad_Base_C::SaveGameFixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.SaveGameFixup");

	AChassisPad_Base_C_SaveGameFixup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.Drill Terrain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Base_C::Drill_Terrain(const struct FVector& Position, class USceneComponent* Target, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.Drill Terrain");

	AChassisPad_Base_C_Drill_Terrain_Params params;
	params.Position = Position;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function ChassisPad_Base.ChassisPad_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChassisPad_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.UserConstructionScript");

	AChassisPad_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.ReceiveTick");

	AChassisPad_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.OnSpawn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           withTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChassisPad_Base_C::OnSpawn(bool withTool, class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.OnSpawn");

	AChassisPad_Base_C_OnSpawn_Params params;
	params.withTool = withTool;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.OnPickedUpFromWorld_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicalMovement               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Base_C::OnPickedUpFromWorld_Event_1(bool PhysicalMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.OnPickedUpFromWorld_Event_1");

	AChassisPad_Base_C_OnPickedUpFromWorld_Event_1_Params params;
	params.PhysicalMovement = PhysicalMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.OnDroppedInWorld_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChassisPad_Base_C::OnDroppedInWorld_Event_1(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.OnDroppedInWorld_Event_1");

	AChassisPad_Base_C_OnDroppedInWorld_Event_1_Params params;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Base.ChassisPad_Base_C.ExecuteUbergraph_ChassisPad_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Base_C::ExecuteUbergraph_ChassisPad_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Base.ChassisPad_Base_C.ExecuteUbergraph_ChassisPad_Base");

	AChassisPad_Base_C_ExecuteUbergraph_ChassisPad_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
