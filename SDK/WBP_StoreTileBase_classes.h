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

// WidgetBlueprintGeneratedClass WBP_StoreTileBase.WBP_StoreTileBase_C
// 0x0128 (0x0330 - 0x0208)
class UWBP_StoreTileBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnTileAddedToFocusPath;                                   // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTileRemovedFromFocusPath;                               // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTilePressed;                                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTileReleased;                                           // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FAstroMicroTxnCombinedItem                  StoreItem;                                                // 0x0250(0x00E0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreTileBase.WBP_StoreTileBase_C");
		return ptr;
	}


	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_StoreTileBase(int EntryPoint);
	void OnTileReleased__DelegateSignature();
	void OnTilePressed__DelegateSignature();
	void OnTileRemovedFromFocusPath__DelegateSignature(class UUserWidget* Widget);
	void OnTileAddedToFocusPath__DelegateSignature(class UUserWidget* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
