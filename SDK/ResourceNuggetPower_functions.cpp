
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

// Function ResourceNuggetPower.ResourceNuggetPower_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNuggetPower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetPower.ResourceNuggetPower_C.UserConstructionScript");

	AResourceNuggetPower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNuggetPower.ResourceNuggetPower_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_ChargeLevelChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewCharge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNuggetPower_C::BndEvt__Power_K2Node_ComponentBoundEvent_1_ChargeLevelChangedEvent__DelegateSignature(float NewCharge, float ChargeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetPower.ResourceNuggetPower_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_ChargeLevelChangedEvent__DelegateSignature");

	AResourceNuggetPower_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_ChargeLevelChangedEvent__DelegateSignature_Params params;
	params.NewCharge = NewCharge;
	params.ChargeDelta = ChargeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNuggetPower.ResourceNuggetPower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResourceNuggetPower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetPower.ResourceNuggetPower_C.ReceiveBeginPlay");

	AResourceNuggetPower_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNuggetPower.ResourceNuggetPower_C.ExecuteUbergraph_ResourceNuggetPower
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNuggetPower_C::ExecuteUbergraph_ResourceNuggetPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetPower.ResourceNuggetPower_C.ExecuteUbergraph_ResourceNuggetPower");

	AResourceNuggetPower_C_ExecuteUbergraph_ResourceNuggetPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
