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

// Class Terrain2.AstroFoliageActor
// 0x01A8 (0x0550 - 0x03A8)
class AAstroFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x03A8(0x00F8) MISSED OFFSET
	TArray<class UAstroFoliageType*>                   FoliageTypes;                                             // 0x04A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x04B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.AstroFoliageActor");
		return ptr;
	}

};


// Class Terrain2.AstroFoliageDestructionData
// 0x0028 (0x0058 - 0x0030)
class UAstroFoliageDestructionData : public UDataAsset
{
public:
	struct FFoliageDestructionInfo                     DefaultFoliageDestructionInfo;                            // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	TArray<class UAstroFoliageDestructionGroup*>       DestructionGroups;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.AstroFoliageDestructionData");
		return ptr;
	}

};


// Class Terrain2.AstroFoliageType
// 0x02C8 (0x02F0 - 0x0028)
class UAstroFoliageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0040(0x0240)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0280(0x0010) MISSED OFFSET
	class UStaticMesh*                                 m_mesh;                                                   // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
	class UClass*                                      m_replacementClass;                                       // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundRTPCName;                                            // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFoliageDestructionInfo                     FoliageDestructionInfo;                                   // 0x02C0(0x0018) (Edit)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.AstroFoliageType");
		return ptr;
	}

};


// Class Terrain2.BoundedVoxelVolumeModifier
// 0x0080 (0x00A8 - 0x0028)
class UBoundedVoxelVolumeModifier : public UObject
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0028(0x0001) (Edit)
	unsigned char                                      PlacementLODOffset;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ExecutionLODOffset;                                       // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	uint32_t                                           Seed;                                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementMode                                     PlacementMode;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0030(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ExclusionRadius;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultCullingDistance;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FManualPlacement>                    ManualPlacements;                                         // 0x0040(0x0010) (Edit, ZeroConstructor)
	float                                              PlacementDensity;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandomDistributionProperties               DistributionOptions;                                      // 0x005C(0x0048) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.BoundedVoxelVolumeModifier");
		return ptr;
	}

};


// Class Terrain2.BoundedVoxelVolumeModifierList
// 0x0010 (0x0040 - 0x0030)
class UBoundedVoxelVolumeModifierList : public UDataAsset
{
public:
	TArray<class UBoundedVoxelVolumeModifier*>         Modifiers;                                                // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.BoundedVoxelVolumeModifierList");
		return ptr;
	}

};


// Class Terrain2.CratersModifier
// 0x0010 (0x00B8 - 0x00A8)
class UCratersModifier : public UBoundedVoxelVolumeModifier
{
public:
	float                                              CraterRadius;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CraterRimThickness;                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RimIntensity;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.CratersModifier");
		return ptr;
	}

};


// Class Terrain2.CavesModifier
// 0x0020 (0x00C8 - 0x00A8)
class UCavesModifier : public UBoundedVoxelVolumeModifier
{
public:
	int                                                Count;                                                    // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BackwardCount;                                            // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CaveRadius;                                               // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CaveIntensity;                                            // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorFlatness;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Incline;                                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkVariation;                                            // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.CavesModifier");
		return ptr;
	}

};


// Class Terrain2.ActorDistributionShapeModifier
// 0x0018 (0x00C0 - 0x00A8)
class UActorDistributionShapeModifier : public UBoundedVoxelVolumeModifier
{
public:
	float                                              ShapeRadius;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementPhysicsMode                              PhysicsMode;                                              // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	TArray<struct FWeightedActorSelection>             Actors;                                                   // 0x00B0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ActorDistributionShapeModifier");
		return ptr;
	}

};


// Class Terrain2.ActorPlacementModifier
// 0x0008 (0x00B0 - 0x00A8)
class UActorPlacementModifier : public UBoundedVoxelVolumeModifier
{
public:
	class UClass*                                      ActorType;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ActorPlacementModifier");
		return ptr;
	}

};


// Class Terrain2.ActorSurfacePlacementModifier
// 0x0008 (0x00B8 - 0x00B0)
class UActorSurfacePlacementModifier : public UActorPlacementModifier
{
public:
	float                                              VerticalOffsetFromSurface;                                // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOrientActorToPlanetUp : 1;                               // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ActorSurfacePlacementModifier");
		return ptr;
	}

};


// Class Terrain2.GlobalSurfaceActorPlacementModifier
// 0x0028 (0x00D0 - 0x00A8)
class UGlobalSurfaceActorPlacementModifier : public UBoundedVoxelVolumeModifier
{
public:
	class UClass*                                      ActorType;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             AllowedBiomes;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumBiomeWeight;                                       // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumCount;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCount;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.GlobalSurfaceActorPlacementModifier");
		return ptr;
	}

};


// Class Terrain2.GlobalStartingPointPlacementModifier
// 0x0010 (0x00E0 - 0x00D0)
class UGlobalStartingPointPlacementModifier : public UGlobalSurfaceActorPlacementModifier
{
public:
	struct FVector                                     PreferencePoint;                                          // 0x00D0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.GlobalStartingPointPlacementModifier");
		return ptr;
	}

};


// Class Terrain2.DeformableInterfaceT2
// 0x0000 (0x0028 - 0x0028)
class UDeformableInterfaceT2 : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.DeformableInterfaceT2");
		return ptr;
	}

};


// Class Terrain2.LLVMSettings
// 0x0040 (0x0078 - 0x0038)
class ULLVMSettings : public UDeveloperSettings
{
public:
	struct FFilePath                                   ClangPath;                                                // 0x0038(0x0010) (Edit, Config)
	struct FFilePath                                   LLVMLibPath;                                              // 0x0048(0x0010) (Edit, Config)
	struct FFilePath                                   LLVMLinkPath;                                             // 0x0058(0x0010) (Edit, Config)
	TArray<struct FFilePath>                           CompiledLibraries;                                        // 0x0068(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.LLVMSettings");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Add
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Add : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Add");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_OutputBase
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_OutputBase : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_OutputBase");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_BiomeWeight
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_BiomeWeight : public UProceduralExpression_OutputBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_BiomeWeight");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_CartesianToSpherical
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_CartesianToSpherical : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_CartesianToSpherical");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Clamp
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Clamp : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Clamp");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Comment
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Comment : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Comment");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Compare
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Compare : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Compare");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Constant
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Constant : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Constant");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Cos
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Cos : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Cos");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Height
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Height : public UProceduralExpression_OutputBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Height");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Lerp
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Lerp : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Lerp");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Levels
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Levels : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Levels");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Max
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Max : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Max");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Min
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Min : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Min");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_ModifierOutput
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_ModifierOutput : public UProceduralExpression_OutputBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_ModifierOutput");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Multiply
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Multiply : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Multiply");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Noise
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Noise : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Noise");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Parameter
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Parameter : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Parameter");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_PrimitiveShape
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_PrimitiveShape : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_PrimitiveShape");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_ProceduralPlacement
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_ProceduralPlacement : public UProceduralExpression_OutputBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_ProceduralPlacement");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Reciprocal
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Reciprocal : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Reciprocal");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Remap
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Remap : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Remap");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Saturate
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Saturate : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Saturate");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SdfDifference
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SdfDifference : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SdfDifference");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SdfDisplace
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SdfDisplace : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SdfDisplace");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SdfIntersect
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SdfIntersect : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SdfIntersect");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SdfToDensity
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SdfToDensity : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SdfToDensity");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SdfUnion
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SdfUnion : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SdfUnion");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Select
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Select : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Select");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Sin
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Sin : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Sin");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SmootherStep
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SmootherStep : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SmootherStep");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SmoothStep
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SmoothStep : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SmoothStep");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Sqrt
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Sqrt : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Sqrt");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_SubModifier
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_SubModifier : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_SubModifier");
		return ptr;
	}

};


// Class Terrain2.ProceduralExpression_Subtract
// 0x0000 (0x0028 - 0x0028)
class UProceduralExpression_Subtract : public UProceduralExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralExpression_Subtract");
		return ptr;
	}

};


// Class Terrain2.ProceduralPlacement
// 0x0040 (0x0068 - 0x0028)
class UProceduralPlacement : public UObject
{
public:
	TArray<struct FPlacementVariant>                   Variants;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                DistributionVariance;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           SpawnDepthOffset;                                         // 0x0040(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              Radius;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementType                                     SurfaceType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPlacementPhysicsMode                              PhysicsMode;                                              // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              MaxAlignmentThresholdDegrees;                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAlignmentThresholdDegrees;                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxProjectionDistance;                                    // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityThreshold;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceHeightAllowedDelta;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllVariantsReplicated : 1;                               // 0x0060(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralPlacement");
		return ptr;
	}

};


// Class Terrain2.VoxelVolumeModifier
// 0x0000 (0x0028 - 0x0028)
class UVoxelVolumeModifier : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.VoxelVolumeModifier");
		return ptr;
	}

};


// Class Terrain2.ProceduralModifier
// 0x0028 (0x0050 - 0x0028)
class UProceduralModifier : public UVoxelVolumeModifier
{
public:
	TArray<struct FPlacementApply>                     m_compiledPlacements;                                     // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.ProceduralModifier");
		return ptr;
	}

};


// Class Terrain2.Terrain2ProceduralMeshComponent
// 0x0070 (0x0760 - 0x06F0)
class UTerrain2ProceduralMeshComponent : public UMeshComponent
{
public:
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           VertCountHint;                                            // 0x06F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsProxyMesh : 1;                                         // 0x06FC(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x13];                                      // 0x06FD(0x0013) MISSED OFFSET
	TArray<struct FT2ProcMeshSection>                  ProcMeshSections;                                         // 0x0710(0x0010) (ZeroConstructor)
	TArray<int>                                        MaterialIndices;                                          // 0x0720(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0730(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x074C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.Terrain2ProceduralMeshComponent");
		return ptr;
	}

};


// Class Terrain2.VoxelVolumeComponent
// 0x19430 (0x196E0 - 0x02B0)
class UVoxelVolumeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	int                                                Seed;                                                     // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CinematicFixedSeed;                                       // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomizeSeedInGame;                                      // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomizeSeedInPIE;                                       // 0x02C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClientsWaitForSeed;                                       // 0x02C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02C3(0x0001) MISSED OFFSET
	float                                              VolumeRadius;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighestDetailVoxelSize;                                   // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HigestDetailRadius;                                       // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODCascadeScale;                                          // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastShadow : 1;                                          // 0x02D4(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x02D4(0x0001) (Edit)
	unsigned char                                      ManuallySetLODRanges : 1;                                 // 0x02D4(0x0001) (Edit)
	int8_t                                             MaxOctreeDepth;                                           // 0x02D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET
	TArray<float>                                      LODRanges;                                                // 0x02D8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	float                                              MultiplayerCorrectionRange;                               // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NodeCachingFactor;                                        // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> DefaultMaterialsBySurfaceType;                            // 0x02F8(0x0050) (Edit, ZeroConstructor)
	class UVoxelVolumeMaterialPalette*                 MaterialPalette;                                          // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EPolygonizerType                                   PolygonizerType;                                          // 0x0350(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              ObjectDestructionTimeslice;                               // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObjectCreationTimeslice;                                  // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceBiomeHighWeightCutoff;                             // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceBiomeLowWeightCutoff;                              // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FGlobalBiome                                GlobalBiome;                                              // 0x0368(0x0048) (Edit)
	TArray<struct FSurfaceBiome>                       SurfaceBiomes;                                            // 0x03B0(0x0010) (Edit, ZeroConstructor)
	struct FUndergroundBiome                           CrustBiome;                                               // 0x03C0(0x0028) (Edit)
	struct FUndergroundBiome                           MantleBiome;                                              // 0x03E8(0x0028) (Edit)
	struct FUndergroundBiome                           CoreBiome;                                                // 0x0410(0x0028) (Edit)
	unsigned char                                      UnknownData05[0x190E8];                                   // 0x0438(0x190E8) MISSED OFFSET
	class UAstroFoliageDestructionData*                m_destructionData;                                        // 0x19520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UTerrain2ProceduralMeshComponent*>    m_meshComponentPool;                                      // 0x19528(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<class UClass*, struct FChildModifierCacheEntry> m_childModifierCache;                                     // 0x19538(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0xA0];                                      // 0x19588(0x00A0) MISSED OFFSET
	TArray<class AActor*>                              m_spawnedActorList;                                       // 0x19628(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x10];                                      // 0x19638(0x0010) MISSED OFFSET
	TArray<class UTerrain2ProceduralMeshComponent*>    m_deferredDestructionMeshes;                              // 0x19648(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class AActor*>                              m_deferredDestructionActors;                              // 0x19658(0x0010) (ZeroConstructor, Transient)
	TArray<class AAstroFoliageActor*>                  m_deferredDestructionFoliageActors;                       // 0x19668(0x0010) (ZeroConstructor, Transient)
	TArray<class USceneComponent*>                     m_deferredDestructionFoliageComponents;                   // 0x19678(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x10];                                      // 0x19688(0x0010) MISSED OFFSET
	TArray<class UMaterialInterface*>                  LodMaterials;                                             // 0x19698(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInterface*>                  RandomMaterials;                                          // 0x196A8(0x0010) (ZeroConstructor, Transient)
	class AAstroFoliageActor*                          m_foliageActor;                                           // 0x196B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      m_locusActorClass;                                        // 0x196C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTerrain2ProceduralMeshComponent*            m_proxyMesh;                                              // 0x196C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x196D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.VoxelVolumeComponent");
		return ptr;
	}


	float GetSurfaceHeightAtLocation(const struct FVector& Location);
	void DeformationT2CompleteEvent__DelegateSignature(const struct FDeformationParamsT2& params);
};


// Class Terrain2.VoxelVolumeMaterialPalette
// 0x0090 (0x00B8 - 0x0028)
class UVoxelVolumeMaterialPalette : public UObject
{
public:
	TArray<struct FCreativePaintMaterialMapping>       CreativePaintIndices;                                     // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVoxelMaterial>                      PaletteEntries;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVoxelMaterial>                      RuntimePalette;                                           // 0x0048(0x0010) (ZeroConstructor, Transient)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInterface*> DefaultMaterialsBySurfaceType;                            // 0x0060(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.VoxelVolumeMaterialPalette");
		return ptr;
	}

};


// Class Terrain2.VoxelVolumePaintModePalette
// 0x0020 (0x0048 - 0x0028)
class UVoxelVolumePaintModePalette : public UObject
{
public:
	TArray<struct FPaintModeMaterial>                  DefaultMappings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPaintModeMaterial>                  PaletteEntries;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.VoxelVolumePaintModePalette");
		return ptr;
	}

};


// Class Terrain2.AstroFoliageDestructionGroup
// 0x0038 (0x0068 - 0x0030)
class UAstroFoliageDestructionGroup : public UDataAsset
{
public:
	struct FFoliageDestructionInfo                     FoliageDestructionInfo;                                   // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         BatchingMeshes;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PlacementActors;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Terrain2.AstroFoliageDestructionGroup");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
