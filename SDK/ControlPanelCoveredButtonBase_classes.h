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

// BlueprintGeneratedClass ControlPanelCoveredButtonBase.ControlPanelCoveredButtonBase_C
// 0x0058 (0x04D8 - 0x0480)
class AControlPanelCoveredButtonBase_C : public AControlPanelButtonBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ButtonCover;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonCoverOpenAnim_AnimProgress_34CFE3DD45DDB8E34B5882BE10A6E498;// 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonCoverOpenAnim__Direction_34CFE3DD45DDB8E34B5882BE10A6E498;// 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonCoverOpenAnim;                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonCoverCloseAnim_AnimProgress_C24880DF4507A70B380DE0A26717404F;// 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonCoverCloseAnim__Direction_C24880DF4507A70B380DE0A26717404F;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonCoverCloseAnim;                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonCoverHoverJiggleAnim_AnimProgress_9DFBE8E549F1534BA27828A2E4C85EB1;// 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonCoverHoverJiggleAnim__Direction_9DFBE8E549F1534BA27828A2E4C85EB1;// 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonCoverHoverJiggleAnim;                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                CoverHoverCurve;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                CoverCloseCurve;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                CoverOpenCurve;                                           // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlPanelCoveredButtonBase.ControlPanelCoveredButtonBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ButtonCoverOpenAnim__FinishedFunc();
	void ButtonCoverOpenAnim__UpdateFunc();
	void ButtonCoverCloseAnim__FinishedFunc();
	void ButtonCoverCloseAnim__UpdateFunc();
	void ButtonCoverHoverJiggleAnim__FinishedFunc();
	void ButtonCoverHoverJiggleAnim__UpdateFunc();
	void ReceiveBeginPlay();
	void HandleArmedChanged(bool Enable);
	void HandleCoverHoverChanged(bool Enable);
	void ResetAnimations();
	void ExecuteUbergraph_ControlPanelCoveredButtonBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
