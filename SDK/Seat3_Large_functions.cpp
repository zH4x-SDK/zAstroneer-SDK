
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

// Function Seat3_Large.Seat3_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeat3_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.UserConstructionScript");

	ASeat3_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat3_Large.Seat3_Large_C.HandlePlayerEnterExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat3_Large_C::HandlePlayerEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.HandlePlayerEnterExit");

	ASeat3_Large_C_HandlePlayerEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat3_Large.Seat3_Large_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASeat3_Large_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.PickedUpFromWorld");

	ASeat3_Large_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat3_Large.Seat3_Large_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASeat3_Large_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.DroppedInWorld");

	ASeat3_Large_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat3_Large.Seat3_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASeat3_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.ReceiveBeginPlay");

	ASeat3_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat3_Large.Seat3_Large_C.ExecuteUbergraph_Seat3_Large
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat3_Large_C::ExecuteUbergraph_Seat3_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat3_Large.Seat3_Large_C.ExecuteUbergraph_Seat3_Large");

	ASeat3_Large_C_ExecuteUbergraph_Seat3_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
