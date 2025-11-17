#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TargetRootSettings.h"
#include "RetargetRootSettings.generated.h"

UCLASS()
class IKRIG_API URetargetRootSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTargetRootSettings Settings;
    
private:
    UPROPERTY()
    bool RetargetRootTranslation;
    
    UPROPERTY()
    float GlobalScaleHorizontal;
    
    UPROPERTY()
    float GlobalScaleVertical;
    
    UPROPERTY()
    FVector BlendToSource;
    
    UPROPERTY()
    FVector StaticOffset;
    
    UPROPERTY()
    FRotator StaticRotationOffset;
    
public:
    URetargetRootSettings();

};

