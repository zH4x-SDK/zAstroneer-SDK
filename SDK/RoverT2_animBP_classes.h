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

// AnimBlueprintGeneratedClass RoverT2_animBP.RoverT2_animBP_C
// 0x1A62 (0x1F72 - 0x0510)
class URoverT2_animBP_C : public UWheeledChassisAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D05C59BA45A249D42F4D529816C072A2;      // 0x0518(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E7E319624A44C1D3993B73B01AB33081;// 0x0560(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DDC52CA14DFA1D30CE97A8BB77C89B44;// 0x0590(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1B0BBD6B41C5B0EE7C68F895C43A2683;// 0x05D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38EE13EE4A5B5FB9B498738F893553D5;// 0x0690(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D614BF714BB82F5B7E3F06A3646C65E6;// 0x0748(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5059B7964517DE74A46CD1A8E949B643;// 0x0800(0x00B8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_3E7A620C4C7E265DA78BC296745049BF;    // 0x08C0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4C0CA01947E4D1D9D4A96FB26FE45FE3;    // 0x0A60(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_EDBDBA4A4D89B1A41D270AB57A7A6B21;  // 0x0C00(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_116860C4427FF0F8EE8D3C882DB79EA9;  // 0x0CA8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1FFF63C2445E968D32D659B54BA5BC6B;// 0x0D50(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_588C066049D84E13C6C8638A9D77C3D5;// 0x0E08(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_06FAD98245D5F3F652DA43B41D6A77B8;// 0x0EC0(0x00B8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0F78(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B278F1DD4089FD5D2A213C873B6FDEA8;    // 0x0F80(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_90F4BA654EB6B19FCBB0F3AB7251CDB0;    // 0x1120(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C0CE97A8432CBC6590D79890330311A5;  // 0x12C0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0F659EA04064DDD4F611548B9D545D9E;  // 0x1368(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0481513E4AAF5D961FACC7876C042912;// 0x1410(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B7D5482B42846BD08B097DAFA0B365BC;// 0x14C8(0x00B8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A01F818245B837E831E15DB4005A01D5;    // 0x1580(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C02C8EA84E5D55A9E61EE8AFF37E3747;  // 0x1720(0x00A8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x17C8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_91BC32AD4FC0BE0A1307439D94D4B162;    // 0x17D0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_FBAA89DB4DCBA7A15E0774813E90A2DD;  // 0x1970(0x00A8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1A18(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D38D0CB142F13AD7FC0E50B7B6E3F691;    // 0x1A20(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A7725CD44355140E1CB0ADB83BFCD699;  // 0x1BC0(0x00A8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1C68(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_CADCF74144C82C2D97FCBB94F7A4BE15;    // 0x1C70(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_257C08E0436A266A0109C2A165ECA7FD;  // 0x1E10(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0E9BB5054BF26D9D23DE3F9FA7F9FFEB;// 0x1EB8(0x00B8)
	bool                                               IsInMotion;                                               // 0x1F70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WheelsAreTurning;                                         // 0x1F71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoverT2_animBP.RoverT2_animBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_0481513E4AAF5D961FACC7876C042912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_B7D5482B42846BD08B097DAFA0B365BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_0E9BB5054BF26D9D23DE3F9FA7F9FFEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_06FAD98245D5F3F652DA43B41D6A77B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_588C066049D84E13C6C8638A9D77C3D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_1FFF63C2445E968D32D659B54BA5BC6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_5059B7964517DE74A46CD1A8E949B643();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_D614BF714BB82F5B7E3F06A3646C65E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_38EE13EE4A5B5FB9B498738F893553D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoverT2_animBP_AnimGraphNode_ModifyBone_1B0BBD6B41C5B0EE7C68F895C43A2683();
	void BlueprintBeginPlay();
	void HandleMovementStateChanged(bool bIsMoving);
	void HandleRoverWheelSteerAnimStateChanged(bool bWheelsAreTurning);
	void UpdateAnimationTickability();
	void ExecuteUbergraph_RoverT2_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
