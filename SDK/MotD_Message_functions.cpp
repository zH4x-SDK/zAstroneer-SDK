
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

// Function MotD_Message.MotD_Message_C.GetMessageText
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMotD_Message_C::GetMessageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotD_Message.MotD_Message_C.GetMessageText");

	UMotD_Message_C_GetMessageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MotD_Message.MotD_Message_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMotD_Message_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotD_Message.MotD_Message_C.SetupStylingData");

	UMotD_Message_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotD_Message.MotD_Message_C.ExecuteUbergraph_MotD_Message
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMotD_Message_C::ExecuteUbergraph_MotD_Message(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotD_Message.MotD_Message_C.ExecuteUbergraph_MotD_Message");

	UMotD_Message_C_ExecuteUbergraph_MotD_Message_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
