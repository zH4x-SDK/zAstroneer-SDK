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

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Get Target
struct Uvehicle_crane_large_bp_C_Get_Target_Params
{
	struct FVector                                     World_Location;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate Crane
struct Uvehicle_crane_large_bp_C_Calculate_Crane_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Set Target
struct Uvehicle_crane_large_bp_C_Set_Target_Params
{
	struct FVector                                     World_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     World_Direction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate IK
struct Uvehicle_crane_large_bp_C_Calculate_IK_Params
{
	float                                              Distance_1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance_2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target_X_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target_Y;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out_Angle_1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Out_Angle_2;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11
struct Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11_Params
{
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.BlueprintUpdateAnimation
struct Uvehicle_crane_large_bp_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.ExecuteUbergraph_vehicle_crane_large_bp
struct Uvehicle_crane_large_bp_C_ExecuteUbergraph_vehicle_crane_large_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
