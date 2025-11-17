#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalOrganizationType.h"
#include "PalInstanceID.h"
#include "PalGroupUtility.generated.h"

class UObject;
class UPalGroupGuildBase;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalGroupUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGroupUtility();

    UFUNCTION(BlueprintPure)
    static bool IsEnemyOrganization(EPalOrganizationType OrganizationType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalOrganizationType GetOrganizationTypeByIndividualId(const UObject* WorldContextObject, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalOrganizationType GetOrganizationTypeByIndividualHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalGroupGuildBase* GetLocalPlayerGuild(const UObject* WorldContextObject);
    
};

