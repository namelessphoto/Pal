#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LoadingProcessInterface.h"
#include "LoadingProcessTask.generated.h"

class ULoadingProcessTask;

UCLASS(BlueprintType)
class COMMONLOADINGSCREEN_API ULoadingProcessTask : public UObject, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    ULoadingProcessTask();

    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable)
    void SetShowLoadingScreenReason(const FString& InReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadingProcessTask* CreateLoadingScreenProcessTask(UObject* WorldContextObject, const FString& ShowLoadingScreenReason);
    

    // Fix for true pure virtual functions not being implemented
};

