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

// BlueprintGeneratedClass hazard_tumbler.hazard_tumbler_C
// 0x0068 (0x0418 - 0x03B0)
class Ahazard_tumbler_C : public AHazardActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformableComponent*                        Deformable;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldGravity*                               WorldGravity;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class APhysicalItem*>                       AttachedItems;                                            // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     Direction;                                                // 0x03F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Life;                                                     // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Size;                                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WindDir;                                                  // 0x0404(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Target_Actor;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hazard_tumbler.hazard_tumbler_C");
		return ptr;
	}


	class APhysicalItem* DropItem(const struct FTransform& Spawn_Transform);
	void ConstrainObject(class UPrimitiveComponent* Comp);
	void ReleaseItems();
	void AttachTo(class APhysicalItem* Actor, class UPrimitiveComponent* Comp);
	void SetDirection(const struct FVector& Direction);
	void Destroy();
	void Move();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams);
	void OnSpawn(class AActor* Target);
	void ExecuteUbergraph_hazard_tumbler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
