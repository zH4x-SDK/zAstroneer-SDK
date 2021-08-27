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

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.GetGoalText
struct UPersistentObjectiveHeader_C_GetGoalText_Params
{
	struct FText                                       GoalText;                                                 // (Parm, OutParm)
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.SetHeaderAndGoal
struct UPersistentObjectiveHeader_C_SetHeaderAndGoal_Params
{
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       GoalText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CompleteGoal;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.UpdateObjectiveGoal
struct UPersistentObjectiveHeader_C_UpdateObjectiveGoal_Params
{
	struct FText                                       GoalText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CompletePrevious;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.Construct
struct UPersistentObjectiveHeader_C_Construct_Params
{
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideOutStart
struct UPersistentObjectiveHeader_C_OnGoalSlideOutStart_Params
{
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideInStart
struct UPersistentObjectiveHeader_C_OnGoalSlideInStart_Params
{
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.ExecuteUbergraph_PersistentObjectiveHeader
struct UPersistentObjectiveHeader_C_ExecuteUbergraph_PersistentObjectiveHeader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnHide__DelegateSignature
struct UPersistentObjectiveHeader_C_OnHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
