
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

// Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_ExoticMoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.UserConstructionScript");

	AGatewayEngine_ExoticMoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGatewayEngine_ExoticMoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.ReceiveBeginPlay");

	AGatewayEngine_ExoticMoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.AwardPlanetEngineAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_ExoticMoon_C::AwardPlanetEngineAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.AwardPlanetEngineAchievement");

	AGatewayEngine_ExoticMoon_C_AwardPlanetEngineAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.ExecuteUbergraph_GatewayEngine_ExoticMoon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayEngine_ExoticMoon_C::ExecuteUbergraph_GatewayEngine_ExoticMoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_ExoticMoon.GatewayEngine_ExoticMoon_C.ExecuteUbergraph_GatewayEngine_ExoticMoon");

	AGatewayEngine_ExoticMoon_C_ExecuteUbergraph_GatewayEngine_ExoticMoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
