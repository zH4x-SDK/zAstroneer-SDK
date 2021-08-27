
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

// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACamera_Dropship_Package_Starter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.UserConstructionScript");

	ACamera_Dropship_Package_Starter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACamera_Dropship_Package_Starter_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.Timeline_0__FinishedFunc");

	ACamera_Dropship_Package_Starter_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACamera_Dropship_Package_Starter_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.Timeline_0__UpdateFunc");

	ACamera_Dropship_Package_Starter_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACamera_Dropship_Package_Starter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.ReceiveBeginPlay");

	ACamera_Dropship_Package_Starter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACamera_Dropship_Package_Starter_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.K2_OnBecomeViewTarget");

	ACamera_Dropship_Package_Starter_C_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.ExecuteUbergraph_Camera_Dropship_Package_Starter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACamera_Dropship_Package_Starter_C::ExecuteUbergraph_Camera_Dropship_Package_Starter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_Dropship_Package_Starter.Camera_Dropship_Package_Starter_C.ExecuteUbergraph_Camera_Dropship_Package_Starter");

	ACamera_Dropship_Package_Starter_C_ExecuteUbergraph_Camera_Dropship_Package_Starter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
