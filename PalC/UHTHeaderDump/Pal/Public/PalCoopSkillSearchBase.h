#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchResultParameter.h"
#include "PalCoopSkillSearchBase.generated.h"

class UPalCoopSkillSearchLocationRegister;
class UPalLocationBase;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<float> SearchRangeMaxByRank;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ExtendRangePerSecByRank;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsRangeIgnore;
    
private:
    UPROPERTY(VisibleAnywhere)
    FVector SearchOrigin;
    
    UPROPERTY(VisibleAnywhere)
    float SearchRangeMax;
    
    UPROPERTY(VisibleAnywhere)
    float ExtendRangePerSec;
    
    UPROPERTY(VisibleAnywhere)
    float ElapsedTime;
    
    UPROPERTY(VisibleAnywhere)
    int32 SkillRank;
    
    UPROPERTY(VisibleAnywhere)
    FGuid CalledPlayerUId;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsRunning;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPalCoopSkillSearchResultParameter> SearchResultParameters;
    
    UPROPERTY(VisibleAnywhere)
    bool IsNotFinishAfterSearched;
    
public:
    UPalCoopSkillSearchBase();

    UFUNCTION(BlueprintNativeEvent)
    void Tick(float DeltaTime, UPalCoopSkillSearchLocationRegister* LocationRegister);
    
    UFUNCTION()
    void Terminate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveLocationForCompass_BP(const FGuid& LocationId, UPalLocationBase* Location);
    
private:
    UFUNCTION()
    void OnRemoveLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddedLocationForCompass_BP(const FGuid& LocationId, UPalLocationBase* Location);
    
private:
    UFUNCTION()
    void OnAddedLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSearchRangeIgnore() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsContinueProcess() const;
    
    UFUNCTION(BlueprintPure)
    float GetSearchRangeMax() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetSearchRangeByRank(int32 Rank) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRank() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetOrigin() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtendSearchRangePerSec() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetExtendRangePerSecByRank(int32 Rank) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentSearchRadius() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void ClearSearchResultParameters();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSearchResultParameter(const FPalCoopSkillSearchResultParameter& ResultParameter);
    
};

