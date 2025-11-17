#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBiomeType.h"
#include "EPalCharacterLocationType.h"
#include "EPalInvaderType.h"
#include "PalIncidentBase.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalInstanceID.h"
#include "PalInvaderSpawnCharacterParameter.h"
#include "Templates/SubclassOf.h"
#include "PalInvaderIncidentBase.generated.h"

class APalAIController;
class UDataTable;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;
class UPalSquad;

UCLASS()
class PAL_API UPalInvaderIncidentBase : public UPalIncidentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalInvaderType InvaderType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* InvaderDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> MonsterAIControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> EnemyAIControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFindPaths;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalInvaderSpawnCharacterParameter> InvaderMember;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<APalAIController*> MemberController;
    
    UPROPERTY(BlueprintReadOnly)
    FName ChosenInvaderDataRowName;
    
    UPROPERTY()
    FName VisitorLeaderName;
    
private:
    UPROPERTY(Transient)
    FGuid GroupGuid;
    
    UPROPERTY(VisibleAnywhere)
    bool bCanExecute;
    
    UPROPERTY(Transient)
    UPalSquad* Squad;
    
    UPROPERTY(Transient)
    TMap<FPalInstanceID, FGuid> LocationMap;
    
    UPROPERTY(Transient)
    bool bIsArrived;
    
public:
    UPalInvaderIncidentBase();

private:
    UFUNCTION()
    void StartInvader();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnMemberCharacters(FVector StartLocation);
    
private:
    UFUNCTION()
    bool SelectInvaders(int32 Grade, EPalBiomeType Biome, TArray<FPalInvaderSpawnCharacterParameter>& OutInvaderMember);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartInvade();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvaderArrived();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndInvade();
    
public:
    UFUNCTION()
    bool IsGroupCharacter(UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVisitorNPCReturnTimeMinutes() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetTargetCampModel() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<APalAIController> GetNPCAIControllerClass(const FPalInvaderSpawnCharacterParameter& SpawnParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetInvaderStartPoint(FVector& Result);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetInvadeReturnTimeMinutes() const;
    
    UFUNCTION(BlueprintPure)
    void GetChosenInvaderGroupName(FText& OutText) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCandidateStartLocations(TArray<FVector>& Result);
    
private:
    UFUNCTION()
    void GetBroadcastParameter(FPalIncidentBroadcastParameter& outParameter);
    
    UFUNCTION()
    int32 GetAliveInvaderNum() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndInvadeByTimelimit();
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector CalcSpawnLocation(const FVector& SpawnCenter, const FRotator& Rot, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle, EPalCharacterLocationType LocationType);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCharacterLocation(const FPalInstanceID& IndividualId, EPalCharacterLocationType LocationType);
    
};

