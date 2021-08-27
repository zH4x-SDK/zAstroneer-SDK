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

// BlueprintGeneratedClass research_rock_013a.research_rock_013a_C
// 0x0017 (0x06C0 - 0x06A9)
class Aresearch_rock_013a_C : public AResearch_Discovery_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Proximity;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass research_rock_013a.research_rock_013a_C");
		return ptr;
	}


	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_research_rock_013a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
