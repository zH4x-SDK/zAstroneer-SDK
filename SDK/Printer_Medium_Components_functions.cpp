
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

// Function Printer_Medium_Components.Printer_Medium_Components_C.ConvertToSmallFabricator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Medium_Components_C::ConvertToSmallFabricator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Medium_Components.Printer_Medium_Components_C.ConvertToSmallFabricator");

	APrinter_Medium_Components_C_ConvertToSmallFabricator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Medium_Components.Printer_Medium_Components_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* APrinter_Medium_Components_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Medium_Components.Printer_Medium_Components_C.GetBodySlotLegacy");

	APrinter_Medium_Components_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Printer_Medium_Components.Printer_Medium_Components_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Medium_Components_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Medium_Components.Printer_Medium_Components_C.UserConstructionScript");

	APrinter_Medium_Components_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Medium_Components.Printer_Medium_Components_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinter_Medium_Components_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Medium_Components.Printer_Medium_Components_C.ReceiveBeginPlay");

	APrinter_Medium_Components_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Medium_Components.Printer_Medium_Components_C.ExecuteUbergraph_Printer_Medium_Components
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Medium_Components_C::ExecuteUbergraph_Printer_Medium_Components(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Medium_Components.Printer_Medium_Components_C.ExecuteUbergraph_Printer_Medium_Components");

	APrinter_Medium_Components_C_ExecuteUbergraph_Printer_Medium_Components_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
