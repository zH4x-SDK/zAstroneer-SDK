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

// AnimBlueprintGeneratedClass ControlPanelSupply_AnimBP.ControlPanelSupply_AnimBP_C
// 0x1183 (0x1553 - 0x03D0)
class UControlPanelSupply_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B2F9AAFD4342F0D1451FEE88AE621FD8;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_64CA25E5460DC03A97D345A644946DB9;// 0x0420(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DFB96C5F4635F07ABB59AD9CFD4111F9;// 0x0458(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF31FE7E4C38307558D437B405DF460A;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB41C74949DC43BD56870CBBE57A2F3C;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5676DDED40E45F148BCFE2BB5700BDB1;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B88CFDC3496895D72AA53EAC54265C51;// 0x0650(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2AECA2043E3D04B60AFC889DC823954;// 0x06D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_894B7AA74550C2362DFFECBBDE247459;// 0x0750(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2AA3E664B6D9C3C86C5BB80DD748680;// 0x07D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9009D9BA49261DAE680AA48267F4456A;// 0x0850(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE1A0CBD4D22BF038BEAB0ACA2125E8E;// 0x08D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C57AFBB42535E7C901291B1A53CB438;// 0x0950(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83C304784968B216492366987C913CBD;// 0x09D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A78E39D4B685B1B84F471BB2DE04495;// 0x0A40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A29295748A8CADAC1803C81636B11E2;// 0x0A88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFFADE0B48C17A79485EADA5D5961221;// 0x0AF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1405E3CF4CEDEA6C7B223D8C87C9CCFB;// 0x0B40(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A9D10854EF3B4312C75B4A1842ABBAC;// 0x0BB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D8F1B824C6388FA88150A8D499003F3;// 0x0BF8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_46C95E5A46ACC760474838AD737B0430;// 0x0C68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6242C6A846D37B10E14FE292B7BA6CA0;// 0x0CB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7F3D649459757F81BD008AAB1F5A16C;// 0x0D20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17708E544643C98BDFC81A9A170E1A5E;// 0x0D68(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9246648B443366D275D69086D0E1A15E;// 0x0DD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5DCA7CCA4A09D49BCB0E578AA88C4D7E;// 0x0E20(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_79F574714481A4D96C831FA225B1EDB7;// 0x0EF8(0x0038)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BBFBC9C9486AF6DF56C6C59D871517DC;// 0x0F30(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6EF954E04EA05AD880DF86B1416AAE0C;// 0x1010(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FDC6FB6F43161BB6A8CC2E9FAF815312;// 0x1048(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6432458F45613B58FEDA2FABA3B2BCA4;// 0x10C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FF4E50F42EEB053EA5F7CB34EAAB826;// 0x1140(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA3995E34B0ABCA81F08619EE54D7EBE;// 0x11C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EFA1BC26432D25E699F734B59586F936;// 0x1230(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20B1768043EE8943196577AE692627BA;// 0x1278(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ACF2DF7A440FEC9E16255D8965C7844A;// 0x12E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EA4D9CE745BF9E5C8D1468A380AAD5C1;// 0x1330(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_772C83E04D967046D08B2BB4A62237A0;// 0x1408(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8ABE95DF4178AB897160FFA1546FCD83;      // 0x14E8(0x0068)
	bool                                               CoverIsOpen;                                              // 0x1550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CoverHover;                                               // 0x1551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonHover;                                              // 0x1552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ControlPanelSupply_AnimBP.ControlPanelSupply_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_F2AECA2043E3D04B60AFC889DC823954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_B88CFDC3496895D72AA53EAC54265C51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_894B7AA74550C2362DFFECBBDE247459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_5FF4E50F42EEB053EA5F7CB34EAAB826();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_EE1A0CBD4D22BF038BEAB0ACA2125E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_EB41C74949DC43BD56870CBBE57A2F3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ControlPanelSupply_AnimBP_AnimGraphNode_TransitionResult_9009D9BA49261DAE680AA48267F4456A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ControlPanelSupply_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
