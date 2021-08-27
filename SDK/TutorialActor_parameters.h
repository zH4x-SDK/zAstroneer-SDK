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

// Function TutorialActor.TutorialActor_C.Hide Text
struct ATutorialActor_C_Hide_Text_Params
{
};

// Function TutorialActor.TutorialActor_C.Set Tutorial Text
struct ATutorialActor_C_Set_Tutorial_Text_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TutorialActor.TutorialActor_C.Push Tutorial UI
struct ATutorialActor_C_Push_Tutorial_UI_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialActor.TutorialActor_C.UserConstructionScript
struct ATutorialActor_C_UserConstructionScript_Params
{
};

// Function TutorialActor.TutorialActor_C.ReceiveBeginPlay
struct ATutorialActor_C_ReceiveBeginPlay_Params
{
};

// Function TutorialActor.TutorialActor_C.Text Visibility
struct ATutorialActor_C_Text_Visibility_Params
{
};

// Function TutorialActor.TutorialActor_C.Check Queue
struct ATutorialActor_C_Check_Queue_Params
{
};

// Function TutorialActor.TutorialActor_C.CustomEvent_1
struct ATutorialActor_C_CustomEvent_1_Params
{
};

// Function TutorialActor.TutorialActor_C.ExecuteUbergraph_TutorialActor
struct ATutorialActor_C_ExecuteUbergraph_TutorialActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
