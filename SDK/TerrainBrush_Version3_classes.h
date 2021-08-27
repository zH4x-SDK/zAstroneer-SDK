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

// BlueprintGeneratedClass TerrainBrush_Version3.TerrainBrush_Version3_C
// 0x0148 (0x06B8 - 0x0570)
class ATerrainBrush_Version3_C : public ATerrainBrush
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Ping_Location;                                            // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CreativeIntensityIndicator;                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___ColorPicker;                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___ColorPaint;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_ColorPicker;                                        // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_ColorPaint;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DebugTextAnchor;                                          // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Flatten;                                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Add;                                           // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3D_Icon___Subtract;                                      // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Soil_Gauge_Ring;                                          // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Brush_Position_Ring___Disc;                               // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ResourceNodeTooltipAnchor;                                // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ResourceNodeTooltip;                                      // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DeformEffect;                                             // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Flat;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Add;                                                // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Brush_Subtract;                                           // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDeformType                                        Active_Operation_Old;                                     // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	struct FRotator                                    Interpolated_Rotation;                                    // 0x062C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _3D_Brush_Icon_Terrain_Color_MID;                         // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                _3D_Brush_Icon_Meshes;                                    // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Cursor_Unavailable_MID;                                   // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Soil_Circle_Gauge_MID;                                    // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ActiveDeformationPenetration;                             // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Last_Terrain_Hardness_Old;                                // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EDeformType                                        Last_Deform_Mode;                                         // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class UTexture2D*                                  Cursor_Unavailable_Texture__X_;                           // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BrushIndicatorCanUseCached;                               // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0679(0x0003) MISSED OFFSET
	int                                                StandardCircleGaugeCustomDepthStencilValue;               // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                StandardCircleGaugeColor;                                 // 0x0680(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         IntensityIndicatorMeshes;                                 // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Intensity_Indicator_MID;                                  // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Current_Terrain_Tint;                                     // 0x06A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TerrainBrush_Version3.TerrainBrush_Version3_C");
		return ptr;
	}


	void Change_Ring_Color(const struct FLinearColor& Current_Terrain_Tint);
	void Show_Light(bool bNewVisibility);
	void Spawn_Ping();
	class UTooltipComponent* GetResourceNodeTooltip();
	void Get_Subtract_Particle_Effect(int HardnessDelta, class UParticleSystem** NewParam);
	void Deactivate_Deform_Effect();
	void Activate_Deform_Effect(EDeformType Operation, int HardnessTier);
	void Set_View(float Intensity, float Using);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnBrushColorChanged(const struct FTerrainMaterial& TerrainMaterial);
	void OnActivate();
	void ExecuteUbergraph_TerrainBrush_Version3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
