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

// BlueprintGeneratedClass Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C
// 0x0017 (0x0920 - 0x0909)
class AShuttle_T4_ThrusterSlot_C : public AShuttle_T2_ThrusterSlot_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UShuttleLarge_AnimBP_C*                      T4_AnimBP;                                                // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupBlueprintAnimation();
	void SetShuttleAnimationState(bool Occupied, bool Launched);
	void ExecuteUbergraph_Shuttle_T4_ThrusterSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
