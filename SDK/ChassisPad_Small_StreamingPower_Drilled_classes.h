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

// BlueprintGeneratedClass ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C
// 0x0018 (0x0450 - 0x0438)
class AChassisPad_Small_StreamingPower_Drilled_C : public AChassisPad_Small_StreamingPower_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    OxygenLights;                                             // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_HasOxygen;                                            // 0x0448(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                OxygenLightIndex;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChassisPad_Small_StreamingPower_Drilled.ChassisPad_Small_StreamingPower_Drilled_C");
		return ptr;
	}


	void OnRep_REP_HasOxygen();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ToggleOxygenRail(bool Oxygen);
	void ExecuteUbergraph_ChassisPad_Small_StreamingPower_Drilled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
