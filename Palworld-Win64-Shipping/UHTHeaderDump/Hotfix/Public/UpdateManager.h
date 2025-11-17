#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHotfixResult.h"
#include "EUpdateCompletionStatus.h"
#include "EUpdateState.h"
#include "UpdateContextDefinition.h"
#include "UpdateManager.generated.h"

class UEnum;

UCLASS()
class HOTFIX_API UUpdateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float HotfixCheckCompleteDelay;
    
    UPROPERTY(Config)
    float UpdateCheckCompleteDelay;
    
    UPROPERTY(Config)
    float HotfixAvailabilityCheckCompleteDelay;
    
    UPROPERTY(Config)
    float UpdateCheckAvailabilityCompleteDelay;
    
    UPROPERTY(Config)
    int32 AppSuspendedUpdateCheckTimeSeconds;
    
    UPROPERTY()
    bool bPlatformEnvironmentDetected;
    
    UPROPERTY()
    bool bInitialUpdateFinished;
    
    UPROPERTY()
    bool bCheckHotfixAvailabilityOnly;
    
    UPROPERTY()
    EUpdateState CurrentUpdateState;
    
    UPROPERTY()
    int32 WorstNumFilesPendingLoadViewed;
    
    UPROPERTY()
    EHotfixResult LastHotfixResult;
    
    UPROPERTY()
    FDateTime LastUpdateCheck[2];
    
    UPROPERTY()
    EUpdateCompletionStatus LastCompletionResult[2];
    
private:
    UPROPERTY()
    UEnum* UpdateStateEnum;
    
    UPROPERTY()
    UEnum* UpdateCompletionEnum;
    
    UPROPERTY(Config)
    FUpdateContextDefinition UpdateContextDefinitionUnknown;
    
    UPROPERTY(Config)
    TArray<FUpdateContextDefinition> UpdateContextDefinitions;
    
public:
    UUpdateManager();

};

