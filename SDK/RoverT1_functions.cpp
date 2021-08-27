
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

// Function RoverT1.RoverT1_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flipped                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SeatOccupied                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::UpdateUseContext(bool Flipped, bool SeatOccupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.UpdateUseContext");

	ARoverT1_C_UpdateUseContext_Params params;
	params.Flipped = Flipped;
	params.SeatOccupied = SeatOccupied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.OnRep_REP_INIT_BuiltInSeatRef
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::OnRep_REP_INIT_BuiltInSeatRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.OnRep_REP_INIT_BuiltInSeatRef");

	ARoverT1_C_OnRep_REP_INIT_BuiltInSeatRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.SERVER_CreateBuiltInSeat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::SERVER_CreateBuiltInSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SERVER_CreateBuiltInSeat");

	ARoverT1_C_SERVER_CreateBuiltInSeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.GetUnbundleOriginFromAuxSlot
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          AuxSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutForward                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARoverT1_C::GetUnbundleOriginFromAuxSlot(const struct FSlotReference& AuxSlot, int SubslotIndex, struct FVector* OutLocation, struct FVector* OutForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.GetUnbundleOriginFromAuxSlot");

	ARoverT1_C_GetUnbundleOriginFromAuxSlot_Params params;
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


// Function RoverT1.RoverT1_C.SetupGenerationGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::SetupGenerationGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SetupGenerationGaugeMaterial");

	ARoverT1_C_SetupGenerationGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function RoverT1.RoverT1_C.SetupConsumptionGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MatRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::SetupConsumptionGaugeMaterial(class UMaterialInstanceDynamic** MatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SetupConsumptionGaugeMaterial");

	ARoverT1_C_SetupConsumptionGaugeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatRef != nullptr)
		*MatRef = params.MatRef;
}


// Function RoverT1.RoverT1_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.UserConstructionScript");

	ARoverT1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ARoverT1_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ARoverT1_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.SetupAuxSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::SetupAuxSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SetupAuxSlots");

	ARoverT1_C_SetupAuxSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SetupCableSlots");

	ARoverT1_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.OnBuiltInSeatEnterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::OnBuiltInSeatEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.OnBuiltInSeatEnterExit");

	ARoverT1_C_OnBuiltInSeatEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARoverT1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.ReceiveBeginPlay");

	ARoverT1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.ReceiveEndPlay");

	ARoverT1_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.OnPowerCableConnectionChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          cableSlot                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ConnectionMade                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::OnPowerCableConnectionChanged(const struct FSlotReference& cableSlot, bool ConnectionMade)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.OnPowerCableConnectionChanged");

	ARoverT1_C_OnPowerCableConnectionChanged_Params params;
	params.cableSlot = cableSlot;
	params.ConnectionMade = ConnectionMade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.UpdateAuxSlotAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlotEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AuxSlotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::UpdateAuxSlotAnims(bool SlotEnabled, int AuxSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.UpdateAuxSlotAnims");

	ARoverT1_C_UpdateAuxSlotAnims_Params params;
	params.SlotEnabled = SlotEnabled;
	params.AuxSlotIndex = AuxSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.SetupAnimBP");

	ARoverT1_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.InitializeAuxSlotsEnabled
// (Private, BlueprintCallable, BlueprintEvent)

void ARoverT1_C::InitializeAuxSlotsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.InitializeAuxSlotsEnabled");

	ARoverT1_C_InitializeAuxSlotsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.UpdateUseSuppression
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ShouldBeSuppressed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::UpdateUseSuppression(bool ShouldBeSuppressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.UpdateUseSuppression");

	ARoverT1_C_UpdateUseSuppression_Params params;
	params.ShouldBeSuppressed = ShouldBeSuppressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoverT1.RoverT1_C.ExecuteUbergraph_RoverT1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoverT1_C::ExecuteUbergraph_RoverT1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoverT1.RoverT1_C.ExecuteUbergraph_RoverT1");

	ARoverT1_C_ExecuteUbergraph_RoverT1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
