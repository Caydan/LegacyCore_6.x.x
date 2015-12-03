/*
 * Copyright (C) 2008-2015 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2010 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CHARACTERDATABASECLEANER_H
#define CHARACTERDATABASECLEANER_H

namespace CharacterDatabaseCleaner
{
    enum CleaningFlags
    {
        CLEANING_FLAG_ACHIEVEMENT_PROGRESS  = 0x1,
        CLEANING_FLAG_SKILLS                = 0x2,
        CLEANING_FLAG_SPELLS                = 0x4,
        CLEANING_FLAG_TALENTS               = 0x8,
        CLEANING_FLAG_QUESTSTATUS           = 0x10
    };

    TRINITY_GAME_API void CleanDatabase();

    TRINITY_GAME_API void CheckUnique(const char* column, const char* table, bool (*check)(uint32));

    TRINITY_GAME_API bool AchievementProgressCheck(uint32 criteria);
    TRINITY_GAME_API bool SkillCheck(uint32 skill);
    TRINITY_GAME_API bool SpellCheck(uint32 spell_id);
    TRINITY_GAME_API bool TalentCheck(uint32 talent_id);

    TRINITY_GAME_API void CleanCharacterAchievementProgress();
    TRINITY_GAME_API void CleanCharacterSkills();
    TRINITY_GAME_API void CleanCharacterSpell();
    TRINITY_GAME_API void CleanCharacterTalent();
    TRINITY_GAME_API void CleanCharacterQuestStatus();
}

#endif
