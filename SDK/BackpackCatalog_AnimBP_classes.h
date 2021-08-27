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

// AnimBlueprintGeneratedClass BackpackCatalog_AnimBP.BackpackCatalog_AnimBP_C
// 0x32D8 (0x36A8 - 0x03D0)
class UBackpackCatalog_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FDF6215F47A37F7A29FE7E8B59CA9E80;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EDDD6BF94DF5CC0DE432579746AF42B6;// 0x0420(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_158994E54B2C5116E74B98B8077E428C;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A416DADE47A627DDA928329D8971096D;// 0x04E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7441DDC849240C64D60324885C7F5E57;// 0x0560(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_226A2DCF4A577FCE8DA8CA9BAE46A7C0;// 0x05D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_351F6C7F4639496AA7F31B940220076A;// 0x0618(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A393388D49A8E9DB6C772980703DA45F;// 0x0688(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF8822A44E113F957429BC973B04B7D4;// 0x06D0(0x00D8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_834B0D8C4693BAA474CF71897FF91E02;// 0x07B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D35916F4493BCA88147ABD9C4828DACD;// 0x0830(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58FBFCE94F524BD5612F35809AF34FA1;// 0x08B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CC935FC24CBBE006FA40F89F8A497FC6;// 0x0920(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EDA796C4FD8AB8DA296B3ADCF1C965C;// 0x0968(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_135E5D47483126880527ECB862EFCE59;// 0x09D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A4EFD6D442B0F7AEDA64F9833EFEA08A;// 0x0A20(0x00D8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0AF8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB8CF24B4CD9476EB663B4BA73722779;// 0x0B00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A487B084EA5F6432CF71B96BF45B027;// 0x0B80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65A144B94E5397EF3F66F8A9F3BBC191;// 0x0C00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_92EEB86A44DE415D04FD2CBB217ADC61;// 0x0C70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3F3D9674A044CEE05AA859128CB93BE;// 0x0CB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62FA39824AB5072AB65418A5B19C8F7E;// 0x0D28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F5DF665641AACE6E2E91B0A2F5520819;// 0x0D70(0x00D8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0E48(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C6;// 0x0E50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD6;// 0x0ED0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90F0F25D41D3E286389C288A6871AC7F;// 0x0F50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA1418516;// 0x0FC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F95310E42A4F2CB28D1F183593C63D9;// 0x1008(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB96;// 0x1078(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_68B04B33468127CEC59A02A8ED207E71;// 0x10C0(0x00D8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1198(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C5;// 0x11A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD5;// 0x1220(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BBA1DD64D455EF8C1D7C2ACAD43944E;// 0x12A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA1418515;// 0x1310(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AC590814F1141679570D6816A29F209;// 0x1358(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB95;// 0x13C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7C35629E4603679F257082AFABA19D85;// 0x1410(0x00D8)
	unsigned char                                      UnknownData05[0x8];                                       // 0x14E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A417032746127117338BCA8DFC4FCC5E;// 0x14F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42E19434487FB19449C5FF939011B941;// 0x1570(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_506B06914C83A628921D4DBD4EAC5C52;// 0x15F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5113C78C44123841039D4C8A8DDCD846;// 0x1660(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0116ED5B4E980777A3606FBA5683CF59;// 0x16A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D9163FD145512E31A8D70CAC07BA526B;// 0x1718(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85841A97425BFA8DF0EFD099E1C8713D;// 0x1760(0x00D8)
	unsigned char                                      UnknownData06[0x8];                                       // 0x1838(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CB971444E620BBF3A1D68ACE494227F;// 0x1840(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CA96C8C4A1A75E4E629C98B4EDB7FD3;// 0x18C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ED71E2D4F66D08078958DA76AA92A37;// 0x1940(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F4EB15344A6692551B26F4A2FEE5F02E;// 0x19B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57D9924645C67628D5D7DFBB67475E2A;// 0x19F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D665C5CB4FDE61EA3D4D5EA12CD9A2EB;// 0x1A68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6A6E306D422F7CA68C832AA6036E74BD;// 0x1AB0(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CD29F3334823B36DDE698C877085C48E;// 0x1B88(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_96E02B5148AE9C25AD82F6B77DE8D41A;// 0x1C00(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_29ABE27946B625AD47A395885F8F1270;// 0x1C38(0x0038)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C28BBEDB473887C945D87F8B47878BB6;// 0x1C70(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FE16938A46C54E66485C01A569909DB6;// 0x1D50(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D85F90A34FDD4BD5802839B5207720A5;// 0x1DC8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1360A47A4A6C9E70F83356B60C079AEA;// 0x1E00(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CCD3DD384B7955AC83B64F99D7B7AD50;// 0x1E78(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_495F69064586C7994E19AFAE23C930C3;// 0x1F58(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2E87B43E4FFC56FD4AADC9813F3F02EB;// 0x1F90(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7162D3AC43813B6B8D34A282CB2530BA;// 0x1FC8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_02DEC90D49C3B73484AE09B6141F712E;// 0x2000(0x0038)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2C5EE296484330625BC92DBC672DDC93;// 0x2038(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C8CBCB794DF113E97C0FDFB1BB636D8F;// 0x2118(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_36F1DEA943D120730A71A382BFB0A838;// 0x2190(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2F5D91F94982802A0370F2A7EBC8176E;// 0x2208(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0950C3CE487720A212C51096A9851C45;// 0x2280(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_413672D44665EA666A5D5899D7B4C9F5;      // 0x22F8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9E762A6E4E150A63D9560C98D8C68631;// 0x2360(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4188E16C45A7710CBDC9D2B51220B722;// 0x2398(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4E97FBF44B883E20BEAC569056C425E2;// 0x23E0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A816B3FF43B2FD1D9C2EFD81D3E41CA9;// 0x2498(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_918A4AA04D5ED23526AD9CA49E312742;// 0x24E0(0x00B8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7801F4A248303B67213669AECE8A4A78;// 0x2598(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C4;// 0x25D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD4;// 0x2650(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15764ED145FB5571C1084CA07F925844;// 0x26D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA1418514;// 0x2740(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0EF894D44D8E92F8E1CF184DCD468DD;// 0x2788(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB94;// 0x27F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_480E76B64EBC4A8FF3D71081F6688413;// 0x2840(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B2B093574CF3863EC1E942B2109A0655;// 0x2918(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_45E2062B41F24619824422B8D71F7278;// 0x29F8(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0601FCCD4BE3CEB6A0F62CA0B11AD892;// 0x2A70(0x0038)
	unsigned char                                      UnknownData07[0x8];                                       // 0x2AA8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C3;// 0x2AB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD3;// 0x2B30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0C98EFA47C96C161D1FD4BBDCA54921;// 0x2BB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA1418513;// 0x2C20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A2CB6684F1836B3A22BBFAC22914B25;// 0x2C68(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB93;// 0x2CD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ED33DB3E46E27CD0133759865E98FA3D;// 0x2D20(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_020DED3D4DE382E020F789A06CE9BF45;// 0x2DF8(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8B7C1575401FE547B855D99FD4721FE8;// 0x2E70(0x0038)
	unsigned char                                      UnknownData08[0x8];                                       // 0x2EA8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C2;// 0x2EB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD2;// 0x2F30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_321CE3444C04D939511CBEA9E2C6C915;// 0x2FB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA1418512;// 0x3020(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_444AAFC640E3E0FB10D490924D5867FF;// 0x3068(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB92;// 0x30D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_555CDAAC4EEA1FE8CE0BBB847699C9EF;// 0x3120(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5CF7795C4D1419A92938E5997A6F0D17;// 0x31F8(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B191E8C540F3AE1EDEEBFEB6989F3585;// 0x3270(0x0038)
	unsigned char                                      UnknownData09[0x8];                                       // 0x32A8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C;// 0x32B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD;// 0x3330(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8BC788C546957204987202B4A5E5D630;// 0x33B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F21D094345D48B6FFF8A42ACEA141851;// 0x3420(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_674081854A90C9B31E5A9985977EBFF0;// 0x3468(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_036D57394F120A68D880879CEA055DB9;// 0x34D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_26EA39FB480C7DBCFB98DA93CB0C8929;// 0x3520(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_147F360040232CE2956493B2A7746FA2;// 0x35F8(0x0078)
	bool                                               PanelActive;                                              // 0x3670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TopActive;                                                // 0x3671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonCaseActive;                                         // 0x3672(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonTop1Activate;                                       // 0x3673(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonTop2Activate;                                       // 0x3674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonTop3Activate;                                       // 0x3675(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonTop4Activate;                                       // 0x3676(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x3677(0x0001) MISSED OFFSET
	TArray<float>                                      CurrentSpindleYaw;                                        // 0x3678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<float>                                      TargetSpindleYaw;                                         // 0x3688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               DPadUpActivate;                                           // 0x3698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadRightActivate;                                        // 0x3699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadDownActivate;                                         // 0x369A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadLeftActivate;                                         // 0x369B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpindleYaw2;                                              // 0x369C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BackpackCatalog_AnimBP.BackpackCatalog_AnimBP_C");
		return ptr;
	}


	void UpdateSpindleYaw(float DeltaTime, class ACatalogModule* OwnerCatalog);
	void SnapSpindleYawToTarget();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_42E19434487FB19449C5FF939011B941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD_4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_2CB971444E620BBF3A1D68ACE494227F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_0CA96C8C4A1A75E4E629C98B4EDB7FD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C_4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_ModifyBone_4E97FBF44B883E20BEAC569056C425E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_ModifyBone_918A4AA04D5ED23526AD9CA49E312742();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD_5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C_5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5B07470C454E7F1D379781A027774B0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_5A487B084EA5F6432CF71B96BF45B027();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_530293FD4B61849CB69FE0ACED0134CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_BB8CF24B4CD9476EB663B4BA73722779();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_A417032746127117338BCA8DFC4FCC5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_D35916F4493BCA88147ABD9C4828DACD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_834B0D8C4693BAA474CF71897FF91E02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_A416DADE47A627DDA928329D8971096D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BackpackCatalog_AnimBP_AnimGraphNode_TransitionResult_158994E54B2C5116E74B98B8077E428C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BackpackCatalog_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
