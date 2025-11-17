#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionBase.h"
#include "PalCoopSkillAssaultrifleModeCandidateLocation.h"
#include "PalAIActionCoopAssaultrifleMode.generated.h"

class APalCharacter;

UCLASS(EditInlineNew)
class PAL_API UPalAIActionCoopAssaultrifleMode : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float SearchEnemyRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float SearchLocationRadiusMax;
    
    UPROPERTY(EditDefaultsOnly)
    float SearchLocationRadiusStep;
    
    UPROPERTY(EditDefaultsOnly)
    float SearchLocationDegStep;
    
private:
    UPROPERTY(VisibleAnywhere)
    float SearchingLocationRadius;
    
    UPROPERTY(VisibleAnywhere)
    APalCharacter* TargetCharacter;
    
    UPROPERTY(VisibleAnywhere)
    APalCharacter* ReticleTarget;
    
    UPROPERTY(VisibleAnywhere)
    FVector AimStartPoint;
    
public:
    UPalAIActionCoopAssaultrifleMode();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAimStartPoint(const FVector& OffsetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SearchForTargetAndShootingLocation();
    
private:
    UFUNCTION()
    void ProgressSeraching(float DeltaTime);
    
    UFUNCTION()
    void Progress_VerifyShootableEnemy();
    
    UFUNCTION()
    void Progress_CollectShootableLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateShootingLocation(APalCharacter* Target, const FVector& ShootLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoadBlocked();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSearching() const;
    
    UFUNCTION(BlueprintPure)
    bool HasReached(const FVector& Goal) const;
    
private:
    UFUNCTION()
    APalCharacter* GetTrainer() const;
    
    UFUNCTION()
    void GetTargetEnemies(TArray<APalCharacter*>& Enemies);
    
public:
    UFUNCTION(BlueprintPure)
    APalCharacter* GetTargetCharacter();
    
private:
    UFUNCTION()
    APalCharacter* GetReticleTarget() const;
    
    UFUNCTION()
    void GetCandidateLocations(float Radius, float DegStep, TArray<FPalCoopSkillAssaultrifleModeCandidateLocation>& Results);
    
    UFUNCTION()
    bool FindLocationToShootEnemy(APalCharacter* Target, FPalCoopSkillAssaultrifleModeCandidateLocation& OutLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTargetCharacter();
    
};

