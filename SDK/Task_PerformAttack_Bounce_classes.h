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

// BlueprintGeneratedClass Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C
// 0x0088 (0x0128 - 0x00A0)
class UTask_PerformAttack_Bounce_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      targetActor;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      HomeLocation;                                             // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              VerticalBounceAdjust;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceDamage;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceVelocity;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UAnimMontage*                                AttackMontage;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialAnimWindupTime;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FString                                     AttackSound_Event;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C");
		return ptr;
	}


	void OnFinish_EF32E51F431FE3118FDEA8BBA5A4B4A3();
	void ReceiveExecute(class AActor* OwnerActor);
	void MULTI_Play_SFX(class AActor* Hazard_Actor);
	void ExecuteUbergraph_Task_PerformAttack_Bounce(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
