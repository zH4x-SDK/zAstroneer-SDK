
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

// Function PlayTogether.PlayTogether_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayTogether_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayTogether.PlayTogether_C.Destruct");

	UPlayTogether_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayTogether.PlayTogether_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayTogether_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayTogether.PlayTogether_C.Construct");

	UPlayTogether_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayTogether.PlayTogether_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayTogether_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayTogether.PlayTogether_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UPlayTogether_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayTogether.PlayTogether_C.ExecuteUbergraph_PlayTogether
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayTogether_C::ExecuteUbergraph_PlayTogether(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayTogether.PlayTogether_C.ExecuteUbergraph_PlayTogether");

	UPlayTogether_C_ExecuteUbergraph_PlayTogether_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
