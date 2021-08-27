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

// BlueprintGeneratedClass GateTeleportationBubble.GateTeleportationBubble_C
// 0x0069 (0x04D9 - 0x0470)
class AGateTeleportationBubble_C : public ATeleportationBubble
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CharacterDetachLocation;                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BubbleCollapse_BubbleOpacity_6F0A81FE40C053C12E203BBDE0ACD0C7;// 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BubbleCollapse__Direction_6F0A81FE40C053C12E203BBDE0ACD0C7;// 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BubbleCollapse;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BubbleExpansion_BubbleOpacity_2F365C5E439F94DD767D53BB5689F14E;// 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BubbleExpansion__Direction_2F365C5E439F94DD767D53BB5689F14E;// 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BubbleExpansion;                                          // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ArrivalEffectsFinished;                                   // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BubbleMID;                                                // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProxyBubbleMID;                                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BubbleOpacityParam;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExpansionTimelineCompleted;                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    AnimatingBubbleMID;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CollapseTimelineCompleted;                                // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GateTeleportationBubble.GateTeleportationBubble_C");
		return ptr;
	}


	void HandleTeleportationAudio();
	bool TickPostArrivalEffects();
	bool TickArrivalExpansionEffects();
	bool TickExpansionEffects();
	void UserConstructionScript();
	void BubbleExpansion__FinishedFunc();
	void BubbleExpansion__UpdateFunc();
	void BubbleCollapse__FinishedFunc();
	void BubbleCollapse__UpdateFunc();
	void ReceiveBeginPlay();
	void InitializeExpansionEffects();
	void InitializeArrivalExpansionEffects();
	void InitializePostArrivalEffects();
	void TeleportationStateChanged();
	void ExecuteUbergraph_GateTeleportationBubble(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
