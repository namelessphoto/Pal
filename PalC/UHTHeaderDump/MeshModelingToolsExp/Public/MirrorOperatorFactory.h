#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MirrorOperatorFactory.generated.h"

class UMirrorTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UMirrorOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMirrorTool* MirrorTool;
    
    UMirrorOperatorFactory();

};

