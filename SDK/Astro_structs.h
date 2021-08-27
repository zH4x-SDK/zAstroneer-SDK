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

// Enum Astro.EFocusItemFocusChangeCause
enum class EFocusItemFocusChangeCause : uint8_t
{
	EFocusItemFocusChangeCause__AutoNavigation = 0,
	EFocusItemFocusChangeCause__MouseHover = 1,
	EFocusItemFocusChangeCause__KeyPress = 2,
	EFocusItemFocusChangeCause__EFocusItemFocusChangeCause_MAX = 3
};


// Enum Astro.EClickBehavior
enum class EClickBehavior : uint8_t
{
	EClickBehavior__None           = 0,
	EClickBehavior__ClickDelegate  = 1,
	EClickBehavior__CrackableActor = 2,
	EClickBehavior__Use            = 3,
	EClickBehavior__PhysicalItem   = 4,
	EClickBehavior__InteractionActor = 5,
	EClickBehavior__Tool           = 6,
	EClickBehavior__Slot           = 7,
	EClickBehavior__EClickBehavior_MAX = 8
};


// Enum Astro.EClickSlotBehavior
enum class EClickSlotBehavior : uint8_t
{
	EClickSlotBehavior__None       = 0,
	EClickSlotBehavior__ItemSet    = 1,
	EClickSlotBehavior__ConnectionPull = 2,
	EClickSlotBehavior__ConnectionJoin = 3,
	EClickSlotBehavior__EmptyHover = 4,
	EClickSlotBehavior__EClickSlotBehavior_MAX = 5
};


// Enum Astro.ETooltipAnimationDirection
enum class ETooltipAnimationDirection : uint8_t
{
	ETooltipAnimationDirection__LeftToRight = 0,
	ETooltipAnimationDirection__RightToLeft = 1,
	ETooltipAnimationDirection__ETooltipAnimationDirection_MAX = 2
};


// Enum Astro.ETooltipPresentationStyleTypes
enum class ETooltipPresentationStyleTypes : uint8_t
{
	ETooltipPresentationStyleTypes__StandardTooltip = 0,
	ETooltipPresentationStyleTypes__BadgelessTooltip = 1,
	ETooltipPresentationStyleTypes__AstroInteraction = 2,
	ETooltipPresentationStyleTypes__ETooltipPresentationStyleTypes_MAX = 3
};


// Enum Astro.EInputKeyInteractionType
enum class EInputKeyInteractionType : uint8_t
{
	EInputKeyInteractionType__Hold = 0,
	EInputKeyInteractionType__Press = 1,
	EInputKeyInteractionType__EInputKeyInteractionType_MAX = 2
};


// Enum Astro.EGameLifecycleState
enum class EGameLifecycleState : uint8_t
{
	EGameLifecycleState__Initializing = 0,
	EGameLifecycleState__TerrainLoading = 1,
	EGameLifecycleState__WaitingForLoadScreen = 2,
	EGameLifecycleState__WaitingForSignIn = 3,
	EGameLifecycleState__ReadyToStart = 4,
	EGameLifecycleState__IntroCinematicTerrainLoading = 5,
	EGameLifecycleState__IntroCinematic = 6,
	EGameLifecycleState__TerrainFlushAndReload = 7,
	EGameLifecycleState__TitleMenu = 8,
	EGameLifecycleState__GameStarted = 9,
	EGameLifecycleState__OutroCinematic = 10,
	EGameLifecycleState__COUNT     = 11,
	EGameLifecycleState__EGameLifecycleState_MAX = 12
};


// Enum Astro.DeformShape
enum class EDeformShape : uint8_t
{
	DeformShape__Sphere            = 0,
	DeformShape__Cylinder          = 1,
	DeformShape__DeformShape_MAX   = 2
};


// Enum Astro.DeformType
enum class EDeformType : uint8_t
{
	DeformType__Subtract           = 0,
	DeformType__Add                = 1,
	DeformType__Flatten            = 2,
	DeformType__ColorPick          = 3,
	DeformType__ColorPaint         = 4,
	DeformType__CountCreative      = 5,
	DeformType__Crater             = 6,
	DeformType__FlattenSubtractOnly = 7,
	DeformType__FlattenAddOnly     = 8,
	DeformType__TrueFlatStamp      = 9,
	DeformType__T2_PlatformSurface = 10,
	DeformType__DeformType_MAX     = 11
};


// Enum Astro.EWandererRealityTearOpenState
enum class EWandererRealityTearOpenState : uint8_t
{
	EWandererRealityTearOpenState__Closed = 0,
	EWandererRealityTearOpenState__WillOpen = 1,
	EWandererRealityTearOpenState__Open = 2,
	EWandererRealityTearOpenState__EWandererRealityTearOpenState_MAX = 3
};


// Enum Astro.EUseContext
enum class EUseContext : uint8_t
{
	EUseContext__UC_Use            = 0,
	EUseContext__UC_Toggle         = 1,
	EUseContext__UC_TurnOn         = 2,
	EUseContext__UC_TurnOff        = 3,
	EUseContext__UC_ChangeColor    = 4,
	EUseContext__UC_Detonate       = 5,
	EUseContext__UC_Ignite         = 6,
	EUseContext__UC_Launch         = 7,
	EUseContext__UC_Print          = 8,
	EUseContext__UC_SitDown        = 9,
	EUseContext__UC_StandUp        = 10,
	EUseContext__UC_Flip           = 11,
	EUseContext__UC_TakeOff        = 12,
	EUseContext__UC_LiftOff        = 13,
	EUseContext__UC_Resupply       = 14,
	EUseContext__UC_Research       = 15,
	EUseContext__UC_Smelt          = 16,
	EUseContext__UC_Extract        = 17,
	EUseContext__UC_Catalyze       = 18,
	EUseContext__UC_Condense       = 19,
	EUseContext__UC_Trade          = 20,
	EUseContext__UC_Enter          = 21,
	EUseContext__UC_Exit           = 22,
	EUseContext__UC_Land           = 23,
	EUseContext__UC_Pack           = 24,
	EUseContext__UC_Unpack         = 25,
	EUseContext__UC_Equip          = 26,
	EUseContext__UC_Unequip        = 27,
	EUseContext__UC_Start          = 28,
	EUseContext__UC_Stop           = 29,
	EUseContext__UC_Pause          = 30,
	EUseContext__UC_Cancel         = 31,
	EUseContext__UC_Load           = 32,
	EUseContext__UC_Unload         = 33,
	EUseContext__UC_Transfer       = 34,
	EUseContext__UC_Place          = 35,
	EUseContext__UC_Deploy         = 36,
	EUseContext__UC_Plant          = 37,
	EUseContext__UC_AddToCatalog   = 38,
	EUseContext__UC_Scan           = 39,
	EUseContext__UC_Examine        = 40,
	EUseContext__UC_Gaze           = 41,
	EUseContext__UC_Activate       = 42,
	EUseContext__UC_Select         = 43,
	EUseContext__UC_Expand         = 44,
	EUseContext__UC_Collapse       = 45,
	EUseContext__UC_TakePhoto      = 46,
	EUseContext__UC_EnableDepositSlot = 47,
	EUseContext__UC_EnableWithdrawalSlot = 48,
	EUseContext__UC_MAX            = 49
};


// Enum Astro.EPlayerCategory
enum class EPlayerCategory : uint8_t
{
	EPlayerCategory__Pending       = 0,
	EPlayerCategory__Unlisted      = 1,
	EPlayerCategory__Blacklisted   = 2,
	EPlayerCategory__Whitelisted   = 3,
	EPlayerCategory__Admin         = 4,
	EPlayerCategory__Owner         = 5,
	EPlayerCategory__EPlayerCategory_MAX = 6
};


// Enum Astro.EPlayerPlatform
enum class EPlayerPlatform : uint8_t
{
	EPlayerPlatform__Unknown       = 0,
	EPlayerPlatform__Steam         = 1,
	EPlayerPlatform__Live          = 2,
	EPlayerPlatform__PSN           = 3,
	EPlayerPlatform__Oddish        = 4,
	EPlayerPlatform__EPlayerPlatform_MAX = 5
};


// Enum Astro.EGateObjectType
enum class EGateObjectType : uint8_t
{
	EGateObjectType__Chamber       = 0,
	EGateObjectType__Engine        = 1,
	EGateObjectType__Station       = 2,
	EGateObjectType__EGateObjectType_MAX = 3
};


// Enum Astro.EItemConverterState
enum class EItemConverterState : uint8_t
{
	EItemConverterState__Inactive  = 0,
	EItemConverterState__Active    = 1,
	EItemConverterState__Paused    = 2,
	EItemConverterState__Ready     = 3,
	EItemConverterState__Invalid   = 4,
	EItemConverterState__EItemConverterState_MAX = 5
};


// Enum Astro.EItemVariantType
enum class EItemVariantType : uint8_t
{
	EItemVariantType__Pioneer      = 0,
	EItemVariantType__Engineer     = 1,
	EItemVariantType__EItemVariantType_MAX = 2
};


// Enum Astro.EDroneFlightState
enum class EDroneFlightState : uint8_t
{
	EDroneFlightState__Docked      = 0,
	EDroneFlightState__Docking     = 1,
	EDroneFlightState__Launching   = 2,
	EDroneFlightState__FlyingDroneCamDroneControls = 3,
	EDroneFlightState__FlyingDroneCamAstroControls = 4,
	EDroneFlightState__FlyingAstroCamAstroControls = 5,
	EDroneFlightState__EDroneFlightState_MAX = 6
};


// Enum Astro.EScannerTargetDistance
enum class EScannerTargetDistance : uint8_t
{
	EScannerTargetDistance__NoTarget = 0,
	EScannerTargetDistance__LongRange = 1,
	EScannerTargetDistance__MidRange = 2,
	EScannerTargetDistance__ShortRange = 3,
	EScannerTargetDistance__EScannerTargetDistance_MAX = 4
};


// Enum Astro.EPhysicalItemMotionState
enum class EPhysicalItemMotionState : uint8_t
{
	EPhysicalItemMotionState__Simulating = 0,
	EPhysicalItemMotionState__PickedUp = 1,
	EPhysicalItemMotionState__Slotted = 2,
	EPhysicalItemMotionState__NonSimulating = 3,
	EPhysicalItemMotionState__Indicator = 4,
	EPhysicalItemMotionState__EPhysicalItemMotionState_MAX = 5
};


// Enum Astro.EPowerCableConnectionDirection
enum class EPowerCableConnectionDirection : uint8_t
{
	EPowerCableConnectionDirection__InputConnection = 0,
	EPowerCableConnectionDirection__OutputConnection = 1,
	EPowerCableConnectionDirection__None = 2,
	EPowerCableConnectionDirection__EPowerCableConnectionDirection_MAX = 3
};


// Enum Astro.ERoverID
enum class ERoverID : uint8_t
{
	ERoverID__SmallRover           = 0,
	ERoverID__MediumRover          = 1,
	ERoverID__LargeRover           = 2,
	ERoverID__UntrackedRover       = 3,
	ERoverID__ERoverID_MAX         = 4
};


// Enum Astro.EAirControlSecondaryType
enum class EAirControlSecondaryType : uint8_t
{
	EAirControlSecondaryType__Yaw  = 0,
	EAirControlSecondaryType__Roll = 1,
	EAirControlSecondaryType__Blended = 2,
	EAirControlSecondaryType__EAirControlSecondaryType_MAX = 3
};


// Enum Astro.ECableConnectionState
enum class ECableConnectionState : uint8_t
{
	ECableConnectionState__DisconnectedCable = 0,
	ECableConnectionState__DirectionalCable = 1,
	ECableConnectionState__MergedCable = 2,
	ECableConnectionState__ECableConnectionState_MAX = 3
};


// Enum Astro.ETetherAttachmentType
enum class ETetherAttachmentType : uint8_t
{
	ETetherAttachmentType__Chassis = 0,
	ETetherAttachmentType__Post    = 1,
	ETetherAttachmentType__Vehicle = 2,
	ETetherAttachmentType__Character = 3,
	ETetherAttachmentType__ETetherAttachmentType_MAX = 4
};


// Enum Astro.ECableTutorialStep
enum class ECableTutorialStep : uint8_t
{
	ECableTutorialStep__Grab       = 0,
	ECableTutorialStep__Attach     = 1,
	ECableTutorialStep__ECableTutorialStep_MAX = 2
};


// Enum Astro.EAstroGameMenuContext
enum class EAstroGameMenuContext : uint8_t
{
	EAstroGameMenuContext__InGame  = 0,
	EAstroGameMenuContext__TitleMenu = 1,
	EAstroGameMenuContext__TutorialLaunching = 2,
	EAstroGameMenuContext__OutroCinematic = 3,
	EAstroGameMenuContext__ExitingGame = 4,
	EAstroGameMenuContext__EAstroGameMenuContext_MAX = 5
};


// Enum Astro.EEnterExitMovementMethod
enum class EEnterExitMovementMethod : uint8_t
{
	EEnterExitMovementMethod__SnapToPosition = 0,
	EEnterExitMovementMethod__LerpToPosition = 1,
	EEnterExitMovementMethod__EEnterExitMovementMethod_MAX = 2
};


// Enum Astro.EInputManagementType
enum class EInputManagementType : uint8_t
{
	EInputManagementType__None     = 0,
	EInputManagementType__SelectedRecipe = 1,
	EInputManagementType__AnyRecipe = 2,
	EInputManagementType__EInputManagementType_MAX = 3
};


// Enum Astro.EResearchState
enum class EResearchState : uint8_t
{
	EResearchState__WaitingForSubjects = 0,
	EResearchState__InvalidSubject = 1,
	EResearchState__ReadyToResearch = 2,
	EResearchState__Researching    = 3,
	EResearchState__InsufficientPowerToContinue = 4,
	EResearchState__ResearchComplete = 5,
	EResearchState__EResearchState_MAX = 6
};


// Enum Astro.ESolarGeneratorSunTrackingBehavior
enum class ESolarGeneratorSunTrackingBehavior : uint8_t
{
	ESolarGeneratorSunTrackingBehavior__Pivot = 0,
	ESolarGeneratorSunTrackingBehavior__LocalRollAxis = 1,
	ESolarGeneratorSunTrackingBehavior__LocalPitchAxis = 2,
	ESolarGeneratorSunTrackingBehavior__LocalYawAxis = 3,
	ESolarGeneratorSunTrackingBehavior__ESolarGeneratorSunTrackingBehavior_MAX = 4
};


// Enum Astro.EAchievementSaveDataType
enum class EAchievementSaveDataType : uint8_t
{
	EAchievementSaveDataType__PlayerSaveData = 0,
	EAchievementSaveDataType__GameSaveData = 1,
	EAchievementSaveDataType__EAchievementSaveDataType_MAX = 2
};


// Enum Astro.EAstroAchievementKeys
enum class EAstroAchievementKeys : uint8_t
{
	EAstroAchievementKeys__TutorialDone = 0,
	EAstroAchievementKeys__HazardUprooted = 1,
	EAstroAchievementKeys__ResearchChamber = 2,
	EAstroAchievementKeys__InstantResearch = 3,
	EAstroAchievementKeys__SoilExtract = 4,
	EAstroAchievementKeys__CatalyzeComponent = 5,
	EAstroAchievementKeys__CollectGas = 6,
	EAstroAchievementKeys__BuildRover = 7,
	EAstroAchievementKeys__UseShredder = 8,
	EAstroAchievementKeys__TradePlatform = 9,
	EAstroAchievementKeys__HardTerrain = 10,
	EAstroAchievementKeys__GoMantle = 11,
	EAstroAchievementKeys__PlantSeed = 12,
	EAstroAchievementKeys__ChangeSuit = 13,
	EAstroAchievementKeys__PuzzleSolve = 14,
	EAstroAchievementKeys__EveryComponent = 15,
	EAstroAchievementKeys__EveryGas = 16,
	EAstroAchievementKeys__ScrapX  = 17,
	EAstroAchievementKeys__EverySeed = 18,
	EAstroAchievementKeys__EveryRaw = 19,
	EAstroAchievementKeys__EverySmelt = 20,
	EAstroAchievementKeys__EverySchematic = 21,
	EAstroAchievementKeys__BytesGain = 22,
	EAstroAchievementKeys__BytesConcurrent = 23,
	EAstroAchievementKeys__ChamberAll = 24,
	EAstroAchievementKeys__FindChamber = 25,
	EAstroAchievementKeys__SolveChamber = 26,
	EAstroAchievementKeys__FindEngine = 27,
	EAstroAchievementKeys__SolveTerranEngine = 28,
	EAstroAchievementKeys__SolveBarrenEngine = 29,
	EAstroAchievementKeys__SolveAridEngine = 30,
	EAstroAchievementKeys__SolveExoticEngine = 31,
	EAstroAchievementKeys__SolveExomoonEngine = 32,
	EAstroAchievementKeys__SolveTundraEngine = 33,
	EAstroAchievementKeys__SolveRadiatedEngine = 34,
	EAstroAchievementKeys__SolveAllEngines = 35,
	EAstroAchievementKeys__LeaveTerran = 36,
	EAstroAchievementKeys__LandMoon = 37,
	EAstroAchievementKeys__LandArid = 38,
	EAstroAchievementKeys__LandExotic = 39,
	EAstroAchievementKeys__LandExoMoon = 40,
	EAstroAchievementKeys__LandRadiated = 41,
	EAstroAchievementKeys__LandTundra = 42,
	EAstroAchievementKeys__FastTravel = 43,
	EAstroAchievementKeys__BeatGame = 44,
	EAstroAchievementKeys__SlideTime = 45,
	EAstroAchievementKeys__RoverAirtime = 46,
	EAstroAchievementKeys__PlanetDance = 47,
	EAstroAchievementKeys__BackpackFirework = 48,
	EAstroAchievementKeys__MPSession = 49,
	EAstroAchievementKeys__GuestResearch = 50,
	EAstroAchievementKeys__MPCore  = 51,
	EAstroAchievementKeys__MPTime  = 52,
	EAstroAchievementKeys__CoOpShuttle = 53,
	EAstroAchievementKeys__AllAchievements = 54,
	EAstroAchievementKeys__WandererFirstProbe = 55,
	EAstroAchievementKeys__WandererAllProbes = 56,
	EAstroAchievementKeys__COUNT   = 57,
	EAstroAchievementKeys__EAstroAchievementKeys_MAX = 58
};


// Enum Astro.EAstroActionState
enum class EAstroActionState : uint8_t
{
	EAstroActionState__Inactive    = 0,
	EAstroActionState__Active      = 1,
	EAstroActionState__Aborted     = 2,
	EAstroActionState__Completed   = 3,
	EAstroActionState__EAstroActionState_MAX = 4
};


// Enum Astro.EAstroActionResourceFlags
enum class EAstroActionResourceFlags : uint8_t
{
	EAstroActionResourceFlags__Montage = 0,
	EAstroActionResourceFlags__Movement = 1,
	EAstroActionResourceFlags__TakePicture = 2,
	EAstroActionResourceFlags__EAstroActionResourceFlags_MAX = 3
};


// Enum Astro.EAstroActionSource
enum class EAstroActionSource : uint8_t
{
	EAstroActionSource__Server     = 0,
	EAstroActionSource__ControllingClient = 1,
	EAstroActionSource__EAstroActionSource_MAX = 2
};


// Enum Astro.EAstroTelemetryCounter
enum class EAstroTelemetryCounter : uint8_t
{
	EAstroTelemetryCounter__KeyboardUsageTime = 0,
	EAstroTelemetryCounter__GamepadUsageTime = 1,
	EAstroTelemetryCounter__UndergroundTime = 2,
	EAstroTelemetryCounter__OvergroundTime = 3,
	EAstroTelemetryCounter__DeformRemoveTime = 4,
	EAstroTelemetryCounter__DeformAddTime = 5,
	EAstroTelemetryCounter__DeformFlattenTime = 6,
	EAstroTelemetryCounter__ResourcesSedimentAmountCollected = 7,
	EAstroTelemetryCounter__ResourcesSedimentAmountDestroyed = 8,
	EAstroTelemetryCounter__ResourcesSedimentAmountConsumedTerrainAdd = 9,
	EAstroTelemetryCounter__ResourcesSedimentAmountConsumedTerrainFlatten = 10,
	EAstroTelemetryCounter__SmallRoverOcuppiedTime = 11,
	EAstroTelemetryCounter__MediumRoverOcuppiedTime = 12,
	EAstroTelemetryCounter__LargeRoverOccupiedTime = 13,
	EAstroTelemetryCounter__AbsoluteSteeringDriveTime = 14,
	EAstroTelemetryCounter__CameraSteeringDriveTime = 15,
	EAstroTelemetryCounter__RoverManualAirControlRollTime = 16,
	EAstroTelemetryCounter__RoverManualAirControlYawTime = 17,
	EAstroTelemetryCounter__CreativeDeformRemoveTime = 18,
	EAstroTelemetryCounter__CreativeDeformAddTime = 19,
	EAstroTelemetryCounter__CreativeDeformFlattenTime = 20,
	EAstroTelemetryCounter__CreativeDeformColorPick = 21,
	EAstroTelemetryCounter__CreativeDeformColorPaint = 22,
	EAstroTelemetryCounter__AdventureToCreative = 23,
	EAstroTelemetryCounter__CreativeToAdventure = 24,
	EAstroTelemetryCounter__FreeOxygen = 25,
	EAstroTelemetryCounter__FreeVehicleFuel = 26,
	EAstroTelemetryCounter__UnlimitedBackpackPower = 27,
	EAstroTelemetryCounter__Invicible = 28,
	EAstroTelemetryCounter__InvisibleToHazards = 29,
	EAstroTelemetryCounter__RemoveDecoratorsWhilePainting = 30,
	EAstroTelemetryCounter__DisableResourceCollection = 31,
	EAstroTelemetryCounter__ShowLODAnchors = 32,
	EAstroTelemetryCounter__ShowTerrainToolLight = 33,
	EAstroTelemetryCounter__FlightSpeed = 34,
	EAstroTelemetryCounter__TimeOfDay = 35,
	EAstroTelemetryCounter__SunOrbit = 36,
	EAstroTelemetryCounter__SolorTimeMultiplier = 37,
	EAstroTelemetryCounter__COUNT  = 38,
	EAstroTelemetryCounter__EAstroTelemetryCounter_MAX = 39
};


// Enum Astro.EDroneControlState
enum class EDroneControlState : uint8_t
{
	EDroneControlState__NotUsingDrone = 0,
	EDroneControlState__ControllingDrone = 1,
	EDroneControlState__ControllingAstroWithDroneDeployed = 2,
	EDroneControlState__EDroneControlState_MAX = 3
};


// Enum Astro.AstroMovementMode
enum class EAstroMovementMode : uint8_t
{
	AstroMovementMode__Walking     = 0,
	AstroMovementMode__Falling     = 1,
	AstroMovementMode__Sliding     = 2,
	AstroMovementMode__Flying      = 3,
	AstroMovementMode__CreativeFlight = 4,
	AstroMovementMode__AstroMovementMode_MAX = 5
};


// Enum Astro.EAstroColor
enum class EAstroColor : uint8_t
{
	EAstroColor__None              = 0,
	EAstroColor__Clear             = 1,
	EAstroColor__NullColor         = 2,
	EAstroColor__AstroBlue         = 3,
	EAstroColor__PolarWhite        = 4,
	EAstroColor__HazyWhite         = 5,
	EAstroColor__CharcoalGray      = 6,
	EAstroColor__AsphaltGray       = 7,
	EAstroColor__TitaniumGray      = 8,
	EAstroColor__SilverGray        = 9,
	EAstroColor__GoldenYellow      = 10,
	EAstroColor__AlertRed          = 11,
	EAstroColor__GoGreen           = 12,
	EAstroColor__ExoticPurple      = 13,
	EAstroColor__SafetyOrange      = 14,
	EAstroColor__OxygenBlue        = 15,
	EAstroColor__LapisBlue         = 16,
	EAstroColor__AtmoTeal          = 17,
	EAstroColor__HydroBlue         = 18,
	EAstroColor__CeruleanBlue      = 19,
	EAstroColor__JeweledPink       = 20,
	EAstroColor__EAstroColor_MAX   = 21
};


// Enum Astro.EAstroEntityComponentSubobjectTickGroup
enum class EAstroEntityComponentSubobjectTickGroup : uint8_t
{
	EAstroEntityComponentSubobjectTickGroup__PrePhysics = 0,
	EAstroEntityComponentSubobjectTickGroup__PostPhysics = 1,
	EAstroEntityComponentSubobjectTickGroup__EAstroEntityComponentSubobjectTickGroup_MAX = 2
};


// Enum Astro.EMouseFocusChangeSuppressionSource
enum class EMouseFocusChangeSuppressionSource : uint8_t
{
	EMouseFocusChangeSuppressionSource__PopoutIsActive = 0,
	EMouseFocusChangeSuppressionSource__NavigationCommandWasIssued = 1,
	EMouseFocusChangeSuppressionSource__ScrollbarActive = 2,
	EMouseFocusChangeSuppressionSource__AstropediaSlidesOpen = 3,
	EMouseFocusChangeSuppressionSource__EMouseFocusChangeSuppressionSource_MAX = 4
};


// Enum Astro.EGameMenuNavigationCommand
enum class EGameMenuNavigationCommand : uint8_t
{
	EGameMenuNavigationCommand__None = 0,
	EGameMenuNavigationCommand__Left = 1,
	EGameMenuNavigationCommand__Right = 2,
	EGameMenuNavigationCommand__Up = 3,
	EGameMenuNavigationCommand__Down = 4,
	EGameMenuNavigationCommand__TabRight = 5,
	EGameMenuNavigationCommand__TabLeft = 6,
	EGameMenuNavigationCommand__LeftOrTabLeft = 7,
	EGameMenuNavigationCommand__RightOrTabRight = 8,
	EGameMenuNavigationCommand__Back = 9,
	EGameMenuNavigationCommand__Exit = 10,
	EGameMenuNavigationCommand__UseOrEdit = 11,
	EGameMenuNavigationCommand__ScrollDown = 12,
	EGameMenuNavigationCommand__ScrollUp = 13,
	EGameMenuNavigationCommand__ScrollPageDown = 14,
	EGameMenuNavigationCommand__ScrollPageUp = 15,
	EGameMenuNavigationCommand__ChangeUsers = 16,
	EGameMenuNavigationCommand__ToggleDebugMenu = 17,
	EGameMenuNavigationCommand__ToggleMOTD = 18,
	EGameMenuNavigationCommand__ToggleAstropedia = 19,
	EGameMenuNavigationCommand__ToggleStore = 20,
	EGameMenuNavigationCommand__Null = 21,
	EGameMenuNavigationCommand__EGameMenuNavigationCommand_MAX = 22
};


// Enum Astro.EResearchProgressionMethod
enum class EResearchProgressionMethod : uint8_t
{
	EResearchProgressionMethod__Shared = 0,
	EResearchProgressionMethod__Individual = 1,
	EResearchProgressionMethod__EResearchProgressionMethod_MAX = 2
};


// Enum Astro.EAchievementProgressionState
enum class EAchievementProgressionState : uint8_t
{
	EAchievementProgressionState__Unknown = 0,
	EAchievementProgressionState__Enabled = 1,
	EAchievementProgressionState__DisabledCreativeMode = 2,
	EAchievementProgressionState__DisabledIndividualDedicatedServer = 3,
	EAchievementProgressionState__DisabledBoth = 4,
	EAchievementProgressionState__EAchievementProgressionState_MAX = 5
};


// Enum Astro.EAstroWindowMode
enum class EAstroWindowMode : uint8_t
{
	EAstroWindowMode__Fullscreen   = 0,
	EAstroWindowMode__WindowedFullscreen = 1,
	EAstroWindowMode__Windowed     = 2,
	EAstroWindowMode__NumWindowModes = 3,
	EAstroWindowMode__EAstroWindowMode_MAX = 4
};


// Enum Astro.EMicroTxnStoreTileTypes
enum class EMicroTxnStoreTileTypes : uint8_t
{
	EMicroTxnStoreTileTypes__None  = 0,
	EMicroTxnStoreTileTypes__Normal = 1,
	EMicroTxnStoreTileTypes__Featured = 2,
	EMicroTxnStoreTileTypes__Tall  = 3,
	EMicroTxnStoreTileTypes__Wide  = 4,
	EMicroTxnStoreTileTypes__Large = 5,
	EMicroTxnStoreTileTypes__EMicroTxnStoreTileTypes_MAX = 6
};


// Enum Astro.EMicroTxnStoreItemFlags
enum class EMicroTxnStoreItemFlags : uint8_t
{
	EMicroTxnStoreItemFlags__New   = 0,
	EMicroTxnStoreItemFlags__Featured = 1,
	EMicroTxnStoreItemFlags__EMicroTxnStoreItemFlags_MAX = 2
};


// Enum Astro.EMicroTxnStoreTileState
enum class EMicroTxnStoreTileState : uint8_t
{
	EMicroTxnStoreTileState__Available = 0,
	EMicroTxnStoreTileState__Owned = 1,
	EMicroTxnStoreTileState__Active = 2,
	EMicroTxnStoreTileState__Locked = 3,
	EMicroTxnStoreTileState__Filler = 4,
	EMicroTxnStoreTileState__EMicroTxnStoreTileState_MAX = 5
};


// Enum Astro.EPlanetIdentifier
enum class EPlanetIdentifier : uint8_t
{
	EPlanetIdentifier__None        = 0,
	EPlanetIdentifier__Terran      = 1,
	EPlanetIdentifier__TerranMoon  = 2,
	EPlanetIdentifier__Exotic      = 3,
	EPlanetIdentifier__ExoticMoon  = 4,
	EPlanetIdentifier__Arid        = 5,
	EPlanetIdentifier__Tundra      = 6,
	EPlanetIdentifier__Radiated    = 7,
	EPlanetIdentifier__EPlanetIdentifier_MAX = 8
};


// Enum Astro.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__Spatialize_Static = 2,
	EClassRepNodeMapping__Spatialize_Dynamic = 3,
	EClassRepNodeMapping__Spatialize_Dormancy = 4,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 5
};


// Enum Astro.ESaveGameErrorType
enum class ESaveGameErrorType : uint8_t
{
	ESaveGameErrorType__NoError    = 0,
	ESaveGameErrorType__LastAttemptToSaveFailedDueToInsufficientStorage = 1,
	ESaveGameErrorType__LastAttemptToSaveFailedExceededMaxFileSize = 2,
	ESaveGameErrorType__UnknownError = 3,
	ESaveGameErrorType__ESaveGameErrorType_MAX = 4
};


// Enum Astro.EGamePlatform
enum class EGamePlatform : uint8_t
{
	EGamePlatform__PC              = 0,
	EGamePlatform__UniversalWindows = 1,
	EGamePlatform__XboxOne         = 2,
	EGamePlatform__PS4             = 3,
	EGamePlatform__EGamePlatform_MAX = 4
};


// Enum Astro.EGameControllerType
enum class EGameControllerType : uint8_t
{
	EGameControllerType__Xbox      = 0,
	EGameControllerType__PS4       = 1,
	EGameControllerType__EGameControllerType_MAX = 2
};


// Enum Astro.ETooltipAnimation
enum class ETooltipAnimation : uint8_t
{
	ETooltipAnimation__None        = 0,
	ETooltipAnimation__BadgeExpanding = 1,
	ETooltipAnimation__DetailsExpanding = 2,
	ETooltipAnimation__DetailsContracting = 3,
	ETooltipAnimation__BadgeContracting = 4,
	ETooltipAnimation__ETooltipAnimation_MAX = 5
};


// Enum Astro.ETooltipState
enum class ETooltipState : uint8_t
{
	ETooltipState__Collapsed       = 0,
	ETooltipState__BadgeVisible    = 1,
	ETooltipState__FullyPresented  = 2,
	ETooltipState__ETooltipState_MAX = 3
};


// Enum Astro.EAstroUIAudioEventKey
enum class EAstroUIAudioEventKey : uint8_t
{
	EAstroUIAudioEventKey__Invalid = 0,
	EAstroUIAudioEventKey__NoSound = 1,
	EAstroUIAudioEventKey__GameMenuOpened = 2,
	EAstroUIAudioEventKey__GameMenuClosed = 3,
	EAstroUIAudioEventKey__GameMenuEntryGenericFocusGained = 4,
	EAstroUIAudioEventKey__GameMenuEntryGenericUsed = 5,
	EAstroUIAudioEventKey__GameMenuEntryGenericTabChanged = 6,
	EAstroUIAudioEventKey__GameMenuPopoutPresented = 7,
	EAstroUIAudioEventKey__GameMenuEntryEditStarted = 8,
	EAstroUIAudioEventKey__GameMenuEntryEditCompleted = 9,
	EAstroUIAudioEventKey__GameMenuEntryEditValueChanged = 10,
	EAstroUIAudioEventKey__GameMenuCheckboxSetTrue = 11,
	EAstroUIAudioEventKey__GameMenuCheckboxSetFalse = 12,
	EAstroUIAudioEventKey__GameMenuSuitSelectionMade = 13,
	EAstroUIAudioEventKey__GameMenuVisorSelectionMade = 14,
	EAstroUIAudioEventKey__GameMenuPaletteSelectionMade = 15,
	EAstroUIAudioEventKey__GameMenuAstropediaEntryOpened = 16,
	EAstroUIAudioEventKey__GameMenuAstropediaEntryClosed = 17,
	EAstroUIAudioEventKey__GameMenuQuitButtonPressed = 18,
	EAstroUIAudioEventKey__GameMenuEntryGenericUsedLocked = 19,
	EAstroUIAudioEventKey__CreativeColorpicker = 20,
	EAstroUIAudioEventKey__CreativeTerrainToolMenuOpen = 21,
	EAstroUIAudioEventKey__CreativeTerrainToolMenuClose = 22,
	EAstroUIAudioEventKey__EAstroUIAudioEventKey_MAX = 23
};


// Enum Astro.ENotificationTagPresentationDirection
enum class ENotificationTagPresentationDirection : uint8_t
{
	ENotificationTagPresentationDirection__Left = 0,
	ENotificationTagPresentationDirection__Right = 1,
	ENotificationTagPresentationDirection__ENotificationTagPresentationDirection_MAX = 2
};


// Enum Astro.ETitleMenuCustomizationPreviewState
enum class ETitleMenuCustomizationPreviewState : uint8_t
{
	ETitleMenuCustomizationPreviewState__None = 0,
	ETitleMenuCustomizationPreviewState__TransitioningIntoPreview = 1,
	ETitleMenuCustomizationPreviewState__TransitioningOutOfPreview = 2,
	ETitleMenuCustomizationPreviewState__InCustomizationPreview = 3,
	ETitleMenuCustomizationPreviewState__TransitioningIntoFinalization = 4,
	ETitleMenuCustomizationPreviewState__TransitioningOutOfFinalization = 5,
	ETitleMenuCustomizationPreviewState__FinalizingCustomization = 6,
	ETitleMenuCustomizationPreviewState__Invalid = 7,
	ETitleMenuCustomizationPreviewState__ETitleMenuCustomizationPreviewState_MAX = 8
};


// Enum Astro.EAstroGameMenuTutoriaSlideCardKey
enum class EAstroGameMenuTutoriaSlideCardKey : uint8_t
{
	EAstroGameMenuTutoriaSlideCardKey__Invalid = 0,
	EAstroGameMenuTutoriaSlideCardKey__Power = 1,
	EAstroGameMenuTutoriaSlideCardKey__SoilExcavation = 2,
	EAstroGameMenuTutoriaSlideCardKey__ResearchCatalog = 3,
	EAstroGameMenuTutoriaSlideCardKey__ResearchPlatform = 4,
	EAstroGameMenuTutoriaSlideCardKey__Printers = 5,
	EAstroGameMenuTutoriaSlideCardKey__BaseBuilding = 6,
	EAstroGameMenuTutoriaSlideCardKey__QHControls = 7,
	EAstroGameMenuTutoriaSlideCardKey__QHInteract = 8,
	EAstroGameMenuTutoriaSlideCardKey__QHInventory = 9,
	EAstroGameMenuTutoriaSlideCardKey__QHTerrain = 10,
	EAstroGameMenuTutoriaSlideCardKey__PlanetTerran = 11,
	EAstroGameMenuTutoriaSlideCardKey__PlanetTerranMoon = 12,
	EAstroGameMenuTutoriaSlideCardKey__PlanetArid = 13,
	EAstroGameMenuTutoriaSlideCardKey__PlanetExotic = 14,
	EAstroGameMenuTutoriaSlideCardKey__PlanetExoticMoon = 15,
	EAstroGameMenuTutoriaSlideCardKey__PlanetTundra = 16,
	EAstroGameMenuTutoriaSlideCardKey__PlanetRadiated = 17,
	EAstroGameMenuTutoriaSlideCardKey__ResourcesNatural = 18,
	EAstroGameMenuTutoriaSlideCardKey__ResourcesRefined = 19,
	EAstroGameMenuTutoriaSlideCardKey__ResourcesAtmospheric = 20,
	EAstroGameMenuTutoriaSlideCardKey__ResourcesComposite = 21,
	EAstroGameMenuTutoriaSlideCardKey__CreativeControls = 22,
	EAstroGameMenuTutoriaSlideCardKey__CreativePauseMenu = 23,
	EAstroGameMenuTutoriaSlideCardKey__CreativeTerrainTool = 24,
	EAstroGameMenuTutoriaSlideCardKey__CreativeTerrainToolWindow = 25,
	EAstroGameMenuTutoriaSlideCardKey__CreativeCatalog = 26,
	EAstroGameMenuTutoriaSlideCardKey__CreativeNewItems = 27,
	EAstroGameMenuTutoriaSlideCardKey__CreativeNewInteractions = 28,
	EAstroGameMenuTutoriaSlideCardKey__EAstroGameMenuTutoriaSlideCardKey_MAX = 29
};


// Enum Astro.EAstroGameMenuTutorialSlideDeckKey
enum class EAstroGameMenuTutorialSlideDeckKey : uint8_t
{
	EAstroGameMenuTutorialSlideDeckKey__Invalid = 0,
	EAstroGameMenuTutorialSlideDeckKey__Power = 1,
	EAstroGameMenuTutorialSlideDeckKey__SoilExcavation = 2,
	EAstroGameMenuTutorialSlideDeckKey__Research = 3,
	EAstroGameMenuTutorialSlideDeckKey__Printers = 4,
	EAstroGameMenuTutorialSlideDeckKey__BaseBuilding = 5,
	EAstroGameMenuTutorialSlideDeckKey__CreativeMode = 6,
	EAstroGameMenuTutorialSlideDeckKey__QHAll = 7,
	EAstroGameMenuTutorialSlideDeckKey__QHPlanets = 8,
	EAstroGameMenuTutorialSlideDeckKey__QHResources = 9,
	EAstroGameMenuTutorialSlideDeckKey__EAstroGameMenuTutorialSlideDeckKey_MAX = 10
};


// Enum Astro.EAtmosphericCondenserState
enum class EAtmosphericCondenserState : uint8_t
{
	EAtmosphericCondenserState__Invalid = 0,
	EAtmosphericCondenserState__Inactive = 1,
	EAtmosphericCondenserState__Ready = 2,
	EAtmosphericCondenserState__Producing = 3,
	EAtmosphericCondenserState__Paused = 4,
	EAtmosphericCondenserState__EAtmosphericCondenserState_MAX = 5
};


// Enum Astro.EAtmosphericCondenserReadiness
enum class EAtmosphericCondenserReadiness : uint8_t
{
	EAtmosphericCondenserReadiness__ReadyToCondense = 0,
	EAtmosphericCondenserReadiness__LackingPower = 1,
	EAtmosphericCondenserReadiness__OuputSlotFull = 2,
	EAtmosphericCondenserReadiness__Invalid = 3,
	EAtmosphericCondenserReadiness__EAtmosphericCondenserReadiness_MAX = 4
};


// Enum Astro.EAugmentProperty
enum class EAugmentProperty : uint8_t
{
	EAugmentProperty__AP_BrushSize = 0,
	EAugmentProperty__AP_DeformationIntensity = 1,
	EAugmentProperty__AP_TerrainColor = 2,
	EAugmentProperty__AP_TerrainColor_R = 3,
	EAugmentProperty__AP_TerrainColor_G = 4,
	EAugmentProperty__AP_TerrainColor_B = 5,
	EAugmentProperty__AP_TerrainHardness = 6,
	EAugmentProperty__AP_TerrainSurfaceType = 7,
	EAugmentProperty__AP_PowerLevel = 8,
	EAugmentProperty__AP_Alignment = 9,
	EAugmentProperty__AP_HardnessTier = 10,
	EAugmentProperty__AP_MAX       = 11
};


// Enum Astro.EAutoCraneTransferStage
enum class EAutoCraneTransferStage : uint8_t
{
	EAutoCraneTransferStage__PickupPending = 0,
	EAutoCraneTransferStage__PickupInProgress = 1,
	EAutoCraneTransferStage__TransferToDropoff = 2,
	EAutoCraneTransferStage__DropoffPending = 3,
	EAutoCraneTransferStage__DropoffInProgress = 4,
	EAutoCraneTransferStage__TransferToPickup = 5,
	EAutoCraneTransferStage__EAutoCraneTransferStage_MAX = 6
};


// Enum Astro.EBreadboardRecipeListType
enum class EBreadboardRecipeListType : uint8_t
{
	EBreadboardRecipeListType__None = 0,
	EBreadboardRecipeListType__ModuleRecipeList = 1,
	EBreadboardRecipeListType__BreadboardRecipeList = 2,
	EBreadboardRecipeListType__EBreadboardRecipeListType_MAX = 3
};


// Enum Astro.ButtonShape
enum class EButtonShape : uint8_t
{
	ButtonShape__Cylinder          = 0,
	ButtonShape__Rectangle         = 1,
	ButtonShape__ButtonShape_MAX   = 2
};


// Enum Astro.EButtonInput
enum class EButtonInput : uint8_t
{
	Confirm                        = 0,
	Cancel                         = 1,
	EBUTTONINPUT_NUM_ITEMS         = 2,
	EButtonInput_MAX               = 3
};


// Enum Astro.ECableTutorialItemRole
enum class ECableTutorialItemRole : uint8_t
{
	ECableTutorialItemRole__Receiver = 0,
	ECableTutorialItemRole__Provider = 1,
	ECableTutorialItemRole__ECableTutorialItemRole_MAX = 2
};


// Enum Astro.ECameraControlMask
enum class ECameraControlMask : uint8_t
{
	ECameraControlMask__All        = 0,
	ECameraControlMask__MouseOnly  = 1,
	ECameraControlMask__GamepadOnly = 2,
	ECameraControlMask__ECameraControlMask_MAX = 3
};


// Enum Astro.ECameraDOF
enum class ECameraDOF : uint8_t
{
	ECameraDOF__Pitch              = 0,
	ECameraDOF__Yaw                = 1,
	ECameraDOF__Roll               = 2,
	ECameraDOF__VerticalOffset     = 3,
	ECameraDOF__HorizontalOffset   = 4,
	ECameraDOF__Distance           = 5,
	ECameraDOF__FieldOfView        = 6,
	ECameraDOF__WorldTransform     = 7,
	ECameraDOF__ECameraDOF_MAX     = 8
};


// Enum Astro.ESelectedItemUnlockState
enum class ESelectedItemUnlockState : uint8_t
{
	ESelectedItemUnlockState__Unlocked = 0,
	ESelectedItemUnlockState__Unlockable = 1,
	ESelectedItemUnlockState__Locked = 2,
	ESelectedItemUnlockState__ESelectedItemUnlockState_MAX = 3
};


// Enum Astro.ECharacterCustomizationVisibility
enum class ECharacterCustomizationVisibility : uint8_t
{
	ECharacterCustomizationVisibility__HiddenToAll = 0,
	ECharacterCustomizationVisibility__HiddenUnlessUnlocked = 1,
	ECharacterCustomizationVisibility__ObfuscatedUnlessUnlocked = 2,
	ECharacterCustomizationVisibility__VisibleButUnlockRequired = 3,
	ECharacterCustomizationVisibility__AvailableToAll = 4,
	ECharacterCustomizationVisibility__ECharacterCustomizationVisibility_MAX = 5
};


// Enum Astro.ECharacterHatCategory
enum class ECharacterHatCategory : uint8_t
{
	ECharacterHatCategory__Head    = 0,
	ECharacterHatCategory__Mask    = 1,
	ECharacterHatCategory__ECharacterHatCategory_MAX = 2
};


// Enum Astro.EPhysicalItemTerrainMode
enum class EPhysicalItemTerrainMode : uint8_t
{
	EPhysicalItemTerrainMode__Attach = 0,
	EPhysicalItemTerrainMode__Stick = 1,
	EPhysicalItemTerrainMode__Bury = 2,
	EPhysicalItemTerrainMode__Free = 3,
	EPhysicalItemTerrainMode__EPhysicalItemTerrainMode_MAX = 4
};


// Enum Astro.FPerPlayerUseSuppressionMode
enum class EFPerPlayerUseSuppressionMode : uint8_t
{
	FPerPlayerUseSuppressionMode__None = 0,
	FPerPlayerUseSuppressionMode__Whitelist = 1,
	FPerPlayerUseSuppressionMode__FPerPlayerUseSuppressionMode_MAX = 2
};


// Enum Astro.EUseType
enum class EUseType : uint8_t
{
	EUseType__None                 = 0,
	EUseType__Tooltip              = 1,
	EUseType__Aux                  = 2,
	EUseType__Actuator             = 3,
	EUseType__All                  = 4,
	EUseType__EUseType_MAX         = 5
};


// Enum Astro.EViewPrimativeType
enum class EViewPrimativeType : uint8_t
{
	EViewPrimativeType__PrimaryViewActor = 0,
	EViewPrimativeType__SecondaryViewActor = 1,
	EViewPrimativeType__TertiaryViewActor = 2,
	EViewPrimativeType__TracedActor = 3,
	EViewPrimativeType__EViewPrimativeType_MAX = 4
};


// Enum Astro.ECavePositionSpecifier
enum class ECavePositionSpecifier : uint8_t
{
	ECavePositionSpecifier__Ceiling = 0,
	ECavePositionSpecifier__Ground = 1,
	ECavePositionSpecifier__Walls  = 2,
	ECavePositionSpecifier__Center = 3,
	ECavePositionSpecifier__ECavePositionSpecifier_MAX = 4
};


// Enum Astro.EMultitoolMode
enum class EMultitoolMode : uint8_t
{
	EMultitoolMode__Multitool      = 0,
	EMultitoolMode__SlotSelection  = 1,
	EMultitoolMode__Terrain        = 2,
	EMultitoolMode__None           = 3,
	EMultitoolMode__EMultitoolMode_MAX = 4
};


// Enum Astro.EControlPanelNavigationDirection
enum class EControlPanelNavigationDirection : uint8_t
{
	EControlPanelNavigationDirection__Left = 0,
	EControlPanelNavigationDirection__Right = 1,
	EControlPanelNavigationDirection__Up = 2,
	EControlPanelNavigationDirection__Down = 3,
	EControlPanelNavigationDirection__EControlPanelNavigationDirection_MAX = 4
};


// Enum Astro.ECrackableMethod
enum class ECrackableMethod : uint8_t
{
	ECrackableMethod__Hover        = 0,
	ECrackableMethod__HoverFaceCamera = 1,
	ECrackableMethod__Pivot        = 2,
	ECrackableMethod__None         = 3,
	ECrackableMethod__ECrackableMethod_MAX = 4
};


// Enum Astro.ECrackableActorNetworkingPolicy
enum class ECrackableActorNetworkingPolicy : uint8_t
{
	ECrackableActorNetworkingPolicy__LocalOnlyNoNetworking = 0,
	ECrackableActorNetworkingPolicy__OwnerOnlyWithNetworking = 1,
	ECrackableActorNetworkingPolicy__AnyoneSingleUserWithNetworking = 2,
	ECrackableActorNetworkingPolicy__ECrackableActorNetworkingPolicy_MAX = 3
};


// Enum Astro.ECrackableActorMethod
enum class ECrackableActorMethod : uint8_t
{
	ECrackableActorMethod__Hover   = 0,
	ECrackableActorMethod__HoverFaceCamera = 1,
	ECrackableActorMethod__Pivot   = 2,
	ECrackableActorMethod__None    = 3,
	ECrackableActorMethod__ECrackableActorMethod_MAX = 4
};


// Enum Astro.ECraftingOrgin
enum class ECraftingOrgin : uint8_t
{
	ECraftingOrgin__None           = 0,
	ECraftingOrgin__Crafted        = 1,
	ECraftingOrgin__MinedAnywhere  = 2,
	ECraftingOrgin__OreMinedAnywhere = 3,
	ECraftingOrgin__MinedOnPlanet  = 4,
	ECraftingOrgin__OreMinedOnPlanet = 5,
	ECraftingOrgin__Tapped         = 6,
	ECraftingOrgin__Smelted        = 7,
	ECraftingOrgin__Extracted      = 8,
	ECraftingOrgin__Condensed      = 9,
	ECraftingOrgin__Catalyzed      = 10,
	ECraftingOrgin__BackpackPrinted = 11,
	ECraftingOrgin__Printed        = 12,
	ECraftingOrgin__ECraftingOrgin_MAX = 13
};


// Enum Astro.EPaintIndexType
enum class EPaintIndexType : uint8_t
{
	EPaintIndexType__SpencerPalette = 0,
	EPaintIndexType__PlanetPalette = 1,
	EPaintIndexType__SpecialPalette = 2,
	EPaintIndexType__Invalid       = 3,
	EPaintIndexType__EPaintIndexType_MAX = 4
};


// Enum Astro.EDeformToolSedimentTankReservesState
enum class EDeformToolSedimentTankReservesState : uint8_t
{
	EDeformToolSedimentTankReservesState__NoReserves = 0,
	EDeformToolSedimentTankReservesState__ReservesEmpty = 1,
	EDeformToolSedimentTankReservesState__ReservesPartiallyFull = 2,
	EDeformToolSedimentTankReservesState__ReservesFull = 3,
	EDeformToolSedimentTankReservesState__EDeformToolSedimentTankReservesState_MAX = 4
};


// Enum Astro.EEmoteType
enum class EEmoteType : uint8_t
{
	EEmoteType__Gesture            = 0,
	EEmoteType__Dance              = 1,
	EEmoteType__EEmoteType_MAX     = 2
};


// Enum Astro.EExoRequestStatus
enum class EExoRequestStatus : uint8_t
{
	EExoRequestStatus__NoMission   = 0,
	EExoRequestStatus__MissionAvailable = 1,
	EExoRequestStatus__WaitingForShip = 2,
	EExoRequestStatus__ShipDocked  = 3,
	EExoRequestStatus__ShipOutgoing = 4,
	EExoRequestStatus__ShipIncoming = 5,
	EExoRequestStatus__EExoRequestStatus_MAX = 6
};


// Enum Astro.ERemainingFuelState
enum class ERemainingFuelState : uint8_t
{
	ERemainingFuelState__Plenty    = 0,
	ERemainingFuelState__LastTank  = 1,
	ERemainingFuelState__Critical  = 2,
	ERemainingFuelState__ERemainingFuelState_MAX = 3
};


// Enum Astro.EFuelSource
enum class EFuelSource : uint8_t
{
	EFuelSource__InternalPortioned = 0,
	EFuelSource__External          = 1,
	EFuelSource__EFuelSource_MAX   = 2
};


// Enum Astro.EGateObjectControlPanelContext
enum class EGateObjectControlPanelContext : uint8_t
{
	EGateObjectControlPanelContext__Planet = 0,
	EGateObjectControlPanelContext__SolarSystem = 1,
	EGateObjectControlPanelContext__EGateObjectControlPanelContext_MAX = 2
};


// Enum Astro.EHarvestableItemSpawnerType
enum class EHarvestableItemSpawnerType : uint8_t
{
	EHarvestableItemSpawnerType__Primary = 0,
	EHarvestableItemSpawnerType__Secondary = 1,
	EHarvestableItemSpawnerType__EHarvestableItemSpawnerType_MAX = 2
};


// Enum Astro.EHornType
enum class EHornType : uint8_t
{
	EHornType__OneOffSound         = 0,
	EHornType__LoopingSound        = 1,
	EHornType__EHornType_MAX       = 2
};


// Enum Astro.EAstroInputBindingNameMappings
enum class EAstroInputBindingNameMappings : uint8_t
{
	EAstroInputBindingNameMappings__Invalid = 0,
	EAstroInputBindingNameMappings__Use = 1,
	EAstroInputBindingNameMappings__Catalog = 2,
	EAstroInputBindingNameMappings__Backpack = 3,
	EAstroInputBindingNameMappings__TerrainTool = 4,
	EAstroInputBindingNameMappings__Confirm = 5,
	EAstroInputBindingNameMappings__Cancel = 6,
	EAstroInputBindingNameMappings__ContextLeft = 7,
	EAstroInputBindingNameMappings__ContextRight = 8,
	EAstroInputBindingNameMappings__Jump = 9,
	EAstroInputBindingNameMappings__PlaceTether = 10,
	EAstroInputBindingNameMappings__MouseWheelUp = 11,
	EAstroInputBindingNameMappings__MouseWheelDown = 12,
	EAstroInputBindingNameMappings__QuickSelectModifier = 13,
	EAstroInputBindingNameMappings__UseModifier = 14,
	EAstroInputBindingNameMappings__Emote1 = 15,
	EAstroInputBindingNameMappings__Emote2 = 16,
	EAstroInputBindingNameMappings__Emote3 = 17,
	EAstroInputBindingNameMappings__Emote4 = 18,
	EAstroInputBindingNameMappings__NavigateLeft = 19,
	EAstroInputBindingNameMappings__NavigateRight = 20,
	EAstroInputBindingNameMappings__NavigateUp = 21,
	EAstroInputBindingNameMappings__NavigateDown = 22,
	EAstroInputBindingNameMappings__CategoryScrollLeft = 23,
	EAstroInputBindingNameMappings__CategoryScrollRight = 24,
	EAstroInputBindingNameMappings__ToggleEscapeMenu = 25,
	EAstroInputBindingNameMappings__ToggleDebugMenu = 26,
	EAstroInputBindingNameMappings__TeleportToCursor = 27,
	EAstroInputBindingNameMappings__FOVUp = 28,
	EAstroInputBindingNameMappings__FOVDown = 29,
	EAstroInputBindingNameMappings__DeleteActiveMultiToolItem = 30,
	EAstroInputBindingNameMappings__DuplicateActiveMultiToolItem = 31,
	EAstroInputBindingNameMappings__ChangeDeformBrushSizeModifier = 32,
	EAstroInputBindingNameMappings__ChangeDeformBrushStrengthModifier = 33,
	EAstroInputBindingNameMappings__IncrementBrushSizeController = 34,
	EAstroInputBindingNameMappings__DecrementBrushSizeController = 35,
	EAstroInputBindingNameMappings__IncrementBrushIntensityController = 36,
	EAstroInputBindingNameMappings__DecrementBrushIntensityController = 37,
	EAstroInputBindingNameMappings__AirControlRollYawModifier = 38,
	EAstroInputBindingNameMappings__MotionForwardBack = 39,
	EAstroInputBindingNameMappings__MotionLeftRight = 40,
	EAstroInputBindingNameMappings__CameraTilt = 41,
	EAstroInputBindingNameMappings__CameraPan = 42,
	EAstroInputBindingNameMappings__CameraPedestal = 43,
	EAstroInputBindingNameMappings__SelectionRotate = 44,
	EAstroInputBindingNameMappings__ArrowRight = 45,
	EAstroInputBindingNameMappings__ArrowForward = 46,
	EAstroInputBindingNameMappings__LeftTrigger = 47,
	EAstroInputBindingNameMappings__RightTrigger = 48,
	EAstroInputBindingNameMappings__Focus = 49,
	EAstroInputBindingNameMappings__Sprint = 50,
	EAstroInputBindingNameMappings__DeformAdd = 51,
	EAstroInputBindingNameMappings__DeformFlatten = 52,
	EAstroInputBindingNameMappings__DeformSmooth = 53,
	EAstroInputBindingNameMappings__VehicleThrottle = 54,
	EAstroInputBindingNameMappings__ToggleDeformToolMenu = 55,
	EAstroInputBindingNameMappings__EAstroInputBindingNameMappings_MAX = 56
};


// Enum Astro.EAstroDiscreteInputOptionPlayerFacing
enum class EAstroDiscreteInputOptionPlayerFacing : uint8_t
{
	EAstroDiscreteInputOptionPlayerFacing__Invalid = 0,
	EAstroDiscreteInputOptionPlayerFacing__Forward = 1,
	EAstroDiscreteInputOptionPlayerFacing__Backward = 2,
	EAstroDiscreteInputOptionPlayerFacing__Left = 3,
	EAstroDiscreteInputOptionPlayerFacing__Right = 4,
	EAstroDiscreteInputOptionPlayerFacing__RoverForward = 5,
	EAstroDiscreteInputOptionPlayerFacing__RoverReverse = 6,
	EAstroDiscreteInputOptionPlayerFacing__Sprint = 7,
	EAstroDiscreteInputOptionPlayerFacing__Jump = 8,
	EAstroDiscreteInputOptionPlayerFacing__TerrainTool = 9,
	EAstroDiscreteInputOptionPlayerFacing__Backpack = 10,
	EAstroDiscreteInputOptionPlayerFacing__ContextLeft = 11,
	EAstroDiscreteInputOptionPlayerFacing__ContextRight = 12,
	EAstroDiscreteInputOptionPlayerFacing__TerrainAddModifier = 13,
	EAstroDiscreteInputOptionPlayerFacing__TerrainFlattenModifier = 14,
	EAstroDiscreteInputOptionPlayerFacing__Tether = 15,
	EAstroDiscreteInputOptionPlayerFacing__Joy = 16,
	EAstroDiscreteInputOptionPlayerFacing__Happy = 17,
	EAstroDiscreteInputOptionPlayerFacing__Wave = 18,
	EAstroDiscreteInputOptionPlayerFacing__What = 19,
	EAstroDiscreteInputOptionPlayerFacing__Use = 20,
	EAstroDiscreteInputOptionPlayerFacing__Catalog = 21,
	EAstroDiscreteInputOptionPlayerFacing__ToggleCreativeDeformToolMenu = 22,
	EAstroDiscreteInputOptionPlayerFacing__DeleteActiveMultiToolItem = 23,
	EAstroDiscreteInputOptionPlayerFacing__DuplicateActiveMultiToolItem = 24,
	EAstroDiscreteInputOptionPlayerFacing__ChangeDeformBrushSizeModifier = 25,
	EAstroDiscreteInputOptionPlayerFacing__ChangeDeformBrushStrengthModifier = 26,
	EAstroDiscreteInputOptionPlayerFacing__EAstroDiscreteInputOptionPlayerFacing_MAX = 27
};


// Enum Astro.EItemStorageBehavior
enum class EItemStorageBehavior : uint8_t
{
	EItemStorageBehavior__None     = 0,
	EItemStorageBehavior__IsContainedOnly = 1,
	EItemStorageBehavior__Container = 2,
	EItemStorageBehavior__DeployablePackage = 3,
	EItemStorageBehavior__EItemStorageBehavior_MAX = 4
};


// Enum Astro.ELevelingBlockVizSource
enum class ELevelingBlockVizSource : uint8_t
{
	ELevelingBlockVizSource__None  = 0,
	ELevelingBlockVizSource__Placed = 1,
	ELevelingBlockVizSource__Hover = 2,
	ELevelingBlockVizSource__ELevelingBlockVizSource_MAX = 3
};


// Enum Astro.ELodAnchorState
enum class ELodAnchorState : uint8_t
{
	ELodAnchorState__Invalid       = 0,
	ELodAnchorState__NotAnchored   = 1,
	ELodAnchorState__Anchored      = 2,
	ELodAnchorState__ELodAnchorState_MAX = 3
};


// Enum Astro.EInteractionInputType
enum class EInteractionInputType : uint8_t
{
	EInteractionInputType__Cursor  = 0,
	EInteractionInputType__Gamepad = 1,
	EInteractionInputType__None    = 2,
	EInteractionInputType__EInteractionInputType_MAX = 3
};


// Enum Astro.EHandState
enum class EHandState : uint8_t
{
	EHandState__HS_Empty           = 0,
	EHandState__HS_Grabbing        = 1,
	EHandState__HS_Holding         = 2,
	EHandState__HS_Releasing       = 3,
	EHandState__HS_MAX             = 4
};


// Enum Astro.ECameraMode
enum class ECameraMode : uint8_t
{
	ECameraMode__Follow            = 0,
	ECameraMode__Fly               = 1,
	ECameraMode__COUNT             = 2,
	ECameraMode__ECameraMode_MAX   = 3
};


// Enum Astro.ERaycastOrientation
enum class ERaycastOrientation : uint8_t
{
	ERaycastOrientation__ComponentUp = 0,
	ERaycastOrientation__PlanetUp  = 1,
	ERaycastOrientation__ERaycastOrientation_MAX = 2
};


// Enum Astro.ERepackagingTargetState
enum class ERepackagingTargetState : uint8_t
{
	ERepackagingTargetState__None  = 0,
	ERepackagingTargetState__Invalid = 1,
	ERepackagingTargetState__Valid = 2,
	ERepackagingTargetState__ERepackagingTargetState_MAX = 3
};


// Enum Astro.EResearchBonusTimelineType
enum class EResearchBonusTimelineType : uint8_t
{
	EResearchBonusTimelineType__CumulativeResearchTime = 0,
	EResearchBonusTimelineType__CumulativeResearchPoints = 1,
	EResearchBonusTimelineType__EResearchBonusTimelineType_MAX = 2
};


// Enum Astro.EScalabilityLevel
enum class EScalabilityLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EScalabilityLevel_MAX          = 4
};


// Enum Astro.EScannableType
enum class EScannableType : uint8_t
{
	EScannableType__None           = 0,
	EScannableType__Probe          = 1,
	EScannableType__EScannableType_MAX = 2
};


// Enum Astro.EProximityLightState
enum class EProximityLightState : uint8_t
{
	EProximityLightState__Off      = 0,
	EProximityLightState__On       = 1,
	EProximityLightState__Blinking = 2,
	EProximityLightState__Pinging  = 3,
	EProximityLightState__EProximityLightState_MAX = 4
};


// Enum Astro.EScannerMode
enum class EScannerMode : uint8_t
{
	EScannerMode__Asleep           = 0,
	EScannerMode__Awake            = 1,
	EScannerMode__Scanning         = 2,
	EScannerMode__ScanCooldown     = 3,
	EScannerMode__EScannerMode_MAX = 4
};


// Enum Astro.EIndicatorTooltipType
enum class EIndicatorTooltipType : uint8_t
{
	EIndicatorTooltipType__ResourceRequest = 0,
	EIndicatorTooltipType__CraftingOutputPreview = 1,
	EIndicatorTooltipType__NoTooltip = 2,
	EIndicatorTooltipType__EIndicatorTooltipType_MAX = 3
};


// Enum Astro.EAuxSlotType
enum class EAuxSlotType : uint8_t
{
	EAuxSlotType__None             = 0,
	EAuxSlotType__Left             = 1,
	EAuxSlotType__Right            = 2,
	EAuxSlotType__LeftAndRight     = 3,
	EAuxSlotType__EAuxSlotType_MAX = 4
};


// Enum Astro.ESlotConnectorType
enum class ESlotConnectorType : uint8_t
{
	ESlotConnectorType__Plug       = 0,
	ESlotConnectorType__Socket     = 1,
	ESlotConnectorType__ESlotConnectorType_MAX = 2
};


// Enum Astro.ESlotType
enum class ESlotType : uint8_t
{
	ESlotType__Power               = 0,
	ESlotType__Resource            = 1,
	ESlotType__Control             = 2,
	ESlotType__Tether              = 3,
	ESlotType__Rail                = 4,
	ESlotType__Inert               = 5,
	ESlotType__PowerResource       = 6,
	ESlotType__ChassisBlock        = 7,
	ESlotType__IDCard              = 8,
	ESlotType__Schematic           = 9,
	ESlotType__ESlotType_MAX       = 10
};


// Enum Astro.ESlotConfiguration
enum class ESlotConfiguration : uint8_t
{
	ESlotConfiguration__Vertical   = 0,
	ESlotConfiguration__VerticalLeft = 1,
	ESlotConfiguration__Horizontal = 2,
	ESlotConfiguration__CameraFacingLeft = 3,
	ESlotConfiguration__CameraFacingRight = 4,
	ESlotConfiguration__HorizontalAux = 5,
	ESlotConfiguration__VerticalAux = 6,
	ESlotConfiguration__ESlotConfiguration_MAX = 7
};


// Enum Astro.ESlotPosition
enum class ESlotPosition : uint8_t
{
	ESlotPosition__RelativeTransform = 0,
	ESlotPosition__Socket          = 1,
	ESlotPosition__SceneComponent  = 2,
	ESlotPosition__ESlotPosition_MAX = 3
};


// Enum Astro.ESlottableItemsFiltrationListBehavior
enum class ESlottableItemsFiltrationListBehavior : uint8_t
{
	ESlottableItemsFiltrationListBehavior__Ignore = 0,
	ESlottableItemsFiltrationListBehavior__Whitelist = 1,
	ESlottableItemsFiltrationListBehavior__Blacklist = 2,
	ESlottableItemsFiltrationListBehavior__ESlottableItemsFiltrationListBehavior_MAX = 3
};


// Enum Astro.EItemRetrievalQuantityFilter
enum class EItemRetrievalQuantityFilter : uint8_t
{
	EItemRetrievalQuantityFilter__OnlyFullItem = 0,
	EItemRetrievalQuantityFilter__OnlyPartialItem = 1,
	EItemRetrievalQuantityFilter__FullOrPartialItem = 2,
	EItemRetrievalQuantityFilter__EItemRetrievalQuantityFilter_MAX = 3
};


// Enum Astro.EPartitionChannel
enum class EPartitionChannel : uint8_t
{
	EPartitionChannel__Decorator   = 0,
	EPartitionChannel__Landing     = 1,
	EPartitionChannel__Mineral     = 2,
	EPartitionChannel__Mountain    = 3,
	EPartitionChannel__Cave        = 4,
	EPartitionChannel__Cloud       = 5,
	EPartitionChannel__None        = 6,
	EPartitionChannel__EPartitionChannel_MAX = 7
};


// Enum Astro.ESpawnPointType
enum class ESpawnPointType : uint8_t
{
	ESpawnPointType__Safe          = 0,
	ESpawnPointType__PlanetPrimary = 1,
	ESpawnPointType__Temporary     = 2,
	ESpawnPointType__SpawnPointCategoryMax = 3,
	ESpawnPointType__ESpawnPointType_MAX = 4
};


// Enum Astro.ESunlightDetectorState
enum class ESunlightDetectorState : uint8_t
{
	ESunlightDetectorState__Unknown = 0,
	ESunlightDetectorState__AboveThreshold = 1,
	ESunlightDetectorState__BelowThreshold = 2,
	ESunlightDetectorState__ESunlightDetectorState_MAX = 3
};


// Enum Astro.ETeleportationBubbleState
enum class ETeleportationBubbleState : uint8_t
{
	ETeleportationBubbleState__Uninitialized = 0,
	ETeleportationBubbleState__CharacterEntering = 1,
	ETeleportationBubbleState__Expanding = 2,
	ETeleportationBubbleState__WaitingForTerrain = 3,
	ETeleportationBubbleState__ArrivalCollisionExpanding = 4,
	ETeleportationBubbleState__ReadyToTeleport = 5,
	ETeleportationBubbleState__ArrivedAtDestination = 6,
	ETeleportationBubbleState__CharacterExiting = 7,
	ETeleportationBubbleState__Aborting = 8,
	ETeleportationBubbleState__ETeleportationBubbleState_MAX = 9
};


// Enum Astro.ETeleportationDestinationType
enum class ETeleportationDestinationType : uint8_t
{
	ETeleportationDestinationType__ExactLocation = 0,
	ETeleportationDestinationType__GateObject = 1,
	ETeleportationDestinationType__ETeleportationDestinationType_MAX = 2
};


// Enum Astro.ETerrainColorPalette
enum class ETerrainColorPalette : uint8_t
{
	ETerrainColorPalette__Custom   = 0,
	ETerrainColorPalette__PrimaryDark = 1,
	ETerrainColorPalette__PrimaryMid = 2,
	ETerrainColorPalette__PrimaryLight = 3,
	ETerrainColorPalette__SecondaryDark = 4,
	ETerrainColorPalette__SecondaryMid = 5,
	ETerrainColorPalette__SecondaryLight = 6,
	ETerrainColorPalette__TertiaryDark = 7,
	ETerrainColorPalette__TertiaryMid = 8,
	ETerrainColorPalette__TertiaryLight = 9,
	ETerrainColorPalette__Count    = 10,
	ETerrainColorPalette__ETerrainColorPalette_MAX = 11
};


// Enum Astro.ETerrainPlacementMode
enum class ETerrainPlacementMode : uint8_t
{
	ETerrainPlacementMode__Stick   = 0,
	ETerrainPlacementMode__Bury    = 1,
	ETerrainPlacementMode__Free    = 2,
	ETerrainPlacementMode__None    = 3,
	ETerrainPlacementMode__ETerrainPlacementMode_MAX = 4
};


// Enum Astro.ESurfaceCriteriaNormalMode
enum class ESurfaceCriteriaNormalMode : uint8_t
{
	ESurfaceCriteriaNormalMode__Any = 0,
	ESurfaceCriteriaNormalMode__FlatterThan = 1,
	ESurfaceCriteriaNormalMode__SteeperThan = 2,
	ESurfaceCriteriaNormalMode__ESurfaceCriteriaNormalMode_MAX = 3
};


// Enum Astro.ESurfaceCriteriaSkyMode
enum class ESurfaceCriteriaSkyMode : uint8_t
{
	ESurfaceCriteriaSkyMode__Any   = 0,
	ESurfaceCriteriaSkyMode__SkyVisible = 1,
	ESurfaceCriteriaSkyMode__SkyNotVisible = 2,
	ESurfaceCriteriaSkyMode__ESurfaceCriteriaSkyMode_MAX = 3
};


// Enum Astro.EWorldOrientation
enum class EWorldOrientation : uint8_t
{
	EWorldOrientation__PlanetUp    = 0,
	EWorldOrientation__PlanetDown  = 1,
	EWorldOrientation__Random      = 2,
	EWorldOrientation__EWorldOrientation_MAX = 3
};


// Enum Astro.ERaycastDistributionShape
enum class ERaycastDistributionShape : uint8_t
{
	ERaycastDistributionShape__Cone = 0,
	ERaycastDistributionShape__Cylinder = 1,
	ERaycastDistributionShape__Disc = 2,
	ERaycastDistributionShape__ERaycastDistributionShape_MAX = 3
};


// Enum Astro.ESurfaceOrientation
enum class ESurfaceOrientation : uint8_t
{
	ESurfaceOrientation__TerrainNormal = 0,
	ESurfaceOrientation__TerrainNormalUphill = 1,
	ESurfaceOrientation__ComponentUp = 2,
	ESurfaceOrientation__PlanetUp  = 3,
	ESurfaceOrientation__PlanetDown = 4,
	ESurfaceOrientation__Random    = 5,
	ESurfaceOrientation__ESurfaceOrientation_MAX = 6
};


// Enum Astro.ETetherNetworkType
enum class ETetherNetworkType : uint8_t
{
	ETetherNetworkType__NullNetwork = 0,
	ETetherNetworkType__TetherPostNetwork = 1,
	ETetherNetworkType__TetherableOxygenProviderNetwork = 2,
	ETetherNetworkType__ETetherNetworkType_MAX = 3
};


// Enum Astro.ETooltipProximityState
enum class ETooltipProximityState : uint8_t
{
	ETooltipProximityState__WithinPrimaryProximity = 0,
	ETooltipProximityState__WithinSecondaryProximity = 1,
	ETooltipProximityState__WithinDetailsProximity = 2,
	ETooltipProximityState__OutOfRange = 3,
	ETooltipProximityState__ETooltipProximityState_MAX = 4
};


// Enum Astro.ETooltipVisibilityControl
enum class ETooltipVisibilityControl : uint8_t
{
	ETooltipVisibilityControl__ShowOnFocus = 0,
	ETooltipVisibilityControl__BadgeAlwaysDetailsOnFocus = 1,
	ETooltipVisibilityControl__BadgeAlwaysDetailsProximity = 2,
	ETooltipVisibilityControl__BadgeProximityDetailsOnFocus = 3,
	ETooltipVisibilityControl__BadgeAlwaysDetailsCustom = 4,
	ETooltipVisibilityControl__BadgeProximityDetailsCustom = 5,
	ETooltipVisibilityControl__BadgeProximityDetailsProximity = 6,
	ETooltipVisibilityControl__Custom = 7,
	ETooltipVisibilityControl__ETooltipVisibilityControl_MAX = 8
};


// Enum Astro.ETooltipArchetype
enum class ETooltipArchetype : uint8_t
{
	ETooltipArchetype__Custom      = 0,
	ETooltipArchetype__PhysicalItem = 1,
	ETooltipArchetype__ItemIndicator = 2,
	ETooltipArchetype__ClickableSlot = 3,
	ETooltipArchetype__Salvage     = 4,
	ETooltipArchetype__PlanetProxy = 5,
	ETooltipArchetype__CustomNonInputResponding = 6,
	ETooltipArchetype__ETooltipArchetype_MAX = 7
};


// Enum Astro.EVehicleDrillToolMode
enum class EVehicleDrillToolMode : uint8_t
{
	EVehicleDrillToolMode__Invalid = 0,
	EVehicleDrillToolMode__TunnelBoring = 1,
	EVehicleDrillToolMode__Excavation = 2,
	EVehicleDrillToolMode__DummyDrill = 3,
	EVehicleDrillToolMode__EVehicleDrillToolMode_MAX = 4
};


// Enum Astro.DistributionShape
enum class EDistributionShape : uint8_t
{
	DistributionShape__Sphere      = 0,
	DistributionShape__Cylinder    = 1,
	DistributionShape__DistributionShape_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Astro.SignalActivationBinding
// 0x0010
struct FSignalActivationBinding
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ActivatedOffset;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeactivatedOffset;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ViewTargetBlendParams
// 0x000C
struct FViewTargetBlendParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendExponent;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Astro.AttachmentDefinition
// 0x0030
struct FAttachmentDefinition
{
	struct FName                                       AttachmentLocationCompName;                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DetachmentLocationCompName;                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FViewTargetBlendParams                      ViewTargetBlendParamsOverride;                            // 0x0010(0x000C) (Edit, DisableEditOnInstance)
	bool                                               UseViewTargetBlendParamsOverride;                         // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class USceneComponent*                             AttachmentLocationComp;                                   // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DetachmentLocationComp;                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.AttachmentState
// 0x0028
struct FAttachmentState
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bExiting;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerIsViewTargetWhileAttached;                          // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	EEnterExitMovementMethod                           MovementMethod;                                           // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FViewTargetBlendParams                      ViewTargetBlendParams;                                    // 0x000C(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	struct FVector_NetQuantize10                       ExitRelativeOffset;                                       // 0x001C(0x000C)
};

// ScriptStruct Astro.NamedEntityComponentDefinition
// 0x0028
struct FNamedEntityComponentDefinition
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ComponentType;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LinkedActorComponentName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAstroEntityComponentSubobjectDefinition*> ComponentSubobjectDefinitions;                            // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroEntityDefinition
// 0x0030
struct FAstroEntityDefinition
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	unsigned char                                      bAllowViewRelevanceActorCreation : 1;                     // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UClass*>                              SystemsDeterminingStatelessness;                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNamedEntityComponentDefinition>     Components;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroDatumRef
// 0x0010
struct FAstroDatumRef
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.GateObjectReplicationData
// 0x0018
struct FGateObjectReplicationData
{
	bool                                               bHasBeenInitialized;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeActivated;                                          // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActivated;                                             // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasEncounteredPlayer;                                    // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class AAstroCharacter*>                     PlayerCharactersInProximity;                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ItemProbabilityPair
// 0x0010
struct FItemProbabilityPair
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.ItemProbabilityPairList
// 0x0010
struct FItemProbabilityPairList
{
	TArray<struct FItemProbabilityPair>                ItemProbabilityPairs;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Astro.HarvestableItemSpawnerDefinition
// 0x0020
struct FHarvestableItemSpawnerDefinition
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemProbabilityPairList                    SpawnedItemTypes;                                         // 0x0008(0x0010) (Edit)
	unsigned char                                      bItemCanBeUsedBeforeHarvest : 1;                          // 0x0018(0x0001) (Edit)
	unsigned char                                      bItemRespawns : 1;                                        // 0x0018(0x0001) (Edit)
	unsigned char                                      bSlotRemainsUsableAfterItemHarvested : 1;                 // 0x0018(0x0001) (Edit)
	unsigned char                                      bItemRespawnsAtEndOfDelay : 1;                            // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RespawnDelay;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ActiveItemConversionProgress
// 0x0020
struct FActiveItemConversionProgress
{
	TArray<class APhysicalItem*>                       InputItems;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                FinalOutputAmount;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProgressRatio;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.SlotReference
// 0x0010
struct FSlotReference
{
	class USlotsComponent*                             Component;                                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.ItemConverterReplicationData
// 0x0030
struct FItemConverterReplicationData
{
	unsigned char                                      bWantsToBeActive : 1;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	EItemConverterState                                ItemConverterState;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              PowerRatio;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveItemConversionProgress>       ActiveConversionProgressData;                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SelectedOutputItemTypeIndex;                              // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FSlotReference>                      ExternalResourceSlotRefs;                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ActiveItemConversionItemInput
// 0x0020
struct FActiveItemConversionItemInput
{
	class UClass*                                      InputItemType;                                            // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FAstroDatumRef                              InputItemEntityRef;                                       // 0x0008(0x0010) (SaveGame)
	int                                                StartingInputItemAmount;                                  // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TargetInputItemAmount;                                    // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.ActiveItemConversionItemOutput
// 0x0020
struct FActiveItemConversionItemOutput
{
	class UClass*                                      OutputItemType;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TargetOutputItemAmount;                                   // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                OutputItemAmountProduced;                                 // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FAstroDatumRef                              CurrentOutputItemEntityRef;                               // 0x0010(0x0010) (SaveGame)
};

// ScriptStruct Astro.ActiveItemConversion
// 0x0038
struct FActiveItemConversion
{
	TArray<struct FAstroDatumRef>                      InputItemEntityRefs;                                      // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FActiveItemConversionItemInput>      ItemInputs;                                               // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FActiveItemConversionItemOutput>     ItemOutputs;                                              // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	float                                              ProgressRatio;                                            // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ID;                                                       // 0x0034(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.ItemConversionInputItemStatus
// 0x0010
struct FItemConversionInputItemStatus
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsSatisfied;                                              // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ItemConversionRecipeInputStatus
// 0x0018
struct FItemConversionRecipeInputStatus
{
	TArray<struct FItemConversionInputItemStatus>      InputItemStatuses;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsSatisfied;                                              // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ItemRecipeIngredient
// 0x0010
struct FItemRecipeIngredient
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Count;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.Recipe
// 0x0010
struct FRecipe
{
	TArray<struct FItemRecipeIngredient>               Ingredients;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.LockChangedEventMetadata
// 0x0008
struct FLockChangedEventMetadata
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.ResearchSubjectReplicationData
// 0x0018
struct FResearchSubjectReplicationData
{
	TWeakObjectPtr<class UResearchSubjectDefinition>   Definition;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UItemType>                    ItemType;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeProgressRatio;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PointsProgressRatio;                                      // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ResearchReplicationData
// 0x0020
struct FResearchReplicationData
{
	EResearchState                                     ResearchState;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CurrentPowerLevelRatio;                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentResearchRateMultiplier;                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentResearchPointsPerMinute;                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FResearchSubjectReplicationData>     ResearchSubjects;                                         // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.AttachedResearchSubject
// 0x0020
struct FAttachedResearchSubject
{
	struct FAstroDatumRef                              ResearchSubjectComponentRef;                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	struct FSlotReference                              ResearchSlotRef;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, SaveGame)
};

// ScriptStruct Astro.StreamingPowerCableVisualizationData
// 0x0010
struct FStreamingPowerCableVisualizationData
{
	float                                              FlowSpeed;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConsumptionRatio;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenerationRatio;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECableConnectionState                              CableConnectionState;                                     // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerNodeVisualizationData
// 0x001C
struct FStreamingPowerNodeVisualizationData
{
	float                                              ConsumerDemandFulfilmentRatio;                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenerationRatio;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SurplusRatio;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.WindPowerGeneratorReplicationData
// 0x0010
struct FWindPowerGeneratorReplicationData
{
	struct FVector_NetQuantizeNormal                   WindNormal;                                               // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      WindSpeed;                                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.ActuationRequest
// 0x0014
struct FActuationRequest
{
	float                                              Delay;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TWeakObjectPtr<class UActuatorComponent>           Actuator;                                                 // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.TickingObject
// 0x0018
struct FTickingObject
{
	class AActor*                                      m_actor;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             m_component;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.ProgressionAchievementDefinition
// 0x0002
struct FProgressionAchievementDefinition
{
	EAstroAchievementKeys                              AchievementKey;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAchievementSaveDataType                           SaveDataType;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.CountAchievement
// 0x0006 (0x0008 - 0x0002)
struct FCountAchievement : public FProgressionAchievementDefinition
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                NeededCount;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.FloatCountAchievement
// 0x0006 (0x0008 - 0x0002)
struct FFloatCountAchievement : public FProgressionAchievementDefinition
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              NeededCount;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.ItemCollectionAchievement
// 0x000E (0x0010 - 0x0002)
struct FItemCollectionAchievement : public FProgressionAchievementDefinition
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UClass*                                      CollectionItems;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.ThresholdAchievementDefinition
// 0x0058
struct FThresholdAchievementDefinition
{
	EAstroAchievementKeys                              AchievementKey;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseNamedThresholds;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, float>                          NamedThresholds;                                          // 0x0008(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroActionIdentifier
// 0x0004
struct FAstroActionIdentifier
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.AstroActionContext
// 0x0018
struct FAstroActionContext
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Avatar;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAstroActionComponent*                       ActionComponent;                                          // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.AstroActionRequestPayload
// 0x0020
struct FAstroActionRequestPayload
{
	class UClass*                                      ActionType;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAstroActionIdentifier                      ActionIdentifier;                                         // 0x0008(0x0004) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              PayloadData;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.AstroCharacterCustomization
// 0x0038
struct FAstroCharacterCustomization
{
	unsigned char                                      bIsObfuscated : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAstroCharacterSuit*                         Suit;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroVisorMaterial*                         VisorMaterial;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterPalette*                      CharacterPalette;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterOverlayPattern*               OverlayPattern;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterHat*                          Hat;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroCharacterHat*                          Mask;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.TerrainMaterial
// 0x0058
struct FTerrainMaterial
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	ETerrainColorPalette                               Palette;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Density;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.AstroCharacterEncumbrance
// 0x000C
struct FAstroCharacterEncumbrance
{
	float                                              MaxSpeedMultiplier;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControlMultiplier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSprintingSuppressed : 1;                                 // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bJumpingSuppressed : 1;                                   // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.MovementOverrideNetData
// 0x0018
struct FMovementOverrideNetData
{
	class AActor*                                      OverrideOwner;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.AstroCharacterActiveOverrides
// 0x0040
struct FAstroCharacterActiveOverrides
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	TArray<struct FMovementOverrideNetData>            NetData;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.MovementOverrideCorrection
// 0x0020
struct FMovementOverrideCorrection
{
	struct FMovementOverrideNetData                    NetData;                                                  // 0x0000(0x0018)
	unsigned char                                      ErrorCode;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.AstroAchievementProgressReport
// 0x000C
struct FAstroAchievementProgressReport
{
	EAstroAchievementKeys                              Key;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Progress;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeededCount;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AstroCountAchievementProgress
// 0x0008
struct FAstroCountAchievementProgress
{
	EAstroAchievementKeys                              Key;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Progress;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AstroFloatAchievementProgress
// 0x0008
struct FAstroFloatAchievementProgress
{
	EAstroAchievementKeys                              Key;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Progress;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AstroCollectionAchievementProgress
// 0x0018
struct FAstroCollectionAchievementProgress
{
	EAstroAchievementKeys                              Key;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               CollectedItems;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.AstroPlayerAchievementProgress
// 0x0030
struct FAstroPlayerAchievementProgress
{
	TArray<struct FAstroCountAchievementProgress>      CountProgress;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAstroFloatAchievementProgress>      FloatProgress;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAstroCollectionAchievementProgress> CollectionProgress;                                       // 0x0020(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.AchievementProgressReplicationData
// 0x0040
struct FAchievementProgressReplicationData
{
	TArray<struct FAstroAchievementProgressReport>     AchievementProgressReportOnly;                            // 0x0000(0x0010) (ZeroConstructor)
	struct FAstroPlayerAchievementProgress             AchievementProgress;                                      // 0x0010(0x0030)
};

// ScriptStruct Astro.DeformationParams
// 0x0058
struct FDeformationParams
{
	class AActor*                                      Deformer;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0008(0x000C) (BlueprintVisible)
	struct FVector_NetQuantize100                      FixedReferenceLocation;                                   // 0x0014(0x000C) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   Up;                                                       // 0x0020(0x000C) (BlueprintVisible)
	float                                              DeltaTime;                                                // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tier;                                                     // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDeformType                                        Operation;                                                // 0x003C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDeformShape                                       Shape;                                                    // 0x003D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint16_t                                           AddType;                                                  // 0x003E(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SequenceNumber;                                           // 0x0040(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               ForceRemoveDecorators;                                    // 0x0042(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CreativeModeNoResourceCollection;                         // 0x0043(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CreativeModeAlternatePolygonization;                      // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEasyUnbury;                                              // 0x0045(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              AutoCreateResourceEfficiency;                             // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x004C(0x000C) MISSED OFFSET
};

// ScriptStruct Astro.AstroClientProperties
// 0x0018
struct FAstroClientProperties
{
	EPlayerCategory                                    PlayerCategory;                                           // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Astro.TerrainNodeNetChecksum
// 0x000C
struct FTerrainNodeNetChecksum
{
	uint64_t                                           NodeID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Checksum;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ServerStatistics
// 0x0070
struct FServerStatistics
{
	struct FString                                     Build;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OwnerName;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxInGamePlayers;                                         // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayersInGame;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayersKnownToGame;                                       // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     SaveGameName;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PlayerActivityTimeout;                                    // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SecondsInGame;                                            // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerName;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ServerURL;                                                // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              AverageFPS;                                               // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasServerPassword : 1;                                    // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsEnforcingWhitelist : 1;                                 // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      CreativeMode : 1;                                         // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsAchievementProgressionDisabled : 1;                     // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.InitialClientStateParams
// 0x0028
struct FInitialClientStateParams
{
	bool                                               IsReturningPlayer;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               GameUsesTitleMenu;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               GameUsesIntroCinematic;                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHostDedicatedServer;                                    // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsJoiningCreativeModeGame;                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     BackendNetID;                                             // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ActiveSaveName;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.PlayerInfo
// 0x0030
struct FPlayerInfo
{
	struct FString                                     PlayerGuid;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPlayerCategory                                    PlayerCategory;                                           // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InGame;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PlayerList
// 0x0010
struct FPlayerList
{
	TArray<struct FPlayerInfo>                         PlayerInfo;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.GameEntry
// 0x0020
struct FGameEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Date;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.GameList
// 0x0020
struct FGameList
{
	struct FString                                     ActiveSaveName;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameEntry>                          GameList;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.AstroNotificationTagAuthoringData
// 0x0050
struct FAstroNotificationTagAuthoringData
{
	bool                                               UseCustomBadgeColor;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                CustomBadgeColor;                                         // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ResourceObjectBadge;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SoundEvent;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       TagText;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	ENotificationTagPresentationDirection              PresentationDirection;                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.SlotClickResult
// 0x0018
struct FSlotClickResult
{
	struct FSlotReference                              SlotRef;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	EClickSlotBehavior                                 Behavior;                                                 // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SubslotIndex;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ClickResult
// 0x0080
struct FClickResult
{
	struct FSlotClickResult                            SlotResultPrimary;                                        // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FSlotClickResult                            SlotResultSecondary;                                      // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UPrimitiveComponent*                         PrimaryComponent;                                         // 0x0030(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PrimaryHoverComponent;                                    // 0x0038(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TracedActor;                                              // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PrimaryActor;                                             // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SecondaryActor;                                           // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TertiaryActor;                                            // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PrimaryViewActor;                                         // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SecondaryViewActor;                                       // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TertiaryViewActor;                                        // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     PrimaryBehavior;                                          // 0x0078(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     SecondaryBehavior;                                        // 0x0079(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClickBehavior                                     TertiaryBehavior;                                         // 0x007A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClickCaptured : 1;                                       // 0x007B(0x0001) (BlueprintVisible)
	unsigned char                                      bSuppressQuickSelect : 1;                                 // 0x007B(0x0001) (BlueprintVisible)
	unsigned char                                      bSlowVirtualCursorOnHover : 1;                            // 0x007B(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.PendingInGameItemRewards
// 0x0020
struct FPendingInGameItemRewards
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UClass*>                              PendingItemRewards;                                       // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.AstroNotificationUnlockAuthoringData
// 0x0048
struct FAstroNotificationUnlockAuthoringData
{
	bool                                               UseCustomBadgeColor;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                CustomBadgeColor;                                         // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ResourceObjectBadge;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       UnlockText;                                               // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FString                                     SoundEvent;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Astro.AstroEncryptionOptions
// 0x0028
struct FAstroEncryptionOptions
{
	bool                                               bLimitedTime;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDateTime                                   UnlockTime;                                               // 0x0008(0x0008) (Edit, DisableEditOnInstance)
	struct FDateTime                                   EndTime;                                                  // 0x0010(0x0008) (Edit, DisableEditOnInstance)
	struct FString                                     AESEncryptionKey;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroDatum
// 0x0018
struct FAstroDatum
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Astro.AstroEngineCommon
// 0x0040
struct FAstroEngineCommon
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UAstroErrorWidget*                           ErrorWidget;                                              // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroErrorWidget*                           SessionOperationInProgressWidget;                         // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.AstroEntityComponent
// 0x0048 (0x0060 - 0x0018)
struct FAstroEntityComponent : public FAstroDatum
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ViewActorComponentName;                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UActorComponent>              ViewActorComponent;                                       // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	TWeakObjectPtr<class UActorComponent>              ViewActorTemplateComponent;                               // 0x0048(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAstroEntityComponentSubobject*>      OwnedSubobjects;                                          // 0x0050(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.AstroEntitySceneComponent
// 0x0020 (0x0080 - 0x0060)
struct FAstroEntitySceneComponent : public FAstroEntityComponent
{
	struct FTransform2                                 WorldTransform;                                           // 0x0060(0x0020) (BlueprintVisible, BlueprintReadOnly, SaveGame)
};

// ScriptStruct Astro.AstroFoliageDestructionRequest
// 0x0020
struct FAstroFoliageDestructionRequest
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Astro.WorldSingletons
// 0x0068
struct FWorldSingletons
{
	class UAstroEntityWorld*                           EntityWorld;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATetherManager*                              TetherManager;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class USolarSystem*                                SolarSystem;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCollectibleHandler*                         CollectibleHandler;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAstroServerCommWorldDataMap*                ServerComm;                                               // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBeaconManager*                              BeaconManager;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAutoCraneManager*                           AutoCraneManager;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UResourceExtractorManager*                   ResourceExtractorManager;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCameraFacingManager*                        CameraFacingManager;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCreativeModeData*                           CreativeModeData;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     PictureRenderTargetLockedObject;                          // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAstroFoliageDestructionManager*             FoliageDestructionManager;                                // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USlotOrganizationRuleBroker*                 SlotOrganizationRuleBroker;                               // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.ActorTemplateCache
// 0x00A8
struct FActorTemplateCache
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UClass*, class AActor*>                 ActorTemplateCache;                                       // 0x0008(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET
};

// ScriptStruct Astro.MaterialInstanceCache
// 0x0050
struct FMaterialInstanceCache
{
	TMap<uint64_t, class UMaterialInstanceDynamic*>    CachedInstances;                                          // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Astro.InteractionPromptEntryData
// 0x0038
struct FInteractionPromptEntryData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAxisInput;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible)
	EInputKeyInteractionType                           InteractionType;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              HoldAnimationProgress;                                    // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.TooltipWidgetDisplayData
// 0x0088
struct FTooltipWidgetDisplayData
{
	TArray<struct FInteractionPromptEntryData>         InteractionPrompts;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                BadgeColor;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UObject*                                     ResourceObjectBadge;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObjectBadgeBackground;                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Title;                                                    // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SubTitle;                                                 // 0x0060(0x0018) (Edit, BlueprintVisible)
	ETooltipPresentationStyleTypes                     PresentationStyle;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETooltipAnimationDirection                         AnimationDirection;                                       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FVector2D                                   CustomBadgeSize;                                          // 0x007C(0x0008) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.AstroGameMenuEntryWidgetDisplayData
// 0x0038
struct FAstroGameMenuEntryWidgetDisplayData
{
	struct FText                                       LeftText;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RightText;                                                // 0x0018(0x0018) (Edit, BlueprintVisible)
	bool                                               IsRightTextBold;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.AstroGameMenuTabBarAuthoringData
// 0x0020
struct FAstroGameMenuTabBarAuthoringData
{
	TArray<class UClass*>                              LeftTabBarGroupButtons;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              RightTabBarGroupButtons;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Astro.AstroGameMenuNavigationCoordinates
// 0x0038
struct FAstroGameMenuNavigationCoordinates
{
	struct FAstroGameMenuTabBarAuthoringData           TabBarAuthoringData;                                      // 0x0000(0x0020) (Edit, BlueprintVisible)
	int                                                TabBarSelectionIndex;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      SubPane;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubPaneItemSelectionIndex;                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.AstroGameMenuTutorialSlideDeck
// 0x0028
struct FAstroGameMenuTutorialSlideDeck
{
	TArray<EAstroGameMenuTutoriaSlideCardKey>          SlidesInDeck;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DeckDescriptiveName;                                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroGameMenuTutorialSlide
// 0x0028
struct FAstroGameMenuTutorialSlide
{
	class UClass*                                      TutorialSlideWidget;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GamepadOverrideTutorialSlideWidget;                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       SlideDescriptiveName;                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Astro.AstroDiscreteInputDefinition
// 0x0020
struct FAstroDiscreteInputDefinition
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EAstroInputBindingNameMappings                     InputNameMapping;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              AxisScale;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.SpawnPointList
// 0x0010
struct FSpawnPointList
{
	TArray<class UStorageChassisComponent*>            SpawnPoints;                                              // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Astro.PlatformSpecificEmoteOverrides
// 0x0058
struct FPlatformSpecificEmoteOverrides
{
	class UAstroEmoteDefinition*                       Emote;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: MapProperty Astro.PlatformSpecificEmoteOverrides.SuitSpecificMontages
};

// ScriptStruct Astro.CombinedRuntimeCustomizationContent
// 0x0080
struct FCombinedRuntimeCustomizationContent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.Suits
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.VisorMaterials
	unsigned char                                      UnknownData02[0x10];                                      // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.CharacterPalettes
	unsigned char                                      UnknownData03[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.CharacterOverlayPatterns
	unsigned char                                      UnknownData04[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.Hats
	unsigned char                                      UnknownData05[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.Masks
	unsigned char                                      UnknownData06[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty Astro.CombinedRuntimeCustomizationContent.PhotoFilters
	TArray<struct FPlatformSpecificEmoteOverrides>     PlatformSuitEmoteOverrides;                               // 0x0070(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Astro.SimpleFocusTooltipWidgetAuthoringData
// 0x0068
struct FSimpleFocusTooltipWidgetAuthoringData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       SubTitle;                                                 // 0x0018(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	struct FLinearColor                                BadgeColor;                                               // 0x0048(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     ResourceObjectBadge;                                      // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSquareBadgeBackground;                                 // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ItemCollectionAchievementProgress
// 0x0010
struct FItemCollectionAchievementProgress
{
	TArray<struct FName>                               CollectedItems;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.ScannableStatus
// 0x0020
struct FScannableStatus
{
	struct FName                                       ScannableName;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TWeakObjectPtr<class ASolarBody>                   LocalSolarBody;                                           // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EScannableType                                     ScannableType;                                            // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.ProbeUnlockState
// 0x0018
struct FProbeUnlockState
{
	uint64_t                                           CharacterId;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               UnlockedProbes;                                           // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.ObjectSaveRecord
// 0x0048
struct FObjectSaveRecord
{
	class UObject*                                     RuntimeObject;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      Class;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           NameIndex;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Flags;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	uint32_t                                           OuterObjectIndex;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	uint32_t                                           CustomDataOffset;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Data;                                                     // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.ChildActorRecord
// 0x0008
struct FChildActorRecord
{
	uint32_t                                           NameIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ActorIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ComponentRecord
// 0x0008
struct FComponentRecord
{
	uint32_t                                           NameIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ObjectIndex;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ActorRecord
// 0x0060
struct FActorRecord
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FChildActorRecord>                   ChildActorRecords;                                        // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FComponentRecord>                    OwnedComponentRecords;                                    // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           ObjectIndex;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  RootTransform;                                            // 0x0030(0x0030) (IsPlainOldData)
};

// ScriptStruct Astro.AstroSaveChunk
// 0x0118
struct FAstroSaveChunk
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
	TArray<struct FObjectSaveRecord>                   ObjectRecords;                                            // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<struct FActorRecord>                        ActorRecords;                                             // 0x0080(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0090(0x0068) MISSED OFFSET
	class ULevel*                                      CurrentLevel;                                             // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	class UAstroSaveCustomArchiveProxy*                CustomSaveArchiveProxy;                                   // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.AstroRemotePlayerChunk
// 0x0010 (0x0128 - 0x0118)
struct FAstroRemotePlayerChunk : public FAstroSaveChunk
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class APlayerController*                           Controller;                                               // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.InputReference
// 0x0010
struct FInputReference
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAxis;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PackedParameterValue
// 0x0008
struct FPackedParameterValue
{
	int                                                PackedSlotIndex;                                          // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PackedValue;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.BitfieldBitValue
// 0x0008
struct FBitfieldBitValue
{
	int                                                BitIndex;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BitValue;                                                 // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.AstroMicroTxnStoreCategory
// 0x0028
struct FAstroMicroTxnStoreCategory
{
	struct FText                                       DisplayText;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  TileDefaultBackgroundIcon;                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMicroTxnStoreTileTypes                            TileTypeDefault;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMicroTxnStoreTileTypes                            TileTypeOverride;                                         // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                MinimumTileCount;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.NotificationToSpawnPayload
// 0x0058
struct FNotificationToSpawnPayload
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Astro.NotificationSpawner
// 0x0060
struct FNotificationSpawner
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	TArray<struct FNotificationToSpawnPayload>         NotificationsToSpawn;                                     // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.LivingAstroNotification
// 0x0060
struct FLivingAstroNotification
{
	class USceneComponent*                             OriginAnchor;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAstroNotificationTagWidget*                 NotificationWidget;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAstroNotificationTagAuthoringData          AuthoringData;                                            // 0x0010(0x0050)
};

// ScriptStruct Astro.AstroNotificationTagWidgetDisplayData
// 0x0038
struct FAstroNotificationTagWidgetDisplayData
{
	struct FLinearColor                                BadgeColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UObject*                                     ResourceObjectBadge;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TagText;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible)
	ENotificationTagPresentationDirection              PresentationDirection;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.AstroNotificationUnlockDisplayData
// 0x0030
struct FAstroNotificationUnlockDisplayData
{
	struct FLinearColor                                BadgeColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UObject*                                     ResourceObjectBadge;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       UnlockText;                                               // 0x0018(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Astro.AtmosphericResource
// 0x0010
struct FAtmosphericResource
{
	class UClass*                                      ResourceItemType;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.GatewayObjectPlacementProperties
// 0x0058
struct FGatewayObjectPlacementProperties
{
	class UClass*                                      ChamberType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChamberOctreeResOffset;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChamberExclusionRadius;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ChamberPlacementCoordinates;                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bApplyRandomRotationToChamberPlacement : 1;               // 0x0020(0x0001) (Edit)
	unsigned char                                      bShouldHollowOutCoreAroundEngine : 1;                     // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FRotator                                    ChamberPlacementRotation;                                 // 0x0024(0x000C) (Edit, IsPlainOldData)
	class UClass*                                      EngineType;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EngineOctreeResOffset;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HollowCoreRadius;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HollowCoreSmoothingZoneSize;                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SamePlanetChambersRequiredForEngineActivation;            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SolarSystemChambersRequiredForEngineActivation;           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UPlanetGateObjectIndicatorDefinitions*       GateObjectIndicators;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PostPlaceDecorator
// 0x00B0
struct FPostPlaceDecorator
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0008(0x00A8) MISSED OFFSET
};

// ScriptStruct Astro.CreatedOctreeNode
// 0x0018
struct FCreatedOctreeNode
{
	class UPrimitiveComponent*                         BlockComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FPostPlaceDecorator>                 PostPlacementDecorators;                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.PersistedCameraState
// 0x0060
struct FPersistedCameraState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (SaveGame, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FTransform                                  CameraFrameToWorld;                                       // 0x0020(0x0030) (SaveGame, IsPlainOldData)
	class AActor*                                      LastNearestSolarBody;                                     // 0x0050(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0058(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.AstroPopupBadgeAuthoringData
// 0x0050
struct FAstroPopupBadgeAuthoringData
{
	bool                                               UseCustomBadgeStrokeColor;                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                CustomBadgeStrokeColor;                                   // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ResourceObjectBadgeStroke;                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCustomBadgeColor;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FLinearColor                                CustomBadgeColor;                                         // 0x0024(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UObject*                                     ResourceObjectBadge;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SoundEvent;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Astro.AstroPopupBadgeWidgetDisplayData
// 0x0030
struct FAstroPopupBadgeWidgetDisplayData
{
	struct FLinearColor                                BadgeColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BadgeColorStroke;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UObject*                                     ResourceObjectBadge;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObjectBadgeStroke;                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PlayerControllerRecord
// 0x0010
struct FPlayerControllerRecord
{
	uint32_t                                           ActorIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastControlledPawn;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           NetworkUuid;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AstroLevelSaveChunk
// 0x0020 (0x0138 - 0x0118)
struct FAstroLevelSaveChunk : public FAstroSaveChunk
{
	struct FString                                     Level;                                                    // 0x0118(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPlayerControllerRecord>             PlayerControllerRecords;                                  // 0x0128(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Astro.Callback_DEPRECATED
// 0x0018
struct FCallback_DEPRECATED
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFunction*                                   Function;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           ObjectIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.CustomSerializeCallback_DEPRECATED
// 0x0020
struct FCustomSerializeCallback_DEPRECATED
{
	struct FCallback_DEPRECATED                        Callback;                                                 // 0x0000(0x0018)
	uint32_t                                           ArchivePosition;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ArchiveVersion;                                           // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Astro.AstroServerCommWorldData
// 0x0020
struct FAstroServerCommWorldData
{
	struct FPlayerList                                 PlayerListCache;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.PlayerProperties
// 0x0038
struct FPlayerProperties
{
	struct FString                                     PlayerFirstJoinName;                                      // 0x0000(0x0010) (ZeroConstructor)
	EPlayerCategory                                    PlayerCategory;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     PlayerGuid;                                               // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     PlayerRecentJoinName;                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.AstroSaveFileInformation
// 0x0040
struct FAstroSaveFileInformation
{
	struct FString                                     SaveFileName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FString                                     SaveFileDescriptiveName;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FDateTime                                   SaveFileDate;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, EditConst)
	struct FString                                     SaveFileDateString;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	int                                                SaveFileSize;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bHasBeenFlaggedAsCreativeModeSave : 1;                    // 0x003C(0x0001) (Edit, BlueprintVisible, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.ColorPaletteGameMenuTabBarButton
// 0x0006
struct FColorPaletteGameMenuTabBarButton
{
	EAstroColor                                        IconColorLastItemUsedState;                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAstroColor                                        BGColorLastItemUsedState;                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAstroColor                                        IconColorUnfocusedState;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAstroColor                                        BGColorUnfocusedState;                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAstroColor                                        IconColorFocusState;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAstroColor                                        BGColorFocusState;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.AstroGameMenuAuthoringDefinition
// 0x0020
struct FAstroGameMenuAuthoringDefinition
{
	struct FAstroGameMenuTabBarAuthoringData           TabBarAuthoringData;                                      // 0x0000(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Astro.EmplacementData
// 0x0018
struct FEmplacementData
{
	struct FSlotReference                              Slot;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	int                                                SubslotIndex;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.PhysicalItemReplicatedState
// 0x0030
struct FPhysicalItemReplicatedState
{
	EPhysicalItemMotionState                           MotionState;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlotReference                              ItemSlot;                                                 // 0x0008(0x0010)
	struct FSlotReference                              PreviousItemSlot;                                         // 0x0018(0x0010)
	int                                                SubslotIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SlotFacingCardinalDirection;                              // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastSlotFromTool : 1;                                     // 0x002D(0x0001)
	unsigned char                                      LastSlotOnInitialization : 1;                             // 0x002D(0x0001)
	unsigned char                                      PartOfSwap : 1;                                           // 0x002D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Astro.AtmosphericCondenserReplicationData
// 0x0038
struct FAtmosphericCondenserReplicationData
{
	EAtmosphericCondenserState                         CondenserState;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SelectedOuputResourceIndex;                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumPossibleProductionOutputs;                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProductionEfficiency;                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProductionPowerRatio;                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FAtmosphericResource                        CurrentAtmosphericResource;                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentHarvestedAtmosphereAmount;                         // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class AAstroPlanet*                                CurrentPlanet;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AutoCraneState
// 0x0018
struct FAutoCraneState
{
	class AAutoCrane*                                  AutoCrane;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.AutoCraneOverlapTestRequest
// 0x0010
struct FAutoCraneOverlapTestRequest
{
	class AAutoCrane*                                  AutoCrane;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.BackpackOxygenTankProperties
// 0x0010
struct FBackpackOxygenTankProperties
{
	class UClass*                                      OxygenTankChildActorClass;                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OxygenTankCapacity;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.BackpackOxygenTankOverride
// 0x0018
struct FBackpackOxygenTankOverride
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBackpackOxygenTankProperties               OverrideProperties;                                       // 0x0008(0x0010)
};

// ScriptStruct Astro.HazardInfo
// 0x0010
struct FHazardInfo
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpawnFreqMean;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.BreadboardPrinterAnimationReplicationData
// 0x0010
struct FBreadboardPrinterAnimationReplicationData
{
	bool                                               bPrinterIsAvailable;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPreviewIsEnabled;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintingIsProgressing;                                   // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              PrintSpeed;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PrintheadHeight;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PrintheadExtension;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.IndicatorCollection
// 0x0010
struct FIndicatorCollection
{
	TArray<class AResourceInfo*>                       Indicators;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.TooltipProximityBadgeVisibilityData
// 0x0030
struct FTooltipProximityBadgeVisibilityData
{
	float                                              BadgeProximityRadius;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetailsProximityRadius;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasSecondaryLongDistanceBadge : 1;                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSecondaryLongDistanceBadgeAlwaysVisible : 1;             // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SecondaryLongDistanceBadgeProximityRadius;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLongDistanceBadgeColor;                          // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UObject*                                     ResourceObjectSecondaryLongDistanceBadge;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObjectSecondaryLongDistanceBadgeBackground;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.CharacterHatPerSuitModifiers
// 0x0060
struct FCharacterHatPerSuitModifiers
{
	struct FTransform                                  Offset;                                                   // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Astro.CharacterHatPerSuitModifiers.StaticMesh
	class UMaterialInstanceConstant*                   MaterialOverride;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.UseSuppressionState
// 0x0018
struct FUseSuppressionState
{
	EUseType                                           SuppressedUseTypeFlags;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	EFPerPlayerUseSuppressionMode                      PerPlayerMode;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<uint64_t>                                   PlayerGuidWhitelist;                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.InteractionRedirect
// 0x0010
struct FInteractionRedirect
{
	class AActor*                                      NewActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PivotComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.ClickParams
// 0x00A8
struct FClickParams
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Astro.CollectibleSimItem
// 0x0040
struct FCollectibleSimItem
{
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Astro.ActorSpecifier
// 0x0010
struct FActorSpecifier
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.CaveActorSpecifier
// 0x0028
struct FCaveActorSpecifier
{
	class UClass*                                      ActorsList;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActorSpecifier>                     Actors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              MeanSeparation;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECavePositionSpecifier                             Position;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Spread;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireUnderground;                                       // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESurfaceOrientation                                Orientation;                                              // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

// ScriptStruct Astro.CrackedReplicationData
// 0x0001
struct FCrackedReplicationData
{
	unsigned char                                      bCracked : 1;                                             // 0x0000(0x0001)
};

// ScriptStruct Astro.CraftingSourceCraftableList
// 0x0010
struct FCraftingSourceCraftableList
{
	class UClass*                                      CraftingSourceItem;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Craftables;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.CraftingOriginDependencyMap
// 0x0040
struct FCraftingOriginDependencyMap
{
	ECraftingOrgin                                     CraftingDependency;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TooltipDescriptionTemplate;                               // 0x0008(0x0018) (Edit)
	bool                                               bHasCraftingSources;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FCraftingSourceCraftableList>        CraftingSources;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      UnsourcedCraftables;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PaintIndex
// 0x0004
struct FPaintIndex
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.CreativeModeTerrainData
// 0x00A0
struct FCreativeModeTerrainData
{
	struct FPaintIndex                                 PaintIndex;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly)
	float                                              TerrainHardnessOverride;                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomMaterialOverride;                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      TerrainSurfaceTypeOverride;                               // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorOverride;                                            // 0x0014(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UVoxelVolumePaintModePalette*                PaintPalette;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpecialPaletteIndex;                                      // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerRefPos;                                             // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	TMap<uint32_t, class UMaterialInstanceDynamic*>    PlanetButtonInstances;                                    // 0x0050(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Astro.CameraMode
// 0x0018
struct FCameraMode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraRigClass;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ACameraRigActor*                             CameraRig;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.SolarBodyRelativeTransforms
// 0x0050
struct FSolarBodyRelativeTransforms
{
	TMap<class ASolarBody*, struct FTransform>         Transforms;                                               // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Astro.ReplicatedBrushState
// 0x0034
struct FReplicatedBrushState
{
	bool                                               TerrainBrushActive;                                       // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bTerrainBrushCanUse : 1;                                  // 0x0001(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CurrentBrushIndicatorUsing;                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentBrushIndicatorIntensity;                           // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentBrushIndicatorScale;                               // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CurrentDeformNormal;                                      // 0x0010(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     CurrentDeformLocation;                                    // 0x001C(0x000C) (Transient, IsPlainOldData)
	EDeformType                                        CurrentOperation;                                         // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              SedimentGaugePercent;                                     // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalSedimentCapacity;                                    // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.ReplicatedAugmentState
// 0x0028
struct FReplicatedAugmentState
{
	float                                              AugmentedIntensity;                                       // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AugmentedBrushSize;                                       // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AugmentedPowerLevel;                                      // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AugmentedTerrainAnalyzed;                                 // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AugmentedFixedAlignment;                                  // 0x000A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              AugmentedHardnessTier;                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                AugmentedTerrainColor;                                    // 0x0010(0x0010) (Transient, IsPlainOldData)
	float                                              AugmentedTerrainHardness;                                 // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      AugmentedTerrainSurfaceType;                              // 0x0024(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.TerrainProperties
// 0x0018
struct FTerrainProperties
{
	struct FLinearColor                                TerrainColor;                                             // 0x0000(0x0010) (Transient, SaveGame, IsPlainOldData)
	float                                              TerrainHardness;                                          // 0x0010(0x0004) (ZeroConstructor, Transient, SaveGame, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      TerrainSurfaceType;                                       // 0x0014(0x0001) (ZeroConstructor, Transient, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.ReplicatedCreativeColorPickState
// 0x0028
struct FReplicatedCreativeColorPickState
{
	struct FTerrainProperties                          TerrainProperties;                                        // 0x0000(0x0018) (Transient)
	struct FName                                       TerrainCustomMaterial;                                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Index;                                                    // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.OverrideCustomPackageItemList
// 0x0018
struct FOverrideCustomPackageItemList
{
	TArray<class UClass*>                              ItemLists;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      OverridePackage;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.PlacedActorSpawnInfo
// 0x0018
struct FPlacedActorSpawnInfo
{
	class UClass*                                      ActorType;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorTemplate;                                            // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.DebrisItem
// 0x0010
struct FDebrisItem
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnChance;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomOffset;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.ExoRequestReward
// 0x0048
struct FExoRequestReward
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SubTitle;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	int                                                RewardThreshold;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSecondaryReward : 1;                                   // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ExplosiveEffectsConfigPair
// 0x0010
struct FExplosiveEffectsConfigPair
{
	float                                              MinPower;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             Effect;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.GameSettingsGraphicsOptions
// 0x0014
struct FGameSettingsGraphicsOptions
{
	int                                                PostProcessQuality;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CloudQuality;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.GameSettingsDisplayOptions
// 0x0020
struct FGameSettingsDisplayOptions
{
	EAstroWindowMode                                   WindowModeOpt;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VSyncOpt;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FIntPoint>                           AvailableResolutions;                                     // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                CurrentResolutionIndex;                                   // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BrightnessOpt;                                            // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.GameSettingsControlsOptions
// 0x000C
struct FGameSettingsControlsOptions
{
	bool                                               CameraMouseYAxisInverted;                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CameraGamepadYAxisInverted;                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HoldToSprintMouse;                                        // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HoldToSprintGamepad;                                      // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MouseSensitivity;                                         // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VehiclesUseAbosluteSteering;                              // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VehiclesUseYawAirControls;                                // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Astro.GameSettingsAudioOptions
// 0x0014
struct FGameSettingsAudioOptions
{
	float                                              MasterVolume;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MusicVolume;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SfxVolume;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AmbientVolume;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.GateObjectComponent
// 0x0058 (0x00B8 - 0x0060)
struct FGateObjectComponent : public FAstroEntityComponent
{
	EGateObjectType                                    Type;                                                     // 0x0060(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bCanBeActivated : 1;                                      // 0x0061(0x0001) (SaveGame)
	unsigned char                                      bIsActivated : 1;                                         // 0x0061(0x0001) (SaveGame)
	unsigned char                                      bHasEncounteredPlayer : 1;                                // 0x0061(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                ChamberCoordinateIndex;                                   // 0x0064(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FAstroDatumRef>                      GateObjectNetworkNeighborEntities;                        // 0x0068(0x0010) (ZeroConstructor, SaveGame)
	TArray<class AAstroCharacter*>                     PlayerCharactersInProximity;                              // 0x0078(0x0010) (ZeroConstructor, SaveGame)
	class UGateObjectEventListener*                    EventListener;                                            // 0x0088(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0090(0x0028) MISSED OFFSET
};

// ScriptStruct Astro.IndicatorMeshDefinition
// 0x0018
struct FIndicatorMeshDefinition
{
	class UStaticMesh*                                 IndicatorMesh;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndicatorScale;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x000C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.GateObjectReference
// 0x0010
struct FGateObjectReference
{
	EGateObjectType                                    GateObjectType;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ChamberIndex;                                             // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TWeakObjectPtr<class ASolarBody>                   GateObjectSolarBody;                                      // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.GateObjectControlNode
// 0x0050
struct FGateObjectControlNode
{
	struct FGateObjectReference                        GateObjectRef;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	EGateObjectType                                    GateObjectType;                                           // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RelativeOffsetSolarScalar;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UStaticMeshComponent*                        NodeMesh;                                                 // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                ChildMeshes;                                              // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	class UTooltipComponent*                           TooltipComponent;                                         // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGateObjectIndicatorDefinition*              IndicatorDefinition;                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PlanetaryGateObjectsState
// 0x0018
struct FPlanetaryGateObjectsState
{
	class AAstroPlanet*                                Planet;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bEngineActivated : 1;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                NumChambersActivated;                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ChamberActivationBitMask;                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.GatesGameStateReplicationData
// 0x0018
struct FGatesGameStateReplicationData
{
	TArray<struct FPlanetaryGateObjectsState>          PlanetaryGateObjectsStates;                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	unsigned char                                      bStationPresentInSolarSystem : 1;                         // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      bStationActivated : 1;                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.TerrainHeightLayer
// 0x0068
struct FTerrainHeightLayer
{
	float                                              PlateauUpper;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlateauLower;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTerrainMaterial                            Material;                                                 // 0x0010(0x0058) (Edit)
};

// ScriptStruct Astro.HarvestableItemSpawner
// 0x0030
struct FHarvestableItemSpawner
{
	struct FSlotReference                              SlotRef;                                                  // 0x0000(0x0010) (SaveGame)
	class UClass*                                      ItemType;                                                 // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FAstroDatumRef                              EntityAwaitingHarvest;                                    // 0x0018(0x0010) (SaveGame)
	float                                              SecondsUntilRespawn;                                      // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	EHarvestableItemSpawnerType                        SpawnerType;                                              // 0x002C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.HarvestableComponent
// 0x0018 (0x0078 - 0x0060)
struct FHarvestableComponent : public FAstroEntityComponent
{
	TArray<struct FHarvestableItemSpawner>             ItemSpawners;                                             // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      bIsUprooted : 1;                                          // 0x0070(0x0001) (SaveGame)
	unsigned char                                      bHasPostHarvestUsableSlots : 1;                           // 0x0070(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              UprootedDestructionDelayRemaining;                        // 0x0074(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.SpatialPartitionChannel
// 0x0008
struct FSpatialPartitionChannel
{
	bool                                               Block;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RadiusOverride;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.SpatialPartitionChannels
// 0x0018
struct FSpatialPartitionChannels
{
	EPartitionChannel                                  SelfChannel;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpatialPartitionChannel>            BlockChannels;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Astro.InputKeyToIconMappingEntry
// 0x0010
struct FInputKeyToIconMappingEntry
{
	class UObject*                                     ResourceObjectDefault;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AlternateResourceObjectHold;                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ItemVariantList
// 0x0010
struct FItemVariantList
{
	TArray<class UClass*>                              Variants;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ItemCatalogEntry
// 0x0058
struct FItemCatalogEntry
{
	class UClass*                                      BaseItemType;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<EItemVariantType, struct FItemVariantList>    VariantsByType;                                           // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ItemCatalogCategory
// 0x0010
struct FItemCatalogCategory
{
	TArray<struct FItemCatalogEntry>                   Entries;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ItemQuantityPair
// 0x0010
struct FItemQuantityPair
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.ItemConversionRecipe
// 0x0020
struct FItemConversionRecipe
{
	TArray<struct FItemRecipeIngredient>               Ingredients;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FItemQuantityPair>                   OutputItems;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.PossibleItemConversion
// 0x0038
struct FPossibleItemConversion
{
	struct FItemConversionRecipe                       ConversionRecipe;                                         // 0x0000(0x0020)
	TArray<struct FAstroDatumRef>                      InputItemEntityRefs;                                      // 0x0020(0x0010) (ZeroConstructor)
	bool                                               UseLiteralItemTypeForInput;                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                OutputItemIndex;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ItemConverterComponent
// 0x0090 (0x00F0 - 0x0060)
struct FItemConverterComponent : public FAstroEntityComponent
{
	TArray<struct FSlotReference>                      InputSlots;                                               // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSlotReference>                      OutputSlots;                                              // 0x0070(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FPossibleItemConversion>             PossibleConversions;                                      // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FSlotReference>                      ExternalResourceSlots;                                    // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FActiveItemConversion>               ActiveItemConversions;                                    // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroDatumRef>                      VolatileItemEntityRefsToDetonate;                         // 0x00B0(0x0010) (ZeroConstructor, SaveGame)
	bool                                               bWantsToBeActive;                                         // 0x00C0(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C1(0x0001) MISSED OFFSET
	EItemConverterState                                ConverterState;                                           // 0x00C2(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET
	int                                                ActiveConversionIDCounter;                                // 0x00C4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedOutputItemTypeIndex;                              // 0x00C8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET
};

// ScriptStruct Astro.ItemDriveReward
// 0x0038
struct FItemDriveReward
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UObject*                                     PlayFabRewardObject;                                      // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              InGameRewardItemTypes;                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RewardThreshold;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RepeatingRewardInterval;                                  // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSecondaryReward : 1;                                   // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ProgressPredictionData
// 0x0008
struct FProgressPredictionData
{
	int                                                LocalCacheItemDriveProgressDelta;                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReportedItemDriveProgressDelta;                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ItemSpecifier
// 0x0010
struct FItemSpecifier
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.LockableComponent
// 0x0028 (0x0088 - 0x0060)
struct FLockableComponent : public FAstroEntityComponent
{
	TArray<struct FAstroDatumRef>                      LockRefs;                                                 // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	struct FScriptMulticastDelegate                    OnLockedStateChanged;                                     // 0x0070(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bIsUnlocked : 1;                                          // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.LockComponent
// 0x0038 (0x0098 - 0x0060)
struct FLockComponent : public FAstroEntityComponent
{
	struct FAstroDatumRef                              LockableRef;                                              // 0x0060(0x0010) (SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLockedStateChanged;                                     // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bIsUnlocked : 1;                                          // 0x0090(0x0001) (SaveGame)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.InteractionTarget
// 0x0018
struct FInteractionTarget
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClickableComponent*                         ClickableComponent;                                       // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.OrbitalReplicatedData
// 0x00E0
struct FOrbitalReplicatedData
{
	struct FTransform                                  SourceTransform;                                          // 0x0000(0x0030) (SaveGame, IsPlainOldData)
	class USceneComponent*                             SourceComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	class ASolarBody*                                  SourceOrbitingBody;                                       // 0x0038(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x0040(0x0030) (SaveGame, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	class ASolarBody*                                  TargetOrbitingBody;                                       // 0x0078(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // 0x0080(0x0030) (SaveGame, IsPlainOldData)
	class USceneComponent*                             CurrentComponent;                                         // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	class ASolarBody*                                  CurrentOrbitingBody;                                      // 0x00B8(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Launched;                                                 // 0x00C0(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              TravelDistance;                                           // 0x00C4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<class APlayController*>                     ControllingPlayers;                                       // 0x00C8(0x0010) (ZeroConstructor, SaveGame)
	float                                              LaunchLength;                                             // 0x00D8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              InterplanetaryTravelRangeMultiplier;                      // 0x00DC(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.ReplicatedOrbitalTimeData
// 0x0010
struct FReplicatedOrbitalTimeData
{
	float                                              LaunchTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetTime;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PhysicalItemSpecifier
// 0x0010
struct FPhysicalItemSpecifier
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.PhysicsState
// 0x0010
struct FPhysicsState
{
	uint32_t                                           PhysicsFlags;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       CollisionProfile;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PhysicsMovementReplicatedInput
// 0x0010
struct FPhysicsMovementReplicatedInput
{
	struct FVector_NetQuantizeNormal                   SteeredWheelsDirection;                                   // 0x0000(0x000C)
	float                                              Boost;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PowerThresholdEvent
// 0x0028
struct FPowerThresholdEvent
{
	float                                              ActivationThreshold;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBelowThreshold;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAboveThreshold;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
};

// ScriptStruct Astro.ReplicatedPowerState
// 0x0008
struct FReplicatedPowerState
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentCharge;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              StorageCapacity;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ReplicatedPrinterState
// 0x0068
struct FReplicatedPrinterState
{
	class UClass*                                      CurrentBlueprintItem;                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UClass*                                      CurrentBlueprintItemBeingPrinted;                         // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSlotReference>                      IndicatorSlots;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              SlotIndicators;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        AvailableIngredients;                                     // 0x0030(0x0010) (ZeroConstructor)
	struct FSlotReference                              PrinterOutputSlot;                                        // 0x0040(0x0010)
	float                                              VisualProgress;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ModifiedProductionRate;                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndexAmongUnlockedBlueprints;                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalNumUnlockedBlueprints;                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanPrint : 1;                                            // 0x0060(0x0001) (SaveGame)
	unsigned char                                      bCanUse : 1;                                              // 0x0060(0x0001) (SaveGame)
	unsigned char                                      bCharging : 1;                                            // 0x0060(0x0001) (SaveGame)
	unsigned char                                      bPrinting : 1;                                            // 0x0060(0x0001) (SaveGame)
	unsigned char                                      bOutputSlotFree : 1;                                      // 0x0060(0x0001)
	unsigned char                                      bHideIndicator : 1;                                       // 0x0060(0x0001)
	unsigned char                                      bControlPanelEngaged : 1;                                 // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.ProceduralActorRepState
// 0x0020
struct FProceduralActorRepState
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // 0x0008(0x0010) (SaveGame, IsPlainOldData)
	float                                              CullingDistance;                                          // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bIsBuried : 1;                                            // 0x001C(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.RailItem
// 0x0010
struct FRailItem
{
	class APhysicalItem*                               Item;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Direction;                                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.SurfaceCriteria
// 0x0008
struct FSurfaceCriteria
{
	ESurfaceCriteriaNormalMode                         NormalMode;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESurfaceCriteriaSkyMode                            SkyMode;                                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              NormalThreshold;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ResearchComponent
// 0x0080 (0x00E0 - 0x0060)
struct FResearchComponent : public FAstroEntityComponent
{
	unsigned char                                      bWantsToResearch : 1;                                     // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      bIsResearching : 1;                                       // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              CurrentPowerLevelRatio;                                   // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentResearchRateMultiplier;                            // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentResearchPointsPerMinute;                           // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAstroDatumRef                              InstigatorResearchProgression;                            // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	TArray<struct FAttachedResearchSubject>            IncomingResearchSubjects;                                 // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAttachedResearchSubject>            ActiveResearchSubjects;                                   // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FAttachedResearchSubject>            OutgoingResearchSubjects;                                 // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnActiveResearchSubjectsChanged;                          // 0x00B0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActiveResearchSubjectExpired;                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference)
	TArray<struct FSlotReference>                      ResearchSlots;                                            // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.ResearchPointGrantComponent
// 0x0008 (0x0068 - 0x0060)
struct FResearchPointGrantComponent : public FAstroEntityComponent
{
	float                                              ResearchPointsGranted;                                    // 0x0060(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bResearchPointsHaveBeenGranted : 1;                       // 0x0064(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.CumulativeResearchTracker
// 0x0020
struct FCumulativeResearchTracker
{
	double                                             Time;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DisplayedTime;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             Points;                                                   // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DisplayedPoints;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.ResearchProgressionComponent
// 0x00E0 (0x0140 - 0x0060)
struct FResearchProgressionComponent : public FAstroEntityComponent
{
	TArray<class UClass*>                              KnownItemTypes;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UClass*>                              UnlockedItemTypes;                                        // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FName>                               CompletedBonusTimelines;                                  // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	struct FCumulativeResearchTracker                  TotalResearch;                                            // 0x0090(0x0020) (BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData)
	double                                             CurrentPointBalance;                                      // 0x00B0(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              CurrentDisplayedPointBalance;                             // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentResearchPointsPerMinute;                           // 0x00BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCurrentPointBalanceChanged;                             // 0x00C0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnKnownItemsChanged;                                      // 0x00D0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnUnlockedItemsChanged;                                   // 0x00E0(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FName, struct FCumulativeResearchTracker> ActiveBonusTimelineProgress;                              // 0x00F0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.ResearchBonus
// 0x0010
struct FResearchBonus
{
	float                                              Threshold;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UResearchBonusBehavior*                      Behavior;                                                 // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.ResearchBonusTimeline
// 0x0030
struct FResearchBonusTimeline
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               PrerequisiteTimelines;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EResearchBonusTimelineType                         TimelineType;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FResearchBonus>                      Bonuses;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Astro.ResearchSubjectComponent
// 0x0028 (0x0088 - 0x0060)
struct FResearchSubjectComponent : public FAstroEntityComponent
{
	TWeakObjectPtr<class UResearchSubjectDefinition>   ResearchSubjectDefinition;                                // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CurrentResearchPhaseIndex;                                // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              CurrentResearchPhaseSecondsElapsed;                       // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ResearchStartTimestamp;                                   // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExpirationTimestamp;                                      // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FAstroDatumRef                              ResearcherRef;                                            // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, SaveGame)
};

// ScriptStruct Astro.ResearchPhase
// 0x0008
struct FResearchPhase
{
	float                                              PointsPerMinute;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhaseDurationSeconds;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.RewardPossibility
// 0x0018
struct FRewardPossibility
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       DurableSetName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallbackConsumableSetName;                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.RewardSelectionParameters
// 0x0028
struct FRewardSelectionParameters
{
	TArray<struct FRewardPossibility>                  Possibilities;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           SubsetCount;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct Astro.RewardResult
// 0x0010
struct FRewardResult
{
	class UClass*                                      RewardType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsDurableUnlock : 1;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.SublistItem
// 0x0010
struct FSublistItem
{
	class UClass*                                      DurableType;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UClass*                                      ConsumableType;                                           // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.RewardSublist
// 0x0010
struct FRewardSublist
{
	TArray<struct FSublistItem>                        Items;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.RewardSet
// 0x0018
struct FRewardSet
{
	struct FName                                       SetName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Durables;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Consumables;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.VehicleBaseReplicationData
// 0x0010
struct FVehicleBaseReplicationData
{
	class AAstroPlayerController*                      DrivingController;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeatBase*                                   SeatPilotingThisVehicle;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PlatformScalability
// 0x000C
struct FPlatformScalability
{
	float                                              DecoratorLODDistanceScale;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     ViewDistanceQuality;                                      // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     TextureQuality;                                           // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     ShadowQuality;                                            // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     EffectsQuality;                                           // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     FoliageQuality;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     AntiAliasingQuality;                                      // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScalabilityLevel>                     PostProcessQuality;                                       // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct Astro.MidRangeScanSettings
// 0x0014
struct FMidRangeScanSettings
{
	float                                              StrongSignalArcPercent;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeakSignalArcPercent;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrongSignalRotationSpeed;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoSignalRotationSpeed;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PingIntervalSeconds;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.SeatReplicationData
// 0x0008
struct FSeatReplicationData
{
	class AVehicleBase*                                VehicleSlottedTo;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.SlotConnectionReplicationData
// 0x0040
struct FSlotConnectionReplicationData
{
	struct FVector_NetQuantizeNormal                   ComponentHitNormal;                                       // 0x0000(0x000C)
	float                                              TargetScale;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              SourceSlot;                                               // 0x0010(0x0010)
	struct FSlotReference                              TargetSlot;                                               // 0x0020(0x0010)
	class UPrimitiveComponent*                         ConnectedComponent;                                       // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Destroying;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRetracting;                                            // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCarryingOxygen;                                        // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
};

// ScriptStruct Astro.SlotConnectionMotionReplicationData
// 0x0024
struct FSlotConnectionMotionReplicationData
{
	struct FVector_NetQuantize100                      TargetLocation;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize10                       TargetRotation;                                           // 0x000C(0x000C)
	struct FVector_NetQuantizeNormal                   TargetNormal;                                             // 0x0018(0x000C)
};

// ScriptStruct Astro.SlotConnectionClientMotionData
// 0x0028
struct FSlotConnectionClientMotionData
{
	struct FVector_NetQuantize100                      TargetLocation;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize10                       TargetRotation;                                           // 0x000C(0x000C)
	struct FVector_NetQuantizeNormal                   TargetNormal;                                             // 0x0018(0x000C)
	bool                                               bIsHoveringOverSlot;                                      // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Astro.SlotOrganizationRulesState
// 0x0010
struct FSlotOrganizationRulesState
{
	TArray<TWeakObjectPtr<class USlotOrganizationRule>> OrganizationRules;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Astro.SubSlotLocation
// 0x0040
struct FSubSlotLocation
{
	struct FTransform                                  RelativeOffset;                                           // 0x0000(0x0030) (IsPlainOldData)
	unsigned char                                      Tier;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ParentSubslotIndex;                                       // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             LeftChildSubslotIndex;                                    // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RightChildSubslotIndex;                                   // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumChildren;                                              // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct Astro.SlotIndicatorDefinition
// 0x0018
struct FSlotIndicatorDefinition
{
	class UClass*                                      IndicatorItemType;                                        // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               WhitelistCohabitationItem;                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EIndicatorTooltipType                              TooltipType;                                              // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.SubslotIndicatorType
// 0x0038
struct FSubslotIndicatorType
{
	struct FSlotIndicatorDefinition                    IndicatorDefinition;                                      // 0x0000(0x0018)
	class UPrimitiveComponent*                         SlotIndicator;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  SlotIndicatorOriginalMaterials;                           // 0x0020(0x0010) (ZeroConstructor, Transient)
	class UTooltipComponent*                           IndicatorTooltipComponent;                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.Slot
// 0x01E0
struct FSlot
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SlotTemplate;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESlotType                                          SlotType;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlotConnectorType                                 ConnectorType;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                SlotTier;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SlotBinaryTreeDepth;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SlotTierCount;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Breakable;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReserved;                                               // 0x0021(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESlotConfiguration                                 Configuration;                                            // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlotPosition                                      PositionType;                                             // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       TargetName;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeOffset;                                           // 0x0040(0x0030) (Edit, IsPlainOldData)
	TArray<struct FSubSlotLocation>                    SubslotLocations;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      StartingItemType;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingPhysicalItemType;                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingItemList;                                         // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingActorList;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingRewardSelection;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnStartingPhysicalItemPackaged;                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UClass*                                      ConnectionClass;                                          // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class USlotBehavior*>                       Behaviors;                                                // 0x00B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bIsBodySlot : 1;                                          // 0x00C8(0x0001) (Edit)
	unsigned char                                      bAllowBodySlotAttach : 1;                                 // 0x00C8(0x0001) (Edit)
	unsigned char                                      bGenerateNoCollision : 1;                                 // 0x00C8(0x0001) (Edit)
	unsigned char                                      bCanHoldItem : 1;                                         // 0x00C8(0x0001) (Edit)
	unsigned char                                      bItemBlocksConnection : 1;                                // 0x00C8(0x0001) (Edit)
	unsigned char                                      bNoConnectionPull : 1;                                    // 0x00C8(0x0001) (Edit)
	unsigned char                                      bSingleConnection : 1;                                    // 0x00C8(0x0001) (Edit)
	unsigned char                                      bHideConnectorOnPull : 1;                                 // 0x00C8(0x0001) (Edit)
	unsigned char                                      bConnectionTense : 1;                                     // 0x00C9(0x0001) (Edit)
	unsigned char                                      bUnclickable : 1;                                         // 0x00C9(0x0001) (Edit)
	unsigned char                                      bIsManagedByRule : 1;                                     // 0x00C9(0x0001) (Transient)
	unsigned char                                      bCanAcceptUnslottableItems : 1;                           // 0x00C9(0x0001) (Edit)
	unsigned char                                      bIsTrailerHitch : 1;                                      // 0x00C9(0x0001) (Edit)
	unsigned char                                      bPowerIncomingOnly : 1;                                   // 0x00C9(0x0001) (Edit)
	unsigned char                                      bStreamingPowerConnectionsMergeNodes : 1;                 // 0x00C9(0x0001) (Edit)
	unsigned char                                      bWeldItems : 1;                                           // 0x00C9(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00CA(0x0001) MISSED OFFSET
	EAuxSlotType                                       AuxSlotType;                                              // 0x00CB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndicatorScale;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     HoverSoundEvent;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AttachSoundEvent;                                         // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DetachSoundEvent;                                         // 0x00F8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      SlottableItemsFiltrationList;                             // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESlottableItemsFiltrationListBehavior              SlottableItemsFiltrationListBehavior;                     // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	class UTooltipComponent*                           SlotTooltipComponent;                                     // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class APhysicalItem*>                       SlottedItems;                                             // 0x0120(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSubslotIndicatorType>               SlotIndicatorTypes;                                       // 0x0130(0x0010) (ZeroConstructor, Transient)
	class AResourceInfo*                               SlotResourceInfo;                                         // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPrimitiveComponent*                         TracePrimitive;                                           // 0x0148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PositionComponent;                                        // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USlotsComponent*                             Owner;                                                    // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USlotOrganizationRule*                       OwnerRule;                                                // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSlotReference                              CurrentBodySlot;                                          // 0x0168(0x0010) (Transient)
	TArray<class ASlotConnection*>                     ExternalConnections;                                      // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class ASlotConnection*>                     IndicatorConnections;                                     // 0x0188(0x0010) (ZeroConstructor, Transient)
	class ASlotConnection*                             BuildingConnection;                                       // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                LegacyMeshes;                                             // 0x01A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FTransform>                          LegacyMeshRelativeTransforms;                             // 0x01B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UStaticMeshComponent*>                ConnectorMeshes;                                          // 0x01C0(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
	class USlotDelegates*                              Delegates;                                                // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.SlotTransition
// 0x0060
struct FSlotTransition
{
	struct FName                                       ThisSlot;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0010(0x0030) (IsPlainOldData)
	struct FSlotReference                              SourceSlot;                                               // 0x0040(0x0010)
	int                                                SubslotIndex;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SourceSubSlotIndex;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               ItemIncomingToBundle;                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.SlottedItemRequirement
// 0x0018
struct FSlottedItemRequirement
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              SatisfactoryItemTypes;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.SlottedItemRequirementRuntimeState
// 0x0018
struct FSlottedItemRequirementRuntimeState
{
	struct FSlotReference                              SlotRef;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      bIsRequirementSatisfied : 1;                              // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, SaveGame)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.SolarPowerGeneratorComponent
// 0x0018 (0x0078 - 0x0060)
struct FSolarPowerGeneratorComponent : public FAstroEntityComponent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
};

// ScriptStruct Astro.SoilConversion
// 0x0010
struct FSoilConversion
{
	class UClass*                                      OutputItemType;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OutputRatio;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.SlotIndicatorLocation
// 0x0030
struct FSlotIndicatorLocation
{
	int                                                SubslotIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlotReference                              SlotForIndicator;                                         // 0x0008(0x0010)
	struct FSlotIndicatorDefinition                    IndicatorDef;                                             // 0x0018(0x0018)
};

// ScriptStruct Astro.StreamingPowerCableComponent
// 0x00C0 (0x0120 - 0x0060)
struct FStreamingPowerCableComponent : public FAstroEntityComponent
{
	struct FAstroDatumRef                              FromNode;                                                 // 0x0060(0x0010) (SaveGame)
	struct FAstroDatumRef                              ToNode;                                                   // 0x0070(0x0010) (SaveGame)
	struct FAstroDatumRef                              StreamingPowerDirectionalConnection;                      // 0x0080(0x0010) (SaveGame)
	struct FAstroDatumRef                              StreamingPowerMergedConnection;                           // 0x0090(0x0010) (SaveGame)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A0(0x0080) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerMergedConnectionComponent
// 0x0020 (0x0080 - 0x0060)
struct FStreamingPowerMergedConnectionComponent : public FAstroEntityComponent
{
	struct FAstroDatumRef                              FromNode;                                                 // 0x0060(0x0010) (SaveGame)
	struct FAstroDatumRef                              ToNode;                                                   // 0x0070(0x0010) (SaveGame)
};

// ScriptStruct Astro.StreamingPowerMergedNodeComponent
// 0x0170 (0x01D0 - 0x0060)
struct FStreamingPowerMergedNodeComponent : public FAstroEntityComponent
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) MISSED OFFSET
	TArray<struct FAstroDatumRef>                      ChildNodes;                                               // 0x00A8(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData01[0x118];                                     // 0x00B8(0x0118) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerNodeComponent
// 0x0110 (0x0170 - 0x0060)
struct FStreamingPowerNodeComponent : public FAstroEntityComponent
{
	TArray<struct FAstroDatumRef>                      ConnectionsInbound;                                       // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroDatumRef>                      ConnectionsOutbound;                                      // 0x0070(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroDatumRef>                      NeighboringNodesConnectedByMergedLinkNodes;               // 0x0080(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroDatumRef>                      MergedNodeConnections;                                    // 0x0090(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroDatumRef>                      VampireConnections;                                       // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
	TArray<class UPowerComponent*>                     PowerGenerators;                                          // 0x00B0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UPowerComponent*>                     PowerConsumers;                                           // 0x00C0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UPowerComponent*>                     Batteries;                                                // 0x00D0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UPowerComponent*>                     Capacitors;                                               // 0x00E0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UPowerComponent*>                     AttachedPowerComponents;                                  // 0x00F0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	struct FAstroDatumRef                              ParentMergedNode;                                         // 0x0110(0x0010) (SaveGame)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0120(0x0050) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerSplitterReplicationData
// 0x0040
struct FStreamingPowerSplitterReplicationData
{
	TArray<EPowerCableConnectionDirection>             PowerCableConnectionDirections;                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      CableRealPowerValues;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      CableSplitRatios;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      CablePowerFlowRatio;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Astro.StreamingPowerVampireConnectionComponent
// 0x0020 (0x0080 - 0x0060)
struct FStreamingPowerVampireConnectionComponent : public FAstroEntityComponent
{
	struct FAstroDatumRef                              VampireNode;                                              // 0x0060(0x0010) (SaveGame)
	struct FAstroDatumRef                              PreyNode;                                                 // 0x0070(0x0010) (SaveGame)
};

// ScriptStruct Astro.SuitDefinition
// 0x0058
struct FSuitDefinition
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Astro.SuitDefinition.SkeletalMesh
	class UClass*                                      AnimationBlueprintType;                                   // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Astro.SuitDefinition.PointMontage
};

// ScriptStruct Astro.TerrainOptionalMaterial
// 0x0008 (0x0060 - 0x0058)
struct FTerrainOptionalMaterial : public FTerrainMaterial
{
	bool                                               Override;                                                 // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.TeleportationBubbleReplicationData
// 0x0018
struct FTeleportationBubbleReplicationData
{
	ETeleportationBubbleState                          State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     PersistentTerrainObservationLocation;                     // 0x0004(0x000C) (IsPlainOldData)
	class AAstroPlanet*                                DestinationPlanet;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.TerrainColorPaletteEntries
// 0x0010
struct FTerrainColorPaletteEntries
{
	TArray<struct FTerrainMaterial>                    PaletteEntries;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.ParameterRangeReal
// 0x0008
struct FParameterRangeReal
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.ParameterRangeRealScale
// 0x0000 (0x0008 - 0x0008)
struct FParameterRangeRealScale : public FParameterRangeReal
{

};

// ScriptStruct Astro.ActorSeeding
// 0x0010
struct FActorSeeding
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FParameterRangeRealScale                    Scale;                                                    // 0x0008(0x0008) (Edit)
};

// ScriptStruct Astro.TestEntityColorCycleComponent
// 0x0050 (0x00B0 - 0x0060)
struct FTestEntityColorCycleComponent : public FAstroEntityComponent
{
	struct FLinearColor                                ColorChangePerSecond;                                     // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                MinColor;                                                 // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                MaxColor;                                                 // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ColorChangeDirection;                                     // 0x0090(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // 0x009C(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.LinearAttachPoint
// 0x0010
struct FLinearAttachPoint
{
	class USceneComponent*                             LineStart;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LineEnd;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.CircularAttachPoint
// 0x0010
struct FCircularAttachPoint
{
	class USceneComponent*                             CircleCenter;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.VampireAttachmentEntry
// 0x0020
struct FVampireAttachmentEntry
{
	bool                                               hasBeenVisited;                                           // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FAstroDatumRef                              VampirePowerConnection;                                   // 0x0004(0x0010) (SaveGame)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UTetherAttachComponent*                      PreyTetherAttachComponent;                                // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.ExplicitOxygenConnections
// 0x0010
struct FExplicitOxygenConnections
{
	TArray<class ASlotConnection*>                     Connections;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.TetherDecoration
// 0x0060
struct FTetherDecoration
{
	class UStaticMesh*                                 DecorationMesh;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  DecorationMeshRelativeTransform;                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UMaterialInterface*                          DecorationMeshMaterial;                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.TetherGraphEdge
// 0x0010
struct FTetherGraphEdge
{
	class UTetherAttachComponent*                      A;                                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTetherAttachComponent*                      B;                                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.EdgeVisualComponent
// 0x0008
struct FEdgeVisualComponent
{
	class UInstancedStaticMeshComponent*               MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Astro.TetherEdgeState
// 0x0020
struct FTetherEdgeState
{
	struct FTetherGraphEdge                            Edge;                                                     // 0x0000(0x0010)
	struct FEdgeVisualComponent                        View;                                                     // 0x0010(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.TetherReplicatedState
// 0x3110
struct FTetherReplicatedState
{
	class ATetherManager*                              Manager;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FTetherEdgeState>                    StableEdgeArray;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
	TMap<struct FTetherGraphEdge, int>                 AcceleratorTable;                                         // 0x0018(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x30A8];                                    // 0x0068(0x30A8) MISSED OFFSET
};

// ScriptStruct Astro.TetherEdgeArray
// 0x0010
struct FTetherEdgeArray
{
	TArray<struct FTetherGraphEdge>                    Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.TooltipWidgetOverride
// 0x00F0
struct FTooltipWidgetOverride
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETooltipVisibilityControl                          VisibilityControlOverride;                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyAnchorReferenceComponentOverride : 1;               // 0x0009(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FComponentReference                         AnchorReferenceComponentOverride;                         // 0x0010(0x0018) (Edit)
	unsigned char                                      bApplyScreenOffsetOverride : 1;                           // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector2D                                   ScreenOffsetOverride;                                     // 0x002C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bRemainsVisibleWhenHeldOverride : 1;                      // 0x0034(0x0001) (Edit)
	unsigned char                                      bSuppressOtherTooltipsWhenExpandedOverride : 1;           // 0x0034(0x0001) (Edit)
	unsigned char                                      bOverrideUseAndExaminePrompts : 1;                        // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FTooltipProximityBadgeVisibilityData        ProximityVisibilityDataOverride;                          // 0x0038(0x0030) (Edit)
	struct FTooltipWidgetDisplayData                   DisplayDataOverride;                                      // 0x0068(0x0088) (Edit)
};

// ScriptStruct Astro.IndicatorsForTradeShipSlot
// 0x0010
struct FIndicatorsForTradeShipSlot
{
	TArray<class UClass*>                              IndicatorTypes;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.VehicleDrillReplicationData
// 0x0003
struct FVehicleDrillReplicationData
{
	bool                                               ToolIsActive;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CollectedExcessTerrain;                                   // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EVehicleDrillToolMode                              DrillToolMode;                                            // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.VehicleDrillOperationConstants
// 0x001C
struct FVehicleDrillOperationConstants
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Intensity;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EDeformType                                        Operation;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EDeformShape                                       Shape;                                                    // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              PowerDraw;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyScaleBonus;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyIntensityBonus;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyPowerDraw;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Astro.VehicleDrillSedimentReplicationData
// 0x0008
struct FVehicleDrillSedimentReplicationData
{
	int                                                AvailableSediment;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SedimentCapacity;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.RepLinkedChassisMovement
// 0x0040
struct FRepLinkedChassisMovement
{
	class UWheeledChassisComponent*                    linkedChassis;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRepMovement                                Movement;                                                 // 0x0008(0x0034)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.RepWheeledChassisMovement
// 0x0048
struct FRepWheeledChassisMovement
{
	struct FRepMovement                                Movement;                                                 // 0x0000(0x0034)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FRepLinkedChassisMovement>           linkedMovement;                                           // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Astro.WheelInfo
// 0x000C
struct FWheelInfo
{
	unsigned char                                      bSteerable : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPowered : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Stiffness;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.WindPowerGeneratorComponent
// 0x0020 (0x0080 - 0x0060)
struct FWindPowerGeneratorComponent : public FAstroEntityComponent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerPacket
// 0x0014
struct FStreamingPowerPacket
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerDirectionalConnectionComponent
// 0x00B8 (0x0118 - 0x0060)
struct FStreamingPowerDirectionalConnectionComponent : public FAstroEntityComponent
{
	TMap<int, struct FStreamingPowerPacket>            PowerPacketsOnTheLine;                                    // 0x0060(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	struct FAstroDatumRef                              FromNode;                                                 // 0x00B0(0x0010) (SaveGame)
	struct FAstroDatumRef                              ToNode;                                                   // 0x00C0(0x0010) (SaveGame)
	struct FSlotReference                              FromSlot;                                                 // 0x00D0(0x0010) (SaveGame)
	struct FSlotReference                              ToSlot;                                                   // 0x00E0(0x0010) (SaveGame)
	float                                              OverrideSplitRatio;                                       // 0x00F0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x00F4(0x0024) MISSED OFFSET
};

// ScriptStruct Astro.AstroEntity
// 0x02A8 (0x02C0 - 0x0018)
struct FAstroEntity : public FAstroDatum
{
	unsigned char                                      bHasBeenInitialized : 1;                                  // 0x0018(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       DefinitionName;                                           // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UClass*                                      ViewActorType;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       ViewActorTemplate;                                        // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       ViewActor;                                                // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x280];                                     // 0x0040(0x0280) MISSED OFFSET
};

// ScriptStruct Astro.AstroEntityProceduralStateComponent
// 0x0028 (0x0088 - 0x0060)
struct FAstroEntityProceduralStateComponent : public FAstroEntityComponent
{
	class UClass*                                      ItemType;                                                 // 0x0060(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // 0x0068(0x0010) (SaveGame, IsPlainOldData)
	float                                              CullingDistance;                                          // 0x0078(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bIsBuried : 1;                                            // 0x007C(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	uint64_t                                           ProceduralPlacementSaveID;                                // 0x0080(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.AstroEntitySceneComponentOld
// 0x0030 (0x0090 - 0x0060)
struct FAstroEntitySceneComponentOld : public FAstroEntityComponent
{
	struct FTransform                                  WorldTransform;                                           // 0x0060(0x0030) (BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData)
};

// ScriptStruct Astro.AstroEntitySlotBackupComponent
// 0x0050 (0x00B0 - 0x0060)
struct FAstroEntitySlotBackupComponent : public FAstroEntityComponent
{
	TMap<struct FName, class UClass*>                  SlotContents;                                             // 0x0060(0x0050) (ZeroConstructor, SaveGame)
};

// ScriptStruct Astro.EntityWorldTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEntityWorldTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.AstroFoliageDestructionManagerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAstroFoliageDestructionManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.AstroServerCommServerList
// 0x0010
struct FAstroServerCommServerList
{
	TArray<struct FAstroServerInfo>                    ServerList;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Astro.AstroGameMenuDedicatedServerDisplayData
// 0x0020
struct FAstroGameMenuDedicatedServerDisplayData
{
	struct FText                                       ServerName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                NumPlayers;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerCapacity;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AstroWidgetContentDataTabBarEntry
// 0x0010
struct FAstroWidgetContentDataTabBarEntry
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObjectBG;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.AutoCraneManagerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAutoCraneManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.BeaconTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FBeaconTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.CameraFacingManagerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCameraFacingManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.AstroSuitColors
// 0x0040
struct FAstroSuitColors
{
	struct FLinearColor                                PrimaryColor;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                TertiaryColor;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SuitColor;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Astro.UseSuppression
// 0x0010
struct FUseSuppression
{
	struct FName                                       SuppressionId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EUseType                                           SuppressionTypeFlags;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Astro.CollectibleTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCollectibleTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.ControlForward
// 0x0010
struct FControlForward
{
	struct FSlotReference                              Slot;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Astro.ExoRequestUnclaimedReward
// 0x0040
struct FExoRequestUnclaimedReward
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SubTitle;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	int                                                NumRewards;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.MaterialInstanceHash
// 0x0008
struct FMaterialInstanceHash
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.PersistentLocalPlayerChunk
// 0x0008 (0x0120 - 0x0118)
struct FPersistentLocalPlayerChunk : public FAstroSaveChunk
{
	class UPersistentLocalPlayerData*                  PlayerData;                                               // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Astro.HoverConstraint
// 0x0018
struct FHoverConstraint
{
	struct FVector                                     LocalOffset;                                              // 0x0000(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Astro.PowerComponentState
// 0x0068
struct FPowerComponentState
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Astro.ResourceCache
// 0x0010
struct FResourceCache
{
	class UClass*                                      ResourceType;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Astro.SlotConnectionSplineRenderData
// 0x0034
struct FSlotConnectionSplineRenderData
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerDirectionalConnectionVisualizationData
// 0x001C
struct FStreamingPowerDirectionalConnectionVisualizationData
{
	float                                              LineSaturationRatio;                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PowerOverrideSplitRatio;                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PowerAmount;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.StreamingPowerNodePowerBudget
// 0x0048
struct FStreamingPowerNodePowerBudget
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Astro.DeformationParamsLocal
// 0x0010
struct FDeformationParamsLocal
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Astro.NearbyTetherAttachPoint
// 0x0010
struct FNearbyTetherAttachPoint
{
	class UTetherAttachComponent*                      NearbyTetherAttachComponent;                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Astro.MessageOfTheDayURL
// 0x0030
struct FMessageOfTheDayURL
{
	struct FString                                     CultureCode;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     URL;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
