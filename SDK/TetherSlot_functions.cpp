
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

// Function TetherSlot.TetherSlot_C.AcceptsConnection
// (BlueprintCallable, BlueprintEvent)

void ATetherSlot_C::AcceptsConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherSlot.TetherSlot_C.AcceptsConnection");

	ATetherSlot_C_AcceptsConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherSlot.TetherSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATetherSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherSlot.TetherSlot_C.UserConstructionScript");

	ATetherSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherSlot.TetherSlot_C.OnConnectionBuilt
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherSlot_C::OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherSlot.TetherSlot_C.OnConnectionBuilt");

	ATetherSlot_C_OnConnectionBuilt_Params params;
	params.Connection = Connection;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherSlot.TetherSlot_C.OnConnectionDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChildSlotComponent*     Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherSlot_C::OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherSlot.TetherSlot_C.OnConnectionDestroyed");

	ATetherSlot_C_OnConnectionDestroyed_Params params;
	params.Other = Other;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherSlot.TetherSlot_C.ExecuteUbergraph_TetherSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATetherSlot_C::ExecuteUbergraph_TetherSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherSlot.TetherSlot_C.ExecuteUbergraph_TetherSlot");

	ATetherSlot_C_ExecuteUbergraph_TetherSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
