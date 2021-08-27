
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

// Function Power_Cell_Bundle.Power_Cell_Bundle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APower_Cell_Bundle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Power_Cell_Bundle.Power_Cell_Bundle_C.UserConstructionScript");

	APower_Cell_Bundle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power_Cell_Bundle.Power_Cell_Bundle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APower_Cell_Bundle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Power_Cell_Bundle.Power_Cell_Bundle_C.ReceiveBeginPlay");

	APower_Cell_Bundle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power_Cell_Bundle.Power_Cell_Bundle_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_ChargeLevelChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewCharge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APower_Cell_Bundle_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_ChargeLevelChangedEvent__DelegateSignature(float NewCharge, float ChargeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power_Cell_Bundle.Power_Cell_Bundle_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_ChargeLevelChangedEvent__DelegateSignature");

	APower_Cell_Bundle_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_ChargeLevelChangedEvent__DelegateSignature_Params params;
	params.NewCharge = NewCharge;
	params.ChargeDelta = ChargeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Power_Cell_Bundle.Power_Cell_Bundle_C.ExecuteUbergraph_Power_Cell_Bundle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APower_Cell_Bundle_C::ExecuteUbergraph_Power_Cell_Bundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Power_Cell_Bundle.Power_Cell_Bundle_C.ExecuteUbergraph_Power_Cell_Bundle");

	APower_Cell_Bundle_C_ExecuteUbergraph_Power_Cell_Bundle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
