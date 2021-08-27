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

// BlueprintGeneratedClass Seat_Base_SS_BP.Seat_Base_SS_BP_C
// 0x0026 (0x0720 - 0x06FA)
class ASeat_Base_SS_BP_C : public ASeat_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x06FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              LastEmplacedSlot;                                         // 0x0710(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat_Base_SS_BP.Seat_Base_SS_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_SetLandedDelegate__DelegateSignature(bool Landed);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Seat_Base_SS_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
