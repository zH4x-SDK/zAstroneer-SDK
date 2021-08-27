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

// AnimBlueprintGeneratedClass crane_large_bp.crane_large_bp_C
// 0x0660 (0x0A30 - 0x03D0)
class Ucrane_large_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33CD1F7E4E629EB75C64ADB8BE52EACB;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_4FD3DF6D4DC4B4B359B2A4B1DDBCF7EA;// 0x0420(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147;// 0x0450(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_70E35848467E223B2060AF8EDF51ABD2;// 0x0508(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF;// 0x0550(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D;// 0x0608(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387;// 0x06C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5;// 0x0778(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7;// 0x0830(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E;// 0x08E8(0x00B8)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crane_large_bp.crane_large_bp_C");
		return ptr;
	}


	void Get_Target(struct FVector* World_Location);
	void Calculate_Crane();
	void Set_Target(const struct FVector& World_Location, const struct FVector& World_Direction);
	void Calculate_IK(float Distance_1, float Distance_2, float Target_X_, float Target_Y, float* Out_Angle_1, float* Out_Angle_2);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_crane_large_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
