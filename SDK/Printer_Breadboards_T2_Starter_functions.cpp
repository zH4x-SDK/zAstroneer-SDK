
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

// Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T2_Starter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.UserConstructionScript");

	APrinter_Breadboards_T2_Starter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinter_Breadboards_T2_Starter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.ReceiveBeginPlay");

	APrinter_Breadboards_T2_Starter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.HandleItemUnpacked
// (BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T2_Starter_C::HandleItemUnpacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.HandleItemUnpacked");

	APrinter_Breadboards_T2_Starter_C_HandleItemUnpacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.ExecuteUbergraph_Printer_Breadboards_T2_Starter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_T2_Starter_C::ExecuteUbergraph_Printer_Breadboards_T2_Starter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C.ExecuteUbergraph_Printer_Breadboards_T2_Starter");

	APrinter_Breadboards_T2_Starter_C_ExecuteUbergraph_Printer_Breadboards_T2_Starter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
