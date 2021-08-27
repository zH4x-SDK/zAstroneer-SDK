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

// BlueprintGeneratedClass BundledItemBase.BundledItemBase_C
// 0x0008 (0x06E0 - 0x06D8)
class ABundledItemBase_C : public AResourceBundle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BundledItemBase.BundledItemBase_C");
		return ptr;
	}


	void PerformUnbundlingBehaviorOnUse();
	void UpdateUnbundlingUseSuppression();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void CustomEvent_2(bool NewOwner);
	void ExecuteUbergraph_BundledItemBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
