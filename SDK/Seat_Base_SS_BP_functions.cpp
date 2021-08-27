
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

// Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeat_Base_SS_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.UserConstructionScript");

	ASeat_Base_SS_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_SetLandedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Landed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_SS_BP_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_SetLandedDelegate__DelegateSignature(bool Landed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_SetLandedDelegate__DelegateSignature");

	ASeat_Base_SS_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_SetLandedDelegate__DelegateSignature_Params params;
	params.Landed = Landed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_SS_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.ReceiveTick");

	ASeat_Base_SS_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.ExecuteUbergraph_Seat_Base_SS_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_SS_BP_C::ExecuteUbergraph_Seat_Base_SS_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_SS_BP.Seat_Base_SS_BP_C.ExecuteUbergraph_Seat_Base_SS_BP");

	ASeat_Base_SS_BP_C_ExecuteUbergraph_Seat_Base_SS_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
