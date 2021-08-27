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

// BlueprintGeneratedClass Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C
// 0x0094 (0x0134 - 0x00A0)
class UTask_PerformAttack_AoESpew_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      targetActor;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              AreaDamage;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetingData;                                            // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ParticleSystemComponent;                                  // 0x0100(0x0028) (Edit, BlueprintVisible)
	class UAnimMontage*                                Attack_Montage;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage_Cloud_Range;                                       // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C");
		return ptr;
	}


	void OnFinish_7AA4B4774C5B76386089679F0370FE8E();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_Task_PerformAttack_AoESpew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
