#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterButtonStrip.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterButtonStrip : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FString> Labels;
    
    UPROPERTY()
    uint32 Value;
    
    UPROPERTY()
    uint32 DefaultValue;
    
public:
    UHoudiniParameterButtonStrip();

};

