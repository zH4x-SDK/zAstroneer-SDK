
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

// Function VehicleDrill_Base.VehicleDrill_Base_C.GetSubtractParticleEffect
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HardnessDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* AVehicleDrill_Base_C::GetSubtractParticleEffect(int HardnessDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.GetSubtractParticleEffect");

	AVehicleDrill_Base_C_GetSubtractParticleEffect_Params params;
	params.HardnessDelta = HardnessDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.UpdateBurnoffParticleEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDrill_Base_C::UpdateBurnoffParticleEffects(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.UpdateBurnoffParticleEffects");

	AVehicleDrill_Base_C_UpdateBurnoffParticleEffects_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AVehicleDrill_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.GetBodySlotLegacy");

	AVehicleDrill_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVehicleDrill_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.UserConstructionScript");

	AVehicleDrill_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleDrill_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.ReceiveBeginPlay");

	AVehicleDrill_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioEventIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDrill_Base_C::CustomEvent(int AudioEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent");

	AVehicleDrill_Base_C_CustomEvent_Params params;
	params.AudioEventIndex = AudioEventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioEventIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDrill_Base_C::CustomEvent_2(int AudioEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.CustomEvent_2");

	AVehicleDrill_Base_C_CustomEvent_2_Params params;
	params.AudioEventIndex = AudioEventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.CHILD_UpdateToolVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleDrill_Base_C::CHILD_UpdateToolVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.CHILD_UpdateToolVisualState");

	AVehicleDrill_Base_C_CHILD_UpdateToolVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDrill_Base.VehicleDrill_Base_C.ExecuteUbergraph_VehicleDrill_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDrill_Base_C::ExecuteUbergraph_VehicleDrill_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDrill_Base.VehicleDrill_Base_C.ExecuteUbergraph_VehicleDrill_Base");

	AVehicleDrill_Base_C_ExecuteUbergraph_VehicleDrill_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
