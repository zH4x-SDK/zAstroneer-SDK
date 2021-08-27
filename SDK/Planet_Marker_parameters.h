#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Planet_Marker.Planet_Marker_C.HandleSolarSystemReady
struct APlanet_Marker_C_HandleSolarSystemReady_Params
{
};

// Function Planet_Marker.Planet_Marker_C.HandlePlanetMarkerSelected
struct APlanet_Marker_C_HandlePlanetMarkerSelected_Params
{
};

// Function Planet_Marker.Planet_Marker_C.OnRep_Reserved
struct APlanet_Marker_C_OnRep_Reserved_Params
{
};

// Function Planet_Marker.Planet_Marker_C.UserConstructionScript
struct APlanet_Marker_C_UserConstructionScript_Params
{
};

// Function Planet_Marker.Planet_Marker_C.ReceiveBeginPlay
struct APlanet_Marker_C_ReceiveBeginPlay_Params
{
};

// Function Planet_Marker.Planet_Marker_C.OnClicked_Event_1
struct APlanet_Marker_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Planet_Marker.Planet_Marker_C.OnLandSelectionBegin_Event_1
struct APlanet_Marker_C_OnLandSelectionBegin_Event_1_Params
{
	class ASolarBody*                                  Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Planet_Marker.Planet_Marker_C.OnLandSelectionEnd_Event_1
struct APlanet_Marker_C_OnLandSelectionEnd_Event_1_Params
{
};

// Function Planet_Marker.Planet_Marker_C.BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APlanet_Marker_C_BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Planet_Marker.Planet_Marker_C.OnSolarSystemReady
struct APlanet_Marker_C_OnSolarSystemReady_Params
{
};

// Function Planet_Marker.Planet_Marker_C.ReceiveEndPlay
struct APlanet_Marker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct APlanet_Marker_C_BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Planet_Marker.Planet_Marker_C.BndEvt__Visible Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
struct APlanet_Marker_C_BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Planet_Marker.Planet_Marker_C.ExecuteUbergraph_Planet_Marker
struct APlanet_Marker_C_ExecuteUbergraph_Planet_Marker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
