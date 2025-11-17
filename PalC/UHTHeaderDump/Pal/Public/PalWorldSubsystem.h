#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DependencyElementInterface.h"
#include "Templates/SubclassOf.h"
#include "PalWorldSubsystem.generated.h"

UCLASS()
class UPalWorldSubsystem : public UWorldSubsystem, public IDependencyElementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bShouldCreate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UWorldSubsystem>> PrerequisiteWorldSubsystemList;
    
    UPalWorldSubsystem();


    // Fix for true pure virtual functions not being implemented
};

