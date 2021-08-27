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

// AnimBlueprintGeneratedClass RoverT4_AnimBP.RoverT4_AnimBP_C
// 0x3800 (0x3D10 - 0x0510)
class URoverT4_AnimBP_C : public UWheeledChassisAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F978F0C646151B5E2295498EB7479E53;      // 0x0518(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_621DF99943E719904243B9A3A4042FCD;// 0x0560(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9CE0E7894045AD580E69AD8B60310E9A;// 0x0590(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F9344504B8B5BEA216E29B5B92530D2;// 0x05D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13023E124A6F829B5F06F4AC7BEC5F8E;// 0x0690(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0766A3BF4796613405D7FFB6F4163053;// 0x0748(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1EA98BA44200FE502C72289683562976;// 0x0800(0x00B8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A5212FA04E341E944AECEAA79BFE84FA;    // 0x08C0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_545B43D9444419552EF90DB3EA405F92;    // 0x0A60(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_305F83274C41982AEB023C8E046C1245;  // 0x0C00(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CA5B8E1646E560AA6BF937B03046EA7A;  // 0x0CA8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6D7BAC5E4DACC5605274538393AB2F6E;// 0x0D50(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C332955040F152F8B2858EBBACA6B2D1;// 0x0E08(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4CABA3CB44372EE24A75ABBFAA624CB0;// 0x0EC0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_719B99D14F74D0158955A987390509CF;// 0x0F78(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_533571AC448E2B506DE39D92E7973E65;// 0x1030(0x00B8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x10E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4DCA318E40DDE9BE3DED618E31ABEA07;    // 0x10F0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_36790C7A4ED2D9F7775A59B526373D86;    // 0x1290(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D1BA8DEC4E8C9D1868467493DF1835B2;  // 0x1430(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_96CE18C54AC83E7FDA0B58A775443F19;  // 0x14D8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C1B0DF6E47FBEF1F07B25091FDA6F1D5;// 0x1580(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BF26BBB40983D679CA80EAE95B622CA;// 0x1638(0x00B8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B09BC6374C60AC667C0BA5AABE1ED56A;    // 0x16F0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DBF075634DB7BE349B6007B8AA9C9272;  // 0x1890(0x00A8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1938(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8601066C42C0D0F9503C5284984C3685;    // 0x1940(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6BEBEBB244F0BD9F8A8763A6836C8A2F;  // 0x1AE0(0x00A8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1B88(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C3BF83DB49D26414000427BC5FB6C352;    // 0x1B90(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2DFF21974F0666691FF4D1ADBE7DF548;  // 0x1D30(0x00A8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1DD8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5B2AC19540FA491E15BFAB814B9A2F43;    // 0x1DE0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BDA07DFC4ADCDB8A4F33979CFA2DFFA6;  // 0x1F80(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9D471524E626CE9B507FCB6D2D968B1;// 0x2028(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78F8C5C745A4797F320898AF2C7B581F;// 0x20E0(0x00B8)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2198(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_167210764770B800FEB45FB605757D40;    // 0x21A0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_35CFA0234EA8C447A52FA2B0E2484871;  // 0x2340(0x00A8)
	unsigned char                                      UnknownData06[0x8];                                       // 0x23E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_374AE6094D451CBC66A75E9EFD684B56;    // 0x23F0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_68219F294849D16A13D330ABEF351653;  // 0x2590(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB37461947239E33FA3FEC9AC73682C4;// 0x2638(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38C9333A42AFE4C17AF1AD9EFFAC0B32;// 0x26F0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8215516E4579C7AF9B2F23BF3E064C3A;// 0x27A8(0x00B8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_EB7A8DB046CB387F4B53E0B4EA6AF618;    // 0x2860(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_66308322433E89A92BA7108E560D623C;  // 0x2A00(0x00A8)
	unsigned char                                      UnknownData07[0x8];                                       // 0x2AA8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BE08372C41415E0C395FB7942C6F8BF1;    // 0x2AB0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7BCA7DD14BD844933B5D35869FA471FF;  // 0x2C50(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ACA6E3B141BB8AF5589EAA97F6851422;// 0x2CF8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1B8E02D64156594710B472AD416A12DA;// 0x2DB0(0x00B8)
	unsigned char                                      UnknownData08[0x8];                                       // 0x2E68(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67C948434B65CE289D6C6FB8A157F5B0;// 0x2E70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB224CA44106A970F8AB62A36CD1C6BB;// 0x2EF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6ABF95C49C60A1C0EDBD88BE56B6F6C;// 0x2F70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25DE249E48EE4DE8FD70D7801FB0FBE2;// 0x2FF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B94A2A494E2A38CDB8591689D979F434;// 0x3070(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_716C493C4168AA1C8D9CF1BED7288150;// 0x30E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F6B79CF4D824AECA15D98B5792974A1;// 0x3128(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2341293141FA48A2B139779966120E28;// 0x3198(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1D8E50047DAF6FF9800A2A43AF3273E;// 0x31E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_764FDEDE477ED3E15024FC823201BCE8;// 0x3250(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3D54EED4BD68D1A2DCE59A386F0FF2E;// 0x3298(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBEA72B94D77280D0B29FFAD6B34A931;// 0x3308(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3DD2789B4676FEE4018537AF052531BD;// 0x3350(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_55186FCC4AAB9CD73FD9B6AB985E280E;// 0x3428(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9D28893447C1ECC712CABDA70F7B5FAF;// 0x3508(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B4248BE349F2AB40927CEC86CE6E4E67;// 0x3540(0x0078)
	unsigned char                                      UnknownData09[0x8];                                       // 0x35B8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC99921045400D1B309619A2D572D43A;// 0x35C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CACC323B4EFEAA0EDAEBCE952A2A5846;// 0x3640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B158C8B439227CB857C2AA84FDAF10C;// 0x36C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_274C8EF14BCF85B6359939952FB3F91A;// 0x3740(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0E476F943C0BD012777378A65872353;// 0x37C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F09C2B6451643B113F34B9A06F440C72;// 0x3830(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_705E3BBB4228C7280A43BFAE8ECFDF1D;// 0x3878(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F09C2B6451643B113F34B9A06F440C7;// 0x38E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F8EEF0A4D55ABB990B75DBFBF6B9E09;// 0x3930(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D1D2DC224DDCBFD320D6638AD1FA8002;// 0x39A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C89BFE143A0C5CF4B4D54A82F2B9D86;// 0x39E8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C97A2E1429D71730D9C7AA254713F58;// 0x3A58(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6259FDEF4069D6D2A39451A42AC8C603;// 0x3AA0(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E6713D1E46713DC960054AB1DAC10798;// 0x3B78(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D288BD745EEFD88DB622EA015668D59;// 0x3BB0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EE4E6C8542C340831669FD8AD21CDC6B;// 0x3C28(0x00E0)
	bool                                               FrontSocketOpen;                                          // 0x3D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketOpen;                                           // 0x3D09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInMotion;                                               // 0x3D0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WheelsAreTurning;                                         // 0x3D0B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrontSocketIsAnimating;                                   // 0x3D0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketIsAnimating;                                    // 0x3D0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrontSocketOpen_AnimState;                                // 0x3D0E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackSocketOpen_AnimState;                                 // 0x3D0F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoverT4_AnimBP.RoverT4_AnimBP_C");
		return ptr;
	}


	void UpdateAnimationTickability();
	void SetBackSocketOpen(bool IsOpen);
	void SetFrontSocketOpen(bool IsOpen);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_TransitionResult_25DE249E48EE4DE8FD70D7801FB0FBE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_TransitionResult_E6ABF95C49C60A1C0EDBD88BE56B6F6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_1B8E02D64156594710B472AD416A12DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_ACA6E3B141BB8AF5589EAA97F6851422();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_TransitionResult_4B158C8B439227CB857C2AA84FDAF10C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_8215516E4579C7AF9B2F23BF3E064C3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_38C9333A42AFE4C17AF1AD9EFFAC0B32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_BB37461947239E33FA3FEC9AC73682C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_78F8C5C745A4797F320898AF2C7B581F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_C9D471524E626CE9B507FCB6D2D968B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_7BF26BBB40983D679CA80EAE95B622CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_C1B0DF6E47FBEF1F07B25091FDA6F1D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_533571AC448E2B506DE39D92E7973E65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_719B99D14F74D0158955A987390509CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_4CABA3CB44372EE24A75ABBFAA624CB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_C332955040F152F8B2858EBBACA6B2D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_6D7BAC5E4DACC5605274538393AB2F6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_1EA98BA44200FE502C72289683562976();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_0766A3BF4796613405D7FFB6F4163053();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_13023E124A6F829B5F06F4AC7BEC5F8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_ModifyBone_7F9344504B8B5BEA216E29B5B92530D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT4_AnimBP_AnimGraphNode_TransitionResult_274C8EF14BCF85B6359939952FB3F91A();
	void BlueprintBeginPlay();
	void HandleMovementStateChanged(bool bIsMoving);
	void HandleRoverWheelSteerAnimStateChanged(bool bWheelsAreTurning);
	void AnimNotify_OnBackSocketStartFlipT4();
	void AnimNotify_OnFrontSocketStartFlipT4();
	void AnimNotify_OnFrontSocketFinishFlipOpenT4();
	void AnimNotify_OnFrontSocketFinishFlipClosedT4();
	void AnimNotify_OnBackSocketFinishFlipOpenT4();
	void AnimNotify_OnBackSocketFinishFlipClosedT4();
	void ExecuteUbergraph_RoverT4_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
