
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

// Function Filter_Bundle.Filter_Bundle_C.Apply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFilter_Bundle_C::Apply(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_Bundle.Filter_Bundle_C.Apply");

	AFilter_Bundle_C_Apply_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_Bundle.Filter_Bundle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFilter_Bundle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_Bundle.Filter_Bundle_C.UserConstructionScript");

	AFilter_Bundle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_Bundle.Filter_Bundle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFilter_Bundle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_Bundle.Filter_Bundle_C.ReceiveBeginPlay");

	AFilter_Bundle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_Bundle.Filter_Bundle_C.OnChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void AFilter_Bundle_C::OnChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_Bundle.Filter_Bundle_C.OnChanged_Event_1");

	AFilter_Bundle_C_OnChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_Bundle.Filter_Bundle_C.ExecuteUbergraph_Filter_Bundle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFilter_Bundle_C::ExecuteUbergraph_Filter_Bundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_Bundle.Filter_Bundle_C.ExecuteUbergraph_Filter_Bundle");

	AFilter_Bundle_C_ExecuteUbergraph_Filter_Bundle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
