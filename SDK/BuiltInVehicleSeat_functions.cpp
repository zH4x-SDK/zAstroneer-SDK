
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

// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuiltInVehicleSeat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.UserConstructionScript");

	ABuiltInVehicleSeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ABuiltInVehicleSeat_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.PickedUpFromWorld");

	ABuiltInVehicleSeat_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABuiltInVehicleSeat_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.DroppedInWorld");

	ABuiltInVehicleSeat_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.HandlePlayerEnterExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuiltInVehicleSeat_C::HandlePlayerEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.HandlePlayerEnterExit");

	ABuiltInVehicleSeat_C_HandlePlayerEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuiltInVehicleSeat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ReceiveBeginPlay");

	ABuiltInVehicleSeat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ExecuteUbergraph_BuiltInVehicleSeat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuiltInVehicleSeat_C::ExecuteUbergraph_BuiltInVehicleSeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuiltInVehicleSeat.BuiltInVehicleSeat_C.ExecuteUbergraph_BuiltInVehicleSeat");

	ABuiltInVehicleSeat_C_ExecuteUbergraph_BuiltInVehicleSeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
