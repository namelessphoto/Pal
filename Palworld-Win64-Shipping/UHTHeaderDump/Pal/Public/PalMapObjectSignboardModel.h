#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectSignboardModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectSignboardModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSignboardTextDelegate, const FString&, TextValue);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSignboardTextDelegate OnUpdateSignboardTextDelegate;
    
private:
    UPROPERTY(Replicated, Transient)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Text)
    FString SignboardText;
    
    UPROPERTY(Replicated, Transient)
    bool bIsEditing;
    
    UPROPERTY(Replicated, Transient)
    FGuid LastModifiedPlayerUid;
    
public:
    UPalMapObjectSignboardModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestUpdateText(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void RequestEditText(const int32 RequestPlayerId, const bool IsEditing);
    
    UFUNCTION()
    void OnUpdateText(const FString& Text);
    
protected:
    UFUNCTION()
    void OnRep_Text();
    
private:
    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION()
    void OnOpenEdit();
    
    UFUNCTION()
    void OnChangedBlockedUsersByUserId(const FString& UserId);
    
    UFUNCTION()
    void OnChangedBlockedUsers();
    
public:
    UFUNCTION(BlueprintPure)
    FString GetSignboardText();
    
};

