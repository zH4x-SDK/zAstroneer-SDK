
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

// Function GlobalPostProcess.GlobalPostProcess_C.SetPlayerTints
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void AGlobalPostProcess_C::SetPlayerTints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.SetPlayerTints");

	AGlobalPostProcess_C_SetPlayerTints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGlobalPostProcess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.UserConstructionScript");

	AGlobalPostProcess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AGlobalPostProcess_C::InpActEvt_Semicolon_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_2");

	AGlobalPostProcess_C_InpActEvt_Semicolon_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Apostrophe_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AGlobalPostProcess_C::InpActEvt_Apostrophe_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Apostrophe_K2Node_InputKeyEvent_1");

	AGlobalPostProcess_C_InpActEvt_Apostrophe_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPostProcess_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.ReceiveTick");

	AGlobalPostProcess_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGlobalPostProcess_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.ReceiveBeginPlay");

	AGlobalPostProcess_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPostProcess.GlobalPostProcess_C.ExecuteUbergraph_GlobalPostProcess
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPostProcess_C::ExecuteUbergraph_GlobalPostProcess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPostProcess.GlobalPostProcess_C.ExecuteUbergraph_GlobalPostProcess");

	AGlobalPostProcess_C_ExecuteUbergraph_GlobalPostProcess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
