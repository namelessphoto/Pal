#include "CheckBox.h"

UCheckBox::UCheckBox() {
    this->CheckedState = ECheckBoxState::Unchecked;
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
}

void UCheckBox::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod) {
}

void UCheckBox::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod) {
}

void UCheckBox::SetIsChecked(bool InIsChecked) {
}

void UCheckBox::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod) {
}

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
}

bool UCheckBox::IsPressed() const {
    return false;
}

bool UCheckBox::IsChecked() const {
    return false;
}

ECheckBoxState UCheckBox::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}


