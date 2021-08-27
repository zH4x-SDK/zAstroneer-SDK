
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

// Function PlanetInfoMesh.PlanetInfoMesh_C.Get Owner Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlanetInfoMesh_C::Get_Owner_Component(class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.Get Owner Component");

	APlanetInfoMesh_C_Get_Owner_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.Set Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlanetInfoMesh_C::Set_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.Set Position");

	APlanetInfoMesh_C_Set_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.Ping
// (Public, BlueprintCallable, BlueprintEvent)

void APlanetInfoMesh_C::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.Ping");

	APlanetInfoMesh_C_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlanetInfoMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.UserConstructionScript");

	APlanetInfoMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetInfoMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.ReceiveTick");

	APlanetInfoMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.SetTextVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetInfoMesh_C::SetTextVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.SetTextVisible");

	APlanetInfoMesh_C_SetTextVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.OnSpawn
// (Event, Public, BlueprintEvent)

void APlanetInfoMesh_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.OnSpawn");

	APlanetInfoMesh_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetInfoMesh.PlanetInfoMesh_C.ExecuteUbergraph_PlanetInfoMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetInfoMesh_C::ExecuteUbergraph_PlanetInfoMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetInfoMesh.PlanetInfoMesh_C.ExecuteUbergraph_PlanetInfoMesh");

	APlanetInfoMesh_C_ExecuteUbergraph_PlanetInfoMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
