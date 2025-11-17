#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkLabResearch.generated.h"

UCLASS()
class PAL_API UPalWorkLabResearch : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName ResearchId;
    
public:
    UPalWorkLabResearch();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

