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

// BlueprintGeneratedClass Hazard_Spiker_3.Hazard_Spiker_2_C
// 0x0059 (0x0401 - 0x03A8)
class AHazard_Spiker_2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UProceduralStateComponent*                   ProceduralState;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OnDestroyParticle;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldGravity*                               WorldGravity;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPhysicsComponent*                    TerrainPhysics;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           CollisionCapsule;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           ProximityCapsule;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ADesignAstro_C*>                      OverlappingPlayers;                                       // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               REP_Enabled;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Spiker_3.Hazard_Spiker_2_C");
		return ptr;
	}


	void UserConstructionScript();
	void CustomEvent_2(float DeltaSeconds);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_261_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ProximityCapsule_K2Node_ComponentBoundEvent_270_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__TerrainPhysics_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void ReceiveBeginPlay();
	void MULTI_Spawn_Seeds();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DestroyFinished(class UParticleSystemComponent* PSystem);
	void Destroy_Particle();
	void ExecuteUbergraph_Hazard_Spiker_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
