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

// Function PlanetProxy_BP.PlanetProxy_BP_C.UserConstructionScript
struct APlanetProxy_BP_C_UserConstructionScript_Params
{
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.ReceiveBeginPlay
struct APlanetProxy_BP_C_ReceiveBeginPlay_Params
{
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.OnSpawn
struct APlanetProxy_BP_C_OnSpawn_Params
{
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.OnClicked_Event_1
struct APlanetProxy_BP_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.OnOrbitAxisUpdated_Event_1
struct APlanetProxy_BP_C_OnOrbitAxisUpdated_Event_1_Params
{
	struct FVector                                     NewOrbitAxis;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionBegin
struct APlanetProxy_BP_C_OnLocalPlayerPlanetSelectionBegin_Params
{
	class ASolarBody*                                  playerHomeBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.OnLocalPlayerPlanetSelectionEnd
struct APlanetProxy_BP_C_OnLocalPlayerPlanetSelectionEnd_Params
{
};

// Function PlanetProxy_BP.PlanetProxy_BP_C.ExecuteUbergraph_PlanetProxy_BP
struct APlanetProxy_BP_C_ExecuteUbergraph_PlanetProxy_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
