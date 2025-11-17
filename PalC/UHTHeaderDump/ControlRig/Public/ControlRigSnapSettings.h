#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigSnapSettings.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class CONTROLRIG_API UControlRigSnapSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bKeepOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bSnapPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bSnapRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bSnapScale;
    
    UControlRigSnapSettings();

};

