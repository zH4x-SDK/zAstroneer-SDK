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

// AnimBlueprintGeneratedClass RoverT1_AnimBP.RoverT1_AnimBP_C
// 0x129A (0x17AA - 0x0510)
class URoverT1_AnimBP_C : public UWheeledChassisAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_084A6DA344724934594B158BA88C4E2D;      // 0x0518(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_54F4BC964C9E03CCA50E29A0158607AA;// 0x0560(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22A8CFCA4485FE763D1A7CA84990E986;// 0x0590(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_166D22BC4E3AE53C1A7EC6856F6EF4E8;// 0x0648(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20520BD2489EF1FB2077A08435FFB330;// 0x0700(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3665910E4EDB84E75164AB9DF7F8164C;// 0x07B8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7745CBBE4227CDB96222C095E498B4B4;// 0x0870(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F8AE3E7A456851BF562CE7A32263E3D7;// 0x0928(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F88E244B425EEC15393F09A0C1F71620;// 0x09E0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A13FA40E4A783A490E18FFABBBA667EB;// 0x0A98(0x00B8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BE24AFD64C184716050E98B686AB4EBC;    // 0x0B50(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5A4EB90C48C7360AA1B62287F3E5A9FC;  // 0x0CF0(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D98(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_397BF27146785D287BD12A9E02254DB7;    // 0x0DA0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_26C584DE44DAD104179AD8A7716F29FE;  // 0x0F40(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A69C21DB40F6631B02DB26B90AB74B1D;// 0x0FE8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BE5F20DD43D172E8307076870ED965F0;// 0x1030(0x00B8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x10E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7B8FE418416237D93859969E0C02B4DC;    // 0x10F0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_CF8D02C147BD2E1BB7DAFBA6455F9351;    // 0x1290(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BAE5E5E840979376382460ADCD37891B;  // 0x1430(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DCB47ACA454A904C598FF58B5F0ED47A;  // 0x14D8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E10499164743658869A0C1922A9A9FB1;// 0x1580(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1923FF094015CF5D37F2DD8FFA5FBDF3;// 0x1638(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DCF1A86744EA844C4E3649B1A7847E08;// 0x16F0(0x00B8)
	bool                                               IsInMotion;                                               // 0x17A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WheelsAreTurning;                                         // 0x17A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoverT1_AnimBP.RoverT1_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_BE5F20DD43D172E8307076870ED965F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_A13FA40E4A783A490E18FFABBBA667EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_F88E244B425EEC15393F09A0C1F71620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_F8AE3E7A456851BF562CE7A32263E3D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_7745CBBE4227CDB96222C095E498B4B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_E10499164743658869A0C1922A9A9FB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_3665910E4EDB84E75164AB9DF7F8164C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_20520BD2489EF1FB2077A08435FFB330();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_166D22BC4E3AE53C1A7EC6856F6EF4E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_22A8CFCA4485FE763D1A7CA84990E986();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_DCF1A86744EA844C4E3649B1A7847E08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT1_AnimBP_AnimGraphNode_ModifyBone_1923FF094015CF5D37F2DD8FFA5FBDF3();
	void BlueprintBeginPlay();
	void HandleMovementStateChanged(bool bIsMoving);
	void HandleRoverWheelSteerAnimStateChanged(bool bWheelsAreTurning);
	void UpdateAnimationTickability();
	void ExecuteUbergraph_RoverT1_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
