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

// BlueprintGeneratedClass GatewayKey_Base.GatewayKey_Base_C
// 0x009B (0x06FB - 0x0660)
class AGatewayKey_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Build_out_Timeline_Glyph_Opacity_0CDE932F4B80206E6D57389C520D5495;// 0x0670(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Build_out_Timeline_Printer_Progress_0CDE932F4B80206E6D57389C520D5495;// 0x0674(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Build_out_Timeline__Direction_0CDE932F4B80206E6D57389C520D5495;// 0x0678(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Build_out_Timeline;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Build_in_Timeline_GlyphOpacity_E9F847DF41317530EA13F398B23BA848;// 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Build_in_Timeline_PrinterProgress_E9F847DF41317530EA13F398B23BA848;// 0x068C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Build_in_Timeline__Direction_E9F847DF41317530EA13F398B23BA848;// 0x0690(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Build_in_Timeline;                                        // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName_Shell;                                   // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialSlotName_GlyphIcon;                               // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           Palette_SharedMaterial;                                   // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Glyph_SharedMaterial;                                     // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Palette_MID;                                              // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GlyphIcon_MID;                                            // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Print_Progress_Scalar;                                    // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Glyph_Opacity_Scalar;                                     // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPhasedInCompleted;                                      // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPhasedOutCompleted;                                     // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               WantsPhasedIn;                                            // 0x06F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsPhasedIn;                                               // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               WantsDestroyOnPhasedOut;                                  // 0x06FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GatewayKey_Base.GatewayKey_Base_C");
		return ptr;
	}


	void OnRep_WantsPhasedIn();
	void Initiate_Build_out_Animation(bool DestroyWhenDone);
	void Initiate_Build_in_Animation();
	void Setup_Dynamic_Materials();
	void Update_Material_Animation(float Printer_Progress, float Glyph_Opacity);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void Build_in_Timeline__FinishedFunc();
	void Build_in_Timeline__UpdateFunc();
	void Build_out_Timeline__FinishedFunc();
	void Build_out_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void AuthorityPhaseIn();
	void AuthorityPhaseOut(bool DestroyWhenDone);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void WantsPhasedInChanged();
	void ExecuteUbergraph_GatewayKey_Base(int EntryPoint);
	void OnPhasedOutCompleted__DelegateSignature();
	void OnPhasedInCompleted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
