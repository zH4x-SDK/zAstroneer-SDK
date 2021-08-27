
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

// Function TutorialActor.TutorialActor_C.Hide Text
// (Public, BlueprintCallable, BlueprintEvent)

void ATutorialActor_C::Hide_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.Hide Text");

	ATutorialActor_C_Hide_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.Set Tutorial Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ATutorialActor_C::Set_Tutorial_Text(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.Set Tutorial Text");

	ATutorialActor_C_Set_Tutorial_Text_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.Push Tutorial UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorialActor_C::Push_Tutorial_UI(const struct FText& Text, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.Push Tutorial UI");

	ATutorialActor_C_Push_Tutorial_UI_Params params;
	params.Text = Text;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATutorialActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.UserConstructionScript");

	ATutorialActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATutorialActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.ReceiveBeginPlay");

	ATutorialActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.Text Visibility
// (BlueprintCallable, BlueprintEvent)

void ATutorialActor_C::Text_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.Text Visibility");

	ATutorialActor_C_Text_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.Check Queue
// (BlueprintCallable, BlueprintEvent)

void ATutorialActor_C::Check_Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.Check Queue");

	ATutorialActor_C_Check_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ATutorialActor_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.CustomEvent_1");

	ATutorialActor_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialActor.TutorialActor_C.ExecuteUbergraph_TutorialActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATutorialActor_C::ExecuteUbergraph_TutorialActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialActor.TutorialActor_C.ExecuteUbergraph_TutorialActor");

	ATutorialActor_C_ExecuteUbergraph_TutorialActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
