#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalWorldSecurityUtility.generated.h"

class APalCharacter;

UCLASS(BlueprintType)
class UPalWorldSecurityUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorldSecurityUtility();

    UFUNCTION(BlueprintPure)
    static bool IsWantedCharacter(APalCharacter* Target);
    
    UFUNCTION(BlueprintPure)
    static bool IsCriminalCharacter(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool FindWantedsInSight(APalCharacter* Target, TArray<APalCharacter*>& Wanteds);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCriminalsInSight(APalCharacter* Target, TArray<APalCharacter*>& Criminals);
    
};

