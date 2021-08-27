
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

// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Offset Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_C::Get_Offset_Distance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.Get Offset Distance");

	AResourceInfoMesh_C_Get_Offset_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.GetOwnerTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void AResourceInfoMesh_C::GetOwnerTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.GetOwnerTransform");

	AResourceInfoMesh_C_GetOwnerTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlotReference          Slot                           (Parm, OutParm)

void AResourceInfoMesh_C::Get_Slot(struct FSlotReference* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.Get Slot");

	AResourceInfoMesh_C_Get_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.Get Owner Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActorComponent*         Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_C::Get_Owner_Component(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.Get Owner Component");

	AResourceInfoMesh_C_Get_Owner_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.Set Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResourceInfoMesh_C::Set_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.Set Position");

	AResourceInfoMesh_C_Set_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceInfoMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.UserConstructionScript");

	AResourceInfoMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.ReceiveTick");

	AResourceInfoMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.SetTextVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_C::SetTextVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.SetTextVisible");

	AResourceInfoMesh_C_SetTextVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.OnSpawn
// (Event, Public, BlueprintEvent)

void AResourceInfoMesh_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.OnSpawn");

	AResourceInfoMesh_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh.ResourceInfoMesh_C.ExecuteUbergraph_ResourceInfoMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_C::ExecuteUbergraph_ResourceInfoMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh.ResourceInfoMesh_C.ExecuteUbergraph_ResourceInfoMesh");

	AResourceInfoMesh_C_ExecuteUbergraph_ResourceInfoMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
