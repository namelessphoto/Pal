#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolTargetManager.generated.h"

class UToolTargetFactory;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UToolTargetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UToolTargetFactory*> Factories;
    
public:
    UToolTargetManager();

};

