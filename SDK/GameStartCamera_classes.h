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

// BlueprintGeneratedClass GameStartCamera.GameStartCamera_C
// 0x000A (0x08EA - 0x08E0)
class AGameStartCamera_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	bool                                               Completed;                                                // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Start_Signalled;                                          // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameStartCamera.GameStartCamera_C");
		return ptr;
	}


	void ConditionalSetViewTarget(class APlayerController* Controller);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStartGameSignal_Event_1(bool StartedFromSave);
	void OnIntroCinematicComplete_Event_1();
	void LocalClientJoined(class AAstroPlayerController* Controller);
	void ReceiveTick(float DeltaSeconds);
	void OnLifecycleChanged(EGameLifecycleState OldState, EGameLifecycleState NewState);
	void MakeSelfCameraTarget();
	void ReceiveDestroyed();
	void ExecuteUbergraph_GameStartCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
