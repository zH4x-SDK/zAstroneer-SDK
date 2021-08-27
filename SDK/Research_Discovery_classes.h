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

// BlueprintGeneratedClass Research_Discovery.Research_Discovery_C
// 0x0049 (0x06A9 - 0x0660)
class AResearch_Discovery_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class URewardComponent*                            Reward;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Reward_Slot;                                              // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_Researched;                                           // 0x0690(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FSlotReference                              Reward_Slot_Ref;                                          // 0x0698(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               REP_Taken;                                                // 0x06A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Research_Discovery.Research_Discovery_C");
		return ptr;
	}


	void OnRep_REP_Taken();
	void Update_Animation();
	void OnRep_REP_Researched();
	class UChildSlotComponent* GetBodySlotLegacy();
	void Do_Research();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnReleaseItem_Event_1(class APhysicalItem* Item);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void ExecuteUbergraph_Research_Discovery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
