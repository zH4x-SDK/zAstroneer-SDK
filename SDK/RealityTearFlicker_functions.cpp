
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

// Function RealityTearFlicker.RealityTearFlicker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARealityTearFlicker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RealityTearFlicker.RealityTearFlicker_C.UserConstructionScript");

	ARealityTearFlicker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealityTearFlicker.RealityTearFlicker_C.BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARealityTearFlicker_C::BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RealityTearFlicker.RealityTearFlicker_C.BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");

	ARealityTearFlicker_C_BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealityTearFlicker.RealityTearFlicker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARealityTearFlicker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RealityTearFlicker.RealityTearFlicker_C.ReceiveBeginPlay");

	ARealityTearFlicker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealityTearFlicker.RealityTearFlicker_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARealityTearFlicker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RealityTearFlicker.RealityTearFlicker_C.ReceiveEndPlay");

	ARealityTearFlicker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealityTearFlicker.RealityTearFlicker_C.ExecuteUbergraph_RealityTearFlicker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARealityTearFlicker_C::ExecuteUbergraph_RealityTearFlicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RealityTearFlicker.RealityTearFlicker_C.ExecuteUbergraph_RealityTearFlicker");

	ARealityTearFlicker_C_ExecuteUbergraph_RealityTearFlicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
