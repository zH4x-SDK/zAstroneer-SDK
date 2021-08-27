
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

// Function GatewayEngine_Arid.GatewayEngine_Arid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_Arid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Arid.GatewayEngine_Arid_C.UserConstructionScript");

	AGatewayEngine_Arid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Arid.GatewayEngine_Arid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGatewayEngine_Arid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Arid.GatewayEngine_Arid_C.ReceiveBeginPlay");

	AGatewayEngine_Arid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Arid.GatewayEngine_Arid_C.AwardPlanetEngineAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayEngine_Arid_C::AwardPlanetEngineAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Arid.GatewayEngine_Arid_C.AwardPlanetEngineAchievement");

	AGatewayEngine_Arid_C_AwardPlanetEngineAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayEngine_Arid.GatewayEngine_Arid_C.ExecuteUbergraph_GatewayEngine_Arid
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayEngine_Arid_C::ExecuteUbergraph_GatewayEngine_Arid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayEngine_Arid.GatewayEngine_Arid_C.ExecuteUbergraph_GatewayEngine_Arid");

	AGatewayEngine_Arid_C_ExecuteUbergraph_GatewayEngine_Arid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
