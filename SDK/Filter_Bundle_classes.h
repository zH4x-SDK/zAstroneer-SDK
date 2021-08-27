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

// BlueprintGeneratedClass Filter_Bundle.Filter_Bundle_C
// 0x0040 (0x0718 - 0x06D8)
class AFilter_Bundle_C : public AResourceBundle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene1;                                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaceholdPreview;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Oxygen_Bar;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoverDelayComponent*                        HoverDelay;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item_Class;                                               // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Filter_Bundle.Filter_Bundle_C");
		return ptr;
	}


	void Apply(bool Enable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnChanged_Event_1();
	void ExecuteUbergraph_Filter_Bundle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
