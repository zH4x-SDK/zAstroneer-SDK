
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

// Function ReconnectController.ReconnectController_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReconnectController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReconnectController.ReconnectController_C.Construct");

	UReconnectController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReconnectController.ReconnectController_C.ExecuteUbergraph_ReconnectController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReconnectController_C::ExecuteUbergraph_ReconnectController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReconnectController.ReconnectController_C.ExecuteUbergraph_ReconnectController");

	UReconnectController_C_ExecuteUbergraph_ReconnectController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
