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

// BlueprintGeneratedClass Shredder_T2.Shredder_T2_C
// 0x0014 (0x0760 - 0x074C)
class AShredder_T2_C : public AShredder_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class UBaseShredderT2_AnimBP_C*                    AnimInstance;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shredder_T2.Shredder_T2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateShredderAnimState(TEnumAsByte<EShredderState> NewState);
	void UpdateShredderAnimSpeed(float NewPowerLevel);
	void OnAnimationInactive();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ExecuteUbergraph_Shredder_T2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
