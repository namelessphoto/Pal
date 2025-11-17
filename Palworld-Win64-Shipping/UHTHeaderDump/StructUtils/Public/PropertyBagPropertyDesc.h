#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPropertyBagContainerType.h"
#include "EPropertyBagPropertyType.h"
#include "PropertyBagPropertyDesc.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct STRUCTUTILS_API FPropertyBagPropertyDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* ValueTypeObject;
    
    UPROPERTY(EditAnywhere)
    FGuid ID;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    EPropertyBagPropertyType ValueType;
    
    UPROPERTY(EditAnywhere)
    EPropertyBagContainerType ContainerType;
    
    FPropertyBagPropertyDesc();
};

