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

// BlueprintGeneratedClass FadeToBlackActor.FadeToBlackActor_C
// 0x0020 (0x03C8 - 0x03A8)
class AFadeToBlackActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisplayWidget;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFadeToBlackScreen_C*                        FadeToBlackScreen;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FadeToBlackActor.FadeToBlackActor_C");
		return ptr;
	}


	void DestroyFadeScreen();
	void TriggerFadeIn();
	void TriggerFadeOut();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTransitionComplete();
	void ExecuteUbergraph_FadeToBlackActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
