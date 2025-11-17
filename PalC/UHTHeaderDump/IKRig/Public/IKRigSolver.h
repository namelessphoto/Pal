#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRigSolver.generated.h"

UCLASS(Abstract)
class IKRIG_API UIKRigSolver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bIsEnabled;
    
public:
    UIKRigSolver();

};

