
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

// Function Game_Tutorial.Game_Tutorial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGame_Tutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Game_Tutorial.Game_Tutorial_C.UserConstructionScript");

	AGame_Tutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Game_Tutorial.Game_Tutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGame_Tutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Game_Tutorial.Game_Tutorial_C.ReceiveBeginPlay");

	AGame_Tutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Game_Tutorial.Game_Tutorial_C.OnTutorialNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           First                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowText                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGame_Tutorial_C::OnTutorialNotify(const struct FName& Name, bool First, bool ShowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Game_Tutorial.Game_Tutorial_C.OnTutorialNotify");

	AGame_Tutorial_C_OnTutorialNotify_Params params;
	params.Name = Name;
	params.First = First;
	params.ShowText = ShowText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Game_Tutorial.Game_Tutorial_C.ExecuteUbergraph_Game_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGame_Tutorial_C::ExecuteUbergraph_Game_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Game_Tutorial.Game_Tutorial_C.ExecuteUbergraph_Game_Tutorial");

	AGame_Tutorial_C_ExecuteUbergraph_Game_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
