
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

// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAstro_Gates_GameMode_Instance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.UserConstructionScript");

	AAstro_Gates_GameMode_Instance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAstro_Gates_GameMode_Instance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ReceiveBeginPlay");

	AAstro_Gates_GameMode_Instance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.OnLifecycleStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameLifecycleState            OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGameLifecycleState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Gates_GameMode_Instance_C::OnLifecycleStateChange(EGameLifecycleState OldState, EGameLifecycleState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.OnLifecycleStateChange");

	AAstro_Gates_GameMode_Instance_C_OnLifecycleStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ExecuteUbergraph_Astro_Gates_GameMode_Instance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstro_Gates_GameMode_Instance_C::ExecuteUbergraph_Astro_Gates_GameMode_Instance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ExecuteUbergraph_Astro_Gates_GameMode_Instance");

	AAstro_Gates_GameMode_Instance_C_ExecuteUbergraph_Astro_Gates_GameMode_Instance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
