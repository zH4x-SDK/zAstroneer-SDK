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

// BlueprintGeneratedClass TutorialActor.TutorialActor_C
// 0x0045 (0x03ED - 0x03A8)
class ATutorialActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<struct FText>                               Tutorial_Queue;                                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Time_Queue;                                               // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                Tutorial_Timer;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Timer_Time;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Slow_Player;                                              // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TutorialActor.TutorialActor_C");
		return ptr;
	}


	void Hide_Text();
	void Set_Tutorial_Text(const struct FText& InText);
	void Push_Tutorial_UI(const struct FText& Text, float Time);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Text_Visibility();
	void Check_Queue();
	void CustomEvent_1();
	void ExecuteUbergraph_TutorialActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
