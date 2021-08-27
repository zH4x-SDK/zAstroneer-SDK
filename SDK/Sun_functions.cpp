
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

// Function Sun.Sun_C.Set Intensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASun_C::Set_Intensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sun.Sun_C.Set Intensity");

	ASun_C_Set_Intensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sun.Sun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sun.Sun_C.UserConstructionScript");

	ASun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sun.Sun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sun.Sun_C.ReceiveBeginPlay");

	ASun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sun.Sun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sun.Sun_C.ReceiveTick");

	ASun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sun.Sun_C.ExecuteUbergraph_Sun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASun_C::ExecuteUbergraph_Sun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sun.Sun_C.ExecuteUbergraph_Sun");

	ASun_C_ExecuteUbergraph_Sun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
