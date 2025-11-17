#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWorkSuitability.h"
#include "PalUIGuildLabPassiveEffectInfo.h"
#include "PalUIGuildLabResearchInfo.h"
#include "PalUIGuildLabModel.generated.h"

UCLASS(Abstract, BlueprintType)
class PAL_API UPalUIGuildLabModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCurrentResearchChangedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentResearchChangedDelegate OnCurrentResearchChanged;
    
    UPalUIGuildLabModel();

    UFUNCTION(BlueprintCallable)
    void RequestStartResearch(const FName ResearchId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelResearch(const FName ResearchId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelCurrentResearch();
    
    UFUNCTION(BlueprintPure)
    void GetTargetWorkSuitabilities(TArray<EPalWorkSuitability>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    void GetResearchInfoByWorkSuitability(const EPalWorkSuitability WorkSuitability, TArray<FPalUIGuildLabResearchInfo>& OutResearchInfo) const;
    
    UFUNCTION(BlueprintPure)
    FPalUIGuildLabResearchInfo GetResearchInfo(const FName ResearchId) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentResearchState(float& OutWorkAmount, float& OutRequiredWorkAmount, bool& bCompleted) const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentProgressingResearchID() const;
    
    UFUNCTION(BlueprintPure)
    void CollectCurrentLabResearchEffectInfo(const EPalWorkSuitability TargetWorkSuitability, TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    void CollectCurrentLabResearchAllEffectInfo(TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const;
    
};

