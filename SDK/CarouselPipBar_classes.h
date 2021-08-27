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

// WidgetBlueprintGeneratedClass CarouselPipBar.CarouselPipBar_C
// 0x0028 (0x0230 - 0x0208)
class UCarouselPipBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              PipBox;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PipCount;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActivePipIndex;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPipSelectionChanged;                                    // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CarouselPipBar.CarouselPipBar_C");
		return ptr;
	}


	void SetPipCount(int NewCount);
	void Initialize(int InPipCount, int InActivePipIndex);
	void GetActivePip(class UCarouselPip_C** ActivePip);
	void SetActivePip(int PipIndex);
	void InitializePips();
	void Construct();
	void ExecuteUbergraph_CarouselPipBar(int EntryPoint);
	void OnPipSelectionChanged__DelegateSignature(int SelectedPipIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
