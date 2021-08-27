#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RecipeRequirementIcon.RecipeRequirementIcon_C.UpdateRecipeInfo
struct URecipeRequirementIcon_C_UpdateRecipeInfo_Params
{
	struct FItemRecipeIngredient                       Ingredient;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                AvailableCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
