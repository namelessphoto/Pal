#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoftComponentReference -FallbackName=SoftComponentReference
#include "ObservedComponent.generated.h"

USTRUCT(BlueprintType)
struct CHAOSCACHING_API FObservedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CacheName;
    
    UPROPERTY()
    FComponentReference ComponentRef;
    
    UPROPERTY(EditAnywhere)
    FSoftComponentReference SoftComponentRef;
    
    UPROPERTY(EditAnywhere)
    bool bIsSimulating;
    
    FObservedComponent();
};

