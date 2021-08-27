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

// AnimBlueprintGeneratedClass MotherShip_AnimBP.MotherShip_AnimBP_C
// 0x1CB5 (0x2085 - 0x03D0)
class UMotherShip_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CADD1F954843B93990F0788FE9478619;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C7816DA456732EB61D9E7827F150FCA;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C25D0ECF40F0EBA22BDC16AC3FC346AD;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ECECC744C826B331382AFA189C00D23;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A92249247C2AC495410D086E5DBD111;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7813E39E4131CD3E29ECD78D298FFD6F;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_046CAD1B4D50048560D5ED9125A18653;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37525E574A26CAE7AFABEFB6A8653AAE;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E278D44146B4B3C1AE851B8FA8914AF7;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C64ED2E549EDC34E0A14369E271CE370;// 0x0790(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_089042944F05187E536E218AB0A69936;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1500C7084C7632BD519B2EB3DC766C12;// 0x0848(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0467DE7448858F163CC6DFA1513BD0D7;// 0x08B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1EC6827E4F49D33E06E81ABBB4C0F390;// 0x0900(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A4F2AF6B49675FAFCEA921814BCA6C3F;// 0x09E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CCB46C09424C58197ED6378E4D37E7B1;// 0x0A60(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_239198674C05B09540422EBBC1393A62;// 0x0AE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F9F31A734DB2433D8B0906A5E467BED3;// 0x0B50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7F478C44D40D35A935433B08A467DED;// 0x0B98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C713BDB14B07C3601B1BA99DEBC85EE5;// 0x0C08(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4D88458043555F6997089496E7C161B9;// 0x0C50(0x00D8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0D28(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_228BFF25416D3CE450C18BA94D61E3B2;// 0x0D30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D89DC114171B52B98AAD1870F217E89;// 0x0DB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D11DEF3C49D25455C96810A8B673E389;// 0x0E30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CC96B0A445185CEF5590B8C42DE41C6;// 0x0EB0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A16843442591C9DC391C583A7C982CF;// 0x0F30(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6172BBD244C4CC9C8EF00BA38CB72732;// 0x0FA0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6AC6CD3242BBDF1E088E18BF0F0BE7A7;// 0x0FE8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5A8317404B666588524079B92CCD59C3;// 0x1058(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F9A6226E42D19EC10C764280A6DBF583;// 0x10A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6140B50349D1DFE907AB83A671E78574;// 0x1110(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4D09E7F484E43D7CF99FB9995255E1F;// 0x1158(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_165ABE8245F9B4796ABF4984071D3D59;// 0x11C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F53D7B7240A77EC81EC7BD8BBB2FBA0A;// 0x1210(0x00D8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x12E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4A7BE3044C214A3D9E5F10B8AE4B9426;// 0x12F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A49AD0FE4C932B7E218FBAAB8D4FED23;// 0x1370(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B2AA4EF4C556CC6B22D38B624170939;// 0x13F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_41FEEAA14DD1038ADA2A4B8F57F922C8;// 0x1460(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1136C5BC48574619EC443FB3382B9DCA;// 0x14A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B26C1B994B0173333EA15D92AD144B06;// 0x1518(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C81CE03142D0DB0FBBB8A08231B6B66C;// 0x1560(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A506878346D8AA397F1B978D44642941;// 0x1638(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7A7D840842FEC49B6F9F3BA300BA3C07;// 0x1670(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6679C78746681955AC138EAE7DA47074;// 0x16E8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3FA0A94B4C882C92ABCCAD81E4F09528;// 0x1720(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3DCF7C664193E38D58110E9EDD10F3D1;// 0x1798(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_49F5EB0941419401EC86CBA4A0372327;// 0x17D0(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7A6F4E6C4A2A51FBB4C60897941D4B48;// 0x1848(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C0B72D494107EC328B649ABAAC18A6B7;// 0x1880(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_90481B8F4189065DC2FAA8AB46E2AC0D;// 0x18F8(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_32C567A74248F752DA7A48A66DFD6882;// 0x19D8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7AF4D96A4F609662E207239E16587681;// 0x1A10(0x0038)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1A48(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04E99062456C1007D3F2E38C135E96ED;// 0x1A50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F31F002241AD3905A24E539FEF56E57E;// 0x1AD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3F81283417D9AF75BCAA8B97E2632AE;// 0x1B50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7CC3B30547EBF830957BD88D0E633E90;// 0x1BD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B68AF2DA4EF27CD1F13513A6535065A8;// 0x1C50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2422BDB54C2C647CD2E6949C5FBF5B42;// 0x1CC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63AA49134E966E33469B3EB6AAD73D5C;// 0x1D08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B504C2647D8406DDA8DA7A9835381F8;// 0x1D78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4709CEC442B748C4196F68A3A1887A7;// 0x1DC0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B2870D7840C96496B46F0EA2083BBC53;// 0x1E30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_836E1C2440D9C2A2840ACAB29558AB83;// 0x1E78(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_967B6B714E3326D578A8D192DCB1AECE;// 0x1EE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2117B66A49F9F92F2114CEBE154F26C3;// 0x1F30(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CF8D57E84C0BACDF97F6D5844F5D85DB;// 0x2008(0x0078)
	bool                                               CentrifugeSpin;                                           // 0x2080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AntennaUp;                                                // 0x2081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DomeSpin;                                                 // 0x2082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorOpen;                                                 // 0x2083(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BayDoorsOpen;                                             // 0x2084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MotherShip_AnimBP.MotherShip_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_4CC96B0A445185CEF5590B8C42DE41C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_228BFF25416D3CE450C18BA94D61E3B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_4A7BE3044C214A3D9E5F10B8AE4B9426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_A49AD0FE4C932B7E218FBAAB8D4FED23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_CCB46C09424C58197ED6378E4D37E7B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_F31F002241AD3905A24E539FEF56E57E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_A4F2AF6B49675FAFCEA921814BCA6C3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_7CC3B30547EBF830957BD88D0E633E90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_3A92249247C2AC495410D086E5DBD111();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MotherShip_AnimBP_AnimGraphNode_TransitionResult_3C7816DA456732EB61D9E7827F150FCA();
	void ExecuteUbergraph_MotherShip_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
