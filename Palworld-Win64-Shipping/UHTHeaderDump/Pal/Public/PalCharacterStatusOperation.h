#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalCharacterStatusOperationName.h"
#include "PalCharacterStatusOperation.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class PAL_API UPalCharacterStatusOperation : public UObject {
    GENERATED_BODY()
public:
    UPalCharacterStatusOperation();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, int32> GetReturnItemsForResetCharacterStatusAll(const UObject* WorldContextObject, const UPalIndividualCharacterParameter* TargetIndividualParameter);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredRelicCountForLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetCharacterStatusAll(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, const EPalCharacterStatusOperationName StatusName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRequiredItemForStatusUp_OneRank(const UObject* WorldContextObject, int32 CurrentRank, FName& ItemId, int32& ItemCount);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRequiredItemCountForCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterParameter* TargetParameter, const TMap<EPalCharacterStatusOperationName, int32> StatusMap, TMap<FName, int32>& RequiredItems);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentStatusRank(const UPalIndividualCharacterParameter* TargetIndividualParameter, const EPalCharacterStatusOperationName StatusName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentLocalPlayerTotalStatusPoint(const UObject* WorldContextObject, const FName StatusName);
    
};

