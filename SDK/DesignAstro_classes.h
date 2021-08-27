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

// BlueprintGeneratedClass DesignAstro.DesignAstro_C
// 0x0258 (0x0AF8 - 0x08A0)
class ADesignAstro_C : public AAstroCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mask;                                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Hat;                                                      // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___ColorPicker;                                   // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___ColorPaint;                                    // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Flatten;                                       // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Add;                                           // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Subtract;                                      // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_ColorPicker;                                        // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_ColorPaint;                                         // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Flat;                                               // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Add;                                                // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Subtract;                                           // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Creative_Mode_Tool_Modes;                                 // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         PreviewSlot;                                              // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ItemSpawnPreview;                                         // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             UnlockRequirementsTooltipAnchor;                          // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           UnlockConditionTooltip;                                   // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NotificationAnchorR;                                      // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PopupBadgeAnchor;                                         // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AuxSlotUnbundleCastOriginL;                               // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AuxSlotUnbundleCastOriginR;                               // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NotificationAnchorL;                                      // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           PlayerNameTooltip;                                        // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             InteractingCrackableClientPlacement;                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHazardSpawner*                              HazardSpawner;                                            // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBiomeSamplerComponent*                      biomeSampler;                                             // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      Tutorial_Info;                                            // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Wind_Particles;                                           // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            NicknameWidget;                                           // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Beacon;                                                   // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFaceCameraComponent*                        FaceCamera;                                               // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Ping_Location;                                            // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrackable*                                  Crackable;                                                // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Backpack_Slot;                                            // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Light_Collision;                                          // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterMovementComponent*            AstroCharacterMovement;                                   // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USelectionIndicatorComponent*                SelectionIndicator;                                       // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlActivatorComponent*                  ControlActivator;                                         // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Spawn_Transform;                                          // 0x0A50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Low_Power_Light_Intensity;                                // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A84(0x0004) MISSED OFFSET
	class UTerrainBiomeProperties*                     CurrentBiome;                                             // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAmbience;                                            // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deform_Toggled;                                           // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A92(0x0002) MISSED OFFSET
	int                                                Pending_Player_Index_Update;                              // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Pending_Suit_Index_Update;                                // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Received_Player_Index;                                    // 0x0A9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A9D(0x0003) MISSED OFFSET
	int                                                REP_Pending_Death_Anim;                                   // 0x0AA0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AA4(0x0004) MISSED OFFSET
	struct FString                                     CurrentAmbientAudioEvent;                                 // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               RespawnViaDropship;                                       // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	class ADeformTool*                                 TempDeformTool;                                           // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 ControllerValueOnDeath;                                   // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWind_1;                                              // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	class UMaterialInterface*                          ObfuscatedCustomizationMaterial;                          // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _3D_Brush_Icon_Terrain_Color_MID;                         // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                _3D_Brush_Icon_Meshes;                                    // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DesignAstro.DesignAstro_C");
		return ptr;
	}


	void ApplyHatCustomization(struct FAstroCharacterCustomization* AstroCharacterCustomization);
	void SetCustomizationMaterials(class UMaterialInterface* SuitMaterial, class UMaterialInterface* Visor_Material, class UMaterialInterface* AccessoriesMaterial);
	void HideCustomizationUnlockTooltip();
	void ShowCustomizationUnlockTooltip(const struct FTooltipWidgetDisplayData& DisplayData);
	class ADeformTool* GetDeformTool();
	void CreateMaterialsForCustomization(struct FAstroCharacterCustomization* Customization, class UMaterialInstanceDynamic** SuitMaterial, class UMaterialInstanceDynamic** VisorMaterial, class UMaterialInstanceDynamic** AccessoriesMaterial);
	void UpdateLowPowerLight();
	void UpdateControlSymbol();
	void IsItemTypeAuxItem(class UClass* ItemType, bool* IsAuxItem);
	void BuildCompositeEquipmentSlotArray(bool PrioritizeAuxSlots, bool IncludeBackpackPrinterReserveSlot, TArray<struct FSlotReference>* CharacterEquipmentSlots);
	void BuildQuickClickSlotArrayForItem(class APhysicalItem* Item, TArray<struct FSlotReference>* QuickSlots);
	float ApplyPowerExternal(int Amount);
	int ApplyOxygenExternal(int Amount);
	void Spawn_Corpse(class AAstroCorpse_C** Corpse);
	void Deform_Tool_Active(bool* active);
	void Apply_Power(float Amount, float* Remaining);
	void SetRestrained(bool IsRestrained);
	void Slot_Is_Powering(const struct FSlotReference& Slot, bool* Powering);
	bool QuickItemClick(class APhysicalItem* Item);
	void Toggle_Deform();
	int Apply_Oxygen(int Amount);
	struct FVector GetHeadLocation();
	void Fill_Corpse(class AAstroCorpse_C* Corpse);
	void SetBiomeAmbience(const struct FString& NewAmbientAudioEvent);
	bool CanSprint();
	void Set_Planet_Survival(bool Notify);
	void Deal_Damage(float Amount);
	void Revive();
	void Set_Interaction();
	void Get_Backpack(class ABackpackRail_C** Backpack);
	void ToggleLights();
	void Init_Backpack();
	void UserConstructionScript();
	void InpActEvt_Home_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_End_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Backslash_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnLoaded_AEE6268C4A9B2326454B8B86863EC5D3(class UObject* Loaded);
	void ReceiveBeginPlay();
	void Make_Connections();
	void Setup_Death();
	void SERVER_Do_Death();
	void SERVER_Start_Death(float Delay);
	void BndEvt__Crackable_K2Node_ComponentBoundEvent_117_Signal__DelegateSignature();
	void BndEvt__Crackable_K2Node_ComponentBoundEvent_120_Signal__DelegateSignature();
	void SERVER_SendControlSwitch(int Index);
	void SERVER_Tether();
	void Assign_Buddy_Click();
	void OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void OnParentAttach(class AActor* Parent, bool Entering);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void MULTICAST_Set_Revive_Spawn(const struct FTransform& Transform);
	void MULTICAST_Client_Death();
	void BndEvt__Clickable_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void ClickUnhandled_Event_1();
	void SlotIndicatorClicked(const struct FSlotReference& Slot, class UClass* Type);
	void QuickItemClickView(class APhysicalItem* Item);
	void SERVER_Toggle_Lights();
	void SERVER_Set_Anim(int Index);
	void Set_Anim(int Index);
	void Delay_Anim_Reset();
	void SlotIndicatorClickedView();
	void ToggleDeformTool();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceivePossessed(class AController* NewController);
	void OnOxygenLevelChanged(float NewLevel);
	void SuffocatingChanged(bool Suffocating);
	void Power_State_Changed(bool Powered);
	void Light_State_Changed(float Intensity);
	void OnlineNicknameChanged(bool Visible, const struct FString& NickName);
	void OnLandedOnGround(TEnumAsByte<EPhysicalSurface> GroundSurface);
	void ApplyCharacterCustomization(const struct FAstroCharacterCustomization& Customization);
	void OnRep_FreeOxygen();
	void AuthorityForceKillAstro();
	void OnBrushColorChanged(const struct FTerrainMaterial& TerrainMaterial);
	void PlaceTetherFromBackpack();
	void HandleDroneCameraPerspectiveChanged(bool Enable);
	void ExecuteUbergraph_DesignAstro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
