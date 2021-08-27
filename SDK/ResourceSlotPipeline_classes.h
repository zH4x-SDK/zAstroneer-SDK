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

// BlueprintGeneratedClass ResourceSlotPipeline.ResourceSlotPipeline_C
// 0x0008 (0x0470 - 0x0468)
class AResourceSlotPipeline_C : public AResourceSlot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSlotPipeline.ResourceSlotPipeline_C");
		return ptr;
	}


	bool AcceptsItem(class APhysicalItem* Item);
	void UserConstructionScript();
	void OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource);
	void OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource);
	void ExecuteUbergraph_ResourceSlotPipeline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
