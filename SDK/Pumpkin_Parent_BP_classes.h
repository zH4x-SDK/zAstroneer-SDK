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

// BlueprintGeneratedClass Pumpkin_Parent_BP.Pumpkin_Parent_BP_C
// 0x0037 (0x0478 - 0x0441)
class APumpkin_Parent_BP_C : public ABASE_HarmlessHazard_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (Transient, DuplicateTransient)
	class UTooltipComponent*                           ToolTip;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemComponent*                              Item;                                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MegaSpawnChance;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<class UClass*>                              seeds;                                                    // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pumpkin_Parent_BP.Pumpkin_Parent_BP_C");
		return ptr;
	}


	void SelectSeed(class UClass** SelectedSeed);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Death_and_Seed();
	void ExecuteUbergraph_Pumpkin_Parent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
