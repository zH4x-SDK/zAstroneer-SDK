
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

// Function Planet_Marker.Planet_Marker_C.HandleSolarSystemReady
// (Public, BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::HandleSolarSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.HandleSolarSystemReady");

	APlanet_Marker_C_HandleSolarSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.HandlePlanetMarkerSelected
// (Public, BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::HandlePlanetMarkerSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.HandlePlanetMarkerSelected");

	APlanet_Marker_C_HandlePlanetMarkerSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.OnRep_Reserved
// (BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::OnRep_Reserved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.OnRep_Reserved");

	APlanet_Marker_C_OnRep_Reserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.UserConstructionScript");

	APlanet_Marker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlanet_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.ReceiveBeginPlay");

	APlanet_Marker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlanet_Marker_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.OnClicked_Event_1");

	APlanet_Marker_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.OnLandSelectionBegin_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarBody*              Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Marker_C::OnLandSelectionBegin_Event_1(class ASolarBody* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.OnLandSelectionBegin_Event_1");

	APlanet_Marker_C_OnLandSelectionBegin_Event_1_Params params;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.OnLandSelectionEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::OnLandSelectionEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.OnLandSelectionEnd_Event_1");

	APlanet_Marker_C_OnLandSelectionEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void APlanet_Marker_C::BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	APlanet_Marker_C_BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.OnSolarSystemReady
// (BlueprintCallable, BlueprintEvent)

void APlanet_Marker_C::OnSolarSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.OnSolarSystemReady");

	APlanet_Marker_C_OnSolarSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Marker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.ReceiveEndPlay");

	APlanet_Marker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Marker_C::BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");

	APlanet_Marker_C_BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Marker_C::BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");

	APlanet_Marker_C_BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Planet_Marker.Planet_Marker_C.ExecuteUbergraph_Planet_Marker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanet_Marker_C::ExecuteUbergraph_Planet_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Planet_Marker.Planet_Marker_C.ExecuteUbergraph_Planet_Marker");

	APlanet_Marker_C_ExecuteUbergraph_Planet_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
