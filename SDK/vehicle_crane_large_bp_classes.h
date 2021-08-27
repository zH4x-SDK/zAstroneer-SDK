#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass vehicle_crane_large_bp.vehicle_crane_large_bp_C
// 0x0660 (0x0A30 - 0x03D0)
class Uvehicle_crane_large_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4DB4F40044F62CF16D21F782D1E7075B;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_4E78B935473F019E4D2B56B35B5E0AC5;// 0x0420(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11;// 0x0450(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A281B78A40292354B4DD2E924C55BE39;// 0x0508(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525;// 0x0550(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77;// 0x0608(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7;// 0x06C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA;// 0x0778(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03;// 0x0830(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679;// 0x08E8(0x00B8)
	struct FVector                                     Crane_Target_Local;                                       // 0x09A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Solve_for_Positive_Angle_2;                               // 0x09AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	float                                              Angle1;                                                   // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle2;                                                   // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Arm1_Stretch;                                             // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Arm2_Stretch;                                             // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Angle;                                               // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_2;                                                 // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Root_Rotation;                                            // 0x09C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Crane_Target_Socket_Local;                                // 0x09D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotation_Float;                                           // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Root_Rot_Local;                                           // 0x09E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Effector_Normal_Local;                                    // 0x09F4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Head_Rotation;                                            // 0x0A00(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Offset_Head_Rot;                                          // 0x0A0C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Head_Rot_1;                                               // 0x0A18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Head_Rot_2;                                               // 0x0A24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass vehicle_crane_large_bp.vehicle_crane_large_bp_C");
		return ptr;
	}


	void Get_Target(struct FVector* World_Location);
	void Calculate_Crane();
	void Set_Target(const struct FVector& World_Location, const struct FVector& World_Direction);
	void Calculate_IK(float Distance_1, float Distance_2, float Target_X_, float Target_Y, float* Out_Angle_1, float* Out_Angle_2);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_vehicle_crane_large_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
