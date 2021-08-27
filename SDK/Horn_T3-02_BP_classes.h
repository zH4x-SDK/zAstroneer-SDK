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

// BlueprintGeneratedClass Horn_T3-02_BP.Horn_T3-02_BP_C
// 0x0018 (0x0750 - 0x0738)
class AHorn_T3_02_BP_C : public AHorn_BASE_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	float                                              PulseAnim_Pulse_5FFD1D6749A3F870748F819B50DD0606;         // 0x0740(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PulseAnim__Direction_5FFD1D6749A3F870748F819B50DD0606;    // 0x0744(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0745(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PulseAnim;                                                // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Horn_T3-02_BP.Horn_T3-02_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void PulseAnim__FinishedFunc();
	void PulseAnim__UpdateFunc();
	void ReceiveBeginPlay();
	void StartPulse(bool Looping);
	void StopPulse();
	void ExecuteUbergraph_Horn_T3_02_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
