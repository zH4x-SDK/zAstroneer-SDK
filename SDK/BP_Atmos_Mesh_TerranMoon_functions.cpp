
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

// Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Atmos_Mesh_TerranMoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.UserConstructionScript");

	ABP_Atmos_Mesh_TerranMoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsEventActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Atmos_Mesh_TerranMoon_C::BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature(const struct FString& EventName, bool bIsEventActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature");

	ABP_Atmos_Mesh_TerranMoon_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature_Params params;
	params.EventName = EventName;
	params.bIsEventActive = bIsEventActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         activeEventsOfInterest         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Atmos_Mesh_TerranMoon_C::BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature(TArray<struct FString>* activeEventsOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature");

	ABP_Atmos_Mesh_TerranMoon_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (activeEventsOfInterest != nullptr)
		*activeEventsOfInterest = params.activeEventsOfInterest;
}


// Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Atmos_Mesh_TerranMoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.ReceiveBeginPlay");

	ABP_Atmos_Mesh_TerranMoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.ExecuteUbergraph_BP_Atmos_Mesh_TerranMoon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Atmos_Mesh_TerranMoon_C::ExecuteUbergraph_BP_Atmos_Mesh_TerranMoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Atmos_Mesh_TerranMoon.BP_Atmos_Mesh_TerranMoon_C.ExecuteUbergraph_BP_Atmos_Mesh_TerranMoon");

	ABP_Atmos_Mesh_TerranMoon_C_ExecuteUbergraph_BP_Atmos_Mesh_TerranMoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
