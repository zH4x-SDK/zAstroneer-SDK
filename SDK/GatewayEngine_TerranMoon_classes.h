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

// BlueprintGeneratedClass GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C
// 0x0008 (0x0778 - 0x0770)
class AGatewayEngine_TerranMoon_C : public AGatewayEngine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GatewayEngine_TerranMoon.GatewayEngine_TerranMoon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AwardPlanetEngineAchievement();
	void ExecuteUbergraph_GatewayEngine_TerranMoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
