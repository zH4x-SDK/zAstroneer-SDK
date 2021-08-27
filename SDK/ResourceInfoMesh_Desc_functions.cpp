
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

// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceInfoMesh_Desc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.UserConstructionScript");

	AResourceInfoMesh_Desc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResourceInfoMesh_Desc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveBeginPlay");

	AResourceInfoMesh_Desc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_Desc_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ReceiveTick");

	AResourceInfoMesh_Desc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetDescription_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AResourceInfoMesh_Desc_C::SetDescription_Event_1(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetDescription_Event_1");

	AResourceInfoMesh_Desc_C_SetDescription_Event_1_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.OnSpawn
// (Event, Public, BlueprintEvent)

void AResourceInfoMesh_Desc_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.OnSpawn");

	AResourceInfoMesh_Desc_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetTextVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_Desc_C::SetTextVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.SetTextVisible");

	AResourceInfoMesh_Desc_C_SetTextVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ExecuteUbergraph_ResourceInfoMesh_Desc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMesh_Desc_C::ExecuteUbergraph_ResourceInfoMesh_Desc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C.ExecuteUbergraph_ResourceInfoMesh_Desc");

	AResourceInfoMesh_Desc_C_ExecuteUbergraph_ResourceInfoMesh_Desc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
