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

// Function TutorialInfoMesh.TutorialInfoMesh_C.DisplayRelevantControllerKeys
struct ATutorialInfoMesh_C_DisplayRelevantControllerKeys_Params
{
};

// Function TutorialInfoMesh.TutorialInfoMesh_C.UserConstructionScript
struct ATutorialInfoMesh_C_UserConstructionScript_Params
{
};

// Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveBeginPlay
struct ATutorialInfoMesh_C_ReceiveBeginPlay_Params
{
};

// Function TutorialInfoMesh.TutorialInfoMesh_C.ReceiveTick
struct ATutorialInfoMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialInfoMesh.TutorialInfoMesh_C.ExecuteUbergraph_TutorialInfoMesh
struct ATutorialInfoMesh_C_ExecuteUbergraph_TutorialInfoMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
