
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

// Function Seat_Medium_SS.Seat_Medium_SS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeat_Medium_SS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Medium_SS.Seat_Medium_SS_C.UserConstructionScript");

	ASeat_Medium_SS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Medium_SS.Seat_Medium_SS_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Medium_SS_C::CustomEvent(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Medium_SS.Seat_Medium_SS_C.CustomEvent");

	ASeat_Medium_SS_C_CustomEvent_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Medium_SS.Seat_Medium_SS_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASeat_Medium_SS_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Medium_SS.Seat_Medium_SS_C.PickedUpFromWorld");

	ASeat_Medium_SS_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Medium_SS.Seat_Medium_SS_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASeat_Medium_SS_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Medium_SS.Seat_Medium_SS_C.DroppedInWorld");

	ASeat_Medium_SS_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seat_Medium_SS.Seat_Medium_SS_C.ExecuteUbergraph_Seat_Medium_SS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeat_Medium_SS_C::ExecuteUbergraph_Seat_Medium_SS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seat_Medium_SS.Seat_Medium_SS_C.ExecuteUbergraph_Seat_Medium_SS");

	ASeat_Medium_SS_C_ExecuteUbergraph_Seat_Medium_SS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
