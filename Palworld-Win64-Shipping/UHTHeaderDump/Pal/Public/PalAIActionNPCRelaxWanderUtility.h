#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalAIActionNPCRelaxWanderUtility.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalAIActionNPCRelaxWanderUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAIActionNPCRelaxWanderUtility();

    UFUNCTION(BlueprintCallable)
    static void CreateWalkPointNodes(const FVector& Center, float Radius, int32 SplitNum, TArray<FVector>& OutNodes);
    
};

