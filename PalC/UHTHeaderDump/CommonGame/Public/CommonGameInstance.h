#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUser -ObjectName=ECommonUserAvailability -FallbackName=ECommonUserAvailability
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUser -ObjectName=ECommonUserPrivilege -FallbackName=ECommonUserPrivilege
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CommonGameInstance.generated.h"

class UCommonSession_SearchResult;
class UCommonUserInfo;

UCLASS(Abstract, NonTransient)
class COMMONGAME_API UCommonGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UCommonSession_SearchResult* RequestedSession;
    
public:
    UCommonGameInstance();

    UFUNCTION()
    void HandleSystemMessage(FGameplayTag MessageType, FText Title, FText Message);
    
    UFUNCTION()
    void HandlePrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    
};

