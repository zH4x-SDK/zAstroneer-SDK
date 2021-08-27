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

// AnimBlueprintGeneratedClass HazcomSpew_tubeworm01_AnimBP.HazcomSpew_tubeworm01_AnimBP_C
// 0x04E0 (0x08B0 - 0x03D0)
class UHazcomSpew_tubeworm01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_04613DF04740B3D2093CD8852DE0A243;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C2BA3A2430424A45785FEB310A21716;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C875E371486F2731E4B58E87F78A46F2;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_388299FF44885E7A16970FAEE963803A;// 0x0520(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A675A9F4E930DDFD480FD91635DA8D6;// 0x05A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8971820A4FDF677D01836A8326AD959A;// 0x0610(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C8C87CE4A83D8ACA9A0F3B63E105EB3;// 0x0658(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_306A23C641618E211886D1923FFB6633;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0614FBE14E2CC94BEE7E0E88F60A8600;// 0x0710(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA82754841C3A434173176B37F99FBC4;// 0x0780(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FB08F6F442D0BA3D3BDE139EED35A542;// 0x07C8(0x00D8)
	bool                                               IsSpewing;                                                // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class AHazard_Spewer_Tubeworm_01_C*                NewVar_1;                                                 // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomSpew_tubeworm01_AnimBP.HazcomSpew_tubeworm01_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomSpew_tubeworm01_AnimBP_AnimGraphNode_TransitionResult_388299FF44885E7A16970FAEE963803A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomSpew_tubeworm01_AnimBP_AnimGraphNode_TransitionResult_C875E371486F2731E4B58E87F78A46F2();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HazcomSpew_tubeworm01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
