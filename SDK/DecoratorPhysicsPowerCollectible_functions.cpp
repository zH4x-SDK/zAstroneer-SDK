
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

// Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADecoratorPhysicsPowerCollectible_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.UserConstructionScript");

	ADecoratorPhysicsPowerCollectible_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADecoratorPhysicsPowerCollectible_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.ReceiveBeginPlay");

	ADecoratorPhysicsPowerCollectible_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.OnArrived_Event_1
// (BlueprintCallable, BlueprintEvent)

void ADecoratorPhysicsPowerCollectible_C::OnArrived_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.OnArrived_Event_1");

	ADecoratorPhysicsPowerCollectible_C_OnArrived_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.ExecuteUbergraph_DecoratorPhysicsPowerCollectible
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoratorPhysicsPowerCollectible_C::ExecuteUbergraph_DecoratorPhysicsPowerCollectible(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoratorPhysicsPowerCollectible.DecoratorPhysicsPowerCollectible_C.ExecuteUbergraph_DecoratorPhysicsPowerCollectible");

	ADecoratorPhysicsPowerCollectible_C_ExecuteUbergraph_DecoratorPhysicsPowerCollectible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
