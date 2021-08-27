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

// BlueprintGeneratedClass Breadboard_T3.Breadboard_T3_C
// 0x0013 (0x0790 - 0x077D)
class ABreadboard_T3_C : public ABreadboard_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor1;                                           // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Breadboard_T3.Breadboard_T3_C");
		return ptr;
	}


	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Breadboard_T3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
