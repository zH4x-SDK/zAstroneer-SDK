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

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ObjectiveCompleted
struct UPersistentObjectiveContainer_C_ObjectiveCompleted_Params
{
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.UpdateObjectiveGoal
struct UPersistentObjectiveContainer_C_UpdateObjectiveGoal_Params
{
	struct FText                                       GoalText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CompletePrevGoal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.SetObjective
struct UPersistentObjectiveContainer_C_SetObjective_Params
{
	struct FText                                       ObjectiveText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       GoalText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CompletePrevObj;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.Construct
struct UPersistentObjectiveContainer_C_Construct_Params
{
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideInStart
struct UPersistentObjectiveContainer_C_OnObjectiveSlideInStart_Params
{
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideOutStart
struct UPersistentObjectiveContainer_C_OnObjectiveSlideOutStart_Params
{
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ExecuteUbergraph_PersistentObjectiveContainer
struct UPersistentObjectiveContainer_C_ExecuteUbergraph_PersistentObjectiveContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnHide__DelegateSignature
struct UPersistentObjectiveContainer_C_OnHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
