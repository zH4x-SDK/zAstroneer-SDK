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

// AnimBlueprintGeneratedClass OGSuit_TitleDummy_AnimBlueprint.OGSuit_TitleDummy_AnimBlueprint_C
// 0x11EC (0x15BC - 0x03D0)
class UOGSuit_TitleDummy_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_785D8B8C467991178D49C0AC297713DC;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C751538B4DCA624FF6405DA430AE3A94;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DC814314D20818934AB0BB176396399;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AB067D24D04A5D1044DDE93A236166F;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13028E614EF41B195DD097BD3AE7E374;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CA8A9494D21BB2C569B13B2FEE5763D;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D9881DD4CAF08EF7EDF669F076E3A1E;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A018CE3432D365E2E48938C23C1B6FE;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70764EA14964FECC4FEFCAA84E18AA42;// 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0FE139A348349130D96534B3BCC49CA2;// 0x0820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_847E096A45ECF4869B46C6A0B7B1680B;// 0x0890(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79EFEB81449D0F0A43AB5092ED749BE2;// 0x08D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7EE219F4FB09D77DDDC5F9DB037E3A2;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_014A264042438A97F04657B407D286EE;// 0x0990(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E22615034C3E2FF4C049759473A590A4;// 0x0A00(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A48(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C30BFB948929A1736C3A7974CF8F7A2;// 0x0A50(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_01AC3E6F49E8B411A632CE81C26F6109;// 0x0AD0(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_947E337E47F1694EF832EBB4AE438329;// 0x0BF8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_114DE63340B620E43DAE2E8BDB5E59D7;// 0x0C40(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB91DC244CFF82F02FC85F9F1C2546AC;// 0x0CB8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9A50E573490CB3E3EA0248BDB1B4D8C2;// 0x0D70(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_11E4652D4ECB97A15AA7728C1DD35F58;// 0x0DB8(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_75FCDCF84699358910A5B78B6E2C7478;// 0x0E30(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9C1154AC4822EF3F1DC351835A466848;// 0x0EA8(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_015A89D643766221EBF84F906BC780C0;// 0x0F20(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9EFC34604C0A252226F02395214E80AC;// 0x1048(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FB5EF6594BDE3777FAA041A4140F9453;// 0x1170(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBFC2A824B69DD29DAB7648DF8318DD3;// 0x1298(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8D6A2AC446F25874DDF02C81C7D1A82B;// 0x13C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_958DFA9249A7934E6CA014BEC7D99FD8;// 0x1408(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_471F0AF34F7A1C0ABFB94C9AA80FC056;      // 0x14E0(0x0068)
	float                                              Strafe;                                                   // 0x1548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x154C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Using_Tool;                                               // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Focusing;                                                 // 0x1554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Yaw;                                                 // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Pitch;                                               // 0x155C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Right_Foot_Effector;                                      // 0x1560(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Right_Foot_Joint;                                         // 0x156C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Loco_Anim;                                                // 0x1578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HeadRotator;                                              // 0x157C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsoluteSpeed;                                            // 0x1588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnclampedSpeed;                                           // 0x158C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClampedSpeed;                                             // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedMultiplied;                                          // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnclampedStrafe;                                          // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindInterp;                                               // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FallingNotJumped;                                         // 0x15A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WalkingNotJumped;                                         // 0x15A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWalking;                                                // 0x15A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling;                                                // 0x15A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim0NotEqual;                                        // 0x15A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAim1;                                                 // 0x15A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim2;                                                // 0x15A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim3;                                                // 0x15A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim7;                                                // 0x15A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim8;                                                // 0x15A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim13;                                               // 0x15AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim14;                                               // 0x15AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim11;                                               // 0x15AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim12;                                               // 0x15AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim0;                                                // 0x15AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim15;                                               // 0x15AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim20;                                               // 0x15B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim21;                                               // 0x15B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim22;                                               // 0x15B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocoAnim23;                                               // 0x15B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSliding;                                                // 0x15B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x15B5(0x0003) MISSED OFFSET
	float                                              HeavyCarrying;                                            // 0x15B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass OGSuit_TitleDummy_AnimBlueprint.OGSuit_TitleDummy_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_ModifyBone_EB91DC244CFF82F02FC85F9F1C2546AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TwoWayBlend_11E4652D4ECB97A15AA7728C1DD35F58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TwoWayBlend_75FCDCF84699358910A5B78B6E2C7478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TwoWayBlend_9C1154AC4822EF3F1DC351835A466848();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_015A89D643766221EBF84F906BC780C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_9EFC34604C0A252226F02395214E80AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FB5EF6594BDE3777FAA041A4140F9453();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FBFC2A824B69DD29DAB7648DF8318DD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TwoWayBlend_114DE63340B620E43DAE2E8BDB5E59D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TransitionResult_3CA8A9494D21BB2C569B13B2FEE5763D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_01AC3E6F49E8B411A632CE81C26F6109();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TransitionResult_13028E614EF41B195DD097BD3AE7E374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TransitionResult_9D9881DD4CAF08EF7EDF669F076E3A1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TransitionResult_70764EA14964FECC4FEFCAA84E18AA42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint_AnimGraphNode_TransitionResult_7A018CE3432D365E2E48938C23C1B6FE();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_OGSuit_TitleDummy_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
