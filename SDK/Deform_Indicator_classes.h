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

// BlueprintGeneratedClass Deform_Indicator.Deform_Indicator_C
// 0x0018 (0x04A8 - 0x0490)
class ADeform_Indicator_C : public ATutorialInfoMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh1_1;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh4;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deform_Indicator.Deform_Indicator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Deform_Indicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
