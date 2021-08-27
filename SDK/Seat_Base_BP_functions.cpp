
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

// Function Seat_Base_BP.Seat_Base_BP_C.HandlePlayerEnterExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::HandlePlayerEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.HandlePlayerEnterExit");

	ASeat_Base_BP_C_HandlePlayerEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.ToggleHeadlamps
// (Public, BlueprintCallable, BlueprintEvent)

void ASeat_Base_BP_C::ToggleHeadlamps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.ToggleHeadlamps");

	ASeat_Base_BP_C_ToggleHeadlamps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASeat_Base_BP_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.GetBodySlotLegacy");

	ASeat_Base_BP_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Seat_Base_BP.Seat_Base_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeat_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.UserConstructionScript");

	ASeat_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASeat_Base_BP_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ASeat_Base_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature");

	ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             ClickQuery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature");

	ASeat_Base_BP_C_BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature_Params params;
	params.ClickQuery = ClickQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  OriginatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;
	params.OriginatingController = OriginatingController;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  OriginatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;
	params.OriginatingController = OriginatingController;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASeat_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.ReceiveBeginPlay");

	ASeat_Base_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ASeat_Base_BP_C::BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ASeat_Base_BP_C_BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Base_BP.Seat_Base_BP_C.ExecuteUbergraph_Seat_Base_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Base_BP_C::ExecuteUbergraph_Seat_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Base_BP.Seat_Base_BP_C.ExecuteUbergraph_Seat_Base_BP");

	ASeat_Base_BP_C_ExecuteUbergraph_Seat_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
