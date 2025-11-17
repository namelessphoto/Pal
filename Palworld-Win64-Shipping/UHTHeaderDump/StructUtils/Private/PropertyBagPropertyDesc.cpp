#include "PropertyBagPropertyDesc.h"

FPropertyBagPropertyDesc::FPropertyBagPropertyDesc() {
    this->ValueTypeObject = NULL;
    this->ValueType = EPropertyBagPropertyType::None;
    this->ContainerType = EPropertyBagContainerType::None;
}

