
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

// Function Shuttle_XLarge.Shuttle_XLarge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShuttle_XLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_XLarge.Shuttle_XLarge_C.UserConstructionScript");

	AShuttle_XLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_XLarge.Shuttle_XLarge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShuttle_XLarge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_XLarge.Shuttle_XLarge_C.ReceiveBeginPlay");

	AShuttle_XLarge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_XLarge.Shuttle_XLarge_C.ExecuteUbergraph_Shuttle_XLarge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_XLarge_C::ExecuteUbergraph_Shuttle_XLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_XLarge.Shuttle_XLarge_C.ExecuteUbergraph_Shuttle_XLarge");

	AShuttle_XLarge_C_ExecuteUbergraph_Shuttle_XLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
