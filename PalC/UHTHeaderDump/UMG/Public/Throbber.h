#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Widget.h"
#include "Throbber.generated.h"

UCLASS()
class UMG_API UThrobber : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimateHorizontally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimateVertically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimateOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Image;
    
    UThrobber();

    UFUNCTION(BlueprintCallable)
    void SetNumberOfPieces(int32 InNumberOfPieces);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateVertically(bool bInAnimateVertically);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateOpacity(bool bInAnimateOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
    
};

