#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalToolUtility.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalToolUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalToolUtility();

    UFUNCTION(BlueprintCallable)
    static void CopyFileOverride(const FString& sourceFileName, const FString& destFileName);
    
};

