// Copyright (C) 2018-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "reduce_ops.hpp"

using Type = ::testing::Types<ngraph::op::v1::ReduceLogicalAnd>;
INSTANTIATE_TYPED_TEST_SUITE_P(attributes_reduce_logical_and, ReduceOpsAttrTest, Type);
