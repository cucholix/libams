/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <stratosphere.hpp>

#define AMS_LM_I_LOG_GETTER_INTERFACE_INFO(C, H)                                                                                                                                         \
    AMS_SF_METHOD_INFO(C, H, 0, Result, StartLogging, (),                                                                                           ())                                  \
    AMS_SF_METHOD_INFO(C, H, 1, Result, StopLogging,  (),                                                                                           ())                                  \
    AMS_SF_METHOD_INFO(C, H, 2, Result, GetLog,       (const sf::OutAutoSelectBuffer &message, sf::Out<s64> out_size, sf::Out<u32> out_drop_count), (message, out_size, out_drop_count))

AMS_SF_DEFINE_INTERFACE(ams::lm, ILogGetter, AMS_LM_I_LOG_GETTER_INTERFACE_INFO)
