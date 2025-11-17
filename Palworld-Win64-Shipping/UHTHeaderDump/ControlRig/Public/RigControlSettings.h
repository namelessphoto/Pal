#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ERigControlAnimationType.h"
#include "ERigControlAxis.h"
#include "ERigControlType.h"
#include "ERigControlVisibility.h"
#include "RigControlElementCustomization.h"
#include "RigControlLimitEnabled.h"
#include "RigControlValue.h"
#include "RigElementKey.h"
#include "RigControlSettings.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlType ControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlAxis PrimaryAxis;
    
    UPROPERTY(Transient)
    bool bIsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigControlLimitEnabled> LimitEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    UPROPERTY(BlueprintReadWrite)
    FRigControlValue MinimumValue;
    
    UPROPERTY(BlueprintReadWrite)
    FRigControlValue MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShapeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlVisibility ShapeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ShapeColor;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTransientControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnum* ControlEnum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigControlElementCustomization Customization;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRigElementKey> DrivenControls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGroupWithParentControl;
    
    UPROPERTY()
    bool bAnimatable;
    
    UPROPERTY()
    bool bShapeEnabled;
    
    FRigControlSettings();
};

