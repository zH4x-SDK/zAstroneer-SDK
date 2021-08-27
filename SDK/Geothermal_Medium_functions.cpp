
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

// Function Geothermal_Medium.Geothermal_Medium_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AGeothermal_Medium_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.GetBodySlotLegacy");

	AGeothermal_Medium_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Geothermal_Medium.Geothermal_Medium_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGeothermal_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.UserConstructionScript");

	AGeothermal_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geothermal_Medium.Geothermal_Medium_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeothermal_Medium_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.ReceiveTick");

	AGeothermal_Medium_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geothermal_Medium.Geothermal_Medium_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeothermal_Medium_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.PlacedInSlot");

	AGeothermal_Medium_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geothermal_Medium.Geothermal_Medium_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeothermal_Medium_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.ReleasedFromSlot");

	AGeothermal_Medium_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geothermal_Medium.Geothermal_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeothermal_Medium_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature");

	AGeothermal_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Geothermal_Medium.Geothermal_Medium_C.ExecuteUbergraph_Geothermal_Medium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGeothermal_Medium_C::ExecuteUbergraph_Geothermal_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Geothermal_Medium.Geothermal_Medium_C.ExecuteUbergraph_Geothermal_Medium");

	AGeothermal_Medium_C_ExecuteUbergraph_Geothermal_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
