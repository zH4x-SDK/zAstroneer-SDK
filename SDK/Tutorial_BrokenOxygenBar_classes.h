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

// BlueprintGeneratedClass Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C
// 0x0020 (0x03C8 - 0x03A8)
class ATutorial_BrokenOxygenBar_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    OxygenVent;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        broken_tank;                                              // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C");
		return ptr;
	}


	void SetVentingEffectsActive(bool active);
	void UserConstructionScript();
	void BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
	void ExecuteUbergraph_Tutorial_BrokenOxygenBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
