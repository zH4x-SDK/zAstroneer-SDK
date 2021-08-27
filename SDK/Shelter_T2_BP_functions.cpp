
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

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_GetTetherCircularAttachPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCircularAttachPoint> Array                          (Parm, OutParm, ZeroConstructor)

void AShelter_T2_BP_C::CHILD_GetTetherCircularAttachPoints(TArray<struct FCircularAttachPoint>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_GetTetherCircularAttachPoints");

	AShelter_T2_BP_C_CHILD_GetTetherCircularAttachPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.UserConstructionScript");

	AShelter_T2_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShelter_T2_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveBeginPlay");

	AShelter_T2_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::CHILD_SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlots");

	AShelter_T2_BP_C_CHILD_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlotMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::CHILD_SetupCableSlotMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlotMaterials");

	AShelter_T2_BP_C_CHILD_SetupCableSlotMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimDoorOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDoorOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_T2_BP_C::CHILD_SetAnimDoorOpen(bool IsDoorOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimDoorOpen");

	AShelter_T2_BP_C_CHILD_SetAnimDoorOpen_Params params;
	params.IsDoorOpen = IsDoorOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupAnimRef
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::CHILD_SetupAnimRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupAnimRef");

	AShelter_T2_BP_C_CHILD_SetupAnimRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimUnpackedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPreUnpacked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_T2_BP_C::CHILD_SetAnimUnpackedState(bool IsPreUnpacked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimUnpackedState");

	AShelter_T2_BP_C_CHILD_SetAnimUnpackedState_Params params;
	params.IsPreUnpacked = IsPreUnpacked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AShelter_T2_BP_C::BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AShelter_T2_BP_C_BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AShelter_T2_BP_C::BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AShelter_T2_BP_C_BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.SetLightsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_T2_BP_C::SetLightsEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.SetLightsEnabled");

	AShelter_T2_BP_C_SetLightsEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayOxygenSoundLoop
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::CHILD_PlayOxygenSoundLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayOxygenSoundLoop");

	AShelter_T2_BP_C_CHILD_PlayOxygenSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayPowerSoundLoop
// (Public, BlueprintCallable, BlueprintEvent)

void AShelter_T2_BP_C::CHILD_PlayPowerSoundLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayPowerSoundLoop");

	AShelter_T2_BP_C_CHILD_PlayPowerSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_T2_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveEndPlay");

	AShelter_T2_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_T2_BP.Shelter_T2_BP_C.ExecuteUbergraph_Shelter_T2_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_T2_BP_C::ExecuteUbergraph_Shelter_T2_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_T2_BP.Shelter_T2_BP_C.ExecuteUbergraph_Shelter_T2_BP");

	AShelter_T2_BP_C_ExecuteUbergraph_Shelter_T2_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
