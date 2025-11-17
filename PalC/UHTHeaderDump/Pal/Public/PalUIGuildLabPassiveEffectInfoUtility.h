#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalLabCategorySubType.h"
#include "EPalWorkSuitability.h"
#include "PalUIGuildLabPassiveEffectInfo.h"
#include "PalUIGuildLabPassiveEffectInfoUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class PAL_API UPalUIGuildLabPassiveEffectInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalUIGuildLabPassiveEffectInfoUtility();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetLabCategoryTypeFromResearchId(const UObject* WorldContextObject, const FName ResearchId, EPalWorkSuitability& WorkSuitability, EPalLabCategorySubType& SubType);
    
    UFUNCTION(BlueprintPure)
    static void GetLabCategoryTypeFromEffectInfo(const FPalUIGuildLabPassiveEffectInfo& EffectInfo, EPalWorkSuitability& WorkSuitability, EPalLabCategorySubType& SubType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetGuildLabPassiveEffectInfoText(const UObject* WorldContextObject, const FName ResearchId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalUIGuildLabPassiveEffectInfo GetGuildLabPassiveEffectInfo(const UObject* WorldContextObject, const FName ResearchId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText ConvertGuildLabPassiveEffectInfoToText(const UObject* WorldContextObject, const FPalUIGuildLabPassiveEffectInfo& EffectInfo);
    
};

