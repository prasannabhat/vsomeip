// Copyright (C) 2014-2017 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VSOMEIP_CFG_WATCHDOG_HPP_
#define VSOMEIP_CFG_WATCHDOG_HPP_

namespace vsomeip {
namespace cfg {

struct watchdog {
    bool is_enabeled_;
    uint32_t timeout_in_ms_;
    uint32_t missing_pongs_allowed_;
};

} // namespace cfg
} // namespace vsomeip

#endif /* VSOMEIP_CFG_WATCHDOG_HPP_ */
