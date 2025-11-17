#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVProjectionOperatorFactory.generated.h"

class UUVProjectionTool;

UCLASS()
class MESHMODELINGTOOLS_API UUVProjectionOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUVProjectionTool* Tool;
    
    UUVProjectionOperatorFactory();

};

