
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

// Function PlanetProxy_BP.PlanetProxy_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlanetProxy_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.UserConstructionScript");

	APlanetProxy_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlanetProxy_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.ReceiveBeginPlay");

	APlanetProxy_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.OnSpawn
// (Event, Public, BlueprintEvent)

void APlanetProxy_BP_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.OnSpawn");

	APlanetProxy_BP_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlanetProxy_BP_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.OnClicked_Event_1");

	APlanetProxy_BP_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.OnOrbitAxisUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewOrbitAxis                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlanetProxy_BP_C::OnOrbitAxisUpdated_Event_1(const struct FVector& NewOrbitAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.OnOrbitAxisUpdated_Event_1");

	APlanetProxy_BP_C_OnOrbitAxisUpdated_Event_1_Params params;
	params.NewOrbitAxis = NewOrbitAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASolarBody*              playerHomeBody                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetProxy_BP_C::OnLocalPlayerPlanetSelectionBegin(class ASolarBody* playerHomeBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionBegin");

	APlanetProxy_BP_C_OnLocalPlayerPlanetSelectionBegin_Params params;
	params.playerHomeBody = playerHomeBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionEnd
// (Event, Public, BlueprintEvent)

void APlanetProxy_BP_C::OnLocalPlayerPlanetSelectionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionEnd");

	APlanetProxy_BP_C_OnLocalPlayerPlanetSelectionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlanetProxy_BP.PlanetProxy_BP_C.ExecuteUbergraph_PlanetProxy_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlanetProxy_BP_C::ExecuteUbergraph_PlanetProxy_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlanetProxy_BP.PlanetProxy_BP_C.ExecuteUbergraph_PlanetProxy_BP");

	APlanetProxy_BP_C_ExecuteUbergraph_PlanetProxy_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
