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

// AnimBlueprintGeneratedClass ShelterT4_AnimBP.ShelterT4_AnimBP_C
// 0x0BBD (0x0F8D - 0x03D0)
class UShelterT4_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2895C500438624B158C5ABA6132AEA29;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1203706148F5CD60D8C1AB9FD9B94F3B;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B61D49874CA978773B9C6098A3067209;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E3E9F94649C1D819E024BBC53F1206;// 0x0520(0x0080)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D43D5E514A59FBD3F2AC9AB8998CF931;// 0x05A0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0AF00ED48221269CDD91FA9938CF416;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E2C033BC4263254F413AED87E97F68A7;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F584B5FE4AEB0B09D96922B8470D69BD;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D73729A24E0949AF67D1449D33B88A08;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_94B6E6D049905F556000CB9C97E55C85;// 0x0748(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_18A5303E48C6ABAB1C2D0886C7436E6F;// 0x0790(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7AD8F5A04F5052D2CFE251BFB23724A4;// 0x0870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E9AC44F40A795917E6E4CBEA655933C;// 0x08F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_778C2BED4779DA492D00E19D30E935FB;// 0x0970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBB896B34447DF368D79E6907408A690;// 0x09F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64615F9A43EDF32B3C11FAA38DE9DF63;// 0x0A70(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DD83E5CC442D71E54C29C3A0111CE36C;// 0x0AF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F59CAD774A9AFA8659B7D987DFCD620F;// 0x0B60(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7A6561ED4A2496A21BEC1EA1D9FCB39D;// 0x0BA8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8BB9D26345937E5052CBD5B5C38E9050;// 0x0BE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_580584AA44F7C2CBD9A2ECBA7B37B52B;// 0x0C28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C36FEA74F6D6D937186CC988A333852;// 0x0C98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBECD61540428276BEE084BDEE905CFD;// 0x0CE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_21410229458370BAC77F85A6CA441158;// 0x0D50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3DA8E94C46CB8051E72FF9B4249FBD9A;// 0x0D98(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E549907D42E20F2B96D524AA3DC717CB;// 0x0E70(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A15984A74AB5F1EDC45327B9490D3E56;// 0x0F50(0x0038)
	bool                                               IsDoorOpen;                                               // 0x0F88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnpacked;                                               // 0x0F89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreUnpacked;                                            // 0x0F8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreunpackedandUnpacked;                                 // 0x0F8B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotPreunpackedIsUnpacked;                                 // 0x0F8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShelterT4_AnimBP.ShelterT4_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_7AD8F5A04F5052D2CFE251BFB23724A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_3E9AC44F40A795917E6E4CBEA655933C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_778C2BED4779DA492D00E19D30E935FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_87E3E9F94649C1D819E024BBC53F1206();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_FBB896B34447DF368D79E6907408A690();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_64615F9A43EDF32B3C11FAA38DE9DF63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_B61D49874CA978773B9C6098A3067209();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT4_AnimBP_AnimGraphNode_TransitionResult_1203706148F5CD60D8C1AB9FD9B94F3B();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ShelterT4_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
