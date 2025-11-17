#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RecomputeUVsOpFactory.generated.h"

class URecomputeUVsToolProperties;

UCLASS()
class MODELINGOPERATORS_API URecomputeUVsOpFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    URecomputeUVsToolProperties* Settings;
    
    URecomputeUVsOpFactory();

};

