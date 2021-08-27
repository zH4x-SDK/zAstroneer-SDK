
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

// Function SedimentHose.SedimentHose_C.CreateWireMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ASedimentHose_C::CreateWireMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.CreateWireMaterial");

	ASedimentHose_C_CreateWireMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.OnRep_REP FlowActive
// (BlueprintCallable, BlueprintEvent)

void ASedimentHose_C::OnRep_REP_FlowActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.OnRep_REP FlowActive");

	ASedimentHose_C_OnRep_REP_FlowActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.SetSedimentFlowActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlowActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::SetSedimentFlowActive(bool FlowActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.SetSedimentFlowActive");

	ASedimentHose_C_SetSedimentFlowActive_Params params;
	params.FlowActive = FlowActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.SetSedimentFlowRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FlowRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::SetSedimentFlowRate(float FlowRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.SetSedimentFlowRate");

	ASedimentHose_C_SetSedimentFlowRate_Params params;
	params.FlowRate = FlowRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.SetSedimentColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASedimentHose_C::SetSedimentColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.SetSedimentColor");

	ASedimentHose_C_SetSedimentColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.UpdateConnectorSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::UpdateConnectorSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.UpdateConnectorSpeed");

	ASedimentHose_C_UpdateConnectorSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.Set Flow
// (Public, BlueprintCallable, BlueprintEvent)

void ASedimentHose_C::Set_Flow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.Set Flow");

	ASedimentHose_C_Set_Flow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASedimentHose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.UserConstructionScript");

	ASedimentHose_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.OnHoverOtherSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ASedimentHose_C::OnHoverOtherSlot(const struct FSlotReference& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.OnHoverOtherSlot");

	ASedimentHose_C_OnHoverOtherSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.ReceiveTick");

	ASedimentHose_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature(float Alpha, class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature");

	ASedimentHose_C_BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature_Params params;
	params.Alpha = Alpha;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASedimentHose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.ReceiveBeginPlay");

	ASedimentHose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentHose.SedimentHose_C.ExecuteUbergraph_SedimentHose
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentHose_C::ExecuteUbergraph_SedimentHose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentHose.SedimentHose_C.ExecuteUbergraph_SedimentHose");

	ASedimentHose_C_ExecuteUbergraph_SedimentHose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
