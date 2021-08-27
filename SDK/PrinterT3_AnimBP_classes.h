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

// AnimBlueprintGeneratedClass PrinterT3_AnimBP.PrinterT3_AnimBP_C
// 0x1290 (0x1660 - 0x03D0)
class UPrinterT3_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7637B89140DE9D74744E7685A735CD3A;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_259F0A644C6AE9997ABBDF965B9B89F2;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_808560A4450994FCBEAB1FA01074C803;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_710B3F5942EB2AD77DBF048085200CF5;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA0AEC8942DD728F1C4F0981B8C2DC1B;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAB24D1D4B6789A19BF28C983C7FC7C1;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FA08F0748BC7662A7F8FA985E90D688;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32CFF622490E50AEBE2991A870F09A46;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2646927E443EA75E81388D8FD5BE20A7;// 0x07A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB95D33E4447251DA23FA2A9E422FE66;// 0x0820(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FC275F24D0064A31614FF8A92E9D9CB;// 0x08A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29DEDA0B41BB1EAC388D3493DEE79FA8;// 0x0920(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82097F6341982E6D2F68C7B1A6383BC52;// 0x09A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A42195B14C0E2A5E82A18BAD896E28642;// 0x0A10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE15881F4E95C37781FE1F8266D724E3;// 0x0A58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03C582F24D9FD3B1046F7997EDA9EB70;// 0x0AC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3FD5AE634B7120F9868544BC984B7E34;// 0x0B10(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20D7AE264CC6898DBFC3B7ADCD7069BE;// 0x0B80(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B88E7BDD46F4CE4362403CB31A51FB04;// 0x0BC8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5A8AD0B14CDC6375AEDEE4979D72523A;// 0x0C10(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C957A3B14B16AC755B594EBED938D9D3;// 0x0CC8(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE515F874270C1764024BEACAE52BE43;// 0x0D80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08727D77499543FA7EDDAFB429BA897D;// 0x0DC8(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8BF147B4454677202AE02DB20A47E0C7;// 0x0E38(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3BDB679F41B03BF1DD2229955783EAD7;// 0x0E80(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B03AC9534EE8961EB56B809F26CA3744;// 0x0EC8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4EC8407B42ED217F6DE591ACDF7718EA;// 0x0F80(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4FF3F8444603CEE8D8D57FB110C8FB38;// 0x1038(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_23655ABC4813123FC7379482DC54FD17;// 0x1080(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FEAE8D6A4C7820906455879284F53C24;// 0x10C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B24CF2164AF98FB3347ABBB80A94F90E;// 0x1110(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB98C67C41786632D2D783A49F39E5D4;// 0x11C8(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F642ED5B4CA0A67BF86229BE4E8DA6F7;// 0x1280(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_910CB10C406757606518F0BA2DE9E009;// 0x12F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C14DFDE4DF4BD32AB10178ECA26EF87;// 0x1338(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E8C12C6F49906B2F03407BBAF1D8D22E;// 0x13A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17D01077400DFFC2127BDAA8C4292C17;// 0x13F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2164BF2A441C302C958E4E900F7979E6;// 0x1460(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82097F6341982E6D2F68C7B1A6383BC5;// 0x14A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A42195B14C0E2A5E82A18BAD896E2864;// 0x1518(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4258C0D9451902F3E665A596C07D4396;// 0x1560(0x00D8)
	bool                                               Deployed;                                                 // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrinterReady;                                             // 0x1639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Printing;                                                 // 0x163A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x163B(0x0001) MISSED OFFSET
	float                                              PrintSpeed;                                               // 0x163C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrintheadHeight;                                          // 0x1640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrintheadExtension;                                       // 0x1644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrintHeadExtend;                                          // 0x1648(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrintHeadHigh;                                            // 0x1654(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PrinterT3_AnimBP.PrinterT3_AnimBP_C");
		return ptr;
	}


	void SetAnimationState(bool NewDeployed, bool NewPrinterReady, float NewPrintHeadExtension, float NewPrintHeadHeight, float NewPrintSpeed);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_DB95D33E4447251DA23FA2A9E422FE66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_29DEDA0B41BB1EAC388D3493DEE79FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_2646927E443EA75E81388D8FD5BE20A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_5A8AD0B14CDC6375AEDEE4979D72523A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_C957A3B14B16AC755B594EBED938D9D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_32CFF622490E50AEBE2991A870F09A46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_SequencePlayer_08727D77499543FA7EDDAFB429BA897D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_B03AC9534EE8961EB56B809F26CA3744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_4EC8407B42ED217F6DE591ACDF7718EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_9FA08F0748BC7662A7F8FA985E90D688();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_DAB24D1D4B6789A19BF28C983C7FC7C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_B24CF2164AF98FB3347ABBB80A94F90E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_ModifyBone_EB98C67C41786632D2D783A49F39E5D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_FA0AEC8942DD728F1C4F0981B8C2DC1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrinterT3_AnimBP_AnimGraphNode_TransitionResult_710B3F5942EB2AD77DBF048085200CF5();
	void AnimNotify_OnPrinterUnpoweredTransitionFinished();
	void AnimNotify_OnPrinterOffTransitionFinished();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_PrinterT3_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
