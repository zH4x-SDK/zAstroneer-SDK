
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

// Function BundledItemBase.BundledItemBase_C.PerformUnbundlingBehaviorOnUse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABundledItemBase_C::PerformUnbundlingBehaviorOnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.PerformUnbundlingBehaviorOnUse");

	ABundledItemBase_C_PerformUnbundlingBehaviorOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.UpdateUnbundlingUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void ABundledItemBase_C::UpdateUnbundlingUseSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.UpdateUnbundlingUseSuppression");

	ABundledItemBase_C_UpdateUnbundlingUseSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABundledItemBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.UserConstructionScript");

	ABundledItemBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABundledItemBase_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ABundledItemBase_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABundledItemBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.ReceiveBeginPlay");

	ABundledItemBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABundledItemBase_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.CustomEvent_1");

	ABundledItemBase_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABundledItemBase_C::CustomEvent_2(bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.CustomEvent_2");

	ABundledItemBase_C_CustomEvent_2_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundledItemBase.BundledItemBase_C.ExecuteUbergraph_BundledItemBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABundledItemBase_C::ExecuteUbergraph_BundledItemBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BundledItemBase.BundledItemBase_C.ExecuteUbergraph_BundledItemBase");

	ABundledItemBase_C_ExecuteUbergraph_BundledItemBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
