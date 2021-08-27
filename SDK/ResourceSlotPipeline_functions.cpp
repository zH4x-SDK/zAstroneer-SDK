
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

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.AcceptsItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AResourceSlotPipeline_C::AcceptsItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotPipeline.ResourceSlotPipeline_C.AcceptsItem");

	AResourceSlotPipeline_C_AcceptsItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResourceSlotPipeline.ResourceSlotPipeline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceSlotPipeline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotPipeline.ResourceSlotPipeline_C.UserConstructionScript");

	AResourceSlotPipeline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionBuilt
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceSlotPipeline_C::OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionBuilt");

	AResourceSlotPipeline_C_OnConnectionBuilt_Params params;
	params.Connection = Connection;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChildSlotComponent*     Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceSlotPipeline_C::OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionDestroyed");

	AResourceSlotPipeline_C_OnConnectionDestroyed_Params params;
	params.Other = Other;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceSlotPipeline.ResourceSlotPipeline_C.ExecuteUbergraph_ResourceSlotPipeline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceSlotPipeline_C::ExecuteUbergraph_ResourceSlotPipeline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotPipeline.ResourceSlotPipeline_C.ExecuteUbergraph_ResourceSlotPipeline");

	AResourceSlotPipeline_C_ExecuteUbergraph_ResourceSlotPipeline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
