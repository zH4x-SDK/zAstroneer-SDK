
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

// Function SessionOperationInProgressWidget.SessionOperationInProgressWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USessionOperationInProgressWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SessionOperationInProgressWidget.SessionOperationInProgressWidget_C.Construct");

	USessionOperationInProgressWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SessionOperationInProgressWidget.SessionOperationInProgressWidget_C.ExecuteUbergraph_SessionOperationInProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USessionOperationInProgressWidget_C::ExecuteUbergraph_SessionOperationInProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SessionOperationInProgressWidget.SessionOperationInProgressWidget_C.ExecuteUbergraph_SessionOperationInProgressWidget");

	USessionOperationInProgressWidget_C_ExecuteUbergraph_SessionOperationInProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
