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

// BlueprintGeneratedClass Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C
// 0x0033 (0x0474 - 0x0441)
class APumpkin_Offspring_BASE_BP_C : public ABASE_HarmlessHazard_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (Transient, DuplicateTransient)
	class UItemComponent*                              Item;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SeedType;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Researchable_Spawn_Chance;                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Death_and_Seed();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Pumpkin_Offspring_BASE_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
