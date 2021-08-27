
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

// Function PressAToStart.PressAToStart_C.OnPressAToastComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UPressAToStart_C::OnPressAToastComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.OnPressAToastComplete");

	UPressAToStart_C_OnPressAToastComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.TryWelcomeControllingPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPressAToStart_C::TryWelcomeControllingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.TryWelcomeControllingPlayer");

	UPressAToStart_C_TryWelcomeControllingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.OnFadeOutComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UPressAToStart_C::OnFadeOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.OnFadeOutComplete");

	UPressAToStart_C_OnFadeOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.StartFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UPressAToStart_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.StartFadeOut");

	UPressAToStart_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPressAToStart_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.OnKeyDown");

	UPressAToStart_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PressAToStart.PressAToStart_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPressAToStart_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.Tick");

	UPressAToStart_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPressAToStart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.Construct");

	UPressAToStart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.OnControllingPlayerSet
// (BlueprintCallable, BlueprintEvent)

void UPressAToStart_C::OnControllingPlayerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.OnControllingPlayerSet");

	UPressAToStart_C_OnControllingPlayerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPressAToStart_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.Destruct");

	UPressAToStart_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressAToStart.PressAToStart_C.ExecuteUbergraph_PressAToStart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPressAToStart_C::ExecuteUbergraph_PressAToStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressAToStart.PressAToStart_C.ExecuteUbergraph_PressAToStart");

	UPressAToStart_C_ExecuteUbergraph_PressAToStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
