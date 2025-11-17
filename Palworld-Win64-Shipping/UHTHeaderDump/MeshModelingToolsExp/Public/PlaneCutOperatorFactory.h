#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlaneCutOperatorFactory.generated.h"

class UPlaneCutTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UPlaneCutOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPlaneCutTool* CutTool;
    
    UPlaneCutOperatorFactory();

};

