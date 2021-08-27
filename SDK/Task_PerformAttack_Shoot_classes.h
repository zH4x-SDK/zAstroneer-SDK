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

// BlueprintGeneratedClass Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C
// 0x004C (0x00EC - 0x00A0)
class UTask_PerformAttack_Shoot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      targetActor;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class UAnimMontage*                                Attack_Montage;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialAnimWindupTime;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileSpeed;                                          // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C");
		return ptr;
	}


	void OnFinish_0D57BA3C40F8532BD7842F844F79B0A1();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_Task_PerformAttack_Shoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
