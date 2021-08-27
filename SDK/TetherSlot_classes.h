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

// BlueprintGeneratedClass TetherSlot.TetherSlot_C
// 0x0020 (0x0450 - 0x0430)
class ATetherSlot_C : public AItemSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UObject*                                     Power_Connection;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bidirectional_Power;                                      // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UTetherAttachComponent*                      Current_Attach_Point;                                     // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TetherSlot.TetherSlot_C");
		return ptr;
	}


	void AcceptsConnection();
	void UserConstructionScript();
	void OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource);
	void OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource);
	void ExecuteUbergraph_TetherSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
