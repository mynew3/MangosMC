/**
 * MaNGOS is a full featured server for World of Warcraft, supporting
 * the following clients: 1.12.x, 2.4.3, 3.3.5a, 4.3.4a and 5.4.8
 *
 * Copyright (C) 2005-2017  MaNGOS project <https://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef MANGOS_H_REVISION
#define MANGOS_H_REVISION

    #define REALMD_DB_VERSION_NR 21
    #define REALMD_DB_STRUCTURE_NR 1
    #define REALMD_DB_CONTENT_NR 3
    #define REALMD_DB_UPDATE_DESCRIPTION "Remove field from dbDocs"

 #if defined(CLASSIC)
    #define CHAR_DB_VERSION_NR 21
    #define CHAR_DB_STRUCTURE_NR 5
    #define CHAR_DB_CONTENT_NR 3
    #define CHAR_DB_UPDATE_DESCRIPTION "Remove field from dbDocs"

    #define WORLD_DB_VERSION_NR 21
    #define WORLD_DB_STRUCTURE_NR 14
    #define WORLD_DB_CONTENT_NR 2
    #define WORLD_DB_UPDATE_DESCRIPTION "MC,AQ20,AQ40_Equipment"

    #define REVISION_NR "21014"
 #elif defined(TBC)
    #define CHAR_DB_VERSION_NR 21
    #define CHAR_DB_STRUCTURE_NR 3
    #define CHAR_DB_CONTENT_NR 1
    #define CHAR_DB_UPDATE_DESCRIPTION "characters_pvpstats"

    #define WORLD_DB_VERSION_NR 21
    #define WORLD_DB_STRUCTURE_NR 6
    #define WORLD_DB_CONTENT_NR 1
    #define WORLD_DB_UPDATE_DESCRIPTION "SchoolImmuneMask"

    #define REVISION_NR "21000"
 #endif
#endif // __REVISION_H__
