
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

// Function TutorialInfoMesh.TutorialInfoMesh_C.DisplayRelevantControllerKeys
// (Public, BlueprintCallable, BlueprintEvent)

void ATutorialInfoMesh_C::DisplayRelevantControllerKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoMesh.TutorialInfoMesh_C.DisplayRelevantControllerKeys");

	ATutorialInfoMesh_C_DisplayRelevantControllerKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInfoMesh.TutorialInfoMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATutorialInfoMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoMesh.TutorialInfoMesh_C.UserConstructionScript");

	ATutorialInfoMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATutorialInfoMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveBeginPlay");

	ATutorialInfoMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorialInfoMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveTick");

	ATutorialInfoMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInfoMesh.TutorialInfoMesh_C.ExecuteUbergraph_TutorialInfoMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorialInfoMesh_C::ExecuteUbergraph_TutorialInfoMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoMesh.TutorialInfoMesh_C.ExecuteUbergraph_TutorialInfoMesh");

	ATutorialInfoMesh_C_ExecuteUbergraph_TutorialInfoMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
