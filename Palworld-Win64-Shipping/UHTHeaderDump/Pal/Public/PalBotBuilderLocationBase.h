#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalBotBuilderLocationBase.generated.h"

UCLASS()
class APalBotBuilderLocationBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 BuilderIndex;
    
    UPROPERTY()
    bool bIsBuilded;
    
public:
    APalBotBuilderLocationBase(const FObjectInitializer& ObjectInitializer);

};

