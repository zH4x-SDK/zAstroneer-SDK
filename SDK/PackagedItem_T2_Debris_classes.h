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

// BlueprintGeneratedClass PackagedItem_T2_Debris.PackagedItem_T2_Debris_C
// 0x0008 (0x0720 - 0x0718)
class APackagedItem_T2_Debris_C : public APackagedItem_T1_Debris_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItem_T2_Debris.PackagedItem_T2_Debris_C");
		return ptr;
	}


	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_PackagedItem_T2_Debris(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
