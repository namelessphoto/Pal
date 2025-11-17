#include "PawnActionsComponent.h"

UPawnActionsComponent::UPawnActionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ControlledPawn = NULL;
    this->ActionStacks.AddDefaulted(14);
    this->CurrentAction = NULL;
}

bool UPawnActionsComponent::K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator) {
    return false;
}

bool UPawnActionsComponent::K2_PerformAction(APawn* Pawn, UPawnAction* action, TEnumAsByte<EAIRequestPriority> Priority) {
    return false;
}

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(UPawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(UPawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}


