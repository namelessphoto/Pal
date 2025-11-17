#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintsManager.generated.h"

class UTickableConstraint;

UCLASS()
class CONSTRAINTS_API UConstraintsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnConstraintAdded OnConstraintAdded_BP;
    
    UPROPERTY(BlueprintAssignable)
    FOnConstraintRemoved OnConstraintRemoved_BP;
    
private:
    UPROPERTY()
    TArray<UTickableConstraint*> Constraints;
    
public:
    UConstraintsManager();

};

