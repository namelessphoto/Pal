#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalTalkWidgetParameter.generated.h"

class AActor;
class UDataTable;
class UPalIncidentBase;

UCLASS(BlueprintType)
class UPalTalkWidgetParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UDataTable* TalkDataTable;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName startTalkSequence;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* Talker;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalIncidentBase* talkIncident;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsCancel;
    
    UPalTalkWidgetParameter();

};

