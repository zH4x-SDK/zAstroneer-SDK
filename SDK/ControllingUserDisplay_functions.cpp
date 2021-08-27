
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

// Function ControllingUserDisplay.ControllingUserDisplay_C.GetFriendsInGameSizeY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControllingUserDisplay_C::GetFriendsInGameSizeY(float* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.GetFriendsInGameSizeY");

	UControllingUserDisplay_C_GetFriendsInGameSizeY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.GetWidestFriendInGameSizeX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControllingUserDisplay_C::GetWidestFriendInGameSizeX(float* SizeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.GetWidestFriendInGameSizeX");

	UControllingUserDisplay_C_GetWidestFriendInGameSizeX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSizing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControllingUserDisplay_C::UpdateSizing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSizing");

	UControllingUserDisplay_C_UpdateSizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControllingUserDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.Construct");

	UControllingUserDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSessionText
// (BlueprintCallable, BlueprintEvent)

void UControllingUserDisplay_C::UpdateSessionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.UpdateSessionText");

	UControllingUserDisplay_C_UpdateSessionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControllingUserDisplay_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.Destruct");

	UControllingUserDisplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllingUserDisplay.ControllingUserDisplay_C.ExecuteUbergraph_ControllingUserDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControllingUserDisplay_C::ExecuteUbergraph_ControllingUserDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllingUserDisplay.ControllingUserDisplay_C.ExecuteUbergraph_ControllingUserDisplay");

	UControllingUserDisplay_C_ExecuteUbergraph_ControllingUserDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
