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

// BlueprintGeneratedClass Platform_Standard_T1x64.Platform_Standard_T1x64_C
// 0x004B (0x0798 - 0x074D)
class APlatform_Standard_T1x64_C : public APlatform_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TetherAttach4;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TetherAttach3;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TetherAttach2;                                            // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TetherAttach1;                                            // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlotBack;                                            // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlotFront;                                           // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot01;                                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot02;                                              // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_Standard_T1x64.Platform_Standard_T1x64_C");
		return ptr;
	}


	void GetLinearTetherAttachPoints(TArray<struct FLinearAttachPoint>* Array);
	void UserConstructionScript();
	void SetupCableSlots();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Platform_Standard_T1x64(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
