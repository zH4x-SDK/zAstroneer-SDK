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

// BlueprintGeneratedClass ModernPOI_Research_Barren_01_U_Large_Collection.ModernPOI_Research_Barren_01_U_Large_Collection_C
// 0x0010 (0x0424 - 0x0414)
class AModernPOI_Research_Barren_01_U_Large_Collection_C : public AModernPOI_Research_01_Large_Collection_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	int                                                CheckSpawnType_1;                                         // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Research_Barren_01_U_Large_Collection.ModernPOI_Research_Barren_01_U_Large_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ModernPOI_Research_Barren_01_U_Large_Collection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
