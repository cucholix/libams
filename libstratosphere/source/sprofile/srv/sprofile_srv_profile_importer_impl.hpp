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
#include "sprofile_srv_i_profile_importer.hpp"

namespace ams::sprofile::srv {

    class ProfileManager;

    class ProfileImporterImpl {
        private:
            ProfileManager *m_manager;
        public:
            ProfileImporterImpl(ProfileManager *manager) : m_manager(manager) { /* ... */ }
        public:
            Result ImportProfile(const sprofile::srv::ProfileDataForImportData &data);
            Result Commit();
            Result ImportMetadata(const sprofile::srv::ProfileMetadataForImportMetadata &data);
    };
    static_assert(IsIProfileImporter<ProfileImporterImpl>);

}
