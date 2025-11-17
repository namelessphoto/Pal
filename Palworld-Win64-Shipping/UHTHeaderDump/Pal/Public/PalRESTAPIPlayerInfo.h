#pragma once
#include "CoreMinimal.h"
#include "PalRESTAPIPlayerInfo.generated.h"

USTRUCT()
struct FPalRESTAPIPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString AccountName;
    
    UPROPERTY()
    FString PlayerId;
    
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString ip;
    
    UPROPERTY()
    float Ping;
    
    UPROPERTY()
    float location_x;
    
    UPROPERTY()
    float location_y;
    
    UPROPERTY()
    int32 Level;
    
    PAL_API FPalRESTAPIPlayerInfo();
};

