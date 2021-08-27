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

// BlueprintGeneratedClass GlobalPostProcess.GlobalPostProcess_C
// 0x0028 (0x03D0 - 0x03A8)
class AGlobalPostProcess_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vignetting;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ObjectHighlightOutlineMID;                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TerrainBrushPostProcessMID;                               // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalPostProcess.GlobalPostProcess_C");
		return ptr;
	}


	void SetPlayerTints();
	void UserConstructionScript();
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Apostrophe_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GlobalPostProcess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
