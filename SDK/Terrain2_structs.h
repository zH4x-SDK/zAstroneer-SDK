#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Terrain2.EPolygonizerType
enum class EPolygonizerType : uint8_t
{
	EPolygonizerType__MarchingCubes = 0,
	EPolygonizerType__EPolygonizerType_MAX = 1
};


// Enum Terrain2.EFoliageDestructionBehavior
enum class EFoliageDestructionBehavior : uint8_t
{
	EFoliageDestructionBehavior__ThresholdCheck = 0,
	EFoliageDestructionBehavior__AlwaysDestroy = 1,
	EFoliageDestructionBehavior__NeverDestroy = 2,
	EFoliageDestructionBehavior__EFoliageDestructionBehavior_MAX = 3
};


// Enum Terrain2.EDistributionShape
enum class EDistributionShape : uint8_t
{
	EDistributionShape__Cone       = 0,
	EDistributionShape__Cylinder   = 1,
	EDistributionShape__Disc       = 2,
	EDistributionShape__EDistributionShape_MAX = 3
};


// Enum Terrain2.EPlacementMode
enum class EPlacementMode : uint8_t
{
	EPlacementMode__RandomDistribution = 0,
	EPlacementMode__RandomFixedCount = 1,
	EPlacementMode__FixedLocations = 2,
	EPlacementMode__EPlacementMode_MAX = 3
};


// Enum Terrain2.EDeformShapeT2
enum class EDeformShapeT2 : uint8_t
{
	EDeformShapeT2__Sphere         = 0,
	EDeformShapeT2__EDeformShapeT2_MAX = 1
};


// Enum Terrain2.EDeformTypeT2
enum class EDeformTypeT2 : uint8_t
{
	EDeformTypeT2__Subtract        = 0,
	EDeformTypeT2__Add             = 1,
	EDeformTypeT2__Flatten         = 2,
	EDeformTypeT2__FlattenSubtractOnly = 3,
	EDeformTypeT2__FlattenAddOnly  = 4,
	EDeformTypeT2__TrueFlatStamp   = 5,
	EDeformTypeT2__PlatformSurface = 6,
	EDeformTypeT2__Crater          = 7,
	EDeformTypeT2__ColorPick       = 8,
	EDeformTypeT2__ColorPaint      = 9,
	EDeformTypeT2__Count           = 10,
	EDeformTypeT2__EDeformTypeT2_MAX = 11
};


// Enum Terrain2.EDistanceFunction
enum class EDistanceFunction : uint8_t
{
	EDistanceFunction__Euclidean   = 0,
	EDistanceFunction__Manhattan   = 1,
	EDistanceFunction__Natural     = 2,
	EDistanceFunction__EDistanceFunction_MAX = 3
};


// Enum Terrain2.ECellType
enum class ECellType : uint8_t
{
	ECellType__CellValue           = 0,
	ECellType__NoiseLookUp         = 1,
	ECellType__Distance            = 2,
	ECellType__Dot                 = 3,
	ECellType__DotSpherical        = 4,
	ECellType__Distance2           = 5,
	ECellType__Distance2Add        = 6,
	ECellType__Distance2Sub        = 7,
	ECellType__Distance2Mul        = 8,
	ECellType__Distance2Div        = 9,
	ECellType__ECellType_MAX       = 10
};


// Enum Terrain2.ENoisePerturb
enum class ENoisePerturb : uint8_t
{
	ENoisePerturb__None            = 0,
	ENoisePerturb__Gradient        = 1,
	ENoisePerturb__GradientFractal = 2,
	ENoisePerturb__ENoisePerturb_MAX = 3
};


// Enum Terrain2.ENoiseFractal
enum class ENoiseFractal : uint8_t
{
	ENoiseFractal__None            = 0,
	ENoiseFractal__FBM             = 1,
	ENoiseFractal__Billow          = 2,
	ENoiseFractal__Rigid           = 3,
	ENoiseFractal__ENoiseFractal_MAX = 4
};


// Enum Terrain2.ENoiseInterpolation
enum class ENoiseInterpolation : uint8_t
{
	ENoiseInterpolation__Linear    = 0,
	ENoiseInterpolation__Hermite   = 1,
	ENoiseInterpolation__Quintic   = 2,
	ENoiseInterpolation__ENoiseInterpolation_MAX = 3
};


// Enum Terrain2.ENoiseDimension
enum class ENoiseDimension : uint8_t
{
	ENoiseDimension__eND_1D        = 0,
	ENoiseDimension__eND_2D        = 1,
	ENoiseDimension__eND_3D        = 2,
	ENoiseDimension__eND_4D        = 3,
	ENoiseDimension__eND_MAX       = 4
};


// Enum Terrain2.ENoiseType
enum class ENoiseType : uint8_t
{
	ENoiseType__Value              = 0,
	ENoiseType__Perlin             = 1,
	ENoiseType__Simplex            = 2,
	ENoiseType__Cellular           = 3,
	ENoiseType__White              = 4,
	ENoiseType__Cubic              = 5,
	ENoiseType__ENoiseType_MAX     = 6
};


// Enum Terrain2.EProceduralExpressionComparison
enum class EProceduralExpressionComparison : uint8_t
{
	EProceduralExpressionComparison__NotEqual = 0,
	EProceduralExpressionComparison__Equal = 1,
	EProceduralExpressionComparison__LessThan = 2,
	EProceduralExpressionComparison__LessThanEqual = 3,
	EProceduralExpressionComparison__GreaterThan = 4,
	EProceduralExpressionComparison__GreaterThanEqual = 5,
	EProceduralExpressionComparison__EProceduralExpressionComparison_MAX = 6
};


// Enum Terrain2.EParameter
enum class EParameter : uint8_t
{
	EParameter__VoxelX             = 0,
	EParameter__VoxelY             = 1,
	EParameter__VoxelZ             = 2,
	EParameter__VoxelNormalX       = 3,
	EParameter__VoxelNormalY       = 4,
	EParameter__VoxelNormalZ       = 5,
	EParameter__InterVoxelWidth    = 6,
	EParameter__PlanetRadius       = 7,
	EParameter__LayerThickness     = 8,
	EParameter__LayerFloor         = 9,
	EParameter__Noise              = 10,
	EParameter__Noise2             = 11,
	EParameter__LogFile            = 12,
	EParameter__EParameter_MAX     = 13
};


// Enum Terrain2.EPrimitiveShapeType
enum class EPrimitiveShapeType : uint8_t
{
	EPrimitiveShapeType__Sphere    = 0,
	EPrimitiveShapeType__Box       = 1,
	EPrimitiveShapeType__RoundedBox = 2,
	EPrimitiveShapeType__Torus     = 3,
	EPrimitiveShapeType__Cylinder  = 4,
	EPrimitiveShapeType__Capsule   = 5,
	EPrimitiveShapeType__Cone      = 6,
	EPrimitiveShapeType__CappedCone = 7,
	EPrimitiveShapeType__HexagonalPrism = 8,
	EPrimitiveShapeType__TriangularPrism = 9,
	EPrimitiveShapeType__EPrimitiveShapeType_MAX = 10
};


// Enum Terrain2.EPlacementOrientation
enum class EPlacementOrientation : uint8_t
{
	EPlacementOrientation__AlignToSurfaceNormal = 0,
	EPlacementOrientation__AlignToSurfaceNormalInverted = 1,
	EPlacementOrientation__AlignToPlanetUp = 2,
	EPlacementOrientation__AlignToPlanetUpInverted = 3,
	EPlacementOrientation__EPlacementOrientation_MAX = 4
};


// Enum Terrain2.EPlacementPhysicsMode
enum class EPlacementPhysicsMode : uint8_t
{
	EPlacementPhysicsMode__Bury    = 0,
	EPlacementPhysicsMode__Free    = 1,
	EPlacementPhysicsMode__None    = 2,
	EPlacementPhysicsMode__EPlacementPhysicsMode_MAX = 3
};


// Enum Terrain2.EPlacementType
enum class EPlacementType : uint8_t
{
	EPlacementType__Ground         = 0,
	EPlacementType__Ceiling        = 1,
	EPlacementType__Wall           = 2,
	EPlacementType__Buried         = 3,
	EPlacementType__None           = 4,
	EPlacementType__EPlacementType_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Terrain2.FoliageDestructionInfo
// 0x0018
struct FFoliageDestructionInfo
{
	struct FName                                       DestructionAudioEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestructionParticleEffect;                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFoliageDestructionBehavior                        FoliageDestructionBehavior;                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Terrain2.ManualPlacement
// 0x001C
struct FManualPlacement
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.RandomDistributionProperties
// 0x0048
struct FRandomDistributionProperties
{
	int                                                VarianceLevel;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementType                                     SurfaceType;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SurfaceOffset;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementOrientation                              OrientationMode;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RandomPitch;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomYaw;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UniformScale;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0020(0x0008) (Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0028(0x0008) (Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0030(0x0008) (Edit)
	float                                              MaxAlignmentThresholdDegrees;                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAlignmentThresholdDegrees;                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxProjectionDistance;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityThreshold;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.WeightedActorSelection
// 0x0010
struct FWeightedActorSelection
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Terrain2.ItemTypeReference
// 0x0008
struct FItemTypeReference
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.PlacementVariant
// 0x02F0
struct FPlacementVariant
{
	float                                              SelectionWeight;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightFalloff;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlacementActor;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemTypeReference                          ItemType;                                                 // 0x0010(0x0008) (Edit)
	struct FName                                       SoundRTPCName;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageDestructionInfo                     FoliageDestructionInfo;                                   // 0x0020(0x0018) (Edit)
	EPlacementOrientation                              Orientation;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RandomYaw;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomPitch;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUniformScale;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0048(0x0008) (Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0050(0x0008) (Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0058(0x0008) (Edit)
	float                                              ExclusionRadius;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              DensityScalingSlope;                                      // 0x0064(0x0008) (Edit)
	float                                              SurfaceOffset;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BatchingMesh;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FInt32Interval                              CullDistance;                                             // 0x0088(0x0008) (Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x00A0(0x0240) (Edit)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x02E0(0x0001) (Edit)
	unsigned char                                      bCastShadow : 1;                                          // 0x02E0(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x02E0(0x0001) (Edit)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x02E0(0x0001) (Edit)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x02E0(0x0001) (Edit)
	unsigned char                                      UnknownData03 : 1;                                        // 0x02E0(0x0001)
	unsigned char                                      bShouldOverrideDestructionEffects : 1;                    // 0x02E0(0x0001) (Edit)
	unsigned char                                      UnknownData04[0xF];                                       // 0x02E1(0x000F) MISSED OFFSET
};

// ScriptStruct Terrain2.PlacementApply
// 0x0010
struct FPlacementApply
{
	class UProceduralPlacement*                        m_placementType;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Terrain2.T2ProcMeshSection
// 0x0040
struct FT2ProcMeshSection
{
	struct FBox                                        SectionLocalBox;                                          // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<uint16_t>                                   Indices16;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Indices32;                                                // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Terrain2.BiomeAudioEvents
// 0x0048
struct FBiomeAudioEvents
{
	struct FName                                       WeightRTPC;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EnterEvent;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ExitEvent;                                                // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FString                                     GainPrimaryEvent;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FString                                     LostPrimaryEvent;                                         // 0x0038(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Terrain2.BiomeLayer
// 0x00B0
struct FBiomeLayer
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralModifier*                         VoxelFunction;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UProceduralModifier*>                 ObjectPlacementModifiers;                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UBoundedVoxelVolumeModifier*>         BoundedModifiers;                                         // 0x0020(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UBoundedVoxelVolumeModifierList*             SharedBoundedModifierList;                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpperMarginZone;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerMarginZone;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpperTransitionZone;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerTransitionZone;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBiomeAudioEvents                           BiomeAudio;                                               // 0x0048(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET
};

// ScriptStruct Terrain2.SurfaceLayer
// 0x0008 (0x00B8 - 0x00B0)
struct FSurfaceLayer : public FBiomeLayer
{
	float                                              LayerCeiling;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LayerFloor;                                               // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.GlobalBiome
// 0x0048
struct FGlobalBiome
{
	float                                              BaseVolumeRadius;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TopsoilDepth;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSurfaceLayer>                       MountainLayers;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<class UProceduralModifier*>                 ObjectPlacementModifiers;                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<class UBoundedVoxelVolumeModifier*>         BoundedModifiers;                                         // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UBoundedVoxelVolumeModifierList*             SharedBoundedModifierList;                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Terrain2.SurfaceBiome
// 0x0030
struct FSurfaceBiome
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UProceduralModifier*                         HeightFunction;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralModifier*                         WeightFuntion;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSurfaceLayer>                       Layers;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Terrain2.SubterraneanLayer
// 0x0010 (0x00C0 - 0x00B0)
struct FSubterraneanLayer : public FBiomeLayer
{
	float                                              Thickness;                                                // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
};

// ScriptStruct Terrain2.UndergroundBiome
// 0x0028
struct FUndergroundBiome
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FSubterraneanLayer>                  Layers;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Terrain2.BoundedModifierSceneComponent
// 0x0040
struct FBoundedModifierSceneComponent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UBoundedVoxelVolumeModifier*                 Modifier;                                                 // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ParentClass;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.ChildModifierCacheEntry
// 0x0018
struct FChildModifierCacheEntry
{
	TArray<struct FBoundedModifierSceneComponent>      ChildComponents;                                          // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsPureContainerClass;                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Terrain2.DeformationParamsT2
// 0x0060
struct FDeformationParamsT2
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct Terrain2.CreativePaintMaterialMapping
// 0x0002
struct FCreativePaintMaterialMapping
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Terrain2.VoxelMaterial
// 0x0030
struct FVoxelMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                HardnessLevel;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          CustomMaterial;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Terrain2.PaintModeMaterial
// 0x0028
struct FPaintModeMaterial
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                HardnessLevel;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          CustomMaterial;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ButtonMaterial;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.FractalProperties
// 0x000C
struct FFractalProperties
{
	int                                                Octaves;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Lacunarity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.PerturbProperties
// 0x0018
struct FPerturbProperties
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractalProperties                          FractalProp;                                              // 0x0008(0x000C) (Edit)
	float                                              NormalizationLength;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.CellularProperties
// 0x001C
struct FCellularProperties
{
	ECellType                                          CellType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Jitter;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDistanceFunction                                  DistanceFunction;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DistanceIndex0;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistanceIndex1;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENoiseType                                         LookupType;                                               // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              Frequency;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.ProceduralExpressionInput
// 0x0001
struct FProceduralExpressionInput
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Terrain2.ProceduralExpressionOutput
// 0x0001
struct FProceduralExpressionOutput
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Terrain2.ProcExpValueType
// 0x0008
struct FProcExpValueType
{
	uint32_t                                           primitiveType;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPointer : 1;                                           // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Terrain2.PrimRoundedBox
// 0x0010
struct FPrimRoundedBox
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              R;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.PrimBox
// 0x000C
struct FPrimBox
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.PrimSphere
// 0x0004
struct FPrimSphere
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.SDFTransform
// 0x0024
struct FSDFTransform
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0018(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Terrain2.PlacementTypeExpPair
// 0x0010
struct FPlacementTypeExpPair
{
	struct FProceduralExpressionInput                  Density;                                                  // 0x0000(0x0001) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UProceduralPlacement*                        Type;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Terrain2.T2ProcMeshTangent
// 0x000C
struct FT2ProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Terrain2.PackedVoxelMaterialInfo
// 0x0014
struct FPackedVoxelMaterialInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Terrain2.VoxelMaterialProperties
// 0x0018
struct FVoxelMaterialProperties
{
	struct FLinearColor                                TerrainColor;                                             // 0x0000(0x0010) (Edit, IsPlainOldData)
	int                                                TerrainHardness;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      TerrainSurfaceType;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
