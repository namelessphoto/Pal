#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConvertToPolygonsOperatorFactory.generated.h"

class UConvertToPolygonsTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UConvertToPolygonsOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConvertToPolygonsTool* ConvertToPolygonsTool;
    
    UConvertToPolygonsOperatorFactory();

};

