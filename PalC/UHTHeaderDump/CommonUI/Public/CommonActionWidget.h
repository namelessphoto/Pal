#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "CommonActionWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class COMMONUI_API UCommonActionWidget : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputMethodChanged, bool, bUsingGamepad);
    
    UPROPERTY(BlueprintAssignable)
    FOnInputMethodChanged OnInputMethodChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ProgressMaterialParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush IconRimBrush;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> InputActions;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ProgressDynamicMaterial;
    
public:
    UCommonActionWidget();

    UFUNCTION(BlueprintCallable)
    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    
    UFUNCTION(BlueprintCallable)
    void SetInputAction(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    
    UFUNCTION(BlueprintPure)
    bool IsHeldAction() const;
    
    UFUNCTION(BlueprintPure)
    FSlateBrush GetIcon() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayText() const;
    
};

