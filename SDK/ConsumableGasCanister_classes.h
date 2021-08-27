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

// BlueprintGeneratedClass ConsumableGasCanister.ConsumableGasCanister_C
// 0x0008 (0x0700 - 0x06F8)
class AConsumableGasCanister_C : public AConsumableCanister_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsumableGasCanister.ConsumableGasCanister_C");
		return ptr;
	}


	void UpdateCanisterVisuals_Internal();
	void UserConstructionScript();
	void UpdateCanisterVisuals();
	void ExecuteUbergraph_ConsumableGasCanister(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
