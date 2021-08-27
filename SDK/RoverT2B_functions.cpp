
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

// Function RoverT2B.RoverT2B_C.GetUnbundleOriginFromAuxSlot
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          AuxSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutForward                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARoverT2B_C::GetUnbundleOriginFromAuxSlot(const struct FSlotReference& AuxSlot, int SubslotIndex, struct FVector* OutLocation, struct FVector* OutForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.GetUnbundleOriginFromAuxSlot");

	ARoverT2B_C_GetUnbundleOriginFromAuxSlot_Params params;
	params.AuxSlot = AuxSlot;
	params.SubslotIndex = SubslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutForward != nullptr)
		*OutForward = params.OutForward;

	return params.ReturnValue;
}


// Function RoverT2B.RoverT2B_C.SetupGenerationGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARoverT2B_C::SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.SetupGenerationGaugeMaterial");

	ARoverT2B_C_SetupGenerationGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function RoverT2B.RoverT2B_C.SetupConsumptionGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARoverT2B_C::SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.SetupConsumptionGaugeMaterial");

	ARoverT2B_C_SetupConsumptionGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function RoverT2B.RoverT2B_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoverT2B_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.UserConstructionScript");

	ARoverT2B_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT2B_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.SetupAnimBP");

	ARoverT2B_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.SetupAuxSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT2B_C::SetupAuxSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.SetupAuxSlots");

	ARoverT2B_C_SetupAuxSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT2B_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.SetupCableSlots");

	ARoverT2B_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.UpdateAuxSlotAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlotEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AuxSlotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT2B_C::UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.UpdateAuxSlotAnims");

	ARoverT2B_C_UpdateAuxSlotAnims_Params params;
	params.SlotEnabled = SlotEnabled;
	params.AuxSlotIndex = AuxSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             ClickQuery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT2B_C::BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature");

	ARoverT2B_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature_Params params;
	params.ClickQuery = ClickQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT2B.RoverT2B_C.ExecuteUbergraph_RoverT2B
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT2B_C::ExecuteUbergraph_RoverT2B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT2B.RoverT2B_C.ExecuteUbergraph_RoverT2B");

	ARoverT2B_C_ExecuteUbergraph_RoverT2B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
