
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

// Function RecipeRequirementIcon.RecipeRequirementIcon_C.UpdateRecipeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemRecipeIngredient   Ingredient                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            AvailableCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URecipeRequirementIcon_C::UpdateRecipeInfo(const struct FItemRecipeIngredient& Ingredient, int AvailableCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipeRequirementIcon.RecipeRequirementIcon_C.UpdateRecipeInfo");

	URecipeRequirementIcon_C_UpdateRecipeInfo_Params params;
	params.Ingredient = Ingredient;
	params.AvailableCount = AvailableCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
