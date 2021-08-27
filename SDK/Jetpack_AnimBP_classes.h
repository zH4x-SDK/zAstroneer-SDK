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

// AnimBlueprintGeneratedClass Jetpack_AnimBP.Jetpack_AnimBP_C
// 0x0CD0 (0x10A0 - 0x03D0)
class UJetpack_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_55595C604679270E16836B970D6FB1E3;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D35C53504DB18631648D198F813BEC55;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58921C6C4596E45F6542E3BA77336C83;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBA446414C732CAC27650BB30B0E9566;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6AE03A004033F1E26EC36AB0EDA74678;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7F1AFC84D150D4C543EA1A3A0CE9737;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A94090AB42DA458DA3F2F59193D865E5;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CB60D4C407A9E502E4E71868824C9DF;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_293730964719C53CEEB68C9E941B1BEC;// 0x07A0(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F975DD2E4398332F9C393F80E0797A8A;// 0x0820(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6CE70F3F4D403076EA9895B184C9AA41;// 0x0868(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A4903444A41834517E1ECA807245402;// 0x08B0(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9923155848724FBF0BE3CBAF60B9F0D8;// 0x0968(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E2855ED04C6D6E6F7C57E7BD3C669F29;// 0x09D8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C26D79E147AC6A5B854540A89944C90D;// 0x0A20(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_33CA5E60436B74EDC1FB01B81F68FE7D;// 0x0A68(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FAA5F0F0485F85F1CA7D538605520733;// 0x0AB0(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45FEDD114A50D55EDDB2BFAF4832F4FA;// 0x0B68(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FAA9D363433D722A8CA60E86B46E1F24;// 0x0BD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_873B69C34C00E14D417624BA2A58A4D4;// 0x0C20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A55BB45244655F5FD38BE286990DD8BA;// 0x0C90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91143B484EF317C9E248018859652450;// 0x0CD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4BB82FC14F6843CC63F56B8F7787EA71;// 0x0D48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B5CB34F41776C38C18D4387A96B29AC;// 0x0D90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B2FC77843CCF3BDD09676A6D8933EFC;// 0x0E00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D6046ABF40CC2AFB0A51E8A40C81003B;// 0x0E48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_17545EB24793E91AB89E05B4670AC584;// 0x0EB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD813BB645B1415CED197094A71E069F;// 0x0F00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2158B47D44B545C71ED9D0B67C6397E7;// 0x0F70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_750C3E764EC5F92F60D14F83ACCB6001;// 0x0FB8(0x00D8)
	bool                                               LeftOpen;                                                 // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightOpen;                                                // 0x1091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1092(0x0002) MISSED OFFSET
	struct FVector                                     ThrustDirection;                                          // 0x1094(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Jetpack_AnimBP.Jetpack_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_ModifyBone_6A4903444A41834517E1ECA807245402();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_TransitionResult_293730964719C53CEEB68C9E941B1BEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_TransitionResult_0CB60D4C407A9E502E4E71868824C9DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_ModifyBone_FAA5F0F0485F85F1CA7D538605520733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_TransitionResult_58921C6C4596E45F6542E3BA77336C83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Jetpack_AnimBP_AnimGraphNode_TransitionResult_D35C53504DB18631648D198F813BEC55();
	void ExecuteUbergraph_Jetpack_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
