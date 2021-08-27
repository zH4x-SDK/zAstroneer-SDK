
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

// Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_TerranMoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.UserConstructionScript");

	AGatewayEngine_TerranMoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGatewayEngine_TerranMoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.ReceiveBeginPlay");

	AGatewayEngine_TerranMoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.AwardPlanetEngineAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_TerranMoon_C::AwardPlanetEngineAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.AwardPlanetEngineAchievement");

	AGatewayEngine_TerranMoon_C_AwardPlanetEngineAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.ExecuteUbergraph_GatewayEngine_TerranMoon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayEngine_TerranMoon_C::ExecuteUbergraph_GatewayEngine_TerranMoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C.ExecuteUbergraph_GatewayEngine_TerranMoon");

	AGatewayEngine_TerranMoon_C_ExecuteUbergraph_GatewayEngine_TerranMoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
