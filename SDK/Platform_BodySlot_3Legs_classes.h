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

// BlueprintGeneratedClass Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C
// 0x0010 (0x0440 - 0x0430)
class APlatform_BodySlot_3Legs_C : public APowerSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Platform_BodySlot_3Legs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
