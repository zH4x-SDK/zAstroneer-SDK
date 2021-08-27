
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

// Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAmbient_Radiated_Billow_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.UserConstructionScript");

	AAmbient_Radiated_Billow_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAmbient_Radiated_Billow_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.ReceiveTick");

	AAmbient_Radiated_Billow_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.ExecuteUbergraph_Ambient_Radiated_Billow_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAmbient_Radiated_Billow_01_C::ExecuteUbergraph_Ambient_Radiated_Billow_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ambient_Radiated_Billow_01.Ambient_Radiated_Billow_01_C.ExecuteUbergraph_Ambient_Radiated_Billow_01");

	AAmbient_Radiated_Billow_01_C_ExecuteUbergraph_Ambient_Radiated_Billow_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
