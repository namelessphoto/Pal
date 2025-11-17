#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TargetRootSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FTargetRootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TranslationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendToSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BlendToSourceWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AffectIKHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AffectIKVertical;
    
    FTargetRootSettings();
};

