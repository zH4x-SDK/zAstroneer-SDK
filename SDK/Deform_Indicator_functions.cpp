
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

// Function Deform_Indicator.Deform_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeform_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deform_Indicator.Deform_Indicator_C.UserConstructionScript");

	ADeform_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deform_Indicator.Deform_Indicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeform_Indicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deform_Indicator.Deform_Indicator_C.ReceiveTick");

	ADeform_Indicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deform_Indicator.Deform_Indicator_C.ExecuteUbergraph_Deform_Indicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeform_Indicator_C::ExecuteUbergraph_Deform_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deform_Indicator.Deform_Indicator_C.ExecuteUbergraph_Deform_Indicator");

	ADeform_Indicator_C_ExecuteUbergraph_Deform_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
