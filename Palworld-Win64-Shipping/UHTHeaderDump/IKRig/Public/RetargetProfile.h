#pragma once
#include "CoreMinimal.h"
#include "RetargetGlobalSettings.h"
#include "TargetChainSettings.h"
#include "TargetRootSettings.h"
#include "RetargetProfile.generated.h"

USTRUCT(BlueprintType)
struct FRetargetProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyTargetRetargetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetRetargetPoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplySourceRetargetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceRetargetPoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyChainSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FTargetChainSettings> ChainSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyRootSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTargetRootSettings RootSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyGlobalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRetargetGlobalSettings GlobalSettings;
    
    IKRIG_API FRetargetProfile();
};

