#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBuildObject.h"
#include "Templates/SubclassOf.h"
#include "PalBuildObjectDefenseBase.generated.h"

class APalCharacter;
class UPalAIActionBaseCampDefenseBase;

UCLASS()
class PAL_API APalBuildObjectDefenseBase : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseAIActionClass;
    
public:
    APalBuildObjectDefenseBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FRotator GetCharacterRotation() const;
    
    UFUNCTION(BlueprintPure)
    void GetCharacterLocationAndRotationWithOffset(APalCharacter* OwnerCharacter, FVector PreCharaLocation, FVector& OutLocation, FRotator& OutRotation);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetCharacterLocation() const;
    
};

