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

// BlueprintGeneratedClass ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C
// 0x0098 (0x0498 - 0x0400)
class AControlPanelButtonBase_nobacking_C : public AControlPanelButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ButtonMesh;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ButtonMeshWrapper;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ButtonRoot;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonHoverJiggleAnim_HoverJiggleAnimProgress_CE7DB1B24A616389AC6AE9B84684E56C;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonHoverJiggleAnim__Direction_CE7DB1B24A616389AC6AE9B84684E56C;// 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonHoverJiggleAnim;                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonPressAnim_AnimProgress_2E74C5304D42C804F0DF899CB53A6B55;// 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonPressAnim__Direction_2E74C5304D42C804F0DF899CB53A6B55;// 0x043C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonPressAnim;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ButtonPressAnimCurve;                                     // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ButtonHoverJiggleAnimCurve;                               // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ButtonsAndIconsMID;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightsOnlyMID;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonLightBitIndex;                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonIconIndex;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonIconSlotIndex;                                      // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonCancelIconIndex;                                    // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ButtonLit;                                                // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	struct FLinearColor                                IconOffColor;                                             // 0x047C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UTexture2D*                                  IconAtlasTexture;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C");
		return ptr;
	}


	void UpdateButtonVisuals();
	void UserConstructionScript();
	void ButtonPressAnim__FinishedFunc();
	void ButtonPressAnim__UpdateFunc();
	void ButtonHoverJiggleAnim__FinishedFunc();
	void ButtonHoverJiggleAnim__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void HandleButtonPressed();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void HandleEnabledChanged(bool Enable);
	void HandleHoveredChanged(bool Enable);
	void CancelAnimations();
	void ExecuteUbergraph_ControlPanelButtonBase_nobacking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
