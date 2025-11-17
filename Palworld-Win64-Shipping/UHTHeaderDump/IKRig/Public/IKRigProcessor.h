#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRigProcessor.generated.h"

class UIKRigSolver;

UCLASS()
class IKRIG_API UIKRigProcessor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UIKRigSolver*> Solvers;
    
public:
    UIKRigProcessor();

};

