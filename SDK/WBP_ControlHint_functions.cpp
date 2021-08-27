
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

// Function WBP_ControlHint.WBP_ControlHint_C.SetNewDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewDesc                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ControlHint_C::SetNewDescriptionText(const struct FText& NewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHint.WBP_ControlHint_C.SetNewDescriptionText");

	UWBP_ControlHint_C_SetNewDescriptionText_Params params;
	params.NewDesc = NewDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHint.WBP_ControlHint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControlHint_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHint.WBP_ControlHint_C.PreConstruct");

	UWBP_ControlHint_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHint.WBP_ControlHint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ControlHint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHint.WBP_ControlHint_C.Construct");

	UWBP_ControlHint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControlHint.WBP_ControlHint_C.ExecuteUbergraph_WBP_ControlHint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControlHint_C::ExecuteUbergraph_WBP_ControlHint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControlHint.WBP_ControlHint_C.ExecuteUbergraph_WBP_ControlHint");

	UWBP_ControlHint_C_ExecuteUbergraph_WBP_ControlHint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
