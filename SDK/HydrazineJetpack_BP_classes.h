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

// BlueprintGeneratedClass HydrazineJetpack_BP.HydrazineJetpack_BP_C
// 0x0010 (0x07C0 - 0x07B0)
class AHydrazineJetpack_BP_C : public AJetpack_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B0(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         CanisterSlot;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HydrazineJetpack_BP.HydrazineJetpack_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void CreateLowFuelLightMaterialInstance();
	void ExecuteUbergraph_HydrazineJetpack_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
