
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

// Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADropship_ShelterSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.UserConstructionScript");

	ADropship_ShelterSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.BndEvt__StorageChassis_K2Node_ComponentBoundEvent_1_EnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_ShelterSpawner_C::BndEvt__StorageChassis_K2Node_ComponentBoundEvent_1_EnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.BndEvt__StorageChassis_K2Node_ComponentBoundEvent_1_EnterExitSignal__DelegateSignature");

	ADropship_ShelterSpawner_C_BndEvt__StorageChassis_K2Node_ComponentBoundEvent_1_EnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.ExecuteUbergraph_Dropship_ShelterSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_ShelterSpawner_C::ExecuteUbergraph_Dropship_ShelterSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_ShelterSpawner.Dropship_ShelterSpawner_C.ExecuteUbergraph_Dropship_ShelterSpawner");

	ADropship_ShelterSpawner_C_ExecuteUbergraph_Dropship_ShelterSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
