
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

// Function LeftAux_Indicator.LeftAux_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALeftAux_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftAux_Indicator.LeftAux_Indicator_C.UserConstructionScript");

	ALeftAux_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftAux_Indicator.LeftAux_Indicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeftAux_Indicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftAux_Indicator.LeftAux_Indicator_C.ReceiveTick");

	ALeftAux_Indicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftAux_Indicator.LeftAux_Indicator_C.ExecuteUbergraph_LeftAux_Indicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeftAux_Indicator_C::ExecuteUbergraph_LeftAux_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftAux_Indicator.LeftAux_Indicator_C.ExecuteUbergraph_LeftAux_Indicator");

	ALeftAux_Indicator_C_ExecuteUbergraph_LeftAux_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
