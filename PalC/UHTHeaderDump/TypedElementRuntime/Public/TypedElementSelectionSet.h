#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "ETypedElementSelectionMethod.h"
#include "Templates/SubclassOf.h"
#include "TypedElementIsSelectedOptions.h"
#include "TypedElementSelectionOptions.h"
#include "TypedElementSelectionSetState.h"
#include "TypedElementSelectionSet.generated.h"

class IInterface;
class UInterface;
class UTypedElementSelectionSet;

UCLASS(BlueprintType, Transient)
class TYPEDELEMENTRUNTIME_API UTypedElementSelectionSet : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreChangeDynamic, const UTypedElementSelectionSet*, SelectionSet);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDynamic, const UTypedElementSelectionSet*, SelectionSet);
    
    UPROPERTY(BlueprintAssignable)
    FOnPreChangeDynamic OnPreSelectionChange;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeDynamic OnSelectionChange;
    
    UTypedElementSelectionSet();

    UFUNCTION(BlueprintCallable)
    bool SetSelection(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintCallable)
    bool SelectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintCallable)
    bool SelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintCallable)
    void RestoreSelectionState(const FTypedElementSelectionSetState& InSelectionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(const TSubclassOf<UInterface> InBaseInterfaceType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FTypedElementIsSelectedOptions InSelectionOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasSelectedObjects(const UClass* InRequiredClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasSelectedElements(const TSubclassOf<UInterface> InBaseInterfaceType) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetTopSelectedObject(const UClass* InRequiredClass) const;
    
    UFUNCTION(BlueprintPure)
    FScriptTypedElementHandle GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const ETypedElementSelectionMethod InSelectionMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UObject*> GetSelectedObjects(const UClass* InRequiredClass) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSelectedElements() const;
    
    UFUNCTION(BlueprintPure)
    FTypedElementSelectionSetState GetCurrentSelectionState() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetBottomSelectedObject(const UClass* InRequiredClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool DeselectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 CountSelectedObjects(const UClass* InRequiredClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 CountSelectedElements(const TSubclassOf<UInterface> InBaseInterfaceType) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearSelection(const FTypedElementSelectionOptions InSelectionOptions);
    
    UFUNCTION(BlueprintPure)
    bool CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) const;
    
    UFUNCTION(BlueprintPure)
    bool CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) const;
    
    UFUNCTION(BlueprintPure)
    bool AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle) const;
    
};

