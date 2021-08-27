
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

// Function PowerSlot_Body.PowerSlot_Body_C.Do View Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::Do_View_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Do View Target");

	APowerSlot_Body_C_Do_View_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.AcceptsConnection
// (BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::AcceptsConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.AcceptsConnection");

	APowerSlot_Body_C_AcceptsConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::Do_Connection_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Destroy");

	APowerSlot_Body_C_Do_Connection_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Built
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::Do_Connection_Built(bool Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Built");

	APowerSlot_Body_C_Do_Connection_Built_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.UserConstructionScript");

	APowerSlot_Body_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)

void APowerSlot_Body_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorBeginCursorOver");

	APowerSlot_Body_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)

void APowerSlot_Body_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorEndCursorOver");

	APowerSlot_Body_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.Connection Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::Connection_Destroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Connection Destroyed");

	APowerSlot_Body_C_Connection_Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionBuilt
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionBuilt");

	APowerSlot_Body_C_OnConnectionBuilt_Params params;
	params.Connection = Connection;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChildSlotComponent*     Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionDestroyed");

	APowerSlot_Body_C_OnConnectionDestroyed_Params params;
	params.Other = Other;
	params.IsSource = IsSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.OnBuildingConnection
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASlotConnection*         Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::OnBuildingConnection(class ASlotConnection* Connection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.OnBuildingConnection");

	APowerSlot_Body_C_OnBuildingConnection_Params params;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APowerSlot_Body_C::BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature");

	APowerSlot_Body_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature_Params params;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature
// (BlueprintEvent)

void APowerSlot_Body_C::BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature");

	APowerSlot_Body_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.Set View Timer
// (BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::Set_View_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Set View Timer");

	APowerSlot_Body_C_Set_View_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.Clear View Timer
// (BlueprintCallable, BlueprintEvent)

void APowerSlot_Body_C::Clear_View_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.Clear View Timer");

	APowerSlot_Body_C_Clear_View_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSlot_Body.PowerSlot_Body_C.ExecuteUbergraph_PowerSlot_Body
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSlot_Body_C::ExecuteUbergraph_PowerSlot_Body(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSlot_Body.PowerSlot_Body_C.ExecuteUbergraph_PowerSlot_Body");

	APowerSlot_Body_C_ExecuteUbergraph_PowerSlot_Body_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
