
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

// Function Seat_Small_Cab.Seat_Small_Cab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeat_Small_Cab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.UserConstructionScript");

	ASeat_Small_Cab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASeat_Small_Cab_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.PickedUpFromWorld");

	ASeat_Small_Cab_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASeat_Small_Cab_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.DroppedInWorld");

	ASeat_Small_Cab_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.HandlePlayerEnterExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Small_Cab_C::HandlePlayerEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.HandlePlayerEnterExit");

	ASeat_Small_Cab_C_HandlePlayerEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.CheckEjectPlayer
// (BlueprintCallable, BlueprintEvent)

void ASeat_Small_Cab_C::CheckEjectPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.CheckEjectPlayer");

	ASeat_Small_Cab_C_CheckEjectPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.MULTICAST_PlayDetachSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASeat_Small_Cab_C::MULTICAST_PlayDetachSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.MULTICAST_PlayDetachSound");

	ASeat_Small_Cab_C_MULTICAST_PlayDetachSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Small_Cab.Seat_Small_Cab_C.ExecuteUbergraph_Seat_Small_Cab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Small_Cab_C::ExecuteUbergraph_Seat_Small_Cab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Small_Cab.Seat_Small_Cab_C.ExecuteUbergraph_Seat_Small_Cab");

	ASeat_Small_Cab_C_ExecuteUbergraph_Seat_Small_Cab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
