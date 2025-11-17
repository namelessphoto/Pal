#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "HoleFillStatisticsProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UHoleFillStatisticsProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString InitialHoles;
    
    UPROPERTY(VisibleAnywhere)
    FString SelectedHoles;
    
    UPROPERTY(VisibleAnywhere)
    FString SuccessfulFills;
    
    UPROPERTY(VisibleAnywhere)
    FString FailedFills;
    
    UPROPERTY(VisibleAnywhere)
    FString RemainingHoles;
    
    UHoleFillStatisticsProperties();

};

