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

// BlueprintGeneratedClass Staging_T2.Staging_T2_C
// 0x0040 (0x03F0 - 0x03B0)
class AStaging_T2_C : public AAstroPlayLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UMediaPlayer*                                GateUnlockPlayer;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayer*                                AnomolyPlayer;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayer*                                ComputerPlayer;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AT2_Planet_Terran_C*                         T2_Planet_Terran_904_EdGraph_0_RefProperty;               // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AT2_Planet_Terran_C*                         T2_Planet_Terran_904_EdGraph_1_RefProperty;               // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExoSatalliteIntro_C*                        ExoSatalliteIntro_566_EdGraph_2_RefProperty;              // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AT2_Planet_Terran_C*                         T2_Planet_Terran_904_EdGraph_3_RefProperty;               // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Staging_T2.Staging_T2_C");
		return ptr;
	}


	void SetupOutroCinematicBindings(class ALevelSequenceActor* SequenceActor);
	void DisplayWatermark(class UClass* DisplayWidget, bool ShouldDisplay);
	void Raycast_Drill_Location();
	void Set_Character_Start(class APlayerController* Controller);
	void Raycast_Rover_Location();
	void Raycast_Shuttle_Location();
	void InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnPlayerJoin_Event_1(class APlayerController* NewPlayer);
	void IntroMaster_ResetPlanets();
	void PlayGateMovie();
	void PlayAnomolyMovie();
	void PlayComputerMovie();
	void Tutorial_PlaySFX();
	void ExecuteUbergraph_Staging_T2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
