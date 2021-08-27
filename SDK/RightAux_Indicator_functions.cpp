
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

// Function RightAux_Indicator.RightAux_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARightAux_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightAux_Indicator.RightAux_Indicator_C.UserConstructionScript");

	ARightAux_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightAux_Indicator.RightAux_Indicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARightAux_Indicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightAux_Indicator.RightAux_Indicator_C.ReceiveTick");

	ARightAux_Indicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightAux_Indicator.RightAux_Indicator_C.ExecuteUbergraph_RightAux_Indicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARightAux_Indicator_C::ExecuteUbergraph_RightAux_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightAux_Indicator.RightAux_Indicator_C.ExecuteUbergraph_RightAux_Indicator");

	ARightAux_Indicator_C_ExecuteUbergraph_RightAux_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
