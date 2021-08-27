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

// AnimBlueprintGeneratedClass DroneT1_AnimBP.DroneT1_AnimBP_C
// 0x06C2 (0x0AA2 - 0x03E0)
class UDroneT1_AnimBP_C : public UFlyingDroneAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1F2A4DED4FD47586A6E7F69B32367925;      // 0x03E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB180567441C117FC07DF9AF551154C3;// 0x0430(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE75B9D64CAF96964952B6AB73996145;// 0x04B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27D3C71348F3F581BE409EBE7CE98712;// 0x0530(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_274C7A1142DD424A9B55878CA97BB0DB;// 0x05B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_410E42C344ABB2889086AD8148D71A0D;// 0x0630(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FAD71B0483DB1F7C916B0ACD0C4F15C;// 0x06A0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71952D7C476ACE804D0234BCF8DBE62E;// 0x06E8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C62D59F45154601D1D18E926E55C292;// 0x0810(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33F42691408923E8C5E85BB1DEE5DE6B;// 0x0858(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FEE8F7644EF453D6E49DBCB6AD51170D;// 0x08C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB3270EE42C7A61B4FA3E390BF47910A;// 0x0910(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E5143F04F059BF2C7331A8A6B5EF160;// 0x0980(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_693C141F485C056E0C0FC598DA0AEBE8;// 0x09C8(0x00D8)
	bool                                               IsDeployed;                                               // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DroneShouldBeAnimating;                                   // 0x0AA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DroneT1_AnimBP.DroneT1_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DroneT1_AnimBP_AnimGraphNode_TransitionResult_274C7A1142DD424A9B55878CA97BB0DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DroneT1_AnimBP_AnimGraphNode_BlendSpacePlayer_71952D7C476ACE804D0234BCF8DBE62E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DroneT1_AnimBP_AnimGraphNode_TransitionResult_FE75B9D64CAF96964952B6AB73996145();
	void AnimNotify_OnDroneReturnToIdle();
	void AnimNotify_OnDroneExitIdle();
	void BlueprintBeginPlay();
	void SetDroneDeployed(bool ShouldBeDeployed);
	void ExecuteUbergraph_DroneT1_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
