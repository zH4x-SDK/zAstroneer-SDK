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

// BlueprintGeneratedClass Dropship_ShelterSpawner.Dropship_ShelterSpawner_C
// 0x001F (0x0858 - 0x0839)
class ADropship_ShelterSpawner_C : public ADropship_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0839(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             ShelterPackageSpawnPoint;                                 // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShelterItemType;                                          // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dropship_ShelterSpawner.Dropship_ShelterSpawner_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__StorageChassis_K2Node_ComponentBoundEvent_1_EnterExitSignal__DelegateSignature(bool Entered);
	void ExecuteUbergraph_Dropship_ShelterSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
