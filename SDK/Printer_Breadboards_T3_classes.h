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

// BlueprintGeneratedClass Printer_Breadboards_T3.Printer_Breadboards_T3_C
// 0x0010 (0x0768 - 0x0758)
class APrinter_Breadboards_T3_C : public APrinter_Breadboards_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0758(0x0008) (Transient, DuplicateTransient)
	class UPrinterT3_AnimBP_C*                         AnimBP_T3;                                                // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Printer_Breadboards_T3.Printer_Breadboards_T3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AnimationStateChanged();
	void SetupPrinterSlots();
	void UpdateAnim_Printing(bool Printing);
	void SetupAnimBP();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Printer_Breadboards_T3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
