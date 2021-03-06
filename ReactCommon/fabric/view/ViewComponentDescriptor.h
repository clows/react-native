/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fabric/core/ConcreteComponentDescriptor.h>
#include <fabric/view/ViewShadowNode.h>

namespace facebook {
namespace react {

class ViewComponentDescriptor: public ConcreteComponentDescriptor<ViewShadowNode> {
public:
  ComponentName getComponentName() const override {
    return "View";
  }
};

} // namespace react
} // namespace facebook
