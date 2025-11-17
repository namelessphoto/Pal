#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContextObjectStore.generated.h"

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UContextObjectStore : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UObject*> ContextObjects;
    
public:
    UContextObjectStore();

};

