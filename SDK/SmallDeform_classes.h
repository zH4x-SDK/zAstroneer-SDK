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

// BlueprintGeneratedClass SmallDeform.SmallDeform_C
// 0x0149 (0x0BC9 - 0x0A80)
class ASmallDeform_C : public ADeformTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            CreativeModeMenu;                                         // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Hose_Slot;                                                // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceCacheComponent*                     ResourceCache;                                            // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemSmall;                                                // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         AugmentSlot3;                                             // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DeformEffect;                                             // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerToolComponent*                        PlayerTool;                                               // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         AugmentSlot2;                                             // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         AugmentSlot1;                                             // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrackableActorComponent*                    CrackableActor;                                           // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Function_;                                                // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USelectionIndicatorComponent*                SelectionIndicator;                                       // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Power_Widgets;                                            // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Handle_Location;                                          // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Vacuum_Location;                                          // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Widgets;                                                  // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Deform_Mesh;                                              // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Rail;                                            // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Table;                                                    // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Resource_Slot;                                            // 0x0B60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Rep_Switched_On;                                          // 0x0B70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B71(0x0007) MISSED OFFSET
	struct FSlotReference                              HoseSlotRef;                                              // 0x0B78(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Audio_DeformLoop_Playing;                                 // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B89(0x0007) MISSED OFFSET
	TArray<struct FSlotReference>                      Aug_Slots;                                                // 0x0B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ParticleSystemComponents;                                 // 0x0BA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     RelativeClosedPosition;                                   // 0x0BB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CreativeTerrainColorIndicatorMI;                          // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dummy_Ping_Fired;                                         // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmallDeform.SmallDeform_C");
		return ptr;
	}


	void StopTerrainStreamingEffect();
	void StartTerrainStreamingEffect();
	void GetTerrainHardnessSwitchValue(int TerrainHardness, int* TerrainHardnessSwitchValue);
	class UChildSlotComponent* GetBodySlotLegacy();
	void Stop_Effects();
	void Start_Effects(EDeformType Op);
	void UpdateDeformEffects();
	void End_Audio();
	void Apply_Power(int Amount, bool* Store);
	void Apply_Oxygen(int Amount, bool* Store);
	void OnRep_Rep_Switched_On();
	bool GetIsActive();
	float GetPercentNuggetMined();
	void Update_Deform_Audio();
	void StartAudio(EDeformType Op);
	void Update_Operation_View();
	class UClass* TakeTerrainResource();
	void Set_Power_Indicator();
	void UserConstructionScript();
	void InpActEvt_Add_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void CLIENT_Ping_Symbol(class UClass* ItemType, bool BackpackAddSucceeded);
	void OnInteraction(const struct FClickResult& Click);
	void Bind_Audio();
	void Using_Start();
	void Using_End();
	void Mined_Timer();
	void Control_Activate();
	void Control_Deactivate();
	void SERVER_Start_FX(EDeformType Op);
	void MULTI_Start_FX(EDeformType Op);
	void SERVER_End_FX();
	void MULTI_End_FX();
	void BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature(class UClass* Type);
	void BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature(class UClass* Type);
	void BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void HandleCreativeModeEnabledChanged(bool Enable);
	void HandleActiveCreativeTerrainColorChanged(bool PickedWithEyedropperTool);
	void UpdateActiveTerrainColor();
	void OnAttemptedToPickColor();
	void HandleCreativeTerrainLightChanged(bool Light_Active);
	void ExecuteUbergraph_SmallDeform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
