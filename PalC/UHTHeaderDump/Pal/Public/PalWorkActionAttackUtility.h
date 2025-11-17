#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalFoliageIdentifiableInfo.h"
#include "PalWorkActionAttackUtility.generated.h"

class AActor;
class APalCharacter;
class UAnimMontage;

UCLASS(BlueprintType)
class UPalWorkActionAttackUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkActionAttackUtility();

    UFUNCTION(BlueprintCallable)
    static void ProcessDamageWorkActionAttack_Foliage(APalCharacter* Invoker, const FPalFoliageIdentifiableInfo& TargetFoliage, const FVector LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDamageWorkActionAttack(APalCharacter* Invoker, AActor* TargetActor, const FVector LocationOffset, const float CollisionRadius);
    
    UFUNCTION(BlueprintPure)
    static bool HasWorkActionAttackNotify(const UAnimMontage* TargetMontage);
    
};

