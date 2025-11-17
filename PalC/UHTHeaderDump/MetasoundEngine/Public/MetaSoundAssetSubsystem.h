#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MetaSoundAssetDirectory.h"
#include "MetaSoundAsyncAssetDependencies.h"
#include "MetaSoundAssetSubsystem.generated.h"

UCLASS(BlueprintType)
class METASOUNDENGINE_API UMetaSoundAssetSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FMetaSoundAsyncAssetDependencies> LoadingDependencies;
    
public:
    UMetaSoundAssetSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    
};

