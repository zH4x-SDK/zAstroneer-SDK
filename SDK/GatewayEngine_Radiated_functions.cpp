
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

// Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_Radiated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.UserConstructionScript");

	AGatewayEngine_Radiated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGatewayEngine_Radiated_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.ReceiveBeginPlay");

	AGatewayEngine_Radiated_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.AwardPlanetEngineAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_Radiated_C::AwardPlanetEngineAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.AwardPlanetEngineAchievement");

	AGatewayEngine_Radiated_C_AwardPlanetEngineAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.ExecuteUbergraph_GatewayEngine_Radiated
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayEngine_Radiated_C::ExecuteUbergraph_GatewayEngine_Radiated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Radiated.GatewayEngine_Radiated_C.ExecuteUbergraph_GatewayEngine_Radiated");

	AGatewayEngine_Radiated_C_ExecuteUbergraph_GatewayEngine_Radiated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
