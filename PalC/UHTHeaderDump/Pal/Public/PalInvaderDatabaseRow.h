#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBiomeType.h"
#include "PalInvaderDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBiomeType BiomeID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeGradeMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InvadeGradeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharactorID_A;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Otomo_A;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin_A;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax_A;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Number_A;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharactorID_B;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Otomo_B;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin_B;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax_B;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Number_B;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharactorID_C;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Otomo_C;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin_C;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax_C;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Number_C;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharactorID_D;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Otomo_D;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin_D;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax_D;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Number_D;
    
    PAL_API FPalInvaderDatabaseRow();
};

