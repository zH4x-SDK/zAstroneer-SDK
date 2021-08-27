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

// BlueprintGeneratedClass BackpackCatalog_Creative.BackpackCatalog_Creative_C
// 0x0046 (0x0960 - 0x091A)
class ABackpackCatalog_Creative_C : public ABackpackCatalog_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x091A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_All;                              // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_Discovery;                        // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_Organics;                         // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_LargeFab;                         // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_MedFab;                           // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_SmallFab;                         // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelButtonChildActorComponent*      ControlPanelButtonChild_Backpack;                         // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackpackCatalog_Creative.BackpackCatalog_Creative_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ControlPanelButtonChild_Backpack_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_SmallFab_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_MedFab_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_LargeFab_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_Organics_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_Discovery_K2Node_ComponentBoundEvent_6_Signal__DelegateSignature();
	void BndEvt__ControlPanelButtonChild_All_K2Node_ComponentBoundEvent_7_Signal__DelegateSignature();
	void ActiveCatalogEntryChanged_Creative(bool bImmediate);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BackpackCatalog_Creative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
