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

// AnimBlueprintGeneratedClass RoverT3_animBP.RoverT3_animBP_C
// 0x2A70 (0x2F80 - 0x0510)
class URoverT3_animBP_C : public UWheeledChassisAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3654A4E2436A8A15A3714A8ABA377503;      // 0x0518(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_7992F8C54B9ED3DA8C293DB884884799;// 0x0560(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1B9A06574CC78911003A7AA5AB22A055;// 0x0590(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0D2A34D14FFF9108ACE6C8B2BA255D91;// 0x05D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1F1594A34D5FEC50A603EEA5ADE786EF;// 0x0690(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8132C6464BA4ECF6655FE7B3622E6E7B;// 0x0748(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2882C6854A28F50681AC73BE049B06B5;// 0x0800(0x00B8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0372EB0941E3E7431767F9B5E9591543;    // 0x08C0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_25B7B0CA4CE54BEB43C0AC83C46BAC59;    // 0x0A60(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E900371A4C3335572C27E58362EDDD9D;  // 0x0C00(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_472310F24F4FE6FF2F8417B5723FBAC4;  // 0x0CA8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_65A14957448035325A9C568A4B4C7CBA;// 0x0D50(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3FB34B184069DA2DC4BD35A7F1503854;// 0x0E08(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D40263B946166B9D89B3C7B0D26E49A1;// 0x0EC0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9E2AFE741DBAC685F60E8A8057E38F1;// 0x0F78(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0E9E9ADF4E3E48EB4C6D92A5901FF1AE;// 0x1030(0x00B8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x10E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_EC05A6C1423EB81431513781315A3168;    // 0x10F0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F8076264B19AFF2B317D9B5EF9C4602;    // 0x1290(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_08C0BD7D43D76BE89BF002B1B26B1FC5;  // 0x1430(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_140FF4D04220504DD7242DA9E6BCA710;  // 0x14D8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31E340974B6AE43E7A3113AE0F3BC073;// 0x1580(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A32D55084ADE8E70B7341892D29BE7FD;// 0x1638(0x00B8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7D86B21D450FF04C7CEB05B67AA3B6C7;    // 0x16F0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_80B6723D4231BE98D6A9FCB97642D43E;  // 0x1890(0x00A8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1938(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_829BECE843C1A1C81E9993AC8E1B3D16;    // 0x1940(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_ADC5DC0C4A7040B0353E2A989B8A34A2;  // 0x1AE0(0x00A8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1B88(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E36EF63A4D058DE51EA7D6B06E654A72;    // 0x1B90(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B0F732F24FC5218216A99BA032D9C9E3;  // 0x1D30(0x00A8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1DD8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_06C5D88048ED9A709204E893F7F29DEA;    // 0x1DE0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_48E9258440B0721E8FCE6990D275FB84;  // 0x1F80(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6452C0A8405E10448337E896C6506E47;// 0x2028(0x00B8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6AC9E8734E12C85C61564D8A7F06A9C6;// 0x20E0(0x0038)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2118(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67C948434B65CE289D6C6FB8A157F5B0;// 0x2120(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB224CA44106A970F8AB62A36CD1C6BB;// 0x21A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6ABF95C49C60A1C0EDBD88BE56B6F6C;// 0x2220(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25DE249E48EE4DE8FD70D7801FB0FBE2;// 0x22A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B94A2A494E2A38CDB8591689D979F434;// 0x2320(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_716C493C4168AA1C8D9CF1BED7288150;// 0x2390(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F6B79CF4D824AECA15D98B5792974A1;// 0x23D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2341293141FA48A2B139779966120E28;// 0x2448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1D8E50047DAF6FF9800A2A43AF3273E;// 0x2490(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_764FDEDE477ED3E15024FC823201BCE8;// 0x2500(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3D54EED4BD68D1A2DCE59A386F0FF2E;// 0x2548(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBEA72B94D77280D0B29FFAD6B34A931;// 0x25B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8DA2395145EA3779EFF619BC21FB9427;// 0x2600(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C1C0E301477BAB9A173D10A183A6A304;// 0x26D8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_558FBDF64DBB87509CBE8C82AA63C9A1;// 0x2750(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4851FD954CC2EA65CDC6D1A5D2C7A0DB;// 0x2830(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_422993BB47A05A06A19C9AB2B6FBA1A7;// 0x2868(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC99921045400D1B309619A2D572D43A;// 0x28E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CACC323B4EFEAA0EDAEBCE952A2A5846;// 0x2960(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B158C8B439227CB857C2AA84FDAF10C;// 0x29E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_274C8EF14BCF85B6359939952FB3F91A;// 0x2A60(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0E476F943C0BD012777378A65872353;// 0x2AE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F09C2B6451643B113F34B9A06F440C72;// 0x2B50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_705E3BBB4228C7280A43BFAE8ECFDF1D;// 0x2B98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F09C2B6451643B113F34B9A06F440C7;// 0x2C08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F8EEF0A4D55ABB990B75DBFBF6B9E09;// 0x2C50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D1D2DC224DDCBFD320D6638AD1FA8002;// 0x2CC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C89BFE143A0C5CF4B4D54A82F2B9D86;// 0x2D08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C97A2E1429D71730D9C7AA254713F58;// 0x2D78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_30242B404C346E39441289B3B05A2CA1;// 0x2DC0(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3136D5994152E4C2F6889CB68191559E;// 0x2E98(0x00E0)
	bool                                               FrontSocketOpen;                                          // 0x2F78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketOpen;                                           // 0x2F79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInMotion;                                               // 0x2F7A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WheelsAreTurning;                                         // 0x2F7B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrontSocketIsAnimating;                                   // 0x2F7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketIsAnimating;                                    // 0x2F7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrontSocketOpen_AnimState;                                // 0x2F7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketOpen_AnimState;                                 // 0x2F7F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoverT3_animBP.RoverT3_animBP_C");
		return ptr;
	}


	void UpdateAnimationTickability();
	void SetBackSocketOpen(bool IsOpen);
	void SetFrontSocketOpen(bool IsOpen);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_TransitionResult_25DE249E48EE4DE8FD70D7801FB0FBE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_TransitionResult_E6ABF95C49C60A1C0EDBD88BE56B6F6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_6452C0A8405E10448337E896C6506E47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_A32D55084ADE8E70B7341892D29BE7FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_31E340974B6AE43E7A3113AE0F3BC073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_TransitionResult_4B158C8B439227CB857C2AA84FDAF10C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_TransitionResult_274C8EF14BCF85B6359939952FB3F91A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_0E9E9ADF4E3E48EB4C6D92A5901FF1AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_C9E2AFE741DBAC685F60E8A8057E38F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_D40263B946166B9D89B3C7B0D26E49A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_3FB34B184069DA2DC4BD35A7F1503854();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_65A14957448035325A9C568A4B4C7CBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_2882C6854A28F50681AC73BE049B06B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_8132C6464BA4ECF6655FE7B3622E6E7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_1F1594A34D5FEC50A603EEA5ADE786EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT3_animBP_AnimGraphNode_ModifyBone_0D2A34D14FFF9108ACE6C8B2BA255D91();
	void BlueprintBeginPlay();
	void HandleMovementStateChanged(bool bIsMoving);
	void HandleRoverWheelSteerAnimStateChanged(bool bWheelsAreTurning);
	void AnimNotify_OnFrontSocketStartFlip();
	void AnimNotify_OnBackSocketStartFlip();
	void AnimNotify_OnFrontSocketFinishFlipOpen();
	void AnimNotify_OnFrontSocketFinishFlipClosed();
	void AnimNotify_OnBackSocketFinishFlipOpen();
	void AnimNotify_OnBackSocketFinishFlipClosed();
	void ExecuteUbergraph_RoverT3_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
