
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

// Function Planet_Effect_Base.Planet_Effect_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlanet_Effect_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Effect_Base.Planet_Effect_Base_C.UserConstructionScript");

	APlanet_Effect_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Effect_Base.Planet_Effect_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Effect_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Effect_Base.Planet_Effect_Base_C.ReceiveTick");

	APlanet_Effect_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Effect_Base.Planet_Effect_Base_C.ExecuteUbergraph_Planet_Effect_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Effect_Base_C::ExecuteUbergraph_Planet_Effect_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Effect_Base.Planet_Effect_Base_C.ExecuteUbergraph_Planet_Effect_Base");

	APlanet_Effect_Base_C_ExecuteUbergraph_Planet_Effect_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
