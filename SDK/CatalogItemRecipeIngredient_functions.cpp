
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CatalogItemRecipeIngredient.CatalogItemRecipeIngredient_C.SetIngredientType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  IngredientType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCatalogItemRecipeIngredient_C::SetIngredientType(class UClass* IngredientType, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function CatalogItemRecipeIngredient.CatalogItemRecipeIngredient_C.SetIngredientType");

	UCatalogItemRecipeIngredient_C_SetIngredientType_Params params;
	params.IngredientType = IngredientType;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
