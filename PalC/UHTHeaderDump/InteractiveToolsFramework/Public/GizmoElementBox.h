#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoElementBase.h"
#include "GizmoElementBox.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementBox : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector Dimensions;
    
    UPROPERTY()
    FVector UpDirection;
    
    UPROPERTY()
    FVector SideDirection;
    
public:
    UGizmoElementBox();

};

