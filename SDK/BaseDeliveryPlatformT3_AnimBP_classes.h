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

// AnimBlueprintGeneratedClass BaseDeliveryPlatformT3_AnimBP.BaseDeliveryPlatformT3_AnimBP_C
// 0x0609 (0x09D9 - 0x03D0)
class UBaseDeliveryPlatformT3_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3D4BF7A343D52594DB5CCB9BB46A64D9;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A6F06FE4135B12EBD2374954061E5F6;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E64C4DB8482B5C2AB0188C8498BBE318;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F539D93149D2F9A7C600CD822399D938;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A96092A42046B586C4F35832725377E;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D1BC2F142659A9F23D280BD5DF19CBD;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A9830FA94ACAF7DBDFBED69660FA3464;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD7745DA47653F9A43112D92F464007C;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_523E269D402CFE3B29FEE4841B730E8C;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA4613FE4DD843A2D737F288E3B0A22C;// 0x0790(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9B612CC243E369E7DEB05EA362E6055A;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F0CC874435809AB3CEDF388B55DF45B;// 0x0848(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_687F2E7D425232F0D4C5A6B7FBE4C1AF;// 0x08B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_87C5D5DC4AB07122519E29A44B7EFB01;// 0x0900(0x00D8)
	bool                                               IsOpen;                                                   // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseDeliveryPlatformT3_AnimBP.BaseDeliveryPlatformT3_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseDeliveryPlatformT3_AnimBP_AnimGraphNode_TransitionResult_0A96092A42046B586C4F35832725377E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseDeliveryPlatformT3_AnimBP_AnimGraphNode_TransitionResult_E64C4DB8482B5C2AB0188C8498BBE318();
	void ExecuteUbergraph_BaseDeliveryPlatformT3_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
