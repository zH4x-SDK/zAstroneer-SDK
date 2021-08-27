
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

// Function Geyser.Geyser_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGeyser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Geyser.Geyser_C.UserConstructionScript");

	AGeyser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geyser.Geyser_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeyser_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geyser.Geyser_C.ReceiveTick");

	AGeyser_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geyser.Geyser_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeyser_C::BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geyser.Geyser_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature");

	AGeyser_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_3_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geyser.Geyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGeyser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Geyser.Geyser_C.ReceiveBeginPlay");

	AGeyser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geyser.Geyser_C.ExecuteUbergraph_Geyser
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeyser_C::ExecuteUbergraph_Geyser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geyser.Geyser_C.ExecuteUbergraph_Geyser");

	AGeyser_C_ExecuteUbergraph_Geyser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
