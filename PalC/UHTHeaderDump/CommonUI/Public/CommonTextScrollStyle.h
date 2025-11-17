#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonTextScrollStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class COMMONUI_API UCommonTextScrollStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDelay;
    
    UCommonTextScrollStyle();

};

