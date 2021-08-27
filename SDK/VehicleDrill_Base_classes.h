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

// BlueprintGeneratedClass VehicleDrill_Base.VehicleDrill_Base_C
// 0x0050 (0x09E8 - 0x0998)
class AVehicleDrill_Base_C : public AVehicleDeformer_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         Resource_Rail;                                            // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BurnoffParticles2;                                        // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BurnoffParticles1;                                        // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HardTerrainParticleSystem;                                // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BurnoffParticleSubEmitterNames;                           // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            BurnoffParticleEmitters;                                  // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleDrill_Base.VehicleDrill_Base_C");
		return ptr;
	}


	class UParticleSystem* GetSubtractParticleEffect(int HardnessDelta);
	void UpdateBurnoffParticleEffects(bool Enable);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent(int AudioEventIndex);
	void CustomEvent_2(int AudioEventIndex);
	void CHILD_UpdateToolVisualState();
	void ExecuteUbergraph_VehicleDrill_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
