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

// Function crane_large_bp.crane_large_bp_C.Get Target
struct Ucrane_large_bp_C_Get_Target_Params
{
	struct FVector                                     World_Location;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function crane_large_bp.crane_large_bp_C.Calculate Crane
struct Ucrane_large_bp_C_Calculate_Crane_Params
{
};

// Function crane_large_bp.crane_large_bp_C.Set Target
struct Ucrane_large_bp_C_Set_Target_Params
{
	struct FVector                                     World_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     World_Direction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function crane_large_bp.crane_large_bp_C.Calculate IK
struct Ucrane_large_bp_C_Calculate_IK_Params
{
	float                                              Distance_1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance_2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target_X_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target_Y;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out_Angle_1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Out_Angle_2;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF_Params
{
};

// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147
struct Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147_Params
{
};

// Function crane_large_bp.crane_large_bp_C.BlueprintUpdateAnimation
struct Ucrane_large_bp_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function crane_large_bp.crane_large_bp_C.ExecuteUbergraph_crane_large_bp
struct Ucrane_large_bp_C_ExecuteUbergraph_crane_large_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
