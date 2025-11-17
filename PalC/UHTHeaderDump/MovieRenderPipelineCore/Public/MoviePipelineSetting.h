#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineSetting.generated.h"

class UMoviePipeline;

UCLASS(Abstract, BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineSetting : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UMoviePipeline> CachedPipeline;
    
    UPROPERTY()
    bool bEnabled;
    
public:
    UMoviePipelineSetting();

    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    void BuildNewProcessCommandLineArgs(UPARAM(Ref) TArray<FString>& InOutUnrealURLParams, UPARAM(Ref) TArray<FString>& InOutCommandLineArgs, UPARAM(Ref) TArray<FString>& InOutDeviceProfileCvars, UPARAM(Ref) TArray<FString>& InOutExecCmds) const;
    
    UFUNCTION(BlueprintPure)
    void BuildNewProcessCommandLine(UPARAM(Ref) FString& InOutUnrealURLParams, UPARAM(Ref) FString& InOutCommandLineArgs) const;
    
};

