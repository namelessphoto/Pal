#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraph -FallbackName=EdGraph
#include "Dataflow.generated.h"

class UObject;

UCLASS()
class DATAFLOWENGINE_API UDataflow : public UEdGraph {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UObject*> Targets;
    
    UDataflow();

};

