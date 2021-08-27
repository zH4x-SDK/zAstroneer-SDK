
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

// Function CreativeDrone.CreativeDrone_C.UpdateVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::UpdateVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.UpdateVFX");

	ACreativeDrone_C_UpdateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACreativeDrone_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.GetBodySlotLegacy");

	ACreativeDrone_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeDrone.CreativeDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.UserConstructionScript");

	ACreativeDrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACreativeDrone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.ReceiveBeginPlay");

	ACreativeDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreativeDrone_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.ReceiveEndPlay");

	ACreativeDrone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.HandleFlightStateChanged
// (BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::HandleFlightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.HandleFlightStateChanged");

	ACreativeDrone_C_HandleFlightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.OnCreativeModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CreativeMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreativeDrone_C::OnCreativeModeChanged(bool CreativeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.OnCreativeModeChanged");

	ACreativeDrone_C_OnCreativeModeChanged_Params params;
	params.CreativeMode = CreativeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.UpdateDroneVisibility
// (BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::UpdateDroneVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.UpdateDroneVisibility");

	ACreativeDrone_C_UpdateDroneVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACreativeDrone_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature");

	ACreativeDrone_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.UpdateClickability
// (BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::UpdateClickability()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.UpdateClickability");

	ACreativeDrone_C_UpdateClickability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.HandlePictureTaken
// (BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::HandlePictureTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.HandlePictureTaken");

	ACreativeDrone_C_HandlePictureTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.TakePhoto
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACreativeDrone_C::TakePhoto()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.TakePhoto");

	ACreativeDrone_C_TakePhoto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeDrone.CreativeDrone_C.ExecuteUbergraph_CreativeDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreativeDrone_C::ExecuteUbergraph_CreativeDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeDrone.CreativeDrone_C.ExecuteUbergraph_CreativeDrone");

	ACreativeDrone_C_ExecuteUbergraph_CreativeDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
