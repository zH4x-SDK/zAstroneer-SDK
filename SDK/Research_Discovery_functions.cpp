
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

// Function Research_Discovery.Research_Discovery_C.OnRep_REP Taken
// (BlueprintCallable, BlueprintEvent)

void AResearch_Discovery_C::OnRep_REP_Taken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.OnRep_REP Taken");

	AResearch_Discovery_C_OnRep_REP_Taken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.Update Animation
// (Public, BlueprintCallable, BlueprintEvent)

void AResearch_Discovery_C::Update_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.Update Animation");

	AResearch_Discovery_C_Update_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.OnRep_REP Researched
// (BlueprintCallable, BlueprintEvent)

void AResearch_Discovery_C::OnRep_REP_Researched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.OnRep_REP Researched");

	AResearch_Discovery_C_OnRep_REP_Researched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AResearch_Discovery_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.GetBodySlotLegacy");

	AResearch_Discovery_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Research_Discovery.Research_Discovery_C.Do Research
// (Public, BlueprintCallable, BlueprintEvent)

void AResearch_Discovery_C::Do_Research()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.Do Research");

	AResearch_Discovery_C_Do_Research_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResearch_Discovery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.UserConstructionScript");

	AResearch_Discovery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResearch_Discovery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.ReceiveBeginPlay");

	AResearch_Discovery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.OnReleaseItem_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearch_Discovery_C::OnReleaseItem_Event_1(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.OnReleaseItem_Event_1");

	AResearch_Discovery_C_OnReleaseItem_Event_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearch_Discovery_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature");

	AResearch_Discovery_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Research_Discovery.Research_Discovery_C.ExecuteUbergraph_Research_Discovery
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearch_Discovery_C::ExecuteUbergraph_Research_Discovery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Research_Discovery.Research_Discovery_C.ExecuteUbergraph_Research_Discovery");

	AResearch_Discovery_C_ExecuteUbergraph_Research_Discovery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
