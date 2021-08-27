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

// BlueprintGeneratedClass ResourceNugget10.ResourceNugget10_C
// 0x000F (0x06F8 - 0x06E9)
class AResourceNugget10_C : public AResourceNuggetFlecks_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceNugget10.ResourceNugget10_C");
		return ptr;
	}


	void ReplaceWithCarbon();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ResourceNugget10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
