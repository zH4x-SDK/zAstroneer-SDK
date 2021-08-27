
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

// Function Knocker_Static_02_State_Service.Knocker_Static_02_State_Service_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKnocker_Static_02_State_Service_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Knocker_Static_02_State_Service.Knocker_Static_02_State_Service_C.ReceiveTickAI");

	UKnocker_Static_02_State_Service_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knocker_Static_02_State_Service.Knocker_Static_02_State_Service_C.ExecuteUbergraph_Knocker_Static_02_State_Service
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKnocker_Static_02_State_Service_C::ExecuteUbergraph_Knocker_Static_02_State_Service(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Knocker_Static_02_State_Service.Knocker_Static_02_State_Service_C.ExecuteUbergraph_Knocker_Static_02_State_Service");

	UKnocker_Static_02_State_Service_C_ExecuteUbergraph_Knocker_Static_02_State_Service_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
