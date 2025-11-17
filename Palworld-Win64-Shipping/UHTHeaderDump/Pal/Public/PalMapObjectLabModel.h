#pragma once
#include "CoreMinimal.h"
#include "PalLabResearchMasterData.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectLabModel.generated.h"

class UPalGuildLab;
class UPalMapObjectLabModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS()
class PAL_API UPalMapObjectLabModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectLabModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateCurrentResearchDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentResearchId)
    FName CurrentResearchId;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> UIMenuClass;
    
public:
    UPalMapObjectLabModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestStartResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestCancelResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void OnUpdateCurrentResearchProgress_ServerInternal(UPalGuildLab* OwnerGuildLab);
    
    UFUNCTION()
    void OnUpdateCurrentResearch_ServerInternal(UPalGuildLab* OwnerGuildLab);
    
protected:
    UFUNCTION()
    void OnRep_CurrentResearchId();
    
private:
    UFUNCTION()
    void OnFinishResearchWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnAvailableAfterSpawned_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
public:
    UFUNCTION(BlueprintPure)
    void GetCurrentResearchWorkAmountInfo(float& Current, float& Required, bool& bCompleted) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentResearch(FPalLabResearchMasterData& OutData, int32& RequireRank) const;
    
};

