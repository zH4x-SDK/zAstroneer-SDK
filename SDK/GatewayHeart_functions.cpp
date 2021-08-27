
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

// Function GatewayHeart.GatewayHeart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayHeart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayHeart.GatewayHeart_C.UserConstructionScript");

	AGatewayHeart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayHeart.GatewayHeart_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AGatewayHeart_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayHeart.GatewayHeart_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AGatewayHeart_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayHeart.GatewayHeart_C.ExecuteUbergraph_GatewayHeart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayHeart_C::ExecuteUbergraph_GatewayHeart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayHeart.GatewayHeart_C.ExecuteUbergraph_GatewayHeart");

	AGatewayHeart_C_ExecuteUbergraph_GatewayHeart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
