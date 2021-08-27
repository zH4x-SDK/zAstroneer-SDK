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

// BlueprintGeneratedClass Printer_Breadboards_T2.Printer_Breadboards_T2_C
// 0x0018 (0x0770 - 0x0758)
class APrinter_Breadboards_T2_C : public APrinter_Breadboards_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0758(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBasePrinterT2_AnimBP_C*                     AnimBP_T2;                                                // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Printer_Breadboards_T2.Printer_Breadboards_T2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AnimationStateChanged();
	void SetupAnimBP();
	void UpdateAnim_Printing(bool Printing);
	void SetupPrinterSlots();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_Printer_Breadboards_T2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
